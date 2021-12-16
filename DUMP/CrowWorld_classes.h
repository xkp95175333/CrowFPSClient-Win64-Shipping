// Class CrowWorld.CrowFoliageISMC
// Size: 0x740 (Inherited: 0x6a0)
struct UCrowFoliageISMC : UFoliageInstancedStaticMeshComponent {
	struct TMap<int32_t, float> InstanceDamageTotal; // 0x698(0x50)
	struct TMap<int32_t, struct FCrowWorldSMCShakingState> ShakingStates; // 0x6e8(0x50)
};

// Class CrowWorld.CrowFoliageReplicationActor
// Size: 0x240 (Inherited: 0x220)
struct ACrowFoliageReplicationActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct FBitFlagArray BitFlagArray; // 0x228(0x18)
};

// Class CrowWorld.CrowMeshDestructionActor
// Size: 0x2b0 (Inherited: 0x220)
struct ACrowMeshDestructionActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct UCrowWorldDestructionAUD* DestructionAUD; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
	enum class ECrowWorldDestructionCause DestructionCause; // 0x238(0x01)
	bool IsDedicatedServer; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct USkeletalMeshComponent* SimulationSKC; // 0x240(0x08)
	struct ADestructibleActor* DestructibleActor; // 0x248(0x08)
	struct UDestructibleComponent* DestructibleComponent; // 0x250(0x08)
	float DestroyTime; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FTimerHandle DestroyTimerHandle; // 0x260(0x08)
	float ExplosionDamage; // 0x268(0x04)
	float ExplosionDamageRadius; // 0x26c(0x04)
	float ExplosionDamageTime; // 0x270(0x04)
	float HitGroundTime; // 0x274(0x04)
	int32_t HitGroundCount; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UFXSystemComponent*> FxComponents; // 0x280(0x10)
	struct TArray<struct UFXSystemComponent*> FxComponentsAttached; // 0x290(0x10)
	struct TArray<struct UPrimitiveComponent*> TemporalMeshes; // 0x2a0(0x10)

	void OnTimerHide(); // Function CrowWorld.CrowMeshDestructionActor.OnTimerHide // (Final|Native|Protected) // @ game+0x10cee70
	void OnTimerDestroy(); // Function CrowWorld.CrowMeshDestructionActor.OnTimerDestroy // (Final|Native|Protected) // @ game+0x10cee50
	void OnHitSimulationSKC(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult HitResult); // Function CrowWorld.CrowMeshDestructionActor.OnHitSimulationSKC // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x10cec70
	void OnHitDestructibleMesh(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult HitResult); // Function CrowWorld.CrowMeshDestructionActor.OnHitDestructibleMesh // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x10cea90
};

// Class CrowWorld.CrowWorldActor
// Size: 0x2e8 (Inherited: 0x220)
struct ACrowWorldActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct UCrowWorldAnimator* WorldAnimator; // 0x228(0x08)
	struct ACrowWorldReplicationActor* ReplicationActor; // 0x230(0x08)
	struct UCrowWorldLODUpdater* LODUpdater; // 0x238(0x08)
	char UseActorDestruction : 1; // 0x240(0x01)
	char UseWorldActorLOD : 1; // 0x240(0x01)
	char DestroyedFlagInCluster : 1; // 0x240(0x01)
	char DestroyedFlagInLandmark : 1; // 0x240(0x01)
	char SkipItemDestroyedFlag : 1; // 0x240(0x01)
	char InitializedLayoutItems : 1; // 0x240(0x01)
	char InitializedLOD : 1; // 0x240(0x01)
	char FullyDestroyed : 1; // 0x240(0x01)
	char pad_241[0x1]; // 0x241(0x01)
	int16_t ActorLayoutIndex; // 0x242(0x02)
	uint32_t WorldActorIndex; // 0x244(0x04)
	uint32_t SectorIndex; // 0x248(0x04)
	uint32_t ClusterIndex; // 0x24c(0x04)
	int16_t ActorDestructibleFlagLookupInSector; // 0x250(0x02)
	int16_t ActorDestructibleFlagLookupInCluster; // 0x252(0x02)
	int16_t ActorDestructibleFlagLookupInLandmark; // 0x254(0x02)
	int16_t LayoutItemDestructibleFlagOrigin; // 0x256(0x02)
	int16_t LayoutItemDynamicStateOrigin; // 0x258(0x02)
	char pad_25A[0x6]; // 0x25a(0x06)
	struct FCrowWorldActorLayoutItemLookups LayoutItemLookups; // 0x260(0x40)
	struct TArray<struct FCrowWorldActorLayoutItemInstance> LayoutItemInstances; // 0x2a0(0x10)
	struct FCrowWorldActorDestructionState ActorDestructionState; // 0x2b0(0x28)
	struct TArray<struct FCrowWorldActorLODState> ActorLODStates; // 0x2d8(0x10)
};

// Class CrowWorld.CrowWorldAnimator
// Size: 0xa0 (Inherited: 0x28)
struct UCrowWorldAnimator : UObject {
	char IsInitialized : 1; // 0x28(0x01)
	char TriggersEnabled : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCrowWorldMapConfig* MapConfig; // 0x30(0x08)
	struct ACrowWorldActor* WorldActor; // 0x38(0x08)
	bool IsAnimationBlocked; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FCrowWorldLayoutItemAnimation> AnimationDatas; // 0x48(0x10)
	struct TArray<struct FCrowWorldAnimationInstance> AnimationInstances; // 0x58(0x10)
	struct TArray<struct FCrowWorldAnimationState> ActiveAnimationStates; // 0x68(0x10)
	struct TArray<struct UCrowWorldSMC*> ShakingSMCArray; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
};

// Class CrowWorld.CrowWorldAsset
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldAsset : UObject {
};

// Class CrowWorld.CrowWorldAssetDecal
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldAssetDecal : UCrowWorldAsset {
};

