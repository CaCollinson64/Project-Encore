
#include "SudsProRunner.h"
#include "SUDSScript.h"

#include "SudsProCommon.h"
#include "SudsProLibrary.h"
#include "Engine/AssetManager.h"
#include "GameFramework/Character.h"


ASudsProRunner::ASudsProRunner()
{
	// Just incase a subclass needs it
	PrimaryActorTick.bCanEverTick = true;
}

void ASudsProRunner::LoadScriptAsync_Implementation()
{
	if (!IsValid(LoadedScriptAsset) && !Script.IsNull() && !bAsyncLoadQueued)
	{
		// To avoid prepeat requests
		bAsyncLoadQueued = true;
		FSoftObjectPath SoftPath = Script.ToSoftObjectPath();
		UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
			SoftPath,
			FStreamableDelegate::CreateUObject(this, &ASudsProRunner::OnScriptAsyncLoaded, SoftPath),
			FStreamableManager::DefaultAsyncLoadPriority,
			false,
			false,
			TEXT("ASudsProRunner::LoadScriptAsync"));
		
	}
	
}

void ASudsProRunner::OnScriptAsyncLoaded(FSoftObjectPath LoadedObject)
{
	bAsyncLoadQueued = false;
	LoadedScriptAsset = Cast<USUDSScript>(LoadedObject.ResolveObject());
	if (!LoadedScriptAsset)
	{
		UE_LOG(LogSudsPro, Error, TEXT("Async load of %s failed"), *LoadedObject.ToString());
	}
}

void ASudsProRunner::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogSudsPro, Warning, TEXT("Script: %s, %s"), *Script.ToString(), *Script.ToSoftObjectPath().ToString())
}

void ASudsProRunner::UnloadScript_Implementation()
{
	// Rely on GC
	LoadedScriptAsset = nullptr;
}

USUDSDialogue* ASudsProRunner::StartDialogue_Implementation(ACharacter* PlayerCharacter)
{
	if (IsValid(CurrentDialogue))
	{
		UE_LOG(LogSudsPro, Error, TEXT("Attempted to start dialogue twice! Ignoring"));
		return nullptr;
	}

	if (Script.IsNull())
	{
		UE_LOG(LogSudsPro, Error, TEXT("Cannot start dialogue with a null script"));
		return nullptr;
	}

	if (!IsValid(LoadedScriptAsset))
	{
		UE_LOG(LogSudsPro, Log, TEXT("ASudsProRunner: Loading SUDS Script synchronously, consider calling LoadScriptAsync"));
		LoadedScriptAsset = Script.LoadSynchronous();
		bAsyncLoadQueued = false;
	}

	if (IsValid(LoadedScriptAsset))
	{
		TArray<UObject*> Participants;
		
		// Always add self
		Participants.Add(this);
		
		if (IsValid(PlayerCharacter))
		{
			Participants.Add(PlayerCharacter);
		}

		Participants.Append(NPCs);

		CurrentDialogue = USudsProLibrary::StartDialogueWithParticipants(this,
			this,
			LoadedScriptAsset,
			Participants,
			StartFrom,
			DialogueState,
			nullptr);
		return CurrentDialogue;
	}

	return nullptr;
}

const FSUDSDialogueState& ASudsProRunner::SnapshotDialogueState()
{
	if (IsValid(CurrentDialogue))
	{
		// Save state at end
		DialogueState = CurrentDialogue->GetSavedState();
	}

	return DialogueState;
	
}

int ASudsProRunner::GetDialogueParticipantPriority_Implementation() const
{
	return 0;
}

void ASudsProRunner::OnDialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	if (Dialogue == CurrentDialogue)
	{
		SnapshotDialogueState();
		CurrentDialogue = nullptr;
	}
}

AActor* ASudsProRunner::GetDialogueCameraShot_Implementation(FName ShotName)
{
	if (auto pShot = CameraShots.Find(ShotName))
	{
		return *pShot;
	}

	return nullptr;
}

bool ASudsProRunner::GetDialogueMark_Implementation(FName Name,
	FVector& OutLocation,
	FRotator& OutRotator)
{
	if (auto pMark = Marks.Find(Name))
	{
		OutLocation = (*pMark)->GetActorLocation();
		OutRotator = (*pMark)->GetActorRotation();
		return true;
	}

	return false;
}

ULevelSequence* ASudsProRunner::GetDialogueLevelSequence_Implementation(FName Name)
{
	if (auto pSeq = Sequences.Find(Name))
	{
		return *pSeq;
	}

	return nullptr;
}

AActor* ASudsProRunner::GetDialogueLevelSequenceTransformOriginActor_Implementation(FName Name)
{
	if (auto pActor = SequenceTransformOriginActors.Find(Name))
	{
		return *pActor;
	}

	return nullptr;
}

bool ASudsProRunner::GetDialogueLevelSequenceTransformOrigin_Implementation(FName Name,
	FTransform& OutTransform)
{
	if (auto pTransform = SequenceTransformOrigins.Find(Name))
	{
		OutTransform = *pTransform;
		return true;
	}

	return false;
}
