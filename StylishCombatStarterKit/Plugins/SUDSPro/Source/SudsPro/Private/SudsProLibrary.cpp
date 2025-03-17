// Copyright Old Doorways Ltd 2023
// All rights  reserved

#include "SudsProLibrary.h"

#include "Engine/Engine.h"
#include "SUDSDialogue.h"
#include "SUDSLibrary.h"
#include "SudsProCommon.h"
#include "SudsProSettings.h"
#include "SudsProSubsystem.h"
#include "Extensions/SudsProCharacter.h"

USUDSDialogue* USudsProLibrary::StartDialogue(UObject* WorldContextObject,
                                              UObject* Owner,
                                              USUDSScript* Script,
                                              FName StartLabel,
                                              FSUDSDialogueState SavedState,
                                              TSubclassOf<USudsProUiLink> UiClass)
{
	auto SP = GetSudsPro(GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull));
	if (!SP)
	{
		UE_LOG(LogSudsPro, Error, TEXT("Unable to start dialogue, world context is not available on %s"), IsValid(WorldContextObject) ? *WorldContextObject->GetName() : TEXT("null"));
		return nullptr;
	}
	auto D = USUDSLibrary::CreateDialogue(Owner, Script, false);
	D->RestoreSavedState(SavedState);
	SP->StartDialogue(D, StartLabel, UiClass);

	return D;
	
	
	 
}

USUDSDialogue* USudsProLibrary::StartDialogueWithParticipants(UObject* WorldContextObject,
                                                              UObject* Owner,
                                                              USUDSScript* Script,
                                                              const TArray<UObject*>& Participants,
                                                              FName StartLabel,
                                                              FSUDSDialogueState SavedState,
                                                              TSubclassOf<USudsProUiLink> UiClass)
{
	auto SP = GetSudsPro(GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull));
	if (!SP)
	{
		UE_LOG(LogSudsPro, Error, TEXT("Unable to start dialogue, world context is not available on %s"), IsValid(WorldContextObject) ? *WorldContextObject->GetName() : TEXT("null"));
		return nullptr;
	}
	auto D = USUDSLibrary::CreateDialogueWithParticipants(Owner, Script, Participants, false);
	D->RestoreSavedState(SavedState);
	SP->StartDialogue(D, StartLabel, UiClass);
	return D;
}

USUDSDialogue* USudsProLibrary::StartDialogueWithParticipant(UObject* WorldContextObject,
                                                             UObject* Owner,
                                                             USUDSScript* Script,
                                                             UObject* Participant,
                                                             FName StartLabel,
                                                             FSUDSDialogueState SavedState,
                                                             TSubclassOf<USudsProUiLink> UiClass)
{
	auto SP = GetSudsPro(GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull));
	if (!SP)
	{
		UE_LOG(LogSudsPro, Error, TEXT("Unable to start dialogue, world context is not available on %s"), IsValid(WorldContextObject) ? *WorldContextObject->GetName() : TEXT("null"));
		return nullptr;
	}
	auto D = USUDSLibrary::CreateDialogueWithParticipant(Owner, Script, Participant, false);
	D->RestoreSavedState(SavedState);
	SP->StartDialogue(D, StartLabel, UiClass);
	return D;
}

TSubclassOf<UUserWidget> USudsProLibrary::GetDialogueWidgetClass()
{
	if (auto Settings = GetDefault<USudsProSettings>())
	{
		return Settings->WidgetClass.LoadSynchronous();
	}
	return nullptr;
}

AActor* USudsProLibrary::FindDialogueCharacter(const USUDSDialogue* Dialogue, FName CharacterIdentifier)
{
	if (IsValid(Dialogue))
	{
		for (auto P : Dialogue->GetParticipants())
		{
			if (IsValid(P) && P->Implements<USudsProCharacter>())
			{
				if (ISudsProCharacter::Execute_GetDialogueCharacterIdentifier(P) == CharacterIdentifier)
				{
					if (AActor* RetActor = Cast<AActor>(P))
					{
						return RetActor;
					}
				}
			}
		}
	}
	return nullptr;
}