// Class CrowWorld.CrowWorldAssetLightProbe
// Size: 0x70 (Inherited: 0x28)
struct UCrowWorldAssetLightProbe : UCrowWorldAsset {
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform LightPathTransform; // 0x30(0x30)
	struct FVector SeperationNormalFromSurface; // 0x60(0x0c)
	float OpenRatio; // 0x6c(0x04)
};

// Class CrowWorld.CrowWorldAssetPointLight
// Size: 0x30 (Inherited: 0x28)
struct UCrowWorldAssetPointLight : UCrowWorldAsset {
	struct UPointLightComponent* PointLightData; // 0x28(0x08)
};

// Class CrowWorld.CrowWorldAssetSpotLight
// Size: 0x30 (Inherited: 0x28)
struct UCrowWorldAssetSpotLight : UCrowWorldAsset {
	struct USpotLightComponent* SpotLightData; // 0x28(0x08)
};

// Class CrowWorld.CrowWorldAssetStaticMesh
// Size: 0x60 (Inherited: 0x28)
struct UCrowWorldAssetStaticMesh : UCrowWorldAsset {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x28(0x28)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInterface>> MaterialOverrides; // 0x50(0x10)
};

// Class CrowWorld.CrowWorldBFL
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldBFL : UBlueprintFunctionLibrary {

	bool IsPackageEditable(struct UPackage* InPackage); // Function CrowWorld.CrowWorldBFL.IsPackageEditable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10ce950
	void ChangeStaticMeshToDebrisMesh(struct TArray<struct UObject*> SelectedBlueprints); // Function CrowWorld.CrowWorldBFL.ChangeStaticMeshToDebrisMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10ce870
};

// Class CrowWorld.CrowWorldBreakableAUD
// Size: 0x60 (Inherited: 0x28)
struct UCrowWorldBreakableAUD : UAssetUserData {
	struct UCrowWorldDamageCheckerBase* DamageChecker; // 0x28(0x08)
	char Unbreakable : 1; // 0x30(0x01)
	char TreatAsTerrain : 1; // 0x30(0x01)
	char DestroyParent : 1; // 0x30(0x01)
	char AutoDetectParent : 1; // 0x30(0x01)
	char DestroyOnVehicleOverlap : 1; // 0x30(0x01)
	char DestroyOnThrowWeaponHit : 1; // 0x30(0x01)
	char DestroyOnCharacterAnimation : 1; // 0x30(0x01)
	char SlideOnBeginVaultAction : 1; // 0x30(0x01)
	char DestroyByShockwave : 1; // 0x31(0x01)
	char NeedDecalReceiver : 1; // 0x31(0x01)
	char NetworkSyncToLargeArea : 1; // 0x31(0x01)
	char VehicleWheelCrushDamage : 1; // 0x31(0x01)
	char ShakeOnDamage : 1; // 0x31(0x01)
	char PreventAttachChild : 1; // 0x31(0x01)
	char pad_31_6 : 2; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float AttachChildDistance; // 0x34(0x04)
	char DestroyAttachChildOnImpactCollapse : 1; // 0x38(0x01)
	char DestroyAttachChildOnExplosion : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ShakeDuration; // 0x3c(0x04)
	float ShakeOffset; // 0x40(0x04)
	char ClientOnlyDestroy : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float RelayDamageRatioToParent; // 0x48(0x04)
	float MaxHP; // 0x4c(0x04)
	float OverlapImpactResistRatio; // 0x50(0x04)
	float OverlapImpactResistMax; // 0x54(0x04)
	float DecalScaleMultiply; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class CrowWorld.CrowWorldClusterActor
// Size: 0x230 (Inherited: 0x220)
struct ACrowWorldClusterActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	int32_t Value; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class CrowWorld.CrowWorldDamageCheckerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDamageCheckerBase : UObject {
};

// Class CrowWorld.CrowWorldOnlyPointDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldOnlyPointDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldOnlyRadialDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldOnlyRadialDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldOnlyVehicleImpactDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldOnlyVehicleImpactDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldIgnorePointDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldIgnorePointDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldIgnoreRadialDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldIgnoreRadialDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldIgnoreVehicleImpactDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldIgnoreVehicleImpactDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldIgnoreAllDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldIgnoreAllDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldAllowAllDamage
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldAllowAllDamage : UCrowWorldDamageCheckerBase {
};

// Class CrowWorld.CrowWorldDamageType
// Size: 0x48 (Inherited: 0x40)
struct UCrowWorldDamageType : UDamageType {
	enum class ECrowWorldDamageType DamageSourceType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class CrowWorld.CrowWorldDataActorCheckerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDataActorCheckerBase : UObject {
};

// Class CrowWorld.CrowWorldDataActorCheckerDefault
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDataActorCheckerDefault : UCrowWorldDataActorCheckerBase {
};

// Class CrowWorld.CrowWorldDataActorCheckerNetActor
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDataActorCheckerNetActor : UCrowWorldDataActorCheckerBase {
};

// Class CrowWorld.CrowWorldDataActorCheckerStaticMesh
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDataActorCheckerStaticMesh : UCrowWorldDataActorCheckerBase {
};

// Class CrowWorld.CrowWorldDataActorCheckerEditorActor
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldDataActorCheckerEditorActor : UCrowWorldDataActorCheckerBase {
};

// Class CrowWorld.CrowWorldDataCollector
// Size: 0xf8 (Inherited: 0xb0)
struct UCrowWorldDataCollector : UActorComponent {
	struct UCrowWorldMapConfig* MapConfig; // 0xb0(0x08)
	struct AActor* SingleTargetActor; // 0xb8(0x08)
	struct FString ActorNameFilter; // 0xc0(0x10)
	struct TArray<struct UCrowWorldLightProbe*> TemporalLightProbes; // 0xd0(0x10)
	struct FCrowWorldEditorActorBuildCache EditorActorBuildCache; // 0xe0(0x18)

