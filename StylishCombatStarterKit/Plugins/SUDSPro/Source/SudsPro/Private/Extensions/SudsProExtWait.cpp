// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "Extensions/SudsProExtWait.h"

#include "SUDSDialogue.h"
#include "SudsProCommon.h"
#include "SudsProSubsystem.h"
#include "SUDSScript.h"

const FName USudsProExtWait::WaitAllEventName("WaitAll");
const FName USudsProExtWait::WaitSecondsEventName("WaitSeconds");
const FName USudsProExtWait::WaitNotifyEventName("WaitNotify");

void USudsProExtWait::DialogueStarting_Implementation(USUDSDialogue* Dialogue)
{
	Super::DialogueStarting_Implementation(Dialogue);

	WaitForNotifyName = NAME_None;
	bIsWaitingForNamedNotify = false;
	NotificationsPending.Empty();
}

bool USudsProExtWait::ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	if (Evt.Name == WaitAllEventName)
	{
		return WaitAllEvent(Dialogue, Evt);	
	}
	else if (Evt.Name == WaitSecondsEventName)
	{
		return WaitSecondsEvent(Dialogue, Evt);	
	}
	else if (Evt.Name == WaitNotifyEventName)
	{
		return WaitNotifyEvent(Dialogue, Evt);	
	}

	return false;
}

bool USudsProExtWait::WaitAllEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	float Time = GetSudsPro(GetWorld())->GetMaxEventTimeRemaining(false);
	if (Time > 0)
	{
		QueueEventCompleted(Time);
		return true;
	}

	return false;
}

bool USudsProExtWait::WaitSecondsEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	if (Evt.Args.Num() > 0)
	{
		if (Evt.Args[0].IsNumeric())
		{
			float Time = Evt.Args[0].GetFloatValue();
			QueueEventCompleted(Time);
			return true;
		}
	}
	UE_LOG(LogSudsPro, Error, TEXT("%s line %d: WaitSeconds must have one numeric argument"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
	return false;
}

bool USudsProExtWait::WaitNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event WaitNotify `OptionalNotificationName`]

	FName WaitName = NAME_None;
	if (Evt.Args.Num() > 0)
	{
		if (Evt.Args[0].GetType() == ESUDSValueType::Name)
		{
			WaitName = Evt.Args[0].GetNameValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: WaitNotify event 1st argument must be type Name (backtick)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
			return false;
		}
	}

	// If we have received this notification already (sequence runs in parallel), don't wait
	if (ConsumePendingNotification(WaitName))
	{
		return false;
	}

	bIsWaitingForNamedNotify = true;
	WaitForNotifyName = WaitName;
	return true;
}

bool USudsProExtWait::ConsumePendingNotification(FName WaitName)
{
	if (auto pCount = NotificationsPending.Find(WaitName))
	{
		if (*pCount > 0)
		{
			--(*pCount);
			return true;
		}
		
	}
	else if (WaitName == NAME_None)
	{
		// Waiting on nothing will consume the first of ANY notification
		for (auto& Pair : NotificationsPending)
		{
			if (Pair.Value > 0)
			{
				--Pair.Value;
				return true;
			}
		}
	}
	return false;
}

void USudsProExtWait::NotifyWaitingDialogue(const UObject* WorldContextObject, const FName NotificationName)
{
	// This is a static method for convenience, so we meed to access our instance
	if (auto Ext = Get(WorldContextObject))
	{
		Ext->NotifyDialogueImpl(NotificationName);
	}
}

USudsProExtWait* USudsProExtWait::Get(const UObject* WorldContextObject)
{
	if (auto SP = GetSudsPro(WorldContextObject->GetWorld()))
	{
		return SP->FindExtension<USudsProExtWait>();
	}
	return nullptr;
}

void USudsProExtWait::NotifyDialogueImpl(FName NotificationName)
{
	if (bIsWaitingForNamedNotify &&
		(WaitForNotifyName == NotificationName || WaitForNotifyName == NAME_None))
	{
		FireEventCompleted();
		bIsWaitingForNamedNotify = false;
		WaitForNotifyName = NAME_None;
	}
	else
	{
		// We're not waiting on this notification yet, but because sequences run in parallel to dialogue
		// we might just be out of order, so queue it up
		if (auto pCount = NotificationsPending.Find(NotificationName))
		{
			++(*pCount);
		}
		else
		{
			NotificationsPending.Add(NotificationName, 1);
		}
	}
}

