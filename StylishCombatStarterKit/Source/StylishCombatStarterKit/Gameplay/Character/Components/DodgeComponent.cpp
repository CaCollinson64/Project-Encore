#include "DodgeComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"

UDodgeComponent::UDodgeComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDodgeComponent::Dodge(const FVector& DodgeDirection)
{
	// (Optional) Check cooldowns, stamina, etc. here.
	PerformDodge(DodgeDirection);
}

void UDodgeComponent::PerformDodge(const FVector& InDirection)
{
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter) return;

	UCharacterMovementComponent* MoveComp = OwnerCharacter->GetCharacterMovement();
	if (!MoveComp) return;

	// Store original friction so we can restore it later
	OriginalBrakingFrictionFactor = MoveComp->BrakingFrictionFactor;
	OriginalGroundFriction = MoveComp->GroundFriction;

	// Lower friction so the character can "slide" or dash more freely
	MoveComp->BrakingFrictionFactor = 0.0f;
	MoveComp->GroundFriction = 0.0f;

	// Launch the character in the desired direction. 
	// bOverrideXY = true so we override the existing horizontal velocity
	// bOverrideZ = false so we don't kill vertical velocity if jumping/falling.
	OwnerCharacter->LaunchCharacter(InDirection * DodgeStrength, /*bOverrideXY=*/true, /*bOverrideZ=*/false);

	// After DodgeDuration, restore friction and possibly re-enable any locked movement if you want.
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle, 
		this, 
		&UDodgeComponent::EndDodge, 
		DodgeDuration,
		false
	);
}

void UDodgeComponent::EndDodge()
{
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter) return;

	UCharacterMovementComponent* MoveComp = OwnerCharacter->GetCharacterMovement();
	if (!MoveComp) return;

	// Restore normal friction values so walking feels normal again
	MoveComp->BrakingFrictionFactor = OriginalBrakingFrictionFactor;
	MoveComp->GroundFriction = OriginalGroundFriction;
}
