// Class PatrolActionSystem.UPSActionCondition
// Size: 0x30 (Inherited: 0x28)
struct UUPSActionCondition : UObject {
	bool bInverseCondition; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	bool InternalCheckCondition(struct ACharacter* Character); // Function PatrolActionSystem.UPSActionCondition.InternalCheckCondition // (Native|Event|Protected|BlueprintEvent) // @ game+0xc9a840
};

// Class PatrolActionSystem.UPSAITask_AIRotateToTarget
// Size: 0xb8 (Inherited: 0x68)
struct UUPSAITask_AIRotateToTarget : UGameplayTask {
	struct FMulticastInlineDelegate OnRotationTaskFinished; // 0x68(0x10)
	struct AAIController* AIC; // 0x78(0x08)
	struct ACharacter* Character; // 0x80(0x08)
	struct AActor* TargetActor; // 0x88(0x08)
	char pad_90[0x28]; // 0x90(0x28)

	struct UUPSAITask_AIRotateToTarget* RotateAIToTargetRotation(struct AAIController* AIController, struct FRotator TargetRotation, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance); // Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc9b070
	struct UUPSAITask_AIRotateToTarget* RotateAIToTargetActor(struct AAIController* AIController, struct AActor* RotationTarget, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance); // Function PatrolActionSystem.UPSAITask_AIRotateToTarget.RotateAIToTargetActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc9aed0
};

// Class PatrolActionSystem.UPSAITask_ExecuteEnemyAction
// Size: 0x88 (Inherited: 0x68)
struct UUPSAITask_ExecuteEnemyAction : UGameplayTask {
	struct FMulticastInlineDelegate OnEnemyActionFinishedDelegate; // 0x68(0x10)
	struct UUPSEnemyAction* EnemyAction; // 0x78(0x08)
	struct ACharacter* Character; // 0x80(0x08)

	void OnActionFinished(enum class EEnemyActionFinishResult Result); // Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.OnActionFinished // (Final|Native|Private) // @ game+0xc9acf0
	struct UUPSAITask_ExecuteEnemyAction* ExecuteEnemyAction(struct UUPSEnemyAction* EnemyActionToActivate, struct ACharacter* Character); // Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.ExecuteEnemyAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc9a0a0
	void AbortAction(); // Function PatrolActionSystem.UPSAITask_ExecuteEnemyAction.AbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0xc99d70
};

// Class PatrolActionSystem.UPSBasePatrolObject
// Size: 0x228 (Inherited: 0x220)
struct AUPSBasePatrolObject : AActor {
	char pad_220[0x8]; // 0x220(0x08)
};

// Class PatrolActionSystem.UPSBillboardComponent
// Size: 0x460 (Inherited: 0x460)
struct UUPSBillboardComponent : UBillboardComponent {
};

// Class PatrolActionSystem.UPSCheatManager
// Size: 0x78 (Inherited: 0x78)
struct UUPSCheatManager : UCheatManager {

	void UPS_EnablePointActionsDebug(); // Function PatrolActionSystem.UPSCheatManager.UPS_EnablePointActionsDebug // (Final|Exec|Native|Public) // @ game+0xa996d0
	void UPS_EnablePatrolVisualization(); // Function PatrolActionSystem.UPSCheatManager.UPS_EnablePatrolVisualization // (Final|Exec|Native|Public) // @ game+0xa996d0
	void UPS_EnableGroupMovementDebug(); // Function PatrolActionSystem.UPSCheatManager.UPS_EnableGroupMovementDebug // (Final|Exec|Native|Public) // @ game+0xa996d0
	void UPS_DisablePointActionsDebug(); // Function PatrolActionSystem.UPSCheatManager.UPS_DisablePointActionsDebug // (Final|Exec|Native|Public) // @ game+0xa996d0
	void UPS_DisablePatrolVisualization(); // Function PatrolActionSystem.UPSCheatManager.UPS_DisablePatrolVisualization // (Final|Exec|Native|Public) // @ game+0xa996d0
	void UPS_DisableGroupMovementDebug(); // Function PatrolActionSystem.UPSCheatManager.UPS_DisableGroupMovementDebug // (Final|Exec|Native|Public) // @ game+0xa996d0
};

