// Enum CrowWorld.ECrowWorldDamageType
enum class ECrowWorldDamageType : uint8 {
	Point,
	Melee,
	Explosion,
	Impact,
	Burning,
	Radiation,
	ECrowWorldDamageType_MAX,
};

// Enum CrowWorld.ECrowWorldDestructionCause
enum class ECrowWorldDestructionCause : uint8 {
	ByDamage,
	ByImpact,
	ECrowWorldDestructionCause_MAX,
};

// Enum CrowWorld.ECrowWorldEditorActorLOD
enum class ECrowWorldEditorActorLOD : uint8 {
	LOD0,
	LOD1,
	LOD2,
	LOD3,
	ECrowWorldEditorActorLOD_MAX,
};

// Enum CrowWorld.ECrowWorldLODGroup
enum class ECrowWorldLODGroup : uint8 {
	Misc_LOD0,
	Misc_LOD1,
	Misc_LOD2,
	Misc_LOD3,
	Misc_SelfScreenSize,
	Merge_Extra,
	Merge_Crucial,
	ECrowWorldLODGroup_MAX,
};

// Enum CrowWorld.ECrowWorldLODStateDirtyFlag
enum class ECrowWorldLODStateDirtyFlag : uint8 {
	LODLevel,
	Trigger,
	ECrowWorldLODStateDirtyFlag_MAX,
};

// Enum CrowWorld.ECrowWorldActorLayoutItemDestroyReason
enum class ECrowWorldActorLayoutItemDestroyReason : uint8 {
	HiddenByVisibility,
	DestroyedByImpact,
	DestroyedByDamage,
	ECrowWorldActorLayoutItemDestroyReason_MAX,
};

// Enum CrowWorld.ECrowWorldTriggerActionType
enum class ECrowWorldTriggerActionType : uint8 {
	Normal,
	QuickAction,
	ECrowWorldTriggerActionType_MAX,
};

// Enum CrowWorld.ECrowWorldTriggerType
enum class ECrowWorldTriggerType : uint8 {
	Door,
	LightSwitch,
	ECrowWorldTriggerType_MAX,
};

// Enum CrowWorld.ECrowWorldGeomType
enum class ECrowWorldGeomType : uint8 {
	Body,
	Trigger1,
	Trigger2,
	Checker1,
	Checker2,
	Trace,
	ECrowWorldGeomType_MAX,
};

// ScriptStruct CrowWorld.BitFlagArray
// Size: 0x18 (Inherited: 0x00)
struct FBitFlagArray {
	int16_t MaxFlagCount; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<uint32_t> FlagBlocks; // 0x08(0x10)
};