	void OnFinishBuildMergedMesh(struct TArray<struct UObject*> InMergedAssets); // Function CrowWorld.CrowWorldDataCollector.OnFinishBuildMergedMesh // (Final|Native|Protected|HasOutParms) // @ game+0x10ce9e0
	void B_HideLightProbes(); // Function CrowWorld.CrowWorldDataCollector.B_HideLightProbes // (Final|Native|Public) // @ game+0xa996d0
	void A_ShowSectors(); // Function CrowWorld.CrowWorldDataCollector.A_ShowSectors // (Final|Native|Public) // @ game+0xa996d0
	void A_ShowLightProbes(); // Function CrowWorld.CrowWorldDataCollector.A_ShowLightProbes // (Final|Native|Public) // @ game+0xa996d0
	void A_CollectWorldData(); // Function CrowWorld.CrowWorldDataCollector.A_CollectWorldData // (Final|Native|Public) // @ game+0xa996d0
};

// Class CrowWorld.CrowWorldDataCollectionAsset
// Size: 0x90 (Inherited: 0x30)
struct UCrowWorldDataCollectionAsset : UDataAsset {
	struct TArray<struct UBodySetup*> BodySetupArray; // 0x30(0x10)
	struct TArray<struct FCrowWorldActorLayout> LayoutArray; // 0x40(0x10)
	struct TArray<struct FCrowWorldSectorData> SectorArray; // 0x50(0x10)
	struct TArray<struct FCrowWorldClusterData> ClusterArray; // 0x60(0x10)
	struct FCrowWorldLandmarkData LandmarkData; // 0x70(0x10)
	struct TArray<struct FCrowWorldLinkedActorData> LinkedActorsArray; // 0x80(0x10)
};

// Class CrowWorld.CrowWorldDebrisSMC
// Size: 0x4e0 (Inherited: 0x4d0)
struct UCrowWorldDebrisSMC : UStaticMeshComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
};

// Class CrowWorld.CrowWorldDestructionAUD
// Size: 0x2f0 (Inherited: 0x28)
struct UCrowWorldDestructionAUD : UAssetUserData {
	struct UStaticMesh* RemainMesh; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> RemainMeshMaterialOverrides; // 0x30(0x10)
	struct TArray<struct FCrowWorldDestructionMeshData> AdditionalRemainMesh; // 0x40(0x10)
	struct FName RemainMeshCollisionProfileName; // 0x50(0x08)
	struct UStaticMesh* TemporalMesh; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> TemporalMeshMaterialOverrides; // 0x60(0x10)
	struct FName TemporalMeshCollisionProfileName; // 0x70(0x08)
	bool UseCollapseByImpact; // 0x78(0x01)
	bool UseExplosionByDamage; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FCrowWorldDestructionSetting CollapseSetting; // 0x80(0x138)
	struct FCrowWorldDestructionSetting ExplosionSetting; // 0x1b8(0x138)
};

// Class CrowWorld.CrowWorldEditorActor
// Size: 0x280 (Inherited: 0x220)
struct ACrowWorldEditorActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	bool SmallActor; // 0x228(0x01)
	bool StaticLargeActor; // 0x229(0x01)
	bool LandmarkActor; // 0x22a(0x01)
	char pad_22B[0x1]; // 0x22b(0x01)
	float LightProbeRatioMultiplier; // 0x22c(0x04)
	struct FCrowWorldActorDestruction ActorDestruction; // 0x230(0x18)
	struct UCrowWorldLODSetting* LODSettingOverride; // 0x248(0x08)
	struct TArray<struct FCrowWorldActorMeshLOD> MeshLODArray; // 0x250(0x10)
	enum class ECrowWorldEditorActorLOD PreviewLOD; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UCrowWorldMapConfig* CachedMapConfig; // 0x268(0x08)
	struct TArray<struct UStaticMeshComponent*> DebugMeshLODArray; // 0x270(0x10)

	void OnFinishBuildMergedMesh(struct TArray<struct UObject*> InMergedAssets); // Function CrowWorld.CrowWorldEditorActor.OnFinishBuildMergedMesh // (Final|Native|Public|HasOutParms) // @ game+0x10d5900
	void B_RebuildMergedMesh(); // Function CrowWorld.CrowWorldEditorActor.B_RebuildMergedMesh // (Final|Native|Public) // @ game+0xa996d0
	void B_Assemble(); // Function CrowWorld.CrowWorldEditorActor.B_Assemble // (Final|Native|Public) // @ game+0xa996d0
	void A_Disassemble(); // Function CrowWorld.CrowWorldEditorActor.A_Disassemble // (Final|Native|Public) // @ game+0xa996d0
	void A_CheckPropAUD(); // Function CrowWorld.CrowWorldEditorActor.A_CheckPropAUD // (Final|Native|Public) // @ game+0xa996d0
	void A_BuildMergedMesh(); // Function CrowWorld.CrowWorldEditorActor.A_BuildMergedMesh // (Final|Native|Public) // @ game+0xa996d0
};

// Class CrowWorld.CrowWorldFoliage
// Size: 0xa8 (Inherited: 0x28)
struct UCrowWorldFoliage : UObject {
	char IsWorldFoliageEnabled : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UWorld* World; // 0x30(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x38(0x08)
	struct APlayerController* PlayerController; // 0x40(0x08)
	struct TSet<struct ULevelStreaming*> ActiveStreamingLevels; // 0x48(0x50)
	struct TArray<struct ULevelStreaming*> LoadedLevelsCached; // 0x98(0x10)

	void OnSubLevelUnloaded(); // Function CrowWorld.CrowWorldFoliage.OnSubLevelUnloaded // (Final|Native|Protected) // @ game+0x10d59b0
	void OnSubLevelLoaded(); // Function CrowWorld.CrowWorldFoliage.OnSubLevelLoaded // (Final|Native|Protected) // @ game+0x10d59b0
};

