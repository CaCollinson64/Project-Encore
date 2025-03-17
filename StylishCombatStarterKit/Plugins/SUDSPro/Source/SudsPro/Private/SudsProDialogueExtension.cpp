// Copyright Old Doorways Ltd 2023
// All rights  reserved

#include "SudsProDialogueExtension.h"
#include "TimerManager.h"
#include "SudsProSubsystem.h"

void USudsProDialogueExtension::DialogueStarting_Implementation(USUDSDialogue* Dialogue)
{
	// Do nothing base class
}

void USudsProDialogueExtension::DialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	// Do nothing base class
}

bool USudsProDialogueExtension::ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Do nothing base class
	return false;
}

bool USudsProDialogueExtension::PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue)
{
	// Do nothing base class
	return false;
}

float USudsProDialogueExtension::GetTimeRemaining_Implementation(bool bForEndDialogue)
{
	return 0;
}

void USudsProDialogueExtension::Tick_Implementation(float DeltaTime)
{
}

void USudsProDialogueExtension::QueueEventCompleted(float Delay)
{
	FTimerHandle TempHandle;
	GetWorld()->GetTimerManager().SetTimer(TempHandle,[this]()
	{
		FireEventCompleted();
	}, Delay, false);
	
}

void USudsProDialogueExtension::FireEventCompleted()
{
	GetSudsPro(GetWorld())->EventCompleted(this);
}
