// Copyright Old Doorways Ltd 2023
// All rights  reserved

#include "SudsProSubsystem.h"
#include "SudsProCommon.h"
#include "SUDSDialogue.h"
#include "SudsProDialogueExtension.h"
#include "SudsProSettings.h"
#include "SudsProUiLink.h"
#include "TimerManager.h"
#include "Extensions/SudsProQueuedEventHandler.h"

void USudsProSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Create the automatic extensions
	// Base settings are in Plugins/SudsPro/Config/BaseSudsPro.ini
	if (auto Settings = GetDefault<USudsProSettings>())
	{
		for (auto& C : Settings->ExtensionClasses)
		{
			const UClass* Class = C.Get();
			const auto Template = Class->GetDefaultObject<USudsProDialogueExtension>();
			if (const auto Ext = NewObject<USudsProDialogueExtension>(this, C.Get(), NAME_None, RF_Transient, Template))
			{
				AddExtension(Ext);
			}
		}

	}
	
}
void USudsProSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void USudsProSubsystem::StartDialogue(USUDSDialogue* Dialogue, FName StartLabel, TSubclassOf<USudsProUiLink> UiClass)
{
	PrepareToRunDialogue(Dialogue, UiClass);
	OnDialogueStarting.Broadcast(Dialogue, StartLabel);
	Dialogue->Restart(false, StartLabel);
}

void USudsProSubsystem::ResumeDialogue(USUDSDialogue* Dialogue, TSubclassOf<USudsProUiLink> UiClass)
{
	PrepareToRunDialogue(Dialogue, UiClass);
	if (Dialogue->IsEnded())
	{
		Dialogue->Restart(false);
	}
	else
	{
		// Need to manually display the current step since it won't be raised as event
		DialogueStep();
	}
}

void USudsProSubsystem::AddExtension(USudsProDialogueExtension* Ext)
{
	Extensions.AddUnique(Ext);
}

void USudsProSubsystem::RemoveExtension(USudsProDialogueExtension* Ext)
{
	Extensions.Remove(Ext);
}
USudsProDialogueExtension* USudsProSubsystem::FindExtension(
	const TSubclassOf<USudsProDialogueExtension> ExtensionClass) const
{
	if (const auto Class = ExtensionClass.Get())
	{
		for (const auto Ext : Extensions)
		{
			if (Ext->IsA(Class))
			{
				return Ext;
			}
		}
	}
	return nullptr;
}

void USudsProSubsystem::OnDialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	if (Dialogue == CurrentDialogue)
	{
		// We need to wait for all the queued up events to finish processing. Might be fading out for example
		// If an actual async event that calls EventCompleted, we'll mop up then
		if (ContinueEvents())
		{
			// Even if there were no deliberately async waiting events, we need everything to have finished
			// So we manually add our own wait here	
			const float Time = GetMaxEventTimeRemaining(true);
			if (Time > 0)
			{
				FTimerHandle TempHandle;
				GetWorld()->GetTimerManager().SetTimer(TempHandle, [this]()
				{
					ShutdownDialogueInstance();
				}, Time, false);
			}
			else
			{
				ShutdownDialogueInstance();
			}
		}
	}

	
}

void USudsProSubsystem::ShutdownDialogueInstance()
{
	if (IsValid(CurrentDialogue))
	{
		if (UiInstance)
		{
			UiInstance->DialogueFinished(CurrentDialogue, bInputGrabbed);
			bInputGrabbed = false;
		}
		for (auto Ext : Extensions)
		{
			Ext->DialogueFinished(CurrentDialogue);
		}
	}
	OnDialogueFinished.Broadcast(CurrentDialogue);
	CurrentDialogue = nullptr;
}

void USudsProSubsystem::PrepareToRunDialogue(USUDSDialogue* Dialogue, TSubclassOf<USudsProUiLink> UiClass)
{
	if (Dialogue!= CurrentDialogue)
	{
		// Ensure we're part of the process
		Dialogue->AddParticipant(this);


		CreateUi(UiClass);

		CurrentDialogue = Dialogue;

		for (auto Ext: Extensions)
		{
			Ext->DialogueStarting(Dialogue);
		}
		if (UiInstance)
		{
			bInputGrabbed = ShouldDialogueTakeOverInput(Dialogue);
			UiInstance->DialogueStarting(Dialogue, bInputGrabbed);
		}
	}
	
}

bool USudsProSubsystem::ShouldDialogueTakeOverInput(USUDSDialogue* Dialogue)
{
	// Default to "blocking" dialogue, where user must now interact with the dialogue rather than 
	// player behaviour remaining the same. However, this can be disabled by setting special variables in
	// the HEADER of the script (must be the header, so applies to the entire script)
	// This boolean defaults to false like all boolean state
	return !Dialogue->GetVariableBoolean("AllowGameInput");
}

void USudsProSubsystem::CreateUi(TSubclassOf<USudsProUiLink> UiClass)
{
	if (!IsValid(UiClass))
	{
		UiClass = GetDefaultUiClass();
	}
	if (UiClass)
	{
		if (!UiInstance || UiInstance->GetClass() != UiClass)
		{
			UiInstance = NewObject<USudsProUiLink>(this, UiClass);
		}
	}
	else
	{
		UE_LOG(LogSudsPro, Warning, TEXT("No valid UiClass provided, there will be no UI for this dialogue"));
		UiInstance = nullptr;
	}
}