// Class CrowWorld.CrowWorldHLODSettingAUD
// Size: 0x30 (Inherited: 0x28)
struct UCrowWorldHLODSettingAUD : UAssetUserData {
	int32_t LODLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class CrowWorld.CrowWorldInteractionAUD
// Size: 0xe8 (Inherited: 0x28)
struct UCrowWorldInteractionAUD : UAssetUserData {
	bool IsAnimationStateHolder; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UStaticMesh* TriggerDataMesh; // 0x30(0x08)
	struct FString LocalTextKey_Open; // 0x38(0x10)
	struct FString LocalTextKey_Close; // 0x48(0x10)
	struct FCrowWorldLayoutItemAnim AnimOpen; // 0x58(0x30)
	struct FCrowWorldLayoutItemAnim AnimClose; // 0x88(0x30)
	struct FCrowWorldLayoutItemAnim AnimBlocked; // 0xb8(0x30)
};

// Class CrowWorld.CrowWorldLevelOfDetailAUD
// Size: 0x38 (Inherited: 0x28)
struct UCrowWorldLevelOfDetailAUD : UAssetUserData {
	enum class ECrowWorldLODGroup CrowWorldLOD; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float OverrideCameraDistanceMax; // 0x2c(0x04)
	char IgnoreCrowLightProbe : 1; // 0x30(0x01)
	char ClientDecorationOnly : 1; // 0x30(0x01)
	char AlwaysDisableCollision : 1; // 0x30(0x01)
	char StaticWorldMesh : 1; // 0x30(0x01)
	char WorldHLOD : 1; // 0x30(0x01)
	char pad_30_5 : 3; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class CrowWorld.CrowWorldLightProbe
// Size: 0x3d0 (Inherited: 0x360)
struct UCrowWorldLightProbe : UPointLightComponent {
	float OpenRatio; // 0x358(0x04)
	struct FTransform LightHitTransform; // 0x360(0x30)
	struct FTransform LightPathTransform; // 0x390(0x30)
	struct TArray<struct FVector> OpenLocations; // 0x3c0(0x10)

	void A_ShowLightPath(); // Function CrowWorld.CrowWorldLightProbe.A_ShowLightPath // (Final|Native|Public) // @ game+0xa996d0
};

// Class CrowWorld.CrowWorldLightProbeVolume
// Size: 0x510 (Inherited: 0x460)
struct UCrowWorldLightProbeVolume : UCapsuleComponent {
	struct FVector LightForward; // 0x460(0x0c)
	struct FRotator LightRotation; // 0x46c(0x0c)
	struct FCrowWorldLightProbeSetting LightProbeSetting; // 0x478(0x4c)
	struct FCrowWorldLightProbeVolumeSetting LightProbeVolumeSetting; // 0x4c4(0x20)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<struct FCrowWorldLightGroup> LightGroups; // 0x4e8(0x10)
	struct TArray<struct UCrowWorldLightProbe*> LightProbes; // 0x4f8(0x10)
	char pad_508[0x8]; // 0x508(0x08)
};

// Class CrowWorld.CrowWorldLightProbeVolumeActor
// Size: 0x298 (Inherited: 0x220)
struct ACrowWorldLightProbeVolumeActor : AActor {
	struct UCrowWorldLightProbeVolume* RootVolume; // 0x220(0x08)
	bool ShowDebug; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	struct FCrowWorldLightProbeSetting LightProbeSetting; // 0x22c(0x4c)
	struct FCrowWorldLightProbeVolumeSetting LightProbeVolumeSetting; // 0x278(0x20)

	void Z_DuplicateVolume(); // Function CrowWorld.CrowWorldLightProbeVolumeActor.Z_DuplicateVolume // (Final|Native|Public) // @ game+0xa996d0
	void D_ToggleLightProbes(); // Function CrowWorld.CrowWorldLightProbeVolumeActor.D_ToggleLightProbes // (Final|Native|Public) // @ game+0xa996d0
	void C_ClearLightProbes(); // Function CrowWorld.CrowWorldLightProbeVolumeActor.C_ClearLightProbes // (Final|Native|Public) // @ game+0xa996d0
	void B_GenerateLightProbes(); // Function CrowWorld.CrowWorldLightProbeVolumeActor.B_GenerateLightProbes // (Final|Native|Public) // @ game+0xa996d0
	void A_CollectAndGenerateLightProbes(); // Function CrowWorld.CrowWorldLightProbeVolumeActor.A_CollectAndGenerateLightProbes // (Final|Native|Public) // @ game+0xa996d0
};

// Class CrowWorld.CrowWorldLODUpdater
// Size: 0x170 (Inherited: 0x28)
struct UCrowWorldLODUpdater : UObject {
	int32_t CoreCountAvailable; // 0x28(0x04)
	int32_t MinNumberOfCores; // 0x2c(0x04)
	int32_t MinCountPerThread; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<float> LODLevelCameraDistance; // 0x38(0x10)
	char pad_48[0x98]; // 0x48(0x98)
	struct APlayerController* PlayerController; // 0xe0(0x08)
	struct TArray<struct FCrowWorldLODState> WorldActorLODStates; // 0xe8(0x10)
	struct TArray<struct FCrowWorldLODData> WorldActorLODDatas; // 0xf8(0x10)
	struct TMap<uint32_t, int32_t> WorldActorLODStateIndexes; // 0x108(0x50)
	struct TArray<int16_t> StateIndexPool; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
};

// Class CrowWorld.CrowWorldMapConfig
// Size: 0x148 (Inherited: 0x30)
struct UCrowWorldMapConfig : UDataAsset {
	bool DoNotUseCrowWorld; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UCrowWorldMapVisualConfig* MapVisualConfig; // 0x38(0x08)
	bool UseLightProbe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FCrowWorldLightProbeSetting LightProbeSetting; // 0x44(0x4c)
	bool UseWorldOriginRebase; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float RebaseOriginDistance; // 0x94(0x04)
	float ClusterSize; // 0x98(0x04)
	int32_t ClusterSyncDistance; // 0x9c(0x04)
	float ClusterHeightMax; // 0xa0(0x04)
	float SectorSize; // 0xa4(0x04)
	int32_t SectorSyncDistance; // 0xa8(0x04)
	float SectorHeightMax; // 0xac(0x04)
	float ClientUpdateVehicleDistance; // 0xb0(0x04)
	float ClientUpdateVehicleMargin; // 0xb4(0x04)
	bool UseOcclusionGrid; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float OcclusionSize; // 0xbc(0x04)
	int32_t OcclusionDistance; // 0xc0(0x04)
	float OcclusionHeightMax; // 0xc4(0x04)
	float SyncUpdateDelayMin; // 0xc8(0x04)
	float SyncUpdateDelayMax; // 0xcc(0x04)
	struct FVector2D WorldOrigin2D; // 0xd0(0x08)
	float AutoDetectParentMeshDistance; // 0xd8(0x04)
	struct FCrowWorldSoundSetting SoundSetting; // 0xdc(0x04)
	struct FCrowWorldActorLODSetting LODSetting; // 0xe0(0x20)
	struct UCrowWorldDataCollectionAsset* WorldDataAsset; // 0x100(0x08)
	struct FCrowWorldTriggerCollisionSetting TriggerCollisionSetting; // 0x108(0x20)
	struct TArray<struct FCrowWorldDataHandlerActorItem> ActorItems; // 0x128(0x10)
	struct TArray<struct FCrowWorldDataHandlerComponentItem> ComponentItems; // 0x138(0x10)
};

// Class CrowWorld.CrowWorldMapVisualConfig
// Size: 0x68 (Inherited: 0x30)
struct UCrowWorldMapVisualConfig : UDataAsset {
	struct TArray<struct FCrowWorldCameraAttachedFX> CameraAttachedFxAssets; // 0x30(0x10)
	struct FCrowWorldMapLightSetting MapLightSettings; // 0x40(0x18)
	struct TArray<struct FCrowWorldMaterialParameterOverride> MPCOverrides; // 0x58(0x10)
};

// Class CrowWorld.CrowWorldMediatorActor
// Size: 0x288 (Inherited: 0x220)
struct ACrowWorldMediatorActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct TArray<struct AActor*> WorldSetupActorTypes; // 0x228(0x10)
	struct TArray<struct UActorComponent*> WorldSetupComponentTypes; // 0x238(0x10)
	struct UStaticMeshComponent* SphereMesh; // 0x248(0x08)
	struct ACrowWorldReplicationActor* WorldReplicationActor; // 0x250(0x08)
	struct TArray<struct UActorComponent*> WorldSetupComponents; // 0x258(0x10)
	struct TArray<struct AActor*> WorldSetupActorReferences; // 0x268(0x10)
	struct TArray<struct UActorComponent*> WorldSetupComponentReferences; // 0x278(0x10)

