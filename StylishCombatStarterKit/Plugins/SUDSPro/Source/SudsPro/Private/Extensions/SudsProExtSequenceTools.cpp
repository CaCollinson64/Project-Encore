// Copyright Old Doorways Ltd 2023
// All rights  reserved

#include "Extensions/SudsProExtSequenceTools.h"

#include "DefaultLevelSequenceInstanceData.h"
#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "SUDSDialogue.h"
#include "SudsProCommon.h"
#include "SudsProSubsystem.h"
#include "SUDSScript.h"
#include "Extensions/SudsProExtCameraTools.h"
#include "Extensions/SudsProSequenceProvider.h"
#include "TimerManager.h"


const FName USudsProExtSequenceTools::SequenceStartEventName("SequenceStart");
const FName USudsProExtSequenceTools::SequenceResumeEventName("SequenceResume");
const FName USudsProExtSequenceTools::WaitSequenceEndEventName("WaitSequenceEnd");
const FName USudsProExtSequenceTools::WaitSequenceNotifyEventName("WaitSequenceNotify");

bool USudsProExtSequenceTools::ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
                                                                   const FSudsProQueuedEvent& Evt)
{
	if (Evt.Name == SequenceStartEventName)
	{
		return SequenceStartEvent(Dialogue, Evt);	
	}
	else if (Evt.Name == SequenceResumeEventName)
	{
		return SequenceResumeEvent(Dialogue, Evt);
	}
	else if (Evt.Name == WaitSequenceEndEventName)
	{
		return WaitSequenceEndEvent(Dialogue, Evt);
	}
	else if (Evt.Name == WaitSequenceNotifyEventName)
	{
		return WaitSequenceNotifyEvent(Dialogue, Evt);
	}
	else if (Evt.Name == USudsProExtCameraTools::CameraTransitionEventName)
	{
		return CameraTransitionEvent(Dialogue, Evt);
	}

	return false;
}

void USudsProExtSequenceTools::DialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	ScheduleSequenceActorDestroy();
}

bool USudsProExtSequenceTools::PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue)
{
	// Don't schedule for destroy if there's mid-sequence speaker lines
	if (bIsSequenceEnded)
	{
		ScheduleSequenceActorDestroy();
	}
	return false;
}

void USudsProExtSequenceTools::ScheduleSequenceActorDestroy()
{
	bDestroyActorScheduled = true;

	CheckSequenceActorDestroy();
	
}

void USudsProExtSequenceTools::Tick_Implementation(float DeltaTime)
{
	Super::Tick_Implementation(DeltaTime);

	if (CameraTransitionTimeLeft > 0)
	{
		CameraTransitionTimeLeft -= DeltaTime;
		if (CameraTransitionTimeLeft <= 0)
		{
			CameraTransitionTimeLeft = 0;
			CheckSequenceActorDestroy();
		}
	}
}

void USudsProExtSequenceTools::CheckSequenceActorDestroy()
{
	// We want to stop & destroy the sequence actor as early as we can when it's finished. However,
	// if we're transitioning smoothly from the sequence camera to another camera, we cannot destroy the sequence
	// until that transition has occured. In theory you could use the "Lock Outgoing" parameter of SetViewTargetWithBlend,
	// but that doesn't work with sequence cameras. So we use the "Pause at end" and delayed destruction to make this work.
	if (bDestroyActorScheduled && IsValid(SequenceActor) && bIsSequenceEnded && CameraTransitionTimeLeft <= 0)
	{
		SequenceActor->Destroy();
		SequenceActor = nullptr;
		bDestroyActorScheduled = false;		
	}

}

