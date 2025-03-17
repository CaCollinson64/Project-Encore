// Copyright Old Doorways Ltd 2023
// All rights  reserved

#include "SudsProUiLink.h"

void USudsProUiLink::DialogueStarting_Implementation(USUDSDialogue* Dialogue, bool bShouldTakeOverInput)
{
}

void USudsProUiLink::DialogueFinished_Implementation(USUDSDialogue* Dialogue, bool bShouldRestoreInput)
{
}

void USudsProUiLink::ShowSpeakerLine_Implementation(USUDSDialogue* Dialogue)
{
}

UWorld* USudsProUiLink::GetWorld() const
{
	// CDO objects do not belong to a world
	// If the actors outer is destroyed or unreachable we are shutting down and the world should be nullptr
	if (!HasAnyFlags(RF_ClassDefaultObject) && ensureMsgf(GetOuter(), TEXT("USudsProUi: %s has a null OuterPrivate in AActor::GetWorld()"), *GetFullName())
		&& !GetOuter()->HasAnyFlags(RF_BeginDestroyed) && !GetOuter()->IsUnreachable())
	{
		// Outer should be subsystem
		return GetOuter()->GetWorld();
	}
	return nullptr;
}