	void Event_Sequence(struct FName InEventName); // Function CrowWorld.CrowWorldMediatorActor.Event_Sequence // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x10da8b0
	void A_ShowFoliageActor(); // Function CrowWorld.CrowWorldMediatorActor.A_ShowFoliageActor // (Final|Native|Public) // @ game+0xa996d0
	void A_SetupCrowWorld(); // Function CrowWorld.CrowWorldMediatorActor.A_SetupCrowWorld // (Final|Native|Public) // @ game+0xa996d0
};

// Class CrowWorld.CrowWorldMeshMerge
// Size: 0x28 (Inherited: 0x28)
struct UCrowWorldMeshMerge : UObject {
};

// Class CrowWorld.CrowWorldOcclusion
// Size: 0x140 (Inherited: 0x28)
struct UCrowWorldOcclusion : UObject {
	char IsGridOcclusionEnabled : 1; // 0x28(0x01)
	char IsVisibleGridInitialized : 1; // 0x28(0x01)
	char IsPersistentLevelInitialized : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UWorld* World; // 0x30(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x38(0x08)
	struct APlayerController* PlayerController; // 0x40(0x08)
	float UpdateDelay; // 0x48(0x04)
	struct FVector ControllerLocation; // 0x4c(0x0c)
	struct TMap<struct ULevelStreaming*, struct FCrowWorldLevelStreamData> ActiveStreamingLevels; // 0x58(0x50)
	struct FCrowWorldGrid GridOcclusion; // 0xa8(0x18)
	uint32_t CurrentGridIndex; // 0xc0(0x04)
	struct FBox CurrentGridBox; // 0xc4(0x1c)
	struct TSet<uint32_t> VisibleGridIndexes; // 0xe0(0x50)
	struct TArray<struct ULevelStreaming*> LoadedLevelsCached; // 0x130(0x10)

	void OnSubLevelUnloaded(); // Function CrowWorld.CrowWorldOcclusion.OnSubLevelUnloaded // (Final|Native|Protected) // @ game+0x10da940
	void OnSubLevelLoaded(); // Function CrowWorld.CrowWorldOcclusion.OnSubLevelLoaded // (Final|Native|Protected) // @ game+0x10da940
};

// Class CrowWorld.CrowWorldPingAliveActor
// Size: 0x278 (Inherited: 0x220)
struct ACrowWorldPingAliveActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	char pad_228[0x50]; // 0x228(0x50)
};

// Class CrowWorld.CrowWorldPointLight
// Size: 0x360 (Inherited: 0x360)
struct UCrowWorldPointLight : UPointLightComponent {
};

// Class CrowWorld.CrowWorldRemainSMC
// Size: 0x4e0 (Inherited: 0x4d0)
struct UCrowWorldRemainSMC : UStaticMeshComponent {
	int16_t RemainMeshIndex; // 0x4d0(0x02)
	int16_t LayoutItemIndex; // 0x4d2(0x02)
	char pad_4D4[0xc]; // 0x4d4(0x0c)
};

// Class CrowWorld.CrowWorldReplicationActor
// Size: 0x2c8 (Inherited: 0x220)
struct ACrowWorldReplicationActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x228(0x08)
	struct TArray<struct FCrowWorldGrid> WorldGridArray; // 0x230(0x10)
	struct UCrowWorldSyncServerWorker* ServerWorker; // 0x240(0x08)
	struct UCrowWorldSyncClientWorker* FirstClientWorker; // 0x248(0x08)
	struct FCrowWorldClientObjects ClientObjects; // 0x250(0x20)
	struct TMap<struct APlayerController*, struct FCrowWorldPlayerControllerInfo> ControllerInfos; // 0x270(0x50)
	bool IsWaitingACK; // 0x2c0(0x01)
	bool ReceivedUpdateLocationACK; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
};