bool USudsProExtSequenceTools::SequenceStartEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event SequenceStart `SequenceName`, OptionalHidePlayer=false, OptionalSuppressDefaultCuts=true]
	if (Evt.Args.Num() == 0 || Evt.Args[0].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: SequenceStart event requires 1 argument of type Name (backtick quotes)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	const FName SequenceName = Evt.Args[0].GetNameValue();
	bool bHidePlayer = false;
	// Suppress default camera cuts while sequencer is running by default so as not to override its camera cut track
	bool bSuppressDefaultCuts = true;
	if (Evt.Args.Num() > 1)
	{
		if (Evt.Args[1].GetType() == ESUDSValueType::Boolean)
		{
			bHidePlayer = Evt.Args[1].GetBooleanValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: SequenceStart 2nd argument (hide player) must be a boolean - ignoring."), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}
	if (Evt.Args.Num() > 2)
	{
		if (Evt.Args[2].GetType() == ESUDSValueType::Boolean)
		{
			bSuppressDefaultCuts = Evt.Args[1].GetBooleanValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: SequenceStart 3rd argument (suppress default camera cuts) must be a boolean - ignoring."), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}

	bool bHasTransformOverride = false;
	FTransform OverrideTransform;
	AActor* OverrideTransformActor = nullptr;
	if (auto Seq = FindSequence(Dialogue, SequenceName, bHasTransformOverride, OverrideTransformActor, OverrideTransform))
	{
		CreateSequencePlayer(Seq, bHidePlayer);
		if (IsValid(SequenceActor))
		{
			if (bHasTransformOverride)
			{
				if (auto DefSeqActor = Cast<UDefaultLevelSequenceInstanceData>(SequenceActor->DefaultInstanceData))
				{
					SequenceActor->bOverrideInstanceData = true;
					if (OverrideTransformActor)
					{
						DefSeqActor->TransformOriginActor = OverrideTransformActor;
					}
					else
					{
						DefSeqActor->TransformOrigin = OverrideTransform;
					}
				}
			}
			bIsSequenceEnded = false;
			bDestroyActorScheduled = false;
			CameraTransitionTimeLeft = 0;
			bIsWaitingForEnd = false;
			WaitForNotifyName = NAME_None;
			bIsWaitingForNamedNotify = false;
			NotificationsPending.Empty();
			QueuedResumeCount = 0;
			SequenceActor->GetSequencePlayer()->OnFinished.AddUniqueDynamic(this, &USudsProExtSequenceTools::OnSequenceFinished);
			SequenceActor->GetSequencePlayer()->Play();
			bIsSequencePaused = false;
			SuppressDefaultCameraCuts(bSuppressDefaultCuts);
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: SequenceStart unable to create sequencer from `%s`, unknown error."), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *SequenceName.ToString());
		}
	}
	else
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: SequenceStart unable to locate sequence named `%s`"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *SequenceName.ToString());
	}
	
	return false;
}

ULevelSequence* USudsProExtSequenceTools::FindSequence(const USUDSDialogue* Dialogue,
                                                       FName SequenceName,
                                                       bool& OutHasTransform,
                                                       AActor*& OverrideTransformActor,
                                                       FTransform& OutTransform)
{
	for (auto P : Dialogue->GetParticipants())
	{
		if (IsValid(P) && P->Implements<USudsProSequenceProvider>())
		{
			if (const auto Sequence = ISudsProSequenceProvider::Execute_GetDialogueLevelSequence(P, SequenceName))
			{
				// Try to retrieve any transform origin, prefer actor
				OverrideTransformActor = ISudsProSequenceProvider::Execute_GetDialogueLevelSequenceTransformOriginActor(P, SequenceName);
				OutHasTransform = OverrideTransformActor != nullptr;
				if (!OutHasTransform)
				{
					OutHasTransform = ISudsProSequenceProvider::Execute_GetDialogueLevelSequenceTransformOrigin(P, SequenceName, OutTransform);
				}
				return Sequence;
			}
		}
	}
	return nullptr;
}

void USudsProExtSequenceTools::CreateSequencePlayer(ULevelSequence* Sequence, bool bHidePlayer)
{
	DestroySequenceTimer.Invalidate();
	if (IsValid(SequenceActor))
	{
		SequenceActor->GetSequencePlayer()->Stop();
		// We'll re-use the existing actor if the sequence is the same, otherwise destroy
		if (SequenceActor->GetSequencePlayer()->GetSequence() != Sequence)
		{
			UE_LOG(LogSudsPro, Warning, TEXT("HERE2"));
			SequenceActor->Destroy();
			SequenceActor = nullptr;
		}
	}

	if (!IsValid(SequenceActor))
	{
		FMovieSceneSequencePlaybackSettings Settings;
		Settings.bDisableMovementInput = true;
		Settings.bDisableLookAtInput = true;
		Settings.bHidePlayer = bHidePlayer;
		// Note: we always pause at end, because it's the only way to make sure we "stick" to the end and can seamlessly
		// transition out to another camera cut if we want. Even "Keep State" doesn't properly cover this because of the
		// way camera restoration works in sequence players
		Settings.bPauseAtEnd = true;
		ULevelSequencePlayer::CreateLevelSequencePlayer(this, Sequence, Settings, SequenceActor);
	}
}

void USudsProExtSequenceTools::CancelSequenceImpl()
{
	if (IsValid(SequenceActor))
	{
		// Moving the playback position to the end with the default Play option will trigger the OnFinished
		auto Player = SequenceActor->GetSequencePlayer();
		FMovieSceneSequencePlaybackParams P;
		P.Frame = Player->GetEndTime().Time;
		Player->SetPlaybackPosition(P);
	}
	
}

void USudsProExtSequenceTools::PauseSequenceImpl()
{
	// Pause sequence request comes from blueprints (often the sequence itself)
	// It may be out of order with the resume event in dialogue script
	if (QueuedResumeCount > 0)
	{
		// Ignore the pause, request to resume has already occurred
		--QueuedResumeCount;
	}
	else
	{
		if (IsValid(SequenceActor))
		{
			SequenceActor->GetSequencePlayer()->Pause();
			bIsSequencePaused = true;
		}
	}
	
}

void USudsProExtSequenceTools::OnSequenceFinished()
{
	SuppressDefaultCameraCuts(false);
	bIsSequenceEnded = true;

	if (bIsWaitingForEnd)
	{
		// Need to wait for a tick, because sequence end may try to restore camera and override the next cut
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			FireEventCompleted();
		});
		bIsWaitingForEnd = false;
	}

	// Note that we don't schedule the sequence actor's destruction here, because there may be camera transitions
	// which won't occur until after the completion. But in case  it's already been scheduled and this end happens
	// afterwards, check it here
	CheckSequenceActorDestroy();
}

void USudsProExtSequenceTools::SuppressDefaultCameraCuts(bool bSuppress)
{
	// Can't avoid some cross-dependency here
	if (auto SP = GetSudsPro(GetWorld()))
	{
		if (auto CamExt = SP->FindExtension<USudsProExtCameraTools>())
		{
			CamExt->SetSuppressDefaultCameraCuts(bSuppress);
		}
	}
}

bool USudsProExtSequenceTools::SequenceResumeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// No args
	if (IsValid(SequenceActor) && bIsSequencePaused)
	{
		// resume immediately
		SequenceActor->GetSequencePlayer()->Play();
		bIsSequencePaused = false;
	}
	else
	{
		// We can receive resume out of order because pause comes from sequence, so there's a race
		// Queue it up
		QueuedResumeCount++;
	}
	return false;
}

