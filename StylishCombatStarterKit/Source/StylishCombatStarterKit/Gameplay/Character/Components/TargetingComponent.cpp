#include "TargetingComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"

UTargetingComponent::UTargetingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTargetingComponent::BeginPlay()
{
    Super::BeginPlay();

    Camera = Cast<UCameraComponent>(Owner->GetComponentByClass(UCameraComponent::StaticClass()));
}

void UTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    auto targets = FindTargets();
    if (targets.Num() > 0 && targets[0])
    {
        CurrentTarget = targets[0];
    }
    else
    {
        CurrentTarget = nullptr;
    }
    
    for (auto target : FindTargets())
    {
        DrawDebugSphere(GetWorld(), target->GetActorLocation(),
            70, 32, FColor::Red, false,
            DeltaTime, 0, 15.0f);
    }
}

TArray<AActor*> UTargetingComponent::FindTargets()
{
    TArray<AActor*> ValidTargets;
    if (!Owner)
    {
        return ValidTargets;
    }

    // Owner information
    FVector OwnerLocation = Owner->GetActorLocation();
    FVector OwnerForward = Owner->GetActorForwardVector();

    // Override with camera if exsists
    if (Camera != nullptr)
    {
        OwnerLocation = Camera->GetComponentLocation();
        OwnerForward = Camera->GetForwardVector();
    }
    
    // Use a set to avoid duplicate actors
    TSet<AActor*> FoundActorsSet;

    // Loop through each soft class and get actors of that type
    for (TSoftClassPtr<AActor>& SoftClass : TargetableClasses)
    {
        UClass* TargetClass = SoftClass.Get();
        if (!TargetClass)
        {
            // If the class isn't loaded, load it synchronously
            TargetClass = SoftClass.LoadSynchronous();
        }
        if (!TargetClass)
        {
            continue;
        }

        TArray<AActor*> ActorsOfClass;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), TargetClass, ActorsOfClass);
        for (AActor* Actor : ActorsOfClass)
        {
            if (Actor && Actor != Owner)
            {
                FoundActorsSet.Add(Actor);
            }
        }
    }

    // Process the aggregated actors and filter based on distance and field-of-view.
    for (AActor* Actor : FoundActorsSet.Array())
    {
        float Distance = FVector::Dist(OwnerLocation, Actor->GetActorLocation());
        if (Distance > TargetingRange)
        {
            continue;
        }

        FVector DirectionToActor = (Actor->GetActorLocation() - OwnerLocation).GetSafeNormal();
        float DotProduct = FVector::DotProduct(OwnerForward, DirectionToActor);
        float AngleDegrees = FMath::RadiansToDegrees(FMath::Acos(DotProduct));
        if (AngleDegrees > FieldOfView)
        {
            continue;
        }

        ValidTargets.Add(Actor);

        // Stop early if we only need a single target.
        if (TargetSelectionMethod == ETargetSelectionMethod::SingleTarget)
        {
            break;
        }
    }

    // For MultiTarget mode, sort by distance and limit to MaxTargets.
    if (TargetSelectionMethod == ETargetSelectionMethod::MultiTarget && ValidTargets.Num() > MaxTargets)
    {
        ValidTargets.Sort([OwnerLocation](const AActor& A, const AActor& B) {
            return FVector::DistSquared(OwnerLocation, A.GetActorLocation()) < FVector::DistSquared(OwnerLocation, B.GetActorLocation());
        });
        ValidTargets.SetNum(MaxTargets);
    }

    return ValidTargets;
}
