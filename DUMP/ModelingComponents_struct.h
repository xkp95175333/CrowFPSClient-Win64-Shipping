// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8 {
	NewAsset,
	FirstInputAsset,
	LastInputAsset,
	EBaseCreateFromSelectedTargetType_MAX,
};

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8 {
	NoTangents,
	AutoCalculated,
	ExternallyCalculated,
	EDynamicMeshTangentCalcType_MAX,
};

// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8 {
	DefaultGizmo,
	QuickAxisTranslation,
	EMultiTransformerMode_MAX,
};

// Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8 {
	DeleteSources,
	HideSources,
	KeepSources,
	EHandleSourcesMethod_MAX,
};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8 {
	Linear,
	Smooth,
	ESpaceCurveControlPointFalloffType_MAX,
};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8 {
	Shared,
	First,
	Last,
	ESpaceCurveControlPointOriginMode_MAX,
};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8 {
	Shared,
	PerVertex,
	ESpaceCurveControlPointTransformMode_MAX,
};

// Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8 {
	Left,
	Right,
	EUVLayoutPreviewSide_MAX,
};

// ScriptStruct ModelingComponents.RenderableTriangle
// Size: 0x78 (Inherited: 0x00)
struct FRenderableTriangle {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FRenderableTriangleVertex Vertex0; // 0x08(0x24)
	struct FRenderableTriangleVertex Vertex1; // 0x2c(0x24)
	struct FRenderableTriangleVertex Vertex2; // 0x50(0x24)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// Size: 0x24 (Inherited: 0x00)
struct FRenderableTriangleVertex {
	struct FVector position; // 0x00(0x0c)
	struct FVector2D UV; // 0x0c(0x08)
	struct FVector Normal; // 0x14(0x0c)
	struct FColor Color; // 0x20(0x04)
};