bool USudsProExtSequenceTools::WaitSequenceEndEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Only wait if we're actually running a sequence that hasn't ended (race condition)
	if (IsValid(SequenceActor))
	{
		if (!bIsSequenceEnded)
		{
			bIsWaitingForEnd = true;
			return true;			
		}
	}
	return false;
}

bool USudsProExtSequenceTools::ConsumePendingNotification(FName WaitName)
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

bool USudsProExtSequenceTools::WaitSequenceNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event WaitSequenceNotify `OptionalNotificationName`]

	FName WaitName = NAME_None;
	if (Evt.Args.Num() > 0)
	{
		if (Evt.Args[0].GetType() == ESUDSValueType::Name)
		{
			WaitName = Evt.Args[0].GetNameValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: WaitSequenceNotify event 1st argument must be type Name (backtick)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
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

bool USudsProExtSequenceTools::CameraTransitionEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// We only observe the camera transition event in order to know whether we need to delay the destruction of
	// the sequence until after that transition has finished
	if (IsValid(SequenceActor))
	{
		CameraTransitionTimeLeft = USudsProExtCameraTools::DefaultTransitionSmoothTime;
		if (Evt.Args.Num() > 1 && Evt.Args[1].IsNumeric())
		{
			CameraTransitionTimeLeft = Evt.Args[1].GetFloatValue();
		}
	}

	return false;
}

void USudsProExtSequenceTools::NotifyFromSequenceImpl(const FName NotificationName)
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

bool USudsProExtSequenceTools::IsSequenceActiveImpl()
{
	if (IsValid(SequenceActor))
	{
		auto Player = SequenceActor->GetSequencePlayer();
		return Player->IsPlaying() || 
			(Player->IsPaused() && Player->GetCurrentTime().Time.FrameNumber.Value + 1 != Player->GetEndTime().Time.FrameNumber.Value);
	}
	return false;
}

USudsProExtSequenceTools* USudsProExtSequenceTools::Get(const UObject* WorldContextObject)
{
	if (auto SP = GetSudsPro(WorldContextObject->GetWorld()))
	{
		return SP->FindExtension<USudsProExtSequenceTools>();
	}
	return nullptr;
}

void USudsProExtSequenceTools::NotifyFromSequence(const UObject* WorldContextObject, const FName NotificationName)
{
	// This is a static method for convenience, so we meed to access our instance
	if (auto Ext = Get(WorldContextObject))
	{
		Ext->NotifyFromSequenceImpl(NotificationName);
	}
}

void USudsProExtSequenceTools::CancelSequence(const UObject* WorldContextObject)
{
	// This is a static method for convenience, so we meed to access our instance
	if (auto Ext = Get(WorldContextObject))
	{
		Ext->CancelSequenceImpl();
	}
}

bool USudsProExtSequenceTools::IsSequenceActive(const UObject* WorldContextObject)
{
	// This is a static method for convenience, so we meed to access our instance
	if (auto Ext = Get(WorldContextObject))
	{
		return Ext->IsSequenceActiveImpl();
	}

	return false;
}

void USudsProExtSequenceTools::PauseSequence(const UObject* WorldContextObject)
{
	if (auto Ext = Get(WorldContextObject))
	{
		Ext->PauseSequenceImpl();
	}
}