void USudsProSubsystem::DialogueStep()
{
	// Perform any queued events; if any are deferred we come back to this
	if (!RunEvents())
		return;

	if (CurrentDialogue->IsEnded())
	{
		// It's possible that we got the dialogue finished notification, but we had events left to finish
		// Therefore, call it again now
		// Must not call it via the interface OnDialogueFinished method directly
		OnDialogueFinished_Implementation(CurrentDialogue);
		return;
	}
	
	// Once events are done, allow extensions to do any final mop-up before speaker line
	// This is to allow extensions to act on the combination of multiple events, or to act on receiving no
	// events at all since the last speaker line (defaults)
	PreSpeakerLineAsyncCount = 0;
	for (auto Ext : Extensions)
	{
		if (Ext->PreDialogueSpeakerLineShown(CurrentDialogue))
		{
			++PreSpeakerLineAsyncCount;
		}
	}

	MaybeShowSpeakerLine();
	
}

TSubclassOf<USudsProUiLink> USudsProSubsystem::GetDefaultUiClass()
{
	if (auto Settings = GetDefault<USudsProSettings>())
	{
		if (IsValid(Settings->DefaultUiClass))
		{
			return Settings->DefaultUiClass;
		}
	}

	// Fall back to our default. We used to load this in SudsProSettings, but this could load the
	// BP too early in the editor process and cause problems with CommonUI
	static TSubclassOf<USudsProUiLink> FallbackClass;
	if (!IsValid(FallbackClass))
	{
		FallbackClass = LoadObject<UClass>(nullptr,
		                                   TEXT(
			                                   "/SudsPro/Blueprints/BP_SudsProUiWidgetLink.BP_SudsProUiWidgetLink_C"));
	}
	return FallbackClass;
}

void USudsProSubsystem::PreSpeakerLineCompleted(USudsProDialogueExtension* Extension)
{
	--PreSpeakerLineAsyncCount;
	MaybeShowSpeakerLine();
}

void USudsProSubsystem::MaybeShowSpeakerLine()
{
	if (PreSpeakerLineAsyncCount <= 0)
	{
		ShowSpeakerLine();
	}
}

void USudsProSubsystem::ShowSpeakerLine()
{
	if (UiInstance)
	{
		UiInstance->ShowSpeakerLine(CurrentDialogue);
	}
	OnSpeakerLineShown.Broadcast(CurrentDialogue);

	// UI will choose a dialogue option, and we'll be notified next time we hit a speaker line
}

void USudsProSubsystem::EventCompleted(USudsProDialogueExtension* Extension)
{
	--EventInProgressAsyncCount;
	MaybeContinueEventsAndMaybeNextDialogueStep();
}

void USudsProSubsystem::CharacterNotifyCompleted(AActor* Character)
{
	// For the moment just do the same as EventCompleted, it's really a proxy for the extension
	--EventInProgressAsyncCount;
	MaybeContinueEventsAndMaybeNextDialogueStep();
}

bool USudsProSubsystem::RunEvents()
{
	EventInProgressIdx = -1;
	return ContinueEvents();
}

float USudsProSubsystem::GetMaxEventTimeRemaining(bool bForEndDialogue)
{
	float Time = 0;
	for (auto Ext : Extensions)
	{
		Time = FMath::Max(Time, Ext->GetTimeRemaining(bForEndDialogue));
	}
	return Time;
}


bool USudsProSubsystem::ContinueEvents()
{
	if (QueuedEvents.IsEmpty())
		return true;
	
	while (QueuedEvents.IsValidIndex(EventInProgressIdx + 1))
	{
		++EventInProgressIdx;
		auto& Evt = QueuedEvents[EventInProgressIdx];
		EventInProgressAsyncCount = 0;

		// Raise queued events for convenience
		for (auto Participant : CurrentDialogue->GetParticipants())
		{
			if (Participant != this &&
				Participant->Implements<USudsProQueuedEventHandler>())
			{
				ISudsProQueuedEventHandler::Execute_OnQueuedDialogueEvent(Participant, CurrentDialogue, Evt.Name, Evt.Args);
			}
		}
		// All extensions get to handle
		for (auto Ext : Extensions)
		{
			if (Ext->ProcessDialogueEvent(CurrentDialogue, Evt))
			{
				++EventInProgressAsyncCount;
			}
		}

		if (EventInProgressAsyncCount > 0)
		{
			// Execute is deferred until all async extensions call EventCompleted
			return false;			
		}

	}
	// If we got to the end, then we executed everything successfully
	EventInProgressIdx = -1;
	QueuedEvents.Empty();
	return true;
}

void USudsProSubsystem::MaybeContinueEventsAndMaybeNextDialogueStep()
{
	if (EventInProgressAsyncCount <= 0)
	{
		if (ContinueEvents())
			DialogueStep();
	}
}

void USudsProSubsystem::OnDialogueEvent_Implementation(USUDSDialogue* Dialogue,
	FName EventName,
	const TArray<FSUDSValue>& Arguments)
{
	// We queue all events for the next speaker line
	// Of course, other classes could be listening in on events and processing them immediately, this is how we do
	QueuedEvents.Add(FSudsProQueuedEvent(EventName, Arguments, Dialogue->GetCurrentSourceLine()));
}

void USudsProSubsystem::OnDialogueVariableChanged_Implementation(USUDSDialogue* Dialogue,
	FName VariableName,
	const FSUDSValue& Value,
	bool bFromScript)
{
	
}

void USudsProSubsystem::OnDialogueSpeakerLine_Implementation(USUDSDialogue* Dialogue)
{
	// We'll display this line, but potentially after queued actions 
	DialogueStep();
}

void USudsProSubsystem::Tick(float DeltaTime)
{
	for (auto Ext : Extensions)
	{
		Ext->Tick(DeltaTime);
	}
}

TStatId USudsProSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(USudsProSubsystem, STATGROUP_Tickables);
}
