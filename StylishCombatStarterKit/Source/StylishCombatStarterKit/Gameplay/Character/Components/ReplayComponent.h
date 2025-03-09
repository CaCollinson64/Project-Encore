#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReplayComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class STYLISHCOMBATSTARTERKIT_API UReplayComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UReplayComponent();

	
	/** Array of transforms recorded over time */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Replay")
	TArray<FTransform> TransformHistory;

	/** Duration (in seconds) to interpolate between each transform during replay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Replay")
	float SegmentDuration = 1.0f;

	/** Whether the replay is active */
	UPROPERTY(BlueprintReadWrite, Category="Replay")
	bool bIsReplaying = false;

	/** Timer handle for recording transforms */
	FTimerHandle RecordingTimerHandle;

	UFUNCTION(BlueprintImplementableEvent)
	void EnableInput(bool bEnable);
	
	/** Start recording transforms at 0.1s intervals */
	UFUNCTION(BlueprintCallable, Category="Recording")
	void StartRecording();

	/** Stop recording transforms */
	UFUNCTION(BlueprintCallable, Category="Recording")
	void StopRecording();

	/** Function called periodically to record the current transform */
	void RecordTransform();

	/** Begin the replay (from end to beginning) */
	UFUNCTION(BlueprintCallable, Category="Replay")
	void StartReplay();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	/** Index of the current segment in the history (used for replay) */
	int32 CurrentSegmentIndex;

	/** Timer to track progress in the current segment */
	float SegmentTimer;
};