// Class CrowWorld.CrowWorldReplicationController
// Size: 0x238 (Inherited: 0x220)
struct ACrowWorldReplicationController : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct APlayerController* PlayerController; // 0x228(0x08)
	struct ACrowWorldReplicationActor* ReplicationActor; // 0x230(0x08)

	void Server_UpdateLocationSyn(struct FVector InRealWorldLocation); // Function CrowWorld.CrowWorldReplicationController.Server_UpdateLocationSyn // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x10dad20
	void Server_TriggerDoorOpen(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, char InTriggerActionType, struct APawn* InstigatorPawn); // Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorOpen // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x10dab40
	void Server_TriggerDoorClose(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, char InTriggerActionType, struct APawn* InstigatorPawn); // Function CrowWorld.CrowWorldReplicationController.Server_TriggerDoorClose // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x10da9b0
	void Server_InitControllerSyn(); // Function CrowWorld.CrowWorldReplicationController.Server_InitControllerSyn // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x10da960
	void Client_UpdateSyncDataZip(struct FVector InServerViewLocation, int32_t InUncompressedSize, struct TArray<char> InCompressedBuffer); // Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncDataZip // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10da760
	void Client_UpdateSyncData(struct FVector InServerViewLocation, struct FCrowWorldReplicationSyncData InSyncData); // Function CrowWorld.CrowWorldReplicationController.Client_UpdateSyncData // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10da5a0
	void Client_UpdateLocationAck(struct FVector InRealWorldLocation); // Function CrowWorld.CrowWorldReplicationController.Client_UpdateLocationAck // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10da4f0
	void Client_UpdateGlobalDataZip(int32_t InUncompressedSize, struct TArray<char> InCompressedBuffer); // Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalDataZip // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10da3e0
	void Client_UpdateGlobalData(struct FCrowWorldReplicationGlobalData InGlobalData); // Function CrowWorld.CrowWorldReplicationController.Client_UpdateGlobalData // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10da310
	void Client_TriggerDoorOpened(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, int8_t InTriggerIndex, char InTriggerActionType); // Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorOpened // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10da180
	void Client_TriggerDoorClosed(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex, char InTriggerActionType); // Function CrowWorld.CrowWorldReplicationController.Client_TriggerDoorClosed // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10da040
	void Client_SectorDestroyedLayoutItemsZip(int32_t InUncompressedSize, struct TArray<char> InCompressedBuffer); // Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItemsZip // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d9f30
	void Client_SectorDestroyedLayoutItems(struct FCrowWorldDestructionSyncData InDestructionSyncData); // Function CrowWorld.CrowWorldReplicationController.Client_SectorDestroyedLayoutItems // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d9dd0
	void Client_RadialImpactForDebris(struct FVector_NetQuantize InOrigin, float InMaxRadius); // Function CrowWorld.CrowWorldReplicationController.Client_RadialImpactForDebris // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d9cd0
	void Client_InitControllerAck(float InServerTime, struct FVector InServerViewLocation, bool IsServerWorldInitialized); // Function CrowWorld.CrowWorldReplicationController.Client_InitControllerAck // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10d9b80
	void Client_DrawDebugLine(struct FVector InLocationFrom, struct FVector InLocationTo, struct FColor Color, float Duration, int32_t Priority, float Thickness); // Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugLine // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10d9950
	void Client_DrawDebugBox(struct FVector InLocation, struct FVector InExtent, struct FColor Color, float Duration, int32_t Priority, float Thickness); // Function CrowWorld.CrowWorldReplicationController.Client_DrawDebugBox // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10d9720
	void Client_DestroyedWorldActor(uint32_t InWorldActorIndex, char InCrowWorldDestructionCause, struct FVector_NetQuantize InImpactPoint, struct FVector_NetQuantizeNormal InImpactNormal); // Function CrowWorld.CrowWorldReplicationController.Client_DestroyedWorldActor // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d9580
	void Client_DestroyedSingleLayoutItem(uint32_t InWorldActorIndex, int16_t InDestroyedLayoutItemIndex, char InCrowWorldDestructionCause, struct FVector_NetQuantize InImpactPoint, struct FVector_NetQuantizeNormal InImpactNormal); // Function CrowWorld.CrowWorldReplicationController.Client_DestroyedSingleLayoutItem // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d9390
	void Client_DestroyedMultipleWorldActors(struct TArray<uint32_t> InWorldActorIndexArray, struct FVector InDamageOrigin); // Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleWorldActors // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient|NetValidate) // @ game+0x10d9280
	void Client_DestroyedMultipleLayoutItems(uint32_t InWorldActorIndex, struct TArray<int16_t> InDestroyedLayoutItemIndexArray, char InCrowWorldDestructionCause, struct FVector_NetQuantize InImpactPoint, struct FVector_NetQuantizeNormal InImpactNormal); // Function CrowWorld.CrowWorldReplicationController.Client_DestroyedMultipleLayoutItems // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d90a0
	void Client_BeginShakeLayoutItem(uint32_t InWorldActorIndex, int16_t InLayoutItemIndex); // Function CrowWorld.CrowWorldReplicationController.Client_BeginShakeLayoutItem // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x10d8f90
};

// Class CrowWorld.CrowWorldSequenceUtilBase
// Size: 0xb0 (Inherited: 0xb0)
struct UCrowWorldSequenceUtilBase : UActorComponent {
};

// Class CrowWorld.CrowWorldSequenceLandscape
// Size: 0xb0 (Inherited: 0xb0)
struct UCrowWorldSequenceLandscape : UCrowWorldSequenceUtilBase {
};

// Class CrowWorld.CrowWorldLODSetting
// Size: 0xe8 (Inherited: 0x28)
struct UCrowWorldLODSetting : UObject {
	struct FMeshProxySettings ActorLODMeshSetting; // 0x28(0xa8)
	struct FName MeshLODGroupName; // 0xd0(0x08)
	struct TArray<float> MeshLODScreenSizeArray; // 0xd8(0x10)
};

