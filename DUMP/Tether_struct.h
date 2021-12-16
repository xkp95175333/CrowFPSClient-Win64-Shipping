// Enum Tether.ECableMeshGenerationType
enum class ECableMeshGenerationType : uint8 {
	Basic,
	CustomMesh,
	ECableMeshGenerationType_MAX,
};

// Enum Tether.EMeshBuildInstruction
enum class EMeshBuildInstruction : uint8 {
	DoNotBuild,
	BuildIfModified,
	AlwaysBuild,
	EMeshBuildInstruction_MAX,
};

// Enum Tether.ETetherSimulationTimingMode
enum class ETetherSimulationTimingMode : uint8 {
	SimulateInSequence,
	ProgressSimulation,
	ETetherSimulationTimingMode_MAX,
};

// ScriptStruct Tether.BasicMeshGenerationOptions
// Size: 0x14 (Inherited: 0x00)
struct FBasicMeshGenerationOptions {
	int32_t NumSides; // 0x00(0x04)
	bool bOverrideCableWidth; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float CableMeshWidth; // 0x08(0x04)
	bool bAutoTile; // 0x0c(0x01)
	bool bSnapToNearestFullTile; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float TileUVs; // 0x10(0x04)
};

// ScriptStruct Tether.BasicMeshProperties
// Size: 0x1c (Inherited: 0x00)
struct FBasicMeshProperties {
	float LoopResolution; // 0x00(0x04)
	float CurveSimplificationMultiplier; // 0x04(0x04)
	struct FBasicMeshGenerationOptions MeshGenerationOptions; // 0x08(0x14)
};

// ScriptStruct Tether.CableMeshGenerationCurveDescription
// Size: 0x28 (Inherited: 0x00)
struct FCableMeshGenerationCurveDescription {
	struct TArray<struct FCableMeshGenerationPoint> Points; // 0x00(0x10)
	struct FVector StartTangent; // 0x10(0x0c)
	struct FVector EndTangent; // 0x1c(0x0c)
};