// Class PatrolActionSystem.UPSEditorDrawer
// Size: 0x88 (Inherited: 0x28)
struct UUPSEditorDrawer : UObject {
	struct TArray<struct FDrawerItemInfo> TextToDraw; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class PatrolActionSystem.UPSEnemyAction
// Size: 0x78 (Inherited: 0x30)
struct UUPSEnemyAction : UDataAsset {
	struct FMulticastInlineDelegate OnActionFinishedDelegate; // 0x30(0x10)
	struct ACharacter* Character; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct TArray<struct UUPSEnemyActionScript*> EnemyActionScripts; // 0x50(0x10)
	struct TArray<struct UUPSActionCondition*> ActionConditions; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	void StartAction(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyAction.StartAction // (Final|Native|Public) // @ game+0xc9b3b0
	void InternalStartAction(struct ACharacter* InCharacter); // Function PatrolActionSystem.UPSEnemyAction.InternalStartAction // (Native|Event|Protected|BlueprintEvent) // @ game+0xc9a970
	void InternalFinishAction(struct ACharacter* InCharacter); // Function PatrolActionSystem.UPSEnemyAction.InternalFinishAction // (Native|Event|Protected|BlueprintEvent) // @ game+0xc9a8e0
	void InternalAbortAction(struct ACharacter* InCharacter); // Function PatrolActionSystem.UPSEnemyAction.InternalAbortAction // (Native|Event|Protected|BlueprintEvent) // @ game+0xc9a7b0
	void FinishAction(); // Function PatrolActionSystem.UPSEnemyAction.FinishAction // (Final|Native|Protected|BlueprintCallable) // @ game+0xc9a170
	void AbortAction(); // Function PatrolActionSystem.UPSEnemyAction.AbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0xc99d90
};

// Class PatrolActionSystem.UPSEnemyActionScript
// Size: 0x28 (Inherited: 0x28)
struct UUPSEnemyActionScript : UObject {

