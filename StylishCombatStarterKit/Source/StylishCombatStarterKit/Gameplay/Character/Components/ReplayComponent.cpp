#include "ReplayComponent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

UReplayComponent::UReplayComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    bIsReplaying = false;
    CurrentSegmentIndex = -1;
    SegmentTimer = 0.0f;
}

void UReplayComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UReplayComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (bIsReplaying && TransformHistory.Num() >= 2)
    {
        // Check if we've replayed all segments
        if (CurrentSegmentIndex <= 0)
        {
            bIsReplaying = false;
            EnableInput(true);
            return;
        }

        // Increment timer and calculate interpolation factor (Alpha)
        SegmentTimer += DeltaTime;
        float Alpha = FMath::Clamp(SegmentTimer / SegmentDuration, 0.0f, 1.0f);

        // Get the current (start) and previous (target) transforms
        const FTransform& StartTransform = TransformHistory[CurrentSegmentIndex];
        const FTransform& EndTransform = TransformHistory[CurrentSegmentIndex - 1];

        // Interpolate location, rotation, and scale separately
        FVector NewLocation = FMath::Lerp(StartTransform.GetLocation(), EndTransform.GetLocation(), Alpha);
        FQuat NewRotation = FQuat::Slerp(StartTransform.GetRotation(), EndTransform.GetRotation(), Alpha);
        FVector NewScale = FMath::Lerp(StartTransform.GetScale3D(), EndTransform.GetScale3D(), Alpha);

        // Construct the new transform from interpolated values
        FTransform NewTransform;
        NewTransform.SetLocation(NewLocation);
        NewTransform.SetRotation(NewRotation);
        NewTransform.SetScale3D(NewScale);

        // Apply the new transform to the owner actor
        if (AActor* OwnerActor = GetOwner())
        {
            OwnerActor->SetActorTransform(NewTransform);
        }

        // Once the segment is complete, move to the previous segment
        if (Alpha >= 1.0f)
        {
            SegmentTimer = 0.0f;
            CurrentSegmentIndex--;
        }
    }
}

void UReplayComponent::StartRecording()
{
    // Clear any previous history if needed
    TransformHistory.Empty();

    // Start timer to record transform every 0.1 seconds
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(RecordingTimerHandle, this, &UReplayComponent::RecordTransform, 0.1f, true);
    }
}

void UReplayComponent::StopRecording()
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(RecordingTimerHandle);
    }
}

void UReplayComponent::RecordTransform()
{
    if (AActor* OwnerActor = GetOwner())
    {
        // Record the owner's current transform
        TransformHistory.Add(OwnerActor->GetActorTransform());
    }
}

void UReplayComponent::StartReplay()
{
    // Ensure there are enough transforms to perform a replay
    if (TransformHistory.Num() < 2)
    {
        UE_LOG(LogTemp, Warning, TEXT("Not enough transforms to replay"));
        return;
    }

    EnableInput(false);
    // Set up replay starting from the last recorded transform
    CurrentSegmentIndex = TransformHistory.Num() - 1;
    SegmentTimer = 0.0f;
    bIsReplaying = true;
}