// ScriptStruct Tether.CableMeshGenerationPoint
// Size: 0x40 (Inherited: 0x00)
struct FCableMeshGenerationPoint {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FCableMeshGenerationPointInfo Info; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Tether.CableMeshGenerationPointInfo
// Size: 0x18 (Inherited: 0x00)
struct FCableMeshGenerationPointInfo {
	float DistanceToNearestContactPoint; // 0x00(0x04)
	float Looseness; // 0x04(0x04)
	float DistanceToSegmentLine; // 0x08(0x04)
	float SlackRatio; // 0x0c(0x04)
	float SegmentLength; // 0x10(0x04)
	float SegmentLineDistance; // 0x14(0x04)
};

// ScriptStruct Tether.SplineSegmentInfo
// Size: 0x30 (Inherited: 0x00)
struct FSplineSegmentInfo {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector StartLeaveTangent; // 0x0c(0x0c)
	struct FVector EndLocation; // 0x18(0x0c)
	struct FVector EndArriveTangent; // 0x24(0x0c)
};

// ScriptStruct Tether.TetherCableProperties
// Size: 0xa0 (Inherited: 0x00)
struct FTetherCableProperties {
	float CableWidth; // 0x00(0x04)
	struct FTetherCableSimulationOptions SimulationOptions; // 0x04(0x30)
	enum class ECableMeshGenerationType MeshType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FBasicMeshProperties BasicMeshProperties; // 0x38(0x1c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FCustomMeshProperties CustomMeshProperties; // 0x58(0x38)
	struct TArray<struct UMaterialInterface*> Materials; // 0x90(0x10)
};

// ScriptStruct Tether.CustomMeshProperties
// Size: 0x38 (Inherited: 0x00)
struct FCustomMeshProperties {
	struct TSoftObjectPtr<struct UStaticMesh> SourceMeshReference; // 0x00(0x28)
	float OffsetRotation; // 0x28(0x04)
	int32_t NumInstances; // 0x2c(0x04)
	bool bFitToCableWidth; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Tether.TetherCableSimulationOptions
// Size: 0x30 (Inherited: 0x00)
struct FTetherCableSimulationOptions {
	float SimulationDuration; // 0x00(0x04)
	float SubstepTime; // 0x04(0x04)
	bool bEnableStiffness; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t StiffnessSolverIterations; // 0x0c(0x04)
	float Drag; // 0x10(0x04)
	bool bEnableCollision; // 0x14(0x01)
	bool bEnableSelfCollision; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FCollisionProfileName CollisionProfile; // 0x18(0x08)
	float CollisionWidthScale; // 0x20(0x04)
	float CollisionFriction; // 0x24(0x04)
	float ParticleDistanceScale; // 0x28(0x04)
	float ConstraintsEaseInTime; // 0x2c(0x04)
};

// ScriptStruct Tether.TetherSegmentSimulationOptions
// Size: 0x02 (Inherited: 0x00)
struct FTetherSegmentSimulationOptions {
	bool bFixedAnchorPoint; // 0x00(0x01)
	bool bUseSplineTangents; // 0x01(0x01)
};

// ScriptStruct Tether.TetherSimulationInstanceResources
// Size: 0x28 (Inherited: 0x00)
struct FTetherSimulationInstanceResources {
	bool bIsInitialized; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct UWorld> World; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UBodySetup* BodySetup; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Tether.TetherSimulationSegmentSeries
// Size: 0x08 (Inherited: 0x00)
struct FTetherSimulationSegmentSeries {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tether.TetherSimulationModel
// Size: 0x50 (Inherited: 0x08)
struct FTetherSimulationModel : FTetherSimulationSegmentSeries {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform SimulationBaseWorldTransform; // 0x10(0x30)
	struct TArray<struct FTetherSimulationSegment> Segments; // 0x40(0x10)
};

// ScriptStruct Tether.TetherSimulationSegment
// Size: 0x50 (Inherited: 0x00)
struct FTetherSimulationSegment {
	uint32_t SegmentUniqueId; // 0x00(0x04)
	struct FSplineSegmentInfo SplineSegmentInfo; // 0x04(0x30)
	float Length; // 0x34(0x04)
	struct TArray<struct FTetherSimulationParticle> Particles; // 0x38(0x10)
	float SimulationTime; // 0x48(0x04)
	bool bInvalidated; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct Tether.TetherSimulationParticle
// Size: 0x20 (Inherited: 0x00)
struct FTetherSimulationParticle {
	uint32_t ParticleUniqueId; // 0x00(0x04)
	bool bFree; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector position; // 0x08(0x0c)
	struct FVector OldPosition; // 0x14(0x0c)
};

// ScriptStruct Tether.TetherSimulationParams
// Size: 0x100 (Inherited: 0x00)
struct FTetherSimulationParams {
	struct TWeakObjectPtr<struct UWorld> World; // 0x00(0x08)
	struct FString SimulationName; // 0x08(0x10)
	enum class ETetherSimulationTimingMode TimingMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CollisionWidth; // 0x1c(0x04)
	float DesiredParticleDistance; // 0x20(0x04)
	struct FVector CableForce; // 0x24(0x0c)
	struct FTetherCableSimulationOptions SimulationOptions; // 0x30(0x30)
	struct TArray<struct FTetherSegmentSimulationParams> SegmentParams; // 0x60(0x10)
	char pad_70[0x90]; // 0x70(0x90)
};

// ScriptStruct Tether.TetherSegmentSimulationParams
// Size: 0x03 (Inherited: 0x00)
struct FTetherSegmentSimulationParams {
	bool bShouldSimulateSegment; // 0x00(0x01)
	struct FTetherSegmentSimulationOptions SimulationOptions; // 0x01(0x02)
};

// ScriptStruct Tether.TetherProxySimulationSegmentSeries
// Size: 0x18 (Inherited: 0x08)
struct FTetherProxySimulationSegmentSeries : FTetherSimulationSegmentSeries {
	char pad_8[0x10]; // 0x08(0x10)
};