// ScriptStruct CrowWorld.CrowFoliageReplicationInfo
// Size: 0x68 (Inherited: 0x00)
struct FCrowFoliageReplicationInfo {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct CrowWorld.CrowWorldActorLODState
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldActorLODState {
	struct UStaticMeshComponent* LODMeshComponent; // 0x00(0x08)
};

// ScriptStruct CrowWorld.CrowWorldActorDestructionState
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldActorDestructionState {
	float ActorHealthPoint; // 0x00(0x04)
	float ActorMaxHP; // 0x04(0x04)
	struct UCrowWorldDamageCheckerBase* ActorDamageChecker; // 0x08(0x08)
	struct UCrowWorldDestructionAUD* ActorDestructionAUD; // 0x10(0x08)
	struct TArray<struct UPrimitiveComponent*> RemainMeshComponents; // 0x18(0x10)
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItemInstance
// Size: 0x58 (Inherited: 0x00)
struct FCrowWorldActorLayoutItemInstance {
	char bDestroyedInstance : 1; // 0x00(0x01)
	char bDestructibleInstance : 1; // 0x00(0x01)
	char bDestroyParent : 1; // 0x00(0x01)
	char bDestroyOnVehicleOverlap : 1; // 0x00(0x01)
	char bDestroyByShockwave : 1; // 0x00(0x01)
	char bNeedDecalReceiver : 1; // 0x00(0x01)
	char bInteractiveInstance : 1; // 0x00(0x01)
	char bComponentVisibility : 1; // 0x00(0x01)
	char bShakeOnDamage : 1; // 0x01(0x01)
	char ClientOnlyDestroy : 1; // 0x01(0x01)
	char bSoundOccluder : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	int8_t DynamicState; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int16_t OwnerLayoutItemIndex; // 0x04(0x02)
	int16_t AttachParentIndex; // 0x06(0x02)
	struct FName AttachParentSocketName; // 0x08(0x08)
	float HealthPoint; // 0x10(0x04)
	float RelayDamageRatioToParent; // 0x14(0x04)
	float OverlapImpactResistRatio; // 0x18(0x04)
	float OverlapImpactResistMax; // 0x1c(0x04)
	struct USceneComponent* Component; // 0x20(0x08)
	struct UStaticMeshComponent* DecalReceiver; // 0x28(0x08)
	struct TArray<struct UPrimitiveComponent*> RemainMeshComponents; // 0x30(0x10)
	struct UCrowWorldBreakableAUD* BreakableAUD; // 0x40(0x08)
	struct UCrowWorldDestructionAUD* DestructionAUD; // 0x48(0x08)
	struct UCrowWorldDamageCheckerBase* DamageChecker; // 0x50(0x08)
};

// ScriptStruct CrowWorld.CrowWorldAnimationState
// Size: 0x60 (Inherited: 0x00)
struct FCrowWorldAnimationState {
	int16_t LayoutItemIndex; // 0x00(0x02)
	int16_t DynamicStateIndex; // 0x02(0x02)
	char bAnimationFinished : 1; // 0x04(0x01)
	char bAnimateRotation : 1; // 0x04(0x01)
	char bAnimateLocation : 1; // 0x04(0x01)
	char pad_4_3 : 5; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TimeBegin; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	struct UCurveFloat* AnimationCurve; // 0x10(0x08)
	struct FVector SlideLocationFrom; // 0x18(0x0c)
	struct FVector SlideLocationTo; // 0x24(0x0c)
	struct FVector HingeLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FQuat HingeRotationFrom; // 0x40(0x10)
	struct FQuat HingeRotationTo; // 0x50(0x10)
};

// ScriptStruct CrowWorld.CrowWorldAnimationInstance
// Size: 0x90 (Inherited: 0x00)
struct FCrowWorldAnimationInstance {
	int8_t DynamicState; // 0x00(0x01)
	char bIsValidInstance : 1; // 0x01(0x01)
	char bTriggersActivated : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform InitialRelativeTransform; // 0x10(0x30)
	struct FTransform InitialWorldTransform; // 0x40(0x30)
	struct USceneComponent* LayoutItemComponent; // 0x70(0x08)
	struct TArray<struct UCrowWorldTrigger*> TriggerComponents; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct CrowWorld.CrowWorldEditorActorBuildCache
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldEditorActorBuildCache {
	struct TArray<struct TWeakObjectPtr<struct ACrowWorldEditorActor>> TargetActors; // 0x00(0x10)
	int32_t CurrentIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowWorld.CrowWorldAutoDetectParentPair
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldAutoDetectParentPair {
	uint32_t ChildActorIndex; // 0x00(0x04)
	uint32_t ParentActorIndex; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLayoutActorCache
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldLayoutActorCache {
	struct AActor* Actor; // 0x00(0x08)
	struct USceneComponent* RootComponent; // 0x08(0x08)
	struct FTransform ActorTransform; // 0x10(0x30)
	struct TArray<struct USceneComponent*> Components; // 0x40(0x10)
};

// ScriptStruct CrowWorld.CrowWorldLinkedActorData
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldLinkedActorData {
	uint32_t ChildWorldActorIndex; // 0x00(0x04)
	uint32_t ParentWorldActorIndex; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLandmarkData
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldLandmarkData {
	struct TArray<uint32_t> ActorIndexArray; // 0x00(0x10)
};

// ScriptStruct CrowWorld.CrowWorldClusterData
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldClusterData {
	uint32_t ClusterIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<uint32_t> SectorIndexArray; // 0x08(0x10)
	struct TArray<uint32_t> ActorIndexArray; // 0x18(0x10)
};

// ScriptStruct CrowWorld.CrowWorldSectorData
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSectorData {
	uint32_t SectorIndex; // 0x00(0x04)
	uint32_t ParentClusterIndex; // 0x04(0x04)
	struct TArray<struct FCrowWorldActorData> ActorArray; // 0x08(0x10)
	int16_t ActorDestructibleFlagCount; // 0x18(0x02)
	int16_t LayoutItemDestructibleFlagCount; // 0x1a(0x02)
	int16_t LayoutItemDynamicStateCount; // 0x1c(0x02)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct CrowWorld.CrowWorldActorData
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldActorData {
	uint32_t WorldActorIndex; // 0x00(0x04)
	int16_t ActorLayoutIndex; // 0x04(0x02)
	int16_t ActorDestructibleFlagLookupInSector; // 0x06(0x02)
	int16_t ActorDestructibleFlagLookupInCluster; // 0x08(0x02)
	int16_t ActorDestructibleFlagLookupInLandmark; // 0x0a(0x02)
	int16_t DestructibleFlagOrigin; // 0x0c(0x02)
	int16_t DynamicStateOrigin; // 0x0e(0x02)
	struct FTransform WorldTransform; // 0x10(0x30)
};

// ScriptStruct CrowWorld.CrowWorldActorLayout
// Size: 0xf8 (Inherited: 0x00)
struct FCrowWorldActorLayout {
	char UseActorDestruction : 1; // 0x00(0x01)
	char UseWorldActorLOD : 1; // 0x00(0x01)
	char SkipItemDestroyedFlag : 1; // 0x00(0x01)
	char DestroyedFlagInCluster : 1; // 0x00(0x01)
	char DestroyedFlagInLandmark : 1; // 0x00(0x01)
	char AutoDetectParentActor : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCrowWorldActorLayoutItem> LayoutItems; // 0x08(0x10)
	struct FCrowWorldActorLayoutItemLookups LayoutItemLookups; // 0x18(0x40)
	struct TArray<struct FCrowWorldLayoutItemAnimation> LayoutItemAnimations; // 0x58(0x10)
	struct FCrowWorldActorDestruction ActorDestruction; // 0x68(0x18)
	struct FCrowWorldActorLOD ActorLOD; // 0x80(0x78)
};

// ScriptStruct CrowWorld.CrowWorldActorLOD
// Size: 0x78 (Inherited: 0x00)
struct FCrowWorldActorLOD {
	float BoundingSphereRadius; // 0x00(0x04)
	struct FVector BoundingSphereCenter; // 0x04(0x0c)
	struct TArray<float> LODLevelCameraDistanceOverride; // 0x10(0x10)
	struct TArray<struct FCrowWorldActorMeshLOD> MeshLODArray; // 0x20(0x10)
	struct TArray<struct FBitFlagArray> LayoutItemShowFlags; // 0x30(0x10)
	struct TArray<struct FBitFlagArray> MeshLODShowFlags; // 0x40(0x10)
	struct FBitFlagArray CameraDistanceOverrideFlags; // 0x50(0x18)
	struct TArray<float> CameraDistanceOverrides; // 0x68(0x10)
};

// ScriptStruct CrowWorld.CrowWorldActorMeshLOD
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldActorMeshLOD {
	int8_t LODLevelMin; // 0x00(0x01)
	int8_t LODLevelMax; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UStaticMesh* MeshLOD; // 0x08(0x08)
};

// ScriptStruct CrowWorld.CrowWorldActorDestruction
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldActorDestruction {
	float MaxHP; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCrowWorldDamageCheckerBase* DamageChecker; // 0x08(0x08)
	struct UCrowWorldDestructionAUD* DestructionAUD; // 0x10(0x08)
};

// ScriptStruct CrowWorld.CrowWorldLayoutItemAnimation
// Size: 0x108 (Inherited: 0x00)
struct FCrowWorldLayoutItemAnimation {
	char IsValidAnimation : 1; // 0x00(0x01)
	char bHasStateHolderParent : 1; // 0x00(0x01)
	char bHasAnyGeometry : 1; // 0x00(0x01)
	char bHasBody : 1; // 0x00(0x01)
	char bHasTrigger1 : 1; // 0x00(0x01)
	char bHasTrigger2 : 1; // 0x00(0x01)
	char bHasChecker1 : 1; // 0x00(0x01)
	char bHasChecker2 : 1; // 0x00(0x01)
	char bHasTrace : 1; // 0x01(0x01)
	char bHasHinge1 : 1; // 0x01(0x01)
	char bHasHinge2 : 1; // 0x01(0x01)
	char bHasSlideTarget : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	int16_t StateHolderParentIndex; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString LocalTextKey_Open; // 0x08(0x10)
	struct FString LocalTextKey_Close; // 0x18(0x10)
	struct FVector HingeLocation1; // 0x28(0x0c)
	struct FRotator HingeRotator1; // 0x34(0x0c)
	struct FVector HingeLocation2; // 0x40(0x0c)
	struct FRotator HingeRotator2; // 0x4c(0x0c)
	struct FVector SlideTarget; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct UBodySetup*> BodySetups; // 0x68(0x10)
	struct FCrowWorldLayoutItemAnim AnimOpen; // 0x78(0x30)
	struct FCrowWorldLayoutItemAnim AnimClose; // 0xa8(0x30)
	struct FCrowWorldLayoutItemAnim AnimBlocked; // 0xd8(0x30)
};

// ScriptStruct CrowWorld.CrowWorldLayoutItemAnim
// Size: 0x30 (Inherited: 0x00)
struct FCrowWorldLayoutItemAnim {
	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* AnimationCurve; // 0x08(0x08)
	struct UAkAudioEvent* Sound; // 0x10(0x08)
	bool HasQuickAction; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DurationQuick; // 0x1c(0x04)
	struct UCurveFloat* AnimationCurveQuick; // 0x20(0x08)
	struct UAkAudioEvent* SoundQuick; // 0x28(0x08)
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItemLookups
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldActorLayoutItemLookups {
	struct TArray<int16_t> LayoutToDestructibleFlag; // 0x00(0x10)
	struct TArray<int16_t> DestructibleFlagToLayout; // 0x10(0x10)
	struct TArray<int16_t> LayoutToDynamicStates; // 0x20(0x10)
	struct TArray<int16_t> DynamicStatesToLayout; // 0x30(0x10)
};

// ScriptStruct CrowWorld.CrowWorldActorLayoutItem
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldActorLayoutItem {
	char bDestructible : 1; // 0x00(0x01)
	char bDestroyParent : 1; // 0x00(0x01)
	char bDestroyOnVehicleOverlap : 1; // 0x00(0x01)
	char bDestroyByShockwave : 1; // 0x00(0x01)
	char bNeedDecalReceiver : 1; // 0x00(0x01)
	char bInteraction : 1; // 0x00(0x01)
	char bInteractionParent : 1; // 0x00(0x01)
	char bInteractionChild : 1; // 0x00(0x01)
	char AutoDetectParent : 1; // 0x01(0x01)
	char ShakeOnDamage : 1; // 0x01(0x01)
	char ClientOnlyDestroy : 1; // 0x01(0x01)
	char ClientDecorationOnly : 1; // 0x01(0x01)
	char bSoundOccluder : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	int16_t OwnerLayoutItemIndex; // 0x02(0x02)
	int16_t AttachParentLayoutIndex; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FName AttachParentSocket; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct UCrowWorldAsset* WorldAsset; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct CrowWorld.CrowWorldDestruction
// Size: 0x01 (Inherited: 0x00)
struct FCrowWorldDestruction {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowWorld.CrowWorldDestructionMeshData
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldDestructionMeshData {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	struct FName CollisionProfileName; // 0x18(0x08)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSetting
// Size: 0x138 (Inherited: 0x00)
struct FCrowWorldDestructionSetting {
	float DurationMin; // 0x00(0x04)
	float DurationMax; // 0x04(0x04)
	float ExplosionRadialDamage; // 0x08(0x04)
	float ExplosionDamageRadius; // 0x0c(0x04)
	float ExplosionDamageDelay; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FCrowWorldDestructionSimulation Simulation; // 0x18(0x90)
	struct FCrowWorldDestructionSimulationActor SimulationActor; // 0xa8(0x18)
	struct FCrowWorldDestructionFxStart FxStart; // 0xc0(0x28)
	struct FCrowWorldDestructionFxAttached FxAttached; // 0xe8(0x20)
	struct FCrowWorldDestructionFxHitGround FxHitGround; // 0x108(0x30)
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxHitGround
// Size: 0x30 (Inherited: 0x00)
struct FCrowWorldDestructionFxHitGround {
	struct FName GroundActorTag; // 0x00(0x08)
	struct TArray<struct FName> HitBoneNames; // 0x08(0x10)
	struct UFXSystemAsset* FxHitGound; // 0x18(0x08)
	struct UAkAudioEvent* SoundHitGround; // 0x20(0x08)
	int32_t MaxHitCount; // 0x28(0x04)
	float HitCoolTime; // 0x2c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxAttached
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldDestructionFxAttached {
	struct TArray<struct FName> AttachSocketNames; // 0x00(0x10)
	struct UFXSystemAsset* FxAttachToSocket; // 0x10(0x08)
	bool StopEmitterAfterHitGround; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowWorld.CrowWorldDestructionFxStart
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldDestructionFxStart {
	struct FName FxSocketName; // 0x00(0x08)
	struct UFXSystemAsset* FxOnDestroyed; // 0x08(0x08)
	struct UAkAudioEvent* SoundDestroyed; // 0x10(0x08)
	struct TArray<struct UFXSystemAsset*> FxOnDestroyedArray; // 0x18(0x10)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSimulationActor
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldDestructionSimulationActor {
	struct ACrowWorldSimulationActor* SimulationActor; // 0x00(0x08)
	struct FName CollisionProfileName; // 0x08(0x08)
	float ImpulseMagnitude; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSimulation
// Size: 0x90 (Inherited: 0x00)
struct FCrowWorldDestructionSimulation {
	struct UStaticMesh* SimulationSMC; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverridesSMC; // 0x08(0x10)
	float MassOverrideSMC; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct USkeletalMesh* SimulationSKC; // 0x20(0x08)
	struct TArray<struct FName> SimulationBoneNames; // 0x28(0x10)
	struct TArray<struct FName> HideBoneNames; // 0x38(0x10)
	struct TArray<struct UMaterialInterface*> MaterialOverridesSKC; // 0x48(0x10)
	struct FName ImpulseSocket; // 0x58(0x08)
	struct FName ImpulseTargetBone; // 0x60(0x08)
	float ImpulseMagnitude; // 0x68(0x04)
	struct FName CollisionProfileName; // 0x6c(0x08)
	bool UseBreakingBones; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<struct FName> BreakingBoneNames; // 0x78(0x10)
	float BreakingBoneTime; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldDestructionLink
// Size: 0xb8 (Inherited: 0x00)
struct FCrowWorldDestructionLink {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<uint32_t, uint32_t> LinkedParentActors; // 0x08(0x50)
	struct TMap<uint32_t, struct FCrowWorldDestructionLinkInfo> DestructionLinkInfos; // 0x58(0x50)
	struct TArray<uint32_t> WorldActorIndexArray; // 0xa8(0x10)
};

// ScriptStruct CrowWorld.CrowWorldDestructionLinkInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldDestructionLinkInfo {
	int32_t IndexOrigin; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncData
// Size: 0x70 (Inherited: 0x00)
struct FCrowWorldDestructionSyncData {
	struct FVector Origin; // 0x00(0x0c)
	float MaxRadius; // 0x0c(0x04)
	struct TMap<uint32_t, struct FCrowWorldDestructionSyncDataActor> ActorDataCollection; // 0x10(0x50)
	struct TArray<uint32_t> FullyDestroyedActors; // 0x60(0x10)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncDataActor
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldDestructionSyncDataActor {
	struct TArray<int16_t> DestroyedLayoutItems; // 0x00(0x10)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncCache
// Size: 0x68 (Inherited: 0x00)
struct FCrowWorldDestructionSyncCache {
	char bCacheInitialized : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Origin; // 0x04(0x0c)
	float DamageRadius; // 0x10(0x04)
	float ShockwaveRadius; // 0x14(0x04)
	struct TMap<uint32_t, struct FCrowWorldDestructionActorItem> SyncCacheActors; // 0x18(0x50)
};

// ScriptStruct CrowWorld.CrowWorldDestructionActorItem
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldDestructionActorItem {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct CrowWorld.CrowWorldDestructionSyncCacheItem
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldDestructionSyncCacheItem {
	struct ACrowWorldActor* WorldActor; // 0x00(0x08)
	int16_t LayoutItemIndex; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct CrowWorld.CrowWorldGrid
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldGrid {
	int8_t GridLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GridSize; // 0x04(0x04)
	float GridSizeHalf; // 0x08(0x04)
	float HeightLimit; // 0x0c(0x04)
	struct FVector2D WorldOrigin2D; // 0x10(0x08)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeCollector
// Size: 0x38 (Inherited: 0x00)
struct FCrowWorldLightProbeCollector {
	struct TArray<struct FCrowWorldLightProbeAssetData> LightProbeAssetDatas; // 0x00(0x10)
	struct TArray<struct FTransform> LightPathArray; // 0x10(0x10)
	struct UWorld* World; // 0x20(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x28(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x30(0x08)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeAssetData
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldLightProbeAssetData {
	struct UCrowWorldAssetLightProbe* LightProbeAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform LightProbeTransform; // 0x10(0x30)
	float Intensity; // 0x40(0x04)
	float AttenuationRadius; // 0x44(0x04)
	float SourceRadius; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGrid
// Size: 0xb8 (Inherited: 0x00)
struct FCrowWorldLightProbeGrid {
	struct TArray<struct FCrowWorldLightProbeGridValue> LightProbeGridData; // 0x00(0x10)
	struct FCrowWorldLightProbeSetting LightProbeSetting; // 0x10(0x4c)
	struct FCrowWorldLightProbeVolumeSetting LightProbeVolumeSetting; // 0x5c(0x20)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UWorld* World; // 0x80(0x08)
	struct FVector LightForward; // 0x88(0x0c)
	struct FVector WorldPosition; // 0x94(0x0c)
	float Radius; // 0xa0(0x04)
	float Height; // 0xa4(0x04)
	int32_t CheckStep; // 0xa8(0x04)
	int32_t GridCountRadius; // 0xac(0x04)
	bool ShowDebug; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeVolumeSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldLightProbeVolumeSetting {
	int32_t VolumeOpenCheckStep; // 0x00(0x04)
	int32_t OpenGroupDistance; // 0x04(0x04)
	int32_t OpenGroupRadius; // 0x08(0x04)
	int32_t OpenAreaPercentMax; // 0x0c(0x04)
	float DistanceToSurface; // 0x10(0x04)
	int32_t MaxLightProbePerVolume; // 0x14(0x04)
	int32_t MinOpenCount; // 0x18(0x04)
	int32_t MaxOpenCount; // 0x1c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeSetting
// Size: 0x4c (Inherited: 0x00)
struct FCrowWorldLightProbeSetting {
	struct FLinearColor LightColor; // 0x00(0x10)
	float LightCheckDistance; // 0x10(0x04)
	float SourceRadius; // 0x14(0x04)
	float OverlapCheckRadius; // 0x18(0x04)
	int32_t OpenCheckExtent; // 0x1c(0x04)
	int32_t OpenCheckStep; // 0x20(0x04)
	int32_t OpenCheckUpperLimitPercent; // 0x24(0x04)
	int32_t OpenCheckThresholdPercent; // 0x28(0x04)
	float MinDistanceToHitSurface; // 0x2c(0x04)
	float MaxDistanceToHitSurface; // 0x30(0x04)
	float IntensityMultiplyMin; // 0x34(0x04)
	float IntensityMultiplyMax; // 0x38(0x04)
	float AttenuationRadiusMin; // 0x3c(0x04)
	float AttenuationRadiusMax; // 0x40(0x04)
	float MaxDrawDistance; // 0x44(0x04)
	float MaxDistanceFadeRange; // 0x48(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGridValue
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldLightProbeGridValue {
	struct FVector Location; // 0x00(0x0c)
	int32_t Flag; // 0x0c(0x04)
	float OpenRatio; // 0x10(0x04)
	int32_t Increment; // 0x14(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLightProbeGridKey
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldLightProbeGridKey {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLightGroup
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldLightGroup {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float OpenRatio; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> LocationArray; // 0x18(0x10)
};

// ScriptStruct CrowWorld.CrowWorldLODData
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldLODData {
	struct TArray<struct FBitFlagArray> LayoutItemShowFlags; // 0x00(0x10)
	struct TArray<struct FBitFlagArray> MeshLODShowFlags; // 0x10(0x10)
};

// ScriptStruct CrowWorld.CrowWorldMeshLOD
// Size: 0x02 (Inherited: 0x00)
struct FCrowWorldMeshLOD {
	int8_t LODLevelMin; // 0x00(0x01)
	int8_t LODLevelMax; // 0x01(0x01)
};

// ScriptStruct CrowWorld.CrowWorldLODState
// Size: 0x38 (Inherited: 0x00)
struct FCrowWorldLODState {
	char pad_0[0x28]; // 0x00(0x28)
	struct ACrowWorldActor* WorldActor; // 0x28(0x08)
	struct UCrowWorldAnimator* WorldAnimator; // 0x30(0x08)
};

// ScriptStruct CrowWorld.CrowWorldSoundSetting
// Size: 0x04 (Inherited: 0x00)
struct FCrowWorldSoundSetting {
	float OcclusionRefreshInterval; // 0x00(0x04)
};

// ScriptStruct CrowWorld.CrowWorldActorLODSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldActorLODSetting {
	struct TArray<float> LODLevelCameraDistance; // 0x00(0x10)
	int32_t MinNumberOfCores; // 0x10(0x04)
	int32_t MaxNumberOfCores; // 0x14(0x04)
	int32_t MinCountPerThread; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldTriggerCollisionSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldTriggerCollisionSetting {
	struct FName CollisionName_Body; // 0x00(0x08)
	struct FName CollisionName_Activator; // 0x08(0x08)
	struct FName CollisionName_Checker; // 0x10(0x08)
	struct FName CollisionName_Trace; // 0x18(0x08)
};

// ScriptStruct CrowWorld.CrowWorldDataHandlerComponentItem
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldDataHandlerComponentItem {
	struct USceneComponent* ComponentClass; // 0x00(0x08)
	struct UCrowWorldAsset* WorldAssetClass; // 0x08(0x08)
};

// ScriptStruct CrowWorld.CrowWorldDataHandlerActorItem
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldDataHandlerActorItem {
	struct AActor* ActorClass; // 0x00(0x08)
	struct UCrowWorldDataActorCheckerBase* Checker; // 0x08(0x08)
};

// ScriptStruct CrowWorld.CrowWorldMapLightSetting
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldMapLightSetting {
	struct UPointLightComponent* PointLightFP; // 0x00(0x08)
	struct FVector LightFPOffset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowWorld.CrowWorldCameraAttachedFX
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldCameraAttachedFX {
	struct UFXSystemAsset* FxAsset; // 0x00(0x08)
	enum class ERendererStencilMask CustomDepthStencilMask; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CustomDepthStencilValue; // 0x0c(0x04)
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterOverride
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldMaterialParameterOverride {
	struct UMaterialParameterCollection* TargetCollection; // 0x00(0x08)
	struct TArray<struct FCrowWorldMaterialParameterScalar> ScalarValues; // 0x08(0x10)
	struct TArray<struct FCrowWorldMaterialParameterVector> VectorValues; // 0x18(0x10)
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterVector
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldMaterialParameterVector {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor DefaultValue; // 0x08(0x10)
};

// ScriptStruct CrowWorld.CrowWorldMaterialParameterScalar
// Size: 0x0c (Inherited: 0x00)
struct FCrowWorldMaterialParameterScalar {
	struct FName ParameterName; // 0x00(0x08)
	float DefaultValue; // 0x08(0x04)
};

// ScriptStruct CrowWorld.CrowWorldLevelStreamData
// Size: 0x60 (Inherited: 0x00)
struct FCrowWorldLevelStreamData {
	struct TArray<struct AActor*> LevelActors; // 0x00(0x10)
	struct TMap<uint32_t, struct FCrowWorldGridActors> GridActors; // 0x10(0x50)
};

// ScriptStruct CrowWorld.CrowWorldGridActors
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldGridActors {
	char bNearGrid : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UStaticMeshComponent*> SMCList; // 0x08(0x10)
};

// ScriptStruct CrowWorld.CrowWorldClientObjects
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldClientObjects {
	struct UCrowWorldLODUpdater* LODUpdater; // 0x00(0x08)
	struct UCrowWorldOcclusion* WorldOcclusion; // 0x08(0x08)
	struct UCrowWorldFoliage* WorldFoliage; // 0x10(0x08)
	struct UCrowWorldTerrainSetup* WorldTerrainSetup; // 0x18(0x08)
};

// ScriptStruct CrowWorld.CrowWorldSyncIndexes
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldSyncIndexes {
	struct TArray<uint32_t> EnterSectorIndex; // 0x00(0x10)
	struct TArray<uint32_t> LeaveSectorIndex; // 0x10(0x10)
	struct TArray<uint32_t> EnterClusterIndex; // 0x20(0x10)
	struct TArray<uint32_t> LeaveClusterIndex; // 0x30(0x10)
};

// ScriptStruct CrowWorld.CrowWorldPlayerControllerInfo
// Size: 0x70 (Inherited: 0x00)
struct FCrowWorldPlayerControllerInfo {
	float NextUpdateSynTime; // 0x00(0x04)
	char IsValidController; // 0x04(0x01)
	char bServerInitAck; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	uint32_t SectorIndex; // 0x08(0x04)
	uint32_t ClusterIndex; // 0x0c(0x04)
	struct FBox SectorBox; // 0x10(0x1c)
	struct FBox ClusterBox; // 0x2c(0x1c)
	struct FVector LastUpdateSynLocation; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct ACrowWorldReplicationController* ReplicationController; // 0x58(0x08)
	struct APlayerController* PlayerController; // 0x60(0x08)
	struct UCrowWorldSyncClientWorker* ClientWorker; // 0x68(0x08)
};

// ScriptStruct CrowWorld.CrowWorldReplicationSyncData
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldReplicationSyncData {
	struct TArray<uint32_t> SectorDropArray; // 0x00(0x10)
	struct TArray<uint32_t> ClusterDropArray; // 0x10(0x10)
	struct TArray<struct FCrowWorldReplicationCluster> ClusterArray; // 0x20(0x10)
	struct TArray<struct FCrowWorldReplicationSector> SectorArray; // 0x30(0x10)
};

// ScriptStruct CrowWorld.CrowWorldReplicationSector
// Size: 0x48 (Inherited: 0x00)
struct FCrowWorldReplicationSector {
	char pad_0[0x4]; // 0x00(0x04)
	uint32_t SectorIndex; // 0x04(0x04)
	struct FBitFlagArray ActorDestroyedFlags; // 0x08(0x18)
	struct FBitFlagArray LayoutItemDestroyedFlags; // 0x20(0x18)
	struct TArray<int8_t> LayoutItemDynamicStates; // 0x38(0x10)
};

// ScriptStruct CrowWorld.CrowWorldReplicationCluster
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldReplicationCluster {
	char pad_0[0x4]; // 0x00(0x04)
	uint32_t ClusterIndex; // 0x04(0x04)
	struct FBitFlagArray ActorDestroyedFlags; // 0x08(0x18)
};

// ScriptStruct CrowWorld.CrowWorldReplicationGlobalData
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldReplicationGlobalData {
	struct FCrowWorldReplicationLandmark LandmarkData; // 0x00(0x18)
};

// ScriptStruct CrowWorld.CrowWorldReplicationLandmark
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldReplicationLandmark {
	struct FBitFlagArray ActorDestroyedFlags; // 0x00(0x18)
};

// ScriptStruct CrowWorld.CrowWorldSMCShakingState
// Size: 0x90 (Inherited: 0x00)
struct FCrowWorldSMCShakingState {
	struct FTransform BeginShakeTransform; // 0x00(0x30)
	struct FTransform NextShakeTransform; // 0x30(0x30)
	char Shaking : 1; // 0x60(0x01)
	char NextTimeStep : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float ShakeDuration; // 0x64(0x04)
	float ShakeTimeLeft; // 0x68(0x04)
	float ShakeStepTime; // 0x6c(0x04)
	float ShakeStepLeft; // 0x70(0x04)
	float ShakeOffset; // 0x74(0x04)
	struct FVector ShakeOffsetVector; // 0x78(0x0c)
	float ShakeOffsetMultiply; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct CrowWorld.CrowWorldClientDropClusterIndex
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldClientDropClusterIndex {
	char pad_0[0x4]; // 0x00(0x04)
	uint32_t ClusterIndex; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldClientDropSectorIndex
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldClientDropSectorIndex {
	char pad_0[0x4]; // 0x00(0x04)
	uint32_t SectorIndex; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldClientClusterActorKey
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldClientClusterActorKey {
	uint32_t SectorIndex; // 0x00(0x04)
	int32_t ActorLoopIndex; // 0x04(0x04)
};

// ScriptStruct CrowWorld.CrowWorldAsyncSectorData
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldAsyncSectorData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FCrowWorldReplicationSector ReceivedData; // 0x08(0x48)
};

// ScriptStruct CrowWorld.CrowWorldClientCluster
// Size: 0x70 (Inherited: 0x00)
struct FCrowWorldClientCluster {
	struct FCrowWorldReplicationCluster ClusterData; // 0x00(0x20)
	struct TMap<uint32_t, struct ACrowWorldActor*> WorldActors; // 0x20(0x50)
};

// ScriptStruct CrowWorld.CrowWorldClientSector
// Size: 0xf0 (Inherited: 0x00)
struct FCrowWorldClientSector {
	char pad_0[0x8]; // 0x00(0x08)
	struct FCrowWorldReplicationSector SectorData; // 0x08(0x48)
	struct TMap<uint32_t, struct ACrowWorldActor*> WorldActors; // 0x50(0x50)
	struct TMap<uint32_t, struct ACrowWorldActor*> ClusterActors; // 0xa0(0x50)
};

// ScriptStruct CrowWorld.CrowWorldSyncServerControllerContainer
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldSyncServerControllerContainer {
	struct TMap<struct ACrowWorldReplicationController*, int32_t> Controllers; // 0x00(0x50)
};

// ScriptStruct CrowWorld.CrowWorldSyncServerPlayerState
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSyncServerPlayerState {
	struct TArray<uint32_t> ActiveSectors; // 0x00(0x10)
	struct TArray<uint32_t> ActiveClusters; // 0x10(0x10)
};

