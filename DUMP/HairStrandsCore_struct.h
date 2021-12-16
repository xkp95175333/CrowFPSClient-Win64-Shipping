// Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8 {
	Procedural,
	Imported,
	EHairCardsSourceType_MAX,
};

// Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8 {
	CardsCount,
	UseGuides,
	EHairCardsGenerationType_MAX,
};

// Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8 {
	Low,
	High,
	EHairCardsClusterType_MAX,
};

// Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8 {
	Strands,
	Cards,
	Meshes,
	EGroomGeometryType_MAX,
};

// Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8 {
	Cpu,
	Gpu,
	EHairLODSelectionType_MAX,
};

// Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8 {
	Parametric,
	Root,
	Index,
	Unknown,
	EHairInterpolationWeight_MAX,
};

// Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8 {
	Low,
	Medium,
	High,
	Unknown,
	EHairInterpolationQuality_MAX,
};

// Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8 {
	None,
	RigidTransform,
	OffsetTransform,
	SmoothTransform,
	EGroomInterpolationType_MAX,
};

// Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8 {
	None,
	Size2,
	Size4,
	Size8,
	Size16,
	Size32,
	EGroomStrandsSize_MAX,
};

// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8 {
	None,
	CosseratRods,
	AngularSprings,
	CustomSolver,
	EGroomNiagaraSolvers_MAX,
};

// Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8 {
	R,
	G,
	B,
	A,
	EFollicleMaskChannel_MAX,
};

// Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8 {
	Static,
	Skeletal,
	EStrandsTexturesMeshType_MAX,
};

// Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8 {
	TraceInside,
	TraceOuside,
	TraceBidirectional,
	EStrandsTexturesTraceType_MAX,
};

// Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8 {
	Parametric,
	Root,
	Index,
	Unknown,
	EGroomInterpolationWeight_MAX,
};

// Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8 {
	Low,
	Medium,
	High,
	Unknown,
	EGroomInterpolationQuality_MAX,
};