// Class CrowWorld.CrowWorldSettings
// Size: 0x40 (Inherited: 0x38)
struct UCrowWorldSettings : UDeveloperSettings {
	struct UCrowWorldLODSetting* CrowWorldLODSetting; // 0x38(0x08)

	struct UCrowWorldSettings* Get(); // Function CrowWorld.CrowWorldSettings.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10de3f0
};

// Class CrowWorld.CrowWorldSimulationActor
// Size: 0x2c8 (Inherited: 0x220)
struct ACrowWorldSimulationActor : AActor {
	struct USceneComponent* SceneRoot; // 0x220(0x08)
	struct USceneComponent* ImpactPoint; // 0x228(0x08)
	char UseMassMultiply : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float MassMultiply; // 0x234(0x04)
	struct FCrowWorldDestructionFxHitGround FxHitGroundSetting; // 0x238(0x30)
	struct TArray<struct UFXSystemComponent*> FxComponents; // 0x268(0x10)
	struct FName CollisionProfileName; // 0x278(0x08)
	struct FVector ImpactLocation; // 0x280(0x0c)
	struct FVector ImpactNormal; // 0x28c(0x0c)
	float ImpulseMagnitude; // 0x298(0x04)
	float PendingTime; // 0x29c(0x04)
	float DestroyTime; // 0x2a0(0x04)
	float ElapsedTime; // 0x2a4(0x04)
	int32_t CountHiddenSMC; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct TArray<struct UStaticMeshComponent*> SMCList; // 0x2b0(0x10)
	struct FTimerHandle DestroyTimerHandle; // 0x2c0(0x08)

	void OnSimulationComponentHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult HitResult); // Function CrowWorld.CrowWorldSimulationActor.OnSimulationComponentHit // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x10de720
};

// Class CrowWorld.CrowWorldSMC
// Size: 0x5d0 (Inherited: 0x4d0)
struct UCrowWorldSMC : UStaticMeshComponent {
	char pad_4D0[0x18]; // 0x4d0(0x18)
	int16_t LayoutItemIndex; // 0x4e8(0x02)
	char bDestroyByShockwave : 1; // 0x4ea(0x01)
	char bDestroyOnThrowWeaponHit : 1; // 0x4ea(0x01)
	char bDestroyOnCharacterAnimation : 1; // 0x4ea(0x01)
	char bSlideOnBeginVaultAction : 1; // 0x4ea(0x01)
	char bIgnoreCharacterInteraction : 1; // 0x4ea(0x01)
	char bPreventAttachChild : 1; // 0x4ea(0x01)
	char bDestroyAttachChildOnExplosion : 1; // 0x4ea(0x01)
	char bDestroyAttachChildOnImpactCollapse : 1; // 0x4ea(0x01)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	float DecalScaleMultiply; // 0x4ec(0x04)
	struct FCrowWorldSMCShakingState ShakingState; // 0x4f0(0x90)
	struct TMap<struct USceneComponent*, struct FTransform> VirtualChildren; // 0x580(0x50)
};

// Class CrowWorld.CrowWorldSoundAUD
// Size: 0x30 (Inherited: 0x30)
struct UCrowWorldSoundAUD : UAkSoundAUD {
};

// Class CrowWorld.CrowWorldSpotLight
// Size: 0x360 (Inherited: 0x360)
struct UCrowWorldSpotLight : USpotLightComponent {
};

// Class CrowWorld.CrowWorldSyncClientWorker
// Size: 0x410 (Inherited: 0x28)
struct UCrowWorldSyncClientWorker : UObject {
	char bInitControllerRequested : 1; // 0x28(0x01)
	char bEnabledVisualConfig : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ClientFrameKey; // 0x2c(0x04)
	struct UWorld* World; // 0x30(0x08)
	struct APlayerController* PlayerController; // 0x38(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x40(0x08)
	struct UCrowWorldDataCollectionAsset* WorldDataAsset; // 0x48(0x08)
	struct ACrowWorldReplicationActor* ReplicationActor; // 0x50(0x08)
	struct ACrowWorldReplicationController* ReplicationController; // 0x58(0x08)
	struct FCrowWorldGrid SectorGrid; // 0x60(0x18)
	struct UCrowWorldLODUpdater* LODUpdater; // 0x78(0x08)
	struct UCrowWorldOcclusion* WorldOcclusion; // 0x80(0x08)
	struct UCrowWorldFoliage* WorldFoliage; // 0x88(0x08)
	struct UCrowWorldTerrainSetup* WorldTerrainSetup; // 0x90(0x08)
	struct TArray<struct UFXSystemComponent*> FollowingFxComponents; // 0x98(0x10)
	struct TArray<struct FCrowWorldMaterialParameterOverride> MPCBackups; // 0xa8(0x10)
	struct TArray<struct FCrowWorldMaterialParameterOverride> MPCRestores; // 0xb8(0x10)
	struct TMap<uint32_t, struct FCrowWorldSectorData> SectorDataAssets; // 0xc8(0x50)
	struct TMap<uint32_t, struct FCrowWorldClusterData> ClusterDataAssets; // 0x118(0x50)
	struct FCrowWorldLandmarkData LandmarkDataAsset; // 0x168(0x10)
	struct TMap<struct UObject*, int32_t> AssetReferenceCounts; // 0x178(0x50)
	struct FCrowWorldReplicationLandmark ActiveLandmarkData; // 0x1c8(0x18)
	struct TMap<uint32_t, struct FCrowWorldClientCluster> ActiveClusters; // 0x1e0(0x50)
	struct TMap<uint32_t, struct FCrowWorldClientSector> ActiveSectors; // 0x230(0x50)
	struct TMap<uint32_t, struct ACrowWorldActor*> ActiveActors; // 0x280(0x50)
	int32_t DebugFrameCount; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct FCrowWorldReplicationCluster> ReceivedClusters; // 0x2d8(0x10)
	struct TArray<struct FCrowWorldReplicationSector> ReceivedSectors; // 0x2e8(0x10)
	struct TArray<struct FCrowWorldClientDropClusterIndex> ReceivedDropClusters; // 0x2f8(0x10)
	struct TArray<struct FCrowWorldClientDropSectorIndex> ReceivedDropSectors; // 0x308(0x10)
	struct TArray<struct ACrowWorldActor*> DropClusterActorQueue; // 0x318(0x10)
	struct TArray<struct ACrowWorldActor*> DropSectorActorQueue; // 0x328(0x10)
	uint32_t GeneratingSectorIndex; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TArray<struct FCrowWorldClientClusterActorKey> ClusterActorKeyArray; // 0x340(0x10)
	int16_t GeneratingClusterActorKeyCursor; // 0x350(0x02)
	int16_t GeneratingSectorActorCursor; // 0x352(0x02)
	int16_t CollectAssetLayoutCursor; // 0x354(0x02)
	char pad_356[0x2]; // 0x356(0x02)
	struct FCrowWorldDestructionLink DestructionLink; // 0x358(0xb8)
};