	void OnActionStarted(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyActionScript.OnActionStarted // (Native|Event|Public|BlueprintEvent) // @ game+0xc9a970
	void OnActionFinished(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyActionScript.OnActionFinished // (Native|Event|Public|BlueprintEvent) // @ game+0xc9a8e0
	void OnActionAborted(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyActionScript.OnActionAborted // (Native|Event|Public|BlueprintEvent) // @ game+0xc9a7b0
};

// Class PatrolActionSystem.UPSEnemyActionsPreset
// Size: 0x40 (Inherited: 0x30)
struct UUPSEnemyActionsPreset : UDataAsset {
	struct TArray<struct FEnemyActionSelector> EnemyActions; // 0x30(0x10)
};

// Class PatrolActionSystem.UPSEnemyPointAction
// Size: 0x3a0 (Inherited: 0x220)
struct AUPSEnemyPointAction : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UUPSEnemyPointActionComponent* DefaultEnemyPointActionComponent; // 0x228(0x08)
	struct USceneComponent* RootSceneComponent; // 0x230(0x08)
	struct TArray<struct UUPSEnemyPointActionComponent*> EnemyActionPointComponents; // 0x238(0x10)
	struct TSet<struct ACharacter*> CharactersReachedPoint; // 0x248(0x50)
	struct TMap<struct ACharacter*, struct AUPSPointActionMovementHandler*> CharacterMovementHandlers; // 0x298(0x50)
	struct TMap<struct TWeakObjectPtr<struct ACharacter>, struct FDelegate> ActionFinishedCallbacks; // 0x2e8(0x50)
	struct TSet<struct ACharacter*> CharactersStartedPointAction; // 0x338(0x50)
	struct AUPSPointActionMovementHandler* MovementHandlerClass; // 0x388(0x08)
	struct FGameplayTag PointTag; // 0x390(0x08)
	bool bFinishActionAfterCharacterAbort; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)

	bool StartEnemyPointAction(struct FDelegate OnPointActionFinishedCallback, struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.StartEnemyPointAction // (Native|Public|BlueprintCallable) // @ game+0xc9b440
	void OnCharacterReachPoint(struct ACharacter* Character, bool bSuccess); // Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterReachPoint // (Native|Protected) // @ game+0xc9ae00
	void OnCharacterDestroyed(struct AActor* DestroyedActor); // Function PatrolActionSystem.UPSEnemyPointAction.OnCharacterDestroyed // (Native|Protected) // @ game+0xc9ad70
	void K2_StartEnemyPointAction(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.K2_StartEnemyPointAction // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_OnCharacterReachPoint(struct ACharacter* Character, bool bSuccess); // Function PatrolActionSystem.UPSEnemyPointAction.K2_OnCharacterReachPoint // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_FinishPointAction(); // Function PatrolActionSystem.UPSEnemyPointAction.K2_FinishPointAction // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_ClearPointActionForCharacter(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.K2_ClearPointActionForCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	bool K2_CanStartPointAction(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.K2_CanStartPointAction // (Event|Protected|BlueprintEvent|Const) // @ game+0x1d38500
	void K2_AllCharactersReachPoints(); // Function PatrolActionSystem.UPSEnemyPointAction.K2_AllCharactersReachPoints // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	bool HasFreePointComponent(); // Function PatrolActionSystem.UPSEnemyPointAction.HasFreePointComponent // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a780
	struct UUPSEnemyPointActionComponent* GetFreeEnemyActionPointComponent(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.GetFreeEnemyActionPointComponent // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a540
	struct TArray<struct UUPSEnemyPointActionComponent*> GetEnemyActionPointComponents(); // Function PatrolActionSystem.UPSEnemyPointAction.GetEnemyActionPointComponents // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a4c0
	struct TArray<struct ACharacter*> GetCharactersStartedPointAction(); // Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersStartedPointAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a280
	struct TArray<struct ACharacter*> GetCharactersReachedPoints(); // Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersReachedPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a300
	struct TArray<struct ACharacter*> GetCharactersGoingToPoint(); // Function PatrolActionSystem.UPSEnemyPointAction.GetCharactersGoingToPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a280
	struct UUPSEnemyPointActionComponent* GetCharacterPoint(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.GetCharacterPoint // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a1e0
	void FinishPointAction(); // Function PatrolActionSystem.UPSEnemyPointAction.FinishPointAction // (Native|Protected|BlueprintCallable) // @ game+0xc9a190
	void EnableVisualization(bool bEnable); // Function PatrolActionSystem.UPSEnemyPointAction.EnableVisualization // (Native|Public|BlueprintCallable) // @ game+0xc9a010
	void ClearPointActionForCharacter(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.ClearPointActionForCharacter // (Native|Protected|BlueprintCallable) // @ game+0xc99f00
	bool CanStartPointAction(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.CanStartPointAction // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0xc99e60
	void AllCharactersReachPoints(); // Function PatrolActionSystem.UPSEnemyPointAction.AllCharactersReachPoints // (Native|Protected) // @ game+0xc99e40
	void AbortEnemyPointAction(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointAction.AbortEnemyPointAction // (Native|Public|BlueprintCallable) // @ game+0xc99db0
};

// Class PatrolActionSystem.UPSEnemyPointActionComponent
// Size: 0x270 (Inherited: 0x200)
struct UUPSEnemyPointActionComponent : USceneComponent {
	struct ACharacter* CharacterOnPoint; // 0x1f8(0x08)
	char pad_208[0x10]; // 0x208(0x10)
	struct FGameplayTag PointTag; // 0x218(0x08)
	struct UAnimSequenceBase* PreviewAnim; // 0x220(0x08)
	float PreviewAnimStartTime; // 0x228(0x04)
	float ArrowSize; // 0x22c(0x04)
	float ArrowOffset; // 0x230(0x04)
	float BillboardSize; // 0x234(0x04)
	struct FRotator MeshRotationOffset; // 0x238(0x0c)
	bool bOverrideProjectSettingsMesh; // 0x244(0x01)
	bool bOverrideProjectSettingsMaterial; // 0x245(0x01)
	bool bOverrideProjectSettingsSprite; // 0x246(0x01)
	char pad_247[0x1]; // 0x247(0x01)
	struct USkeletalMesh* OverrideEnemyActionPointComponentMesh; // 0x248(0x08)
	struct UMaterialInterface* OverrideEnemyActionPointComponentMeshMaterial; // 0x250(0x08)
	struct UTexture2D* OverrideEnemyActionPointComponentBillboardSprite; // 0x258(0x08)
	char pad_260[0x10]; // 0x260(0x10)

	void SetPreviewAnim(struct UAnimationAsset* Anim, float InitTime); // Function PatrolActionSystem.UPSEnemyPointActionComponent.SetPreviewAnim // (Final|Native|Public|BlueprintCallable) // @ game+0xc9b2e0
	void SetCharacterOnPoint(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointActionComponent.SetCharacterOnPoint // (Native|Public|BlueprintCallable) // @ game+0xc9b250
	bool K2_CanUsePointComponent(struct ACharacter* Character); // Function PatrolActionSystem.UPSEnemyPointActionComponent.K2_CanUsePointComponent // (Event|Public|BlueprintEvent|Const) // @ game+0x1d38500
	struct ACharacter* GetCharacterOnPoint(); // Function PatrolActionSystem.UPSEnemyPointActionComponent.GetCharacterOnPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9a1b0
};

// Class PatrolActionSystem.UPSGroupMovementFormation
// Size: 0x280 (Inherited: 0x220)
struct AUPSGroupMovementFormation : AActor {
	struct UArrowComponent* RootArrowComponent; // 0x220(0x08)
	struct TSet<struct ACharacter*> CharactersInFormation; // 0x228(0x50)
	struct ACharacter* LeaderCharacter; // 0x278(0x08)
};

// Class PatrolActionSystem.UPSFormation_BlueprintBase
// Size: 0x280 (Inherited: 0x280)
struct AUPSFormation_BlueprintBase : AUPSGroupMovementFormation {

	void K2_OnRemoveCharacterFromGroup(struct ACharacter* Character); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnRemoveCharacterFromGroup // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_OnLeaderStartMovementToNewLocation(struct FVector NewLocation); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewLocation // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1d38500
	void K2_OnLeaderStartMovementToNewActor(struct AActor* NewActor); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderStartMovementToNewActor // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_OnLeaderCompleteMovement(enum class EPathFollowingResult Result); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnLeaderCompleteMovement // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_OnAddCharacterInGroup(struct ACharacter* Character); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_OnAddCharacterInGroup // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_InitFormation(struct ACharacter* InLeaderCharacter); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_InitFormation // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	struct FVector K2_GetLocationInFormationForCharacter(struct ACharacter* Character); // Function PatrolActionSystem.UPSFormation_BlueprintBase.K2_GetLocationInFormationForCharacter // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1d38500
};

// Class PatrolActionSystem.UPSFormation_FromFormationPoints
// Size: 0x290 (Inherited: 0x280)
struct AUPSFormation_FromFormationPoints : AUPSGroupMovementFormation {
	struct TArray<struct UUPSFormationPointComponent*> FormationPointComponents; // 0x280(0x10)
};

// Class PatrolActionSystem.UPSFormation_FromGeneratedPoints
// Size: 0x2b0 (Inherited: 0x280)
struct AUPSFormation_FromGeneratedPoints : AUPSGroupMovementFormation {
	struct FFormationPointsGenerationSettings PointsGenerationSettings; // 0x280(0x0c)
	char pad_28C[0x24]; // 0x28c(0x24)
};

// Class PatrolActionSystem.UPSFormation_FromOriginLocations
// Size: 0x280 (Inherited: 0x280)
struct AUPSFormation_FromOriginLocations : AUPSGroupMovementFormation {
};

// Class PatrolActionSystem.UPSFormationPointComponent
// Size: 0x470 (Inherited: 0x460)
struct UUPSFormationPointComponent : UBillboardComponent {
	struct ACharacter* CharacterOnPoint; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class PatrolActionSystem.UPSFunctionLIbrary
// Size: 0x28 (Inherited: 0x28)
struct UUPSFunctionLIbrary : UBlueprintFunctionLibrary {

	struct AUPSPatrolPoint* K2_CreatePatrolPoint(struct UObject* WorldContext, struct FVector WorldLocation, struct FRotator WorldRotation, struct AUPSPatrolPoint* PreviousPoint, struct FGameplayTag LinkTagFromPreviousPoint, struct AUPSPatrolPoint* PointClass); // Function PatrolActionSystem.UPSFunctionLIbrary.K2_CreatePatrolPoint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xc9ab00
	void JumpToMontageSectionByIndex(struct ACharacter* Character, struct UAnimMontage* Montage, int32_t SectionIndex); // Function PatrolActionSystem.UPSFunctionLIbrary.JumpToMontageSectionByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc9aa00
	float GetMontageSectionLength(struct UAnimMontage* Montage, struct FName SectionName); // Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionLength // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9a6b0
	float GetMontageSectionIndexLength(struct UAnimMontage* Montage, int32_t Index); // Function PatrolActionSystem.UPSFunctionLIbrary.GetMontageSectionIndexLength // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9a5e0
	struct UUPSEnemyAction* GetEnemyActionFromSelector(struct FEnemyActionSelector EnemyActionSelector); // Function PatrolActionSystem.UPSFunctionLIbrary.GetEnemyActionFromSelector // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9a420
	struct UUPSEnemyAction* GetDynamicEnemyActionFromSelector(struct FEnemyActionSelector EnemyActionSelector); // Function PatrolActionSystem.UPSFunctionLIbrary.GetDynamicEnemyActionFromSelector // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc9a380
	struct UUPSPatrolPointScript* CreatePatrolScriptIntance(struct FPatrolPointScript Script); // Function PatrolActionSystem.UPSFunctionLIbrary.CreatePatrolScriptIntance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc99f90
};

// Class PatrolActionSystem.UPSGroupMemberMovementPoint
// Size: 0x228 (Inherited: 0x220)
struct AUPSGroupMemberMovementPoint : AActor {
	struct UBillboardComponent* BillboardComponent; // 0x220(0x08)
};

// Class PatrolActionSystem.UPSGroupMovementAIController
// Size: 0x348 (Inherited: 0x328)
struct AUPSGroupMovementAIController : AAIController {
	struct FMulticastInlineDelegate OnAIStartMovementToLocationDelegate; // 0x328(0x10)
	struct FMulticastInlineDelegate OnAIStartMovementToActorDelegate; // 0x338(0x10)
};

// Class PatrolActionSystem.UPSGroupMovementAIC_Crowd
// Size: 0x348 (Inherited: 0x348)
struct AUPSGroupMovementAIC_Crowd : AUPSGroupMovementAIController {
};

// Class PatrolActionSystem.UPSGroupMovementManager
// Size: 0x78 (Inherited: 0x28)
struct UUPSGroupMovementManager : UObject {
	struct TSet<struct TWeakObjectPtr<struct AUPSMovementGroup>> MovementGroups; // 0x28(0x50)

	struct TArray<struct AUPSMovementGroup*> GetMovementGroups(); // Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroups // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9eac0
	struct ACharacter* GetMovementGroupLeaderFromMember(struct ACharacter* GroupMember); // Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroupLeaderFromMember // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9ea20
	struct AUPSMovementGroup* GetMovementGroup(struct ACharacter* MovementGroupLeaderCharacter); // Function PatrolActionSystem.UPSGroupMovementManager.GetMovementGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9e980
	struct UUPSGroupMovementManager* GetGroupMovementManager(); // Function PatrolActionSystem.UPSGroupMovementManager.GetGroupMovementManager // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9e920
};

// Class PatrolActionSystem.UPSGroupMovementVisualizer
// Size: 0x88 (Inherited: 0x28)
struct UUPSGroupMovementVisualizer : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TMap<struct TWeakObjectPtr<struct AUPSMovementGroup>, bool> MovementGroups; // 0x38(0x50)
};

// Class PatrolActionSystem.UPSMovementGroup
// Size: 0x330 (Inherited: 0x228)
struct AUPSMovementGroup : AUPSBasePatrolObject {
	struct ACharacter* GroupLeader; // 0x228(0x08)
	struct TMap<struct ACharacter*, struct FMovementGroupMemberInfo> MovementGroupMembers; // 0x230(0x50)
	bool bRotateMovementPointsAroundLeader; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct AUPSGroupMovementFormation* Formation; // 0x288(0x08)
	float MembersMovementReactionTime; // 0x290(0x04)
	float MembersMovementReactionTimeRandomDiviation; // 0x294(0x04)
	struct AUPSGroupMovementAIController* GroupMovementLeaderAIC; // 0x298(0x08)
	struct UBillboardComponent* BillboardComponent; // 0x2a0(0x08)
	struct AUPSGroupMovementFormation* SpawnedFormation; // 0x2a8(0x08)
	char pad_2B0[0x30]; // 0x2b0(0x30)
	struct TMap<struct ACharacter*, struct FDelayedGroupMovement> DelayedMovement; // 0x2e0(0x50)

	void UpdateLocationInFormationForCharacter(struct ACharacter* Character); // Function PatrolActionSystem.UPSMovementGroup.UpdateLocationInFormationForCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0xc9f900
	void SetGroupLeader(struct ACharacter* NewLeader); // Function PatrolActionSystem.UPSMovementGroup.SetGroupLeader // (Native|Public|BlueprintCallable) // @ game+0xc9f470
	void RemoveGroupMember(struct ACharacter* MemberToRemove); // Function PatrolActionSystem.UPSMovementGroup.RemoveGroupMember // (Native|Public|BlueprintCallable) // @ game+0xc9f2a0
	void OnLeaderStartMovementToLocation(struct FVector NewLocation); // Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToLocation // (Native|Protected|HasDefaults) // @ game+0xc9f070
	void OnLeaderStartMovementToActor(struct AActor* NewActor); // Function PatrolActionSystem.UPSMovementGroup.OnLeaderStartMovementToActor // (Native|Protected) // @ game+0xc9efe0
	void OnLeaderCompleteMovement(struct FAIRequestID RequestID, enum class EPathFollowingResult Result); // Function PatrolActionSystem.UPSMovementGroup.OnLeaderCompleteMovement // (Native|Protected) // @ game+0xc9ef10
	void OnCharacterDestroyed(struct AActor* DestroyedActor); // Function PatrolActionSystem.UPSMovementGroup.OnCharacterDestroyed // (Native|Protected) // @ game+0xc9ad70
	void K2_OnLeaderStartMovementToLocation(struct FVector NewLocation); // Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToLocation // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x1d38500
	void K2_OnLeaderStartMovementToActor(struct AActor* NewActor); // Function PatrolActionSystem.UPSMovementGroup.K2_OnLeaderStartMovementToActor // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void InitializeGroupMembers(); // Function PatrolActionSystem.UPSMovementGroup.InitializeGroupMembers // (Native|Protected|BlueprintCallable) // @ game+0xc9a190
	void AddGroupMember(struct ACharacter* NewMember); // Function PatrolActionSystem.UPSMovementGroup.AddGroupMember // (Native|Public|BlueprintCallable) // @ game+0xc99db0
};

// Class PatrolActionSystem.UPSMovementGroupsSettings
// Size: 0x50 (Inherited: 0x38)
struct UUPSMovementGroupsSettings : UDeveloperSettings {
	struct FColor LineBetweenGroupLeaderAndGroupActorColor; // 0x38(0x04)
	struct FColor LineBetweenGroupMemberAndLeaderColor; // 0x3c(0x04)
	float LineBetweenGroupLeaderAndGroupActorThickness; // 0x40(0x04)
	float LineBetweenGroupMemberAndLeaderThickness; // 0x44(0x04)
	struct FName GroupMovementPointBBName; // 0x48(0x08)
};

// Class PatrolActionSystem.UPSPointActionMovementHandler
// Size: 0x248 (Inherited: 0x220)
struct AUPSPointActionMovementHandler : AActor {
	char pad_220[0x18]; // 0x220(0x18)
	struct ACharacter* MovementCharacter; // 0x238(0x08)
	struct UUPSEnemyPointActionComponent* PointActionComponent; // 0x240(0x08)

	void K2_FinishMovement(bool bSuccess); // Function PatrolActionSystem.UPSPointActionMovementHandler.K2_FinishMovement // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_CharacterStartMovement(struct ACharacter* Character, struct UUPSEnemyPointActionComponent* Point); // Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterStartMovement // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_CharacterAbortMovement(struct ACharacter* Character, struct UUPSEnemyPointActionComponent* Point); // Function PatrolActionSystem.UPSPointActionMovementHandler.K2_CharacterAbortMovement // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void FinishMovement(bool bSuccess); // Function PatrolActionSystem.UPSPointActionMovementHandler.FinishMovement // (Native|Protected|BlueprintCallable) // @ game+0xc9a010
};

// Class PatrolActionSystem.UPSMovementHandlerDefault
// Size: 0x270 (Inherited: 0x248)
struct AUPSMovementHandlerDefault : AUPSPointActionMovementHandler {
	struct FUPSMoveParams MoveParams; // 0x248(0x18)
	bool bRotateOnPoint; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UGameplayTask* ActiveGameplayTask; // 0x268(0x08)

	void OnCharacterRotatedToPoint(struct AAIController* AIC, struct UUPSAITask_AIRotateToTarget* FinishedTask); // Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterRotatedToPoint // (Native|Protected) // @ game+0xc9ee40
	void OnCharacterReachPoint(struct ACharacter* Character, struct UUPSMoveToEnemyPointAction* MoveTask, enum class EPathFollowingResult Result); // Function PatrolActionSystem.UPSMovementHandlerDefault.OnCharacterReachPoint // (Native|Protected) // @ game+0xc9ed30
};

// Class PatrolActionSystem.UPSMoveToEnemyPointAction
// Size: 0xb8 (Inherited: 0x70)
struct UUPSMoveToEnemyPointAction : UAITask {
	struct FMulticastInlineDelegate OnMoveToEnemyPointActionFinishedDelegate; // 0x70(0x10)
	struct ACharacter* MoveChracter; // 0x80(0x08)
	char pad_88[0x18]; // 0x88(0x18)
	struct FUPSMoveParams MoveParams; // 0xa0(0x18)

	struct UUPSMoveToEnemyPointAction* UPSMoveToLocation(struct ACharacter* Character, struct FVector Location, struct FUPSMoveParams MoveParams); // Function PatrolActionSystem.UPSMoveToEnemyPointAction.UPSMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xc9f7b0
	void StopMovement(bool bEndTask); // Function PatrolActionSystem.UPSMoveToEnemyPointAction.StopMovement // (Final|Native|Public|BlueprintCallable) // @ game+0xc9f720
	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult Result); // Function PatrolActionSystem.UPSMoveToEnemyPointAction.OnMoveCompleted // (Final|Native|Protected) // @ game+0xc9f100
};

// Class PatrolActionSystem.UPSPatrolComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UUPSPatrolComponent : UActorComponent {
	struct AUPSPatrolPoint* InitialMovementPatrolPoint; // 0xb0(0x08)
	enum class EPatrolMovementType PatrolMovementDirection; // 0xb8(0x01)
	bool bDisableVisualization; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct AUPSPatrolPoint* CurrentPatrolPoint; // 0xc0(0x08)

	void UpdateMovementPatrolPoint(struct AUPSPatrolPoint* PatrolPoint); // Function PatrolActionSystem.UPSPatrolComponent.UpdateMovementPatrolPoint // (Native|Public|BlueprintCallable) // @ game+0xc9f990
	void SetPatrolMovementType(enum class EPatrolMovementType MovementType); // Function PatrolActionSystem.UPSPatrolComponent.SetPatrolMovementType // (Native|Public|BlueprintCallable) // @ game+0xc9f500
	struct AUPSPatrolPoint* GetCurrentPatrolPoint(); // Function PatrolActionSystem.UPSPatrolComponent.GetCurrentPatrolPoint // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc9e8f0
};

// Class PatrolActionSystem.UPSPatrolPoint
// Size: 0x2a8 (Inherited: 0x228)
struct AUPSPatrolPoint : AUPSBasePatrolObject {
	struct UBillboardComponent* BillboardComponent; // 0x228(0x08)
	struct FPatrolPointSettings PatrolPointSettings; // 0x230(0x40)
	struct UArrowComponent* ArrowComponent; // 0x270(0x08)
	struct TArray<struct FPatrolPointLink> PatrolPointLinks; // 0x278(0x10)
	struct TArray<struct FPatrolPointLink> BackwardPatrolPointLinks; // 0x288(0x10)
	struct TArray<struct FPatrolPointLink> CachedPatrolPointLinks; // 0x298(0x10)

	void UpdatePatrolPointSettings(struct FPatrolPointSettings NewSettings); // Function PatrolActionSystem.UPSPatrolPoint.UpdatePatrolPointSettings // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc9fa20
	struct FPatrolPointSettings GetPatrolPointSettings(); // Function PatrolActionSystem.UPSPatrolPoint.GetPatrolPointSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9ec20
	struct TArray<struct FPatrolPointLink> GetNextPatrolPointLinks(); // Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPointLinks // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9ebe0
	struct AUPSPatrolPoint* GetNextPatrolPoint(struct ACharacter* Character); // Function PatrolActionSystem.UPSPatrolPoint.GetNextPatrolPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9eb40
	struct TArray<struct FPatrolPointLink> GetBackwardPatrolPointLinks(); // Function PatrolActionSystem.UPSPatrolPoint.GetBackwardPatrolPointLinks // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9e8b0
	void AddNextLink(struct FPatrolPointLink Link); // Function PatrolActionSystem.UPSPatrolPoint.AddNextLink // (Native|Public|BlueprintCallable) // @ game+0xc9e6d0
};

// Class PatrolActionSystem.UPSPatrolPointScript
// Size: 0x28 (Inherited: 0x28)
struct UUPSPatrolPointScript : UObject {

	void StartMovementToPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.StartMovementToPoint // (Native|Public|BlueprintCallable) // @ game+0xc9f650
	void ReachPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.ReachPoint // (Native|Public|BlueprintCallable) // @ game+0xc9f1d0
	void K2_StartMovementToPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.K2_StartMovementToPoint // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_ReachPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.K2_ReachPoint // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void K2_AbortMovementToPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.K2_AbortMovementToPoint // (Event|Public|BlueprintEvent) // @ game+0x1d38500
	void AbortMovementToPoint(struct ACharacter* Character, struct AUPSPatrolPoint* Point); // Function PatrolActionSystem.UPSPatrolPointScript.AbortMovementToPoint // (Native|Public|BlueprintCallable) // @ game+0xc9e600
};

// Class PatrolActionSystem.UPSPatrolPointSolver
// Size: 0x28 (Inherited: 0x28)
struct UUPSPatrolPointSolver : UObject {

	struct AUPSPatrolPoint* SelectPatrolPoint(struct TArray<struct FPatrolPointLink> PatrolPointLinks, struct AUPSPatrolPoint* ThisPatrolPoint, struct ACharacter* Character); // Function PatrolActionSystem.UPSPatrolPointSolver.SelectPatrolPoint // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xc9f330
};

// Class PatrolActionSystem.UPSPatrolPointSolver_RandomPoint
// Size: 0x28 (Inherited: 0x28)
struct UUPSPatrolPointSolver_RandomPoint : UUPSPatrolPointSolver {
};

// Class PatrolActionSystem.UPSPatrolVisualizer
// Size: 0xa0 (Inherited: 0x28)
struct UUPSPatrolVisualizer : UObject {
	char pad_28[0x40]; // 0x28(0x40)
	struct TArray<struct FUPSPatrolPointPathData> PatrolPointsPathData; // 0x68(0x10)
	struct TArray<struct FUPSPatrolComponentPathData> PatrolComponentsPathData; // 0x78(0x10)
	struct TArray<struct FVisitedPoint> VisitedPoints; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UUPSPatrolVisualizer* Get(); // Function PatrolActionSystem.UPSPatrolVisualizer.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9e7f0
	void EnablePointActionVisualization(bool bEnable); // Function PatrolActionSystem.UPSPatrolVisualizer.EnablePointActionVisualization // (Final|Native|Public|BlueprintCallable) // @ game+0xc9e760
	void EnablePathVisualizationInGame(bool bEnable); // Function PatrolActionSystem.UPSPatrolVisualizer.EnablePathVisualizationInGame // (Final|Native|Public|BlueprintCallable) // @ game+0xc9e760
};

// Class PatrolActionSystem.UPSPreviewSkeletalMeshComponent
// Size: 0xed0 (Inherited: 0xed0)
struct UUPSPreviewSkeletalMeshComponent : USkeletalMeshComponent {

	void SetPreviewAnim(struct UAnimationAsset* Anim, float InitTime); // Function PatrolActionSystem.UPSPreviewSkeletalMeshComponent.SetPreviewAnim // (Final|Native|Public|BlueprintCallable) // @ game+0xc9f580
};

// Class PatrolActionSystem.UPSSettings
// Size: 0x128 (Inherited: 0x38)
struct UUPSSettings : UDeveloperSettings {
	struct FColor PathLinesColor; // 0x38(0x04)
	struct FColor LinesBetweenPointsColor; // 0x3c(0x04)
	struct FColor LineFromPatrolComponentOwnerColor; // 0x40(0x04)
	struct FColor ErrorLineColor; // 0x44(0x04)
	float DefaultLinesThickness; // 0x48(0x04)
	float ErrorLinesThickness; // 0x4c(0x04)
	float PatrolPointArrowOffset; // 0x50(0x04)
	float PatrolPointArrowSize; // 0x54(0x04)
	float PatrolPointSmallArrowSize; // 0x58(0x04)
	float ArrowMovementSpeed; // 0x5c(0x04)
	float DistanceBetweenArrows; // 0x60(0x04)
	struct FColor ReachRadiusColor; // 0x64(0x04)
	float ReachRadiusThickness; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FKey KeyToAddNewPoint; // 0x70(0x18)
	enum class ECollisionChannel PatrolBuilderTraceChannel; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float CheckDistanceBetweenPoints; // 0x8c(0x04)
	struct TSoftObjectPtr<struct USkeletalMesh> EnemyActionPointComponentMesh; // 0x90(0x28)
	struct TSoftObjectPtr<struct UMaterialInterface> EnemyActionPointComponentMeshMaterial; // 0xb8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> EnemyActionPointComponentBillboardSprite; // 0xe0(0x28)
	struct FVector DebugPointActionOffset; // 0x108(0x0c)
	struct FColor DebugPointActionColor; // 0x114(0x04)
	float DebugPointActionArrowSize; // 0x118(0x04)
	float DebugPointActionLineThickness; // 0x11c(0x04)
	struct FName CurrentPatrolPointBBName; // 0x120(0x08)

	struct UUPSSettings* Get(); // Function PatrolActionSystem.UPSSettings.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc9e850
};