// ScriptStruct HairStrandsCore.HairGroupInfo
// Size: 0x14 (Inherited: 0x00)
struct FHairGroupInfo {
	int32_t GroupID; // 0x00(0x04)
	int32_t NumCurves; // 0x04(0x04)
	int32_t NumGuides; // 0x08(0x04)
	int32_t NumCurveVertices; // 0x0c(0x04)
	int32_t NumGuideVertices; // 0x10(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// Size: 0x18 (Inherited: 0x14)
struct FHairGroupInfoWithVisibility : FHairGroupInfo {
	bool bIsVisible; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct HairStrandsCore.HairGroupsMaterial
// Size: 0x10 (Inherited: 0x00)
struct FHairGroupsMaterial {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName SlotName; // 0x08(0x08)
};

// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// Size: 0xc0 (Inherited: 0x00)
struct FHairGroupsCardsSourceDescription {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	enum class EHairCardsSourceType SourceType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UStaticMesh* ProceduralMesh; // 0x18(0x08)
	struct FString ProceduralMeshKey; // 0x20(0x10)
	struct UStaticMesh* ImportedMesh; // 0x30(0x08)
	struct FHairGroupsProceduralCards ProceduralSettings; // 0x38(0x38)
	struct FHairGroupCardsTextures Textures; // 0x70(0x30)
	int32_t GroupIndex; // 0xa0(0x04)
	int32_t LODIndex; // 0xa4(0x04)
	struct FHairGroupCardsInfo CardsInfo; // 0xa8(0x08)
	struct FString ImportedMeshKey; // 0xb0(0x10)
};

// ScriptStruct HairStrandsCore.HairGroupCardsInfo
// Size: 0x08 (Inherited: 0x00)
struct FHairGroupCardsInfo {
	int32_t NumCards; // 0x00(0x04)
	int32_t NumCardVertices; // 0x04(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupCardsTextures
// Size: 0x30 (Inherited: 0x00)
struct FHairGroupCardsTextures {
	struct UTexture2D* DepthTexture; // 0x00(0x08)
	struct UTexture2D* CoverageTexture; // 0x08(0x08)
	struct UTexture2D* TangentTexture; // 0x10(0x08)
	struct UTexture2D* AttributeTexture; // 0x18(0x08)
	struct UTexture2D* AuxilaryDataTexture; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// Size: 0x38 (Inherited: 0x00)
struct FHairGroupsProceduralCards {
	struct FHairCardsClusterSettings ClusterSettings; // 0x00(0x08)
	struct FHairCardsGeometrySettings GeometrySettings; // 0x08(0x1c)
	struct FHairCardsTextureSettings TextureSettings; // 0x24(0x10)
	int32_t Version; // 0x34(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsTextureSettings
// Size: 0x10 (Inherited: 0x00)
struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; // 0x00(0x04)
	int32_t PixelPerCentimeters; // 0x04(0x04)
	int32_t LengthTextureCount; // 0x08(0x04)
	int32_t DensityTextureCount; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// Size: 0x1c (Inherited: 0x00)
struct FHairCardsGeometrySettings {
	enum class EHairCardsGenerationType GenerationType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CardsCount; // 0x04(0x04)
	enum class EHairCardsClusterType ClusterType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinSegmentLength; // 0x0c(0x04)
	float AngularThreshold; // 0x10(0x04)
	float MinCardsLength; // 0x14(0x04)
	float MaxCardsLength; // 0x18(0x04)
};

// ScriptStruct HairStrandsCore.HairCardsClusterSettings
// Size: 0x08 (Inherited: 0x00)
struct FHairCardsClusterSettings {
	float ClusterDecimation; // 0x00(0x04)
	enum class EHairCardsClusterType Type; // 0x04(0x01)
	bool bUseGuide; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct HairStrandsCore.HairGroupsLOD
// Size: 0x18 (Inherited: 0x00)
struct FHairGroupsLOD {
	struct TArray<struct FHairLODSettings> LODs; // 0x00(0x10)
	float ClusterWorldSize; // 0x10(0x04)
	float ClusterScreenSizeScale; // 0x14(0x04)
};

// ScriptStruct HairStrandsCore.HairLODSettings
// Size: 0x18 (Inherited: 0x00)
struct FHairLODSettings {
	float CurveDecimation; // 0x00(0x04)
	float VertexDecimation; // 0x04(0x04)
	float AngularThreshold; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float ThicknessScale; // 0x10(0x04)
	bool bVisible; // 0x14(0x01)
	enum class EGroomGeometryType GeometryType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct HairStrandsCore.HairGroupsInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FHairGroupsInterpolation {
	struct FHairDecimationSettings DecimationSettings; // 0x00(0x08)
	struct FHairInterpolationSettings InterpolationSettings; // 0x08(0x0c)
};

// ScriptStruct HairStrandsCore.HairInterpolationSettings
// Size: 0x0c (Inherited: 0x00)
struct FHairInterpolationSettings {
	bool bOverrideGuides; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HairToGuideDensity; // 0x04(0x04)
	enum class EHairInterpolationQuality InterpolationQuality; // 0x08(0x01)
	enum class EHairInterpolationWeight InterpolationDistance; // 0x09(0x01)
	bool bRandomizeGuide; // 0x0a(0x01)
	bool bUseUniqueGuide; // 0x0b(0x01)
};

// ScriptStruct HairStrandsCore.HairDecimationSettings
// Size: 0x08 (Inherited: 0x00)
struct FHairDecimationSettings {
	float CurveDecimation; // 0x00(0x04)
	float VertexDecimation; // 0x04(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// Size: 0x60 (Inherited: 0x00)
struct FHairGroupsMeshesSourceDescription {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct UStaticMesh* ImportedMesh; // 0x10(0x08)
	struct FHairGroupCardsTextures Textures; // 0x18(0x30)
	int32_t GroupIndex; // 0x48(0x04)
	int32_t LODIndex; // 0x4c(0x04)
	struct FString ImportedMeshKey; // 0x50(0x10)
};

// ScriptStruct HairStrandsCore.HairGroupsPhysics
// Size: 0x2c8 (Inherited: 0x00)
struct FHairGroupsPhysics {
	struct FHairSolverSettings SolverSettings; // 0x00(0x38)
	struct FHairExternalForces ExternalForces; // 0x38(0x1c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FHairMaterialConstraints MaterialConstraints; // 0x58(0x1d8)
	struct FHairStrandsParameters StrandsParameters; // 0x230(0x98)
};

// ScriptStruct HairStrandsCore.HairStrandsParameters
// Size: 0x98 (Inherited: 0x00)
struct FHairStrandsParameters {
	enum class EGroomStrandsSize StrandsSize; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StrandsDensity; // 0x04(0x04)
	float StrandsSmoothing; // 0x08(0x04)
	float StrandsThickness; // 0x0c(0x04)
	struct FRuntimeFloatCurve ThicknessScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairMaterialConstraints
// Size: 0x1d8 (Inherited: 0x00)
struct FHairMaterialConstraints {
	struct FHairBendConstraint BendConstraint; // 0x00(0x98)
	struct FHairStretchConstraint StretchConstraint; // 0x98(0x98)
	struct FHairCollisionConstraint CollisionConstraint; // 0x130(0xa8)
};

// ScriptStruct HairStrandsCore.HairCollisionConstraint
// Size: 0xa8 (Inherited: 0x00)
struct FHairCollisionConstraint {
	bool SolveCollision; // 0x00(0x01)
	bool ProjectCollision; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StaticFriction; // 0x04(0x04)
	float KineticFriction; // 0x08(0x04)
	float StrandsViscosity; // 0x0c(0x04)
	struct FIntVector GridDimension; // 0x10(0x0c)
	float CollisionRadius; // 0x1c(0x04)
	struct FRuntimeFloatCurve RadiusScale; // 0x20(0x88)
};

// ScriptStruct HairStrandsCore.HairStretchConstraint
// Size: 0x98 (Inherited: 0x00)
struct FHairStretchConstraint {
	bool SolveStretch; // 0x00(0x01)
	bool ProjectStretch; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float StretchDamping; // 0x04(0x04)
	float StretchStiffness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve StretchScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairBendConstraint
// Size: 0x98 (Inherited: 0x00)
struct FHairBendConstraint {
	bool SolveBend; // 0x00(0x01)
	bool ProjectBend; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float BendDamping; // 0x04(0x04)
	float BendStiffness; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve BendScale; // 0x10(0x88)
};

// ScriptStruct HairStrandsCore.HairExternalForces
// Size: 0x1c (Inherited: 0x00)
struct FHairExternalForces {
	struct FVector GravityVector; // 0x00(0x0c)
	float AirDrag; // 0x0c(0x04)
	struct FVector AirVelocity; // 0x10(0x0c)
};

// ScriptStruct HairStrandsCore.HairSolverSettings
// Size: 0x38 (Inherited: 0x00)
struct FHairSolverSettings {
	bool EnableSimulation; // 0x00(0x01)
	enum class EGroomNiagaraSolvers NiagaraSolver; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TSoftObjectPtr<struct UNiagaraSystem> CustomSystem; // 0x08(0x28)
	int32_t SubSteps; // 0x30(0x04)
	int32_t IterationCount; // 0x34(0x04)
};

// ScriptStruct HairStrandsCore.HairGroupsRendering
// Size: 0x30 (Inherited: 0x00)
struct FHairGroupsRendering {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	struct FHairGeometrySettings GeometrySettings; // 0x10(0x10)
	struct FHairShadowSettings ShadowSettings; // 0x20(0x0c)
	struct FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c(0x02)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// Size: 0x02 (Inherited: 0x00)
struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; // 0x00(0x01)
	bool bScatterSceneLighting; // 0x01(0x01)
};

// ScriptStruct HairStrandsCore.HairShadowSettings
// Size: 0x0c (Inherited: 0x00)
struct FHairShadowSettings {
	float HairShadowDensity; // 0x00(0x04)
	float HairRaytracingRadiusScale; // 0x04(0x04)
	bool bUseHairRaytracingGeometry; // 0x08(0x01)
	bool bVoxelize; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct HairStrandsCore.HairGeometrySettings
// Size: 0x10 (Inherited: 0x00)
struct FHairGeometrySettings {
	float HairWidth; // 0x00(0x04)
	float HairRootScale; // 0x04(0x04)
	float HairTipScale; // 0x08(0x04)
	float HairClipScale; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// Size: 0x10 (Inherited: 0x00)
struct FGoomBindingGroupInfo {
	int32_t RenRootCount; // 0x00(0x04)
	int32_t RenLODCount; // 0x04(0x04)
	int32_t SimRootCount; // 0x08(0x04)
	int32_t SimLODCount; // 0x0c(0x04)
};

// ScriptStruct HairStrandsCore.FollicleMaskOptions
// Size: 0x10 (Inherited: 0x00)
struct FFollicleMaskOptions {
	struct UGroomAsset* Groom; // 0x00(0x08)
	enum class EFollicleMaskChannel Channel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct HairStrandsCore.HairGroupDesc
// Size: 0x4c (Inherited: 0x00)
struct FHairGroupDesc {
	int32_t HairCount; // 0x00(0x04)
	int32_t GuideCount; // 0x04(0x04)
	float HairLength; // 0x08(0x04)
	float HairWidth; // 0x0c(0x04)
	bool HairWidth_Override; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float HairRootScale; // 0x14(0x04)
	bool HairRootScale_Override; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HairTipScale; // 0x1c(0x04)
	bool HairTipScale_Override; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float HairClipLength; // 0x24(0x04)
	bool HairClipLength_Override; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float HairShadowDensity; // 0x2c(0x04)
	bool HairShadowDensity_Override; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HairRaytracingRadiusScale; // 0x34(0x04)
	bool HairRaytracingRadiusScale_Override; // 0x38(0x01)
	bool bUseHairRaytracingGeometry; // 0x39(0x01)
	bool bUseHairRaytracingGeometry_Override; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float LODBias; // 0x3c(0x04)
	bool bUseStableRasterization; // 0x40(0x01)
	bool bUseStableRasterization_Override; // 0x41(0x01)
	bool bScatterSceneLighting; // 0x42(0x01)
	bool bScatterSceneLighting_Override; // 0x43(0x01)
	bool bSupportVoxelization; // 0x44(0x01)
	bool bSupportVoxelization_Override; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
	int32_t LODForcedIndex; // 0x48(0x04)
};

// ScriptStruct HairStrandsCore.GroomHairGroupPreview
// Size: 0x20 (Inherited: 0x00)
struct FGroomHairGroupPreview {
	int32_t GroupID; // 0x00(0x04)
	int32_t CurveCount; // 0x04(0x04)
	int32_t GuideCount; // 0x08(0x04)
	struct FHairGroupsInterpolation InterpolationSettings; // 0x0c(0x14)
};

// ScriptStruct HairStrandsCore.GroomBuildSettings
// Size: 0x0c (Inherited: 0x00)
struct FGroomBuildSettings {
	bool bOverrideGuides; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HairToGuideDensity; // 0x04(0x04)
	enum class EGroomInterpolationQuality InterpolationQuality; // 0x08(0x01)
	enum class EGroomInterpolationWeight InterpolationDistance; // 0x09(0x01)
	bool bRandomizeGuide; // 0x0a(0x01)
	bool bUseUniqueGuide; // 0x0b(0x01)
};

// ScriptStruct HairStrandsCore.GroomConversionSettings
// Size: 0x18 (Inherited: 0x00)
struct FGroomConversionSettings {
	struct FVector Rotation; // 0x00(0x0c)
	struct FVector Scale; // 0x0c(0x0c)
};

