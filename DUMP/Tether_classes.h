// Class Tether.TetherCableActor
// Size: 0x390 (Inherited: 0x220)
struct ATetherCableActor : AActor {
	struct FTetherCableProperties CableProperties; // 0x220(0xa0)
	bool bLockCurrentState; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x2c8(0x08)
	bool bSynchronousRealtime; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float RealtimeInEditorTimeDilation; // 0x2d4(0x04)
	bool bDebugVisualizeSimulationParticles; // 0x2d8(0x01)
	bool bDebugVisualizeSimulationCollision; // 0x2d9(0x01)
	bool bDebugVisualizeBuiltStaticMeshPoints; // 0x2da(0x01)
	bool bDebugVisualizeContactPoints; // 0x2db(0x01)
	bool bDebugVisualizeComponentLocations; // 0x2dc(0x01)
	bool bDebugVisualizeTangents; // 0x2dd(0x01)
	bool bVisible; // 0x2de(0x01)
	char pad_2DF[0x1]; // 0x2df(0x01)
	struct USceneComponent* SceneRoot; // 0x2e0(0x08)
	struct FDateTime TimeCreated; // 0x2e8(0x08)
	struct UTetherGuideSplineComponent* GuideSpline; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct FTetherSimulationModel ActiveSimulationModel; // 0x300(0x50)
	struct UStaticMesh* StaticMesh; // 0x350(0x08)
	struct FCableMeshGenerationCurveDescription BuiltCurveDescriptionLocalSpaceSimplified; // 0x358(0x28)
	struct UTetherCableMeshComponent* DynamicPreviewMesh; // 0x380(0x08)
	struct UTetherMeshGenerator* MeshGenerator; // 0x388(0x08)
};

// Class Tether.TetherCableMeshComponent
// Size: 0x4b0 (Inherited: 0x470)
struct UTetherCableMeshComponent : UMeshComponent {
	char pad_470[0x40]; // 0x470(0x40)
};

// Class Tether.TetherGuideSplineMetadata
// Size: 0x38 (Inherited: 0x28)
struct UTetherGuideSplineMetadata : USplineMetadata {
	struct TArray<struct UTetherPointSegmentDefinition*> PointSegmentDefinitions; // 0x28(0x10)
};

// Class Tether.TetherGuideSplineComponent
// Size: 0x570 (Inherited: 0x540)
struct UTetherGuideSplineComponent : USplineComponent {
	char pad_540[0x28]; // 0x540(0x28)
	struct UTetherGuideSplineMetadata* MetaData; // 0x568(0x08)
};

// Class Tether.TetherMeshGenerator
// Size: 0x28 (Inherited: 0x28)
struct UTetherMeshGenerator : UObject {
};

// Class Tether.TetherPointSegmentDefinition
// Size: 0x30 (Inherited: 0x28)
struct UTetherPointSegmentDefinition : UObject {
	float Slack; // 0x28(0x04)
	struct FTetherSegmentSimulationOptions SimulationOptions; // 0x2c(0x02)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// Class Tether.TMG_Basic
// Size: 0x48 (Inherited: 0x28)
struct UTMG_Basic : UTetherMeshGenerator {
	struct FBasicMeshProperties Properties; // 0x28(0x1c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Tether.TMG_CustomMesh
// Size: 0x60 (Inherited: 0x28)
struct UTMG_CustomMesh : UTetherMeshGenerator {
	struct FCustomMeshProperties Properties; // 0x28(0x38)
};