// Class CrowWorld.CrowWorldSyncServerWorker
// Size: 0x398 (Inherited: 0x28)
struct UCrowWorldSyncServerWorker : UObject {
	struct UWorld* World; // 0x28(0x08)
	struct UCrowWorldMapConfig* MapConfig; // 0x30(0x08)
	struct UCrowWorldDataCollectionAsset* WorldDataAsset; // 0x38(0x08)
	struct ACrowWorldReplicationActor* ReplicationActor; // 0x40(0x08)
	struct UCrowWorldFoliage* WorldFoliage; // 0x48(0x08)
	struct TArray<struct FCrowWorldGrid> WorldGridArray; // 0x50(0x10)
	struct FCrowWorldReplicationLandmark LandmarkData; // 0x60(0x18)
	struct TMap<uint32_t, struct FCrowWorldReplicationCluster> Clusters; // 0x78(0x50)
	struct TMap<uint32_t, struct FCrowWorldReplicationSector> Sectors; // 0xc8(0x50)
	struct TMap<uint32_t, struct ACrowWorldActor*> ActorInstances; // 0x118(0x50)
	struct TMap<struct ACrowWorldReplicationController*, struct FCrowWorldSyncServerPlayerState> SyncPlayerStates; // 0x168(0x50)
	struct TMap<uint32_t, struct FCrowWorldSyncServerControllerContainer> SectorStates; // 0x1b8(0x50)
	struct TMap<uint32_t, struct FCrowWorldSyncServerControllerContainer> ClusterStates; // 0x208(0x50)
	struct TArray<uint32_t> TempGridIndexes; // 0x258(0x10)
	struct TArray<struct ACrowWorldReplicationController*> TempArrayControllers; // 0x268(0x10)
	struct FCrowWorldDestructionSyncCache DestructionSyncCache; // 0x278(0x68)
	struct FCrowWorldDestructionLink DestructionLink; // 0x2e0(0xb8)
};

// Class CrowWorld.CrowWorldTerrainSetup
// Size: 0xa0 (Inherited: 0x28)
struct UCrowWorldTerrainSetup : UObject {
	struct FName TAG_HIDE_SPLINE; // 0x28(0x08)
	struct FName TAG_HIDE_FOLIAGE; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	struct TSet<struct ULevelStreaming*> ActiveStreamingLevels; // 0x40(0x50)
	struct TArray<struct ULevelStreaming*> LoadedLevelsCached; // 0x90(0x10)

	void UpdateActiveStreamingLevels(); // Function CrowWorld.CrowWorldTerrainSetup.UpdateActiveStreamingLevels // (Final|Native|Protected) // @ game+0x10de9a0
	void Tick(float DeltaTime); // Function CrowWorld.CrowWorldTerrainSetup.Tick // (Final|Native|Public) // @ game+0x10de920
	void OnSubLevelUnloaded(); // Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelUnloaded // (Final|Native|Protected) // @ game+0x10de900
	void OnSubLevelLoaded(); // Function CrowWorld.CrowWorldTerrainSetup.OnSubLevelLoaded // (Final|Native|Protected) // @ game+0x10de900
	void OnLevelUnloaded(struct ULevelStreaming* InLevelStreaming); // Function CrowWorld.CrowWorldTerrainSetup.OnLevelUnloaded // (Final|Native|Protected) // @ game+0x10de690
	void OnLevelLoaded(struct ULevelStreaming* InLevelStreaming); // Function CrowWorld.CrowWorldTerrainSetup.OnLevelLoaded // (Final|Native|Protected) // @ game+0x10de600
	void Initialize(struct UWorld* InWorld); // Function CrowWorld.CrowWorldTerrainSetup.Initialize // (Final|Native|Public) // @ game+0x10de570
	void HideLandscapeSpline(struct ALandscapeProxy* InLandscapeProxy); // Function CrowWorld.CrowWorldTerrainSetup.HideLandscapeSpline // (Final|Native|Private) // @ game+0x10de4e0
	void HideFoliage(struct AInstancedFoliageActor* InIFA); // Function CrowWorld.CrowWorldTerrainSetup.HideFoliage // (Final|Native|Private) // @ game+0x10de450
};

// Class CrowWorld.CrowWorldTrigger
// Size: 0x480 (Inherited: 0x440)
struct UCrowWorldTrigger : UPrimitiveComponent {
	struct ACrowWorldActor* WorldActor; // 0x440(0x08)
	struct UCrowWorldAnimator* WorldAnimator; // 0x448(0x08)
	int16_t LayoutItemIndex; // 0x450(0x02)
	enum class ECrowWorldGeomType GeometryType; // 0x452(0x01)
	enum class ECrowWorldTriggerType TriggerType; // 0x453(0x01)
	int8_t TriggerState; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct UBodySetup* TriggerBodySetup; // 0x458(0x08)
	struct FString LocalTextKey_Open; // 0x460(0x10)
	struct FString LocalTextKey_Close; // 0x470(0x10)
};

