// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8 {
	Single,
	PerFace,
	PerQuad,
	EMakeMeshPolygroupMode_MAX,
};

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8 {
	Base,
	Centered,
	Top,
	EMakeMeshPivotLocation_MAX,
};

// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8 {
	GroundPlane,
	OnScene,
	EMakeMeshPlacementType_MAX,
};

// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class EAlignObjectsBoxPoint : uint8 {
	Center,
	Bottom,
	Top,
	Left,
	Right,
	Front,
	Back,
	Min,
	Max,
};

// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class EAlignObjectsAlignToOptions : uint8 {
	FirstSelected,
	LastSelected,
	Combined,
	EAlignObjectsAlignToOptions_MAX,
};

// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class EAlignObjectsAlignTypes : uint8 {
	Pivots,
	BoundingBoxes,
	EAlignObjectsAlignTypes_MAX,
};

// Enum MeshModelingTools.EBakedCurvatureClampMode
enum class EBakedCurvatureClampMode : uint8 {
	None,
	Positive,
	Negative,
	EBakedCurvatureClampMode_MAX,
};

// Enum MeshModelingTools.EBakedCurvatureColorMode
enum class EBakedCurvatureColorMode : uint8 {
	Grayscale,
	RedBlue,
	RedGreenBlue,
	EBakedCurvatureColorMode_MAX,
};

// Enum MeshModelingTools.EBakedCurvatureTypeMode
enum class EBakedCurvatureTypeMode : uint8 {
	MeanAverage,
	Max,
	Min,
	Gaussian,
};

// Enum MeshModelingTools.EBakeTextureResolution
enum class EBakeTextureResolution : uint8 {
	Resolution16,
	Resolution32,
	Resolution64,
	Resolution128,
	Resolution256,
	Resolution512,
	Resolution1024,
	Resolution2048,
	Resolution4096,
	Resolution8192,
	EBakeTextureResolution_MAX,
};

// Enum MeshModelingTools.EBakeMapType
enum class EBakeMapType : uint8 {
	TangentSpaceNormalMap,
	AmbientOcclusion,
	Curvature,
	Texture2DImage,
	NormalImage,
	FaceNormalImage,
	PositionImage,
	EBakeMapType_MAX,
};

// Enum MeshModelingTools.EBakeScaleMethod
enum class EBakeScaleMethod : uint8 {
	BakeFullScale,
	BakeNonuniformScale,
	DoNotBakeScale,
	EBakeScaleMethod_MAX,
};

// Enum MeshModelingTools.ECollisionGeometryMode
enum class ECollisionGeometryMode : uint8 {
	Default,
	SimpleAndComplex,
	UseSimpleAsComplex,
	UseComplexAsSimple,
	ECollisionGeometryMode_MAX,
};

// Enum MeshModelingTools.ECombineTargetType
enum class ECombineTargetType : uint8 {
	NewAsset,
	FirstInputAsset,
	LastInputAsset,
	ECombineTargetType_MAX,
};

// Enum MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8 {
	FaceNormalDeviation,
	FromUVISlands,
	EConvertToPolygonsMode_MAX,
};

// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8 {
	AxisTranslation,
	AxisRotation,
	EQuickTransformerMode_MAX,
};

// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8 {
	Uniform,
	Umbrella,
	Valence,
	MeanValue,
	Cotangent,
	ClampedCotangent,
	EWeightScheme_MAX,
};

// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8 {
	Linear,
	Laplacian,
	EGroupTopologyDeformationStrategy_MAX,
};

// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8 {
	Constant,
	RandomNoise,
	PerlinNoise,
	DisplacementMap,
	SineWave,
	EDisplaceMeshToolDisplaceType_MAX,
};

// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8 {
	MeshedPolygon,
	ExtrudedConstant,
	ExtrudedInteractive,
	EDrawPolygonOutputMode_MAX,
};

// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8 {
	Freehand,
	Circle,
	Square,
	Rectangle,
	RoundedRectangle,
	HoleyCircle,
	EDrawPolygonDrawMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class EDrawPolyPathExtrudeDirection : uint8 {
	SelectionNormal,
	WorldX,
	WorldY,
	WorldZ,
	LocalX,
	LocalY,
	LocalZ,
	EDrawPolyPathExtrudeDirection_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class EDrawPolyPathHeightMode : uint8 {
	Interactive,
	Constant,
	EDrawPolyPathHeightMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class EDrawPolyPathWidthMode : uint8 {
	Interactive,
	Constant,
	EDrawPolyPathWidthMode_MAX,
};

// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class EDrawPolyPathOutputMode : uint8 {
	Ribbon,
	Extrusion,
	Ramp,
	EDrawPolyPathOutputMode_MAX,
};

// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8 {
	Move,
	PullKelvin,
	PullSharpKelvin,
	Smooth,
	Offset,
	SculptView,
	SculptMax,
	Inflate,
	ScaleKelvin,
	Pinch,
	TwistKelvin,
	Flatten,
	Plane,
	PlaneViewAligned,
	FixedPlane,
	Resample,
	LastValue,
	EDynamicMeshSculptBrushType_MAX,
};

// Enum MeshModelingTools.EEdgeLoopInsertionMode
enum class EEdgeLoopInsertionMode : uint8 {
	Retriangulate,
	PlaneCut,
	EEdgeLoopInsertionMode_MAX,
};

// Enum MeshModelingTools.EEdgeLoopPositioningMode
enum class EEdgeLoopPositioningMode : uint8 {
	Even,
	ProportionOffset,
	DistanceOffset,
	EEdgeLoopPositioningMode_MAX,
};

// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8 {
	FaceNormals,
	ViewDirection,
	EPolyEditCutPlaneOrientation_MAX,
};

// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8 {
	SelectionNormal,
	WorldX,
	WorldY,
	WorldZ,
	LocalX,
	LocalY,
	LocalZ,
	EPolyEditExtrudeDirection_MAX,
};

// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8 {
	NoAction,
	PlaneCut,
	Extrude,
	Offset,
	Inset,
	Outset,
	Merge,
	Delete,
	CutFaces,
	RecalculateNormals,
	FlipNormals,
	Retriangulate,
	Decompose,
	Disconnect,
	CollapseEdge,
	WeldEdges,
	StraightenEdge,
	FillHole,
	PlanarProjectionUV,
	PokeSingleFace,
	SplitSingleEdge,
	FlipSingleEdge,
	CollapseSingleEdge,
	EEditMeshPolygonsToolActions_MAX,
};

// Enum MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8 {
	FromObject,
	FromGeometry,
	ELocalFrameMode_MAX,
};

// Enum MeshModelingTools.EEditPivotToolActions
enum class EEditPivotToolActions : uint8 {
	NoAction,
	Center,
	Bottom,
	Top,
	Left,
	Right,
	Front,
	Back,
	EEditPivotToolActions_MAX,
};

// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class EEditPivotSnapDragRotationMode : uint8 {
	Ignore,
	Align,
	AlignFlipped,
	LastValue,
	EEditPivotSnapDragRotationMode_MAX,
};

// Enum MeshModelingTools.EGroupEdgeInsertionMode
enum class EGroupEdgeInsertionMode : uint8 {
	Retriangulate,
	PlaneCut,
	EGroupEdgeInsertionMode_MAX,
};

// Enum MeshModelingTools.EHoleFillToolActions
enum class EHoleFillToolActions : uint8 {
	NoAction,
	SelectAll,
	ClearSelection,
	EHoleFillToolActions_MAX,
};

// Enum MeshModelingTools.EMeshAttributePaintToolActions
enum class EMeshAttributePaintToolActions : uint8 {
	NoAction,
	EMeshAttributePaintToolActions_MAX,
};

// Enum MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8 {
	BothSides,
	PushDown,
	PullTowards,
	EPlaneBrushSideMode_MAX,
};

// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8 {
	ExistingMaterial,
	Diffuse,
	Grey,
	Soft,
	TangentNormal,
	Custom,
	EMeshEditingMaterialModes_MAX,
};

// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8 {
	KeepOriginal,
	Checkerboard,
	Override,
	ESetMeshMaterialMode_MAX,
};

// Enum MeshModelingTools.EMeshSculptFalloffType
enum class EMeshSculptFalloffType : uint8 {
	Smooth,
	Linear,
	Inverse,
	Round,
	BoxSmooth,
	BoxLinear,
	BoxInverse,
	BoxRound,
	LastValue,
	EMeshSculptFalloffType_MAX,
};

// Enum MeshModelingTools.EMeshFacesColorMode
enum class EMeshFacesColorMode : uint8 {
	None,
	ByGroup,
	ByMaterialID,
	ByUVIsland,
	EMeshFacesColorMode_MAX,
};

// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8 {
	Brush,
	VolumetricBrush,
	AngleFiltered,
	Visible,
	AllConnected,
	AllInGroup,
	ByMaterial,
	ByUVIsland,
	AllWithinAngle,
	EMeshSelectionToolPrimaryMode_MAX,
};

// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8 {
	NoAction,
	SelectAll,
	ClearSelection,
	InvertSelection,
	GrowSelection,
	ShrinkSelection,
	ExpandToConnected,
	SelectLargestComponentByTriCount,
	SelectLargestComponentByArea,
	OptimizeSelection,
	DeleteSelected,
	DisconnectSelected,
	SeparateSelected,
	FlipSelected,
	CreateGroup,
	CycleSelectionMode,
	CycleViewMode,
	EMeshSelectionToolActions_MAX,
};

// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8 {
	Bend,
	Flare,
	Twist,
	ENonlinearOperationType_MAX,
};

// Enum MeshModelingTools.EMeshVertexSculptBrushType
enum class EMeshVertexSculptBrushType : uint8 {
	Move,
	PullKelvin,
	PullSharpKelvin,
	Smooth,
	SmoothFill,
	Offset,
	SculptView,
	SculptMax,
	Inflate,
	ScaleKelvin,
	Pinch,
	TwistKelvin,
	Flatten,
	Plane,
	PlaneViewAligned,
	FixedPlane,
	LastValue,
	EMeshVertexSculptBrushType_MAX,
};

// Enum MeshModelingTools.EMirrorToolAction
enum class EMirrorToolAction : uint8 {
	NoAction,
	ShiftToCenter,
	Left,
	Right,
	Up,
	Down,
	Forward,
	Backward,
	EMirrorToolAction_MAX,
};

// Enum MeshModelingTools.EMirrorCtrlClickBehavior
enum class EMirrorCtrlClickBehavior : uint8 {
	Reposition,
	RepositionAndReorient,
	EMirrorCtrlClickBehavior_MAX,
};

// Enum MeshModelingTools.EMirrorOperationMode
enum class EMirrorOperationMode : uint8 {
	MirrorAndAppend,
	MirrorExisting,
	EMirrorOperationMode_MAX,
};

// Enum MeshModelingTools.EMirrorSaveMode
enum class EMirrorSaveMode : uint8 {
	UpdateAssets,
	CreateNewAssets,
	EMirrorSaveMode_MAX,
};

// Enum MeshModelingTools.EOffsetMeshToolOffsetType
enum class EOffsetMeshToolOffsetType : uint8 {
	Iterative,
	Implicit,
	EOffsetMeshToolOffsetType_MAX,
};

// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	Ignore,
	EMaterialBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	Ignore,
	EGroupBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8 {
	Fixed,
	Refine,
	Free,
	EMeshBoundaryConstraint_MAX,
};

// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8 {
	GeneralizedWindingNumber,
	RaycastOcclusionSamples,
	EOcclusionCalculationUIMode_MAX,
};

// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8 {
	Vertices,
	VerticesAndCentroids,
	EOcclusionTriangleSamplingUIMode_MAX,
};

// Enum MeshModelingTools.ERevolvePropertiesQuadSplit
enum class ERevolvePropertiesQuadSplit : uint8 {
	Uniform,
	ShortestDiagonal,
	ERevolvePropertiesQuadSplit_MAX,
};

// Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class ERevolvePropertiesPolygroupMode : uint8 {
	Single,
	PerFace,
	PerStep,
	AccordingToProfileCurve,
	ERevolvePropertiesPolygroupMode_MAX,
};

// Enum MeshModelingTools.ERevolvePropertiesCapFillMode
enum class ERevolvePropertiesCapFillMode : uint8 {
	None,
	Delaunay,
	EarClipping,
	CenterFan,
	ERevolvePropertiesCapFillMode_MAX,
};

// Enum MeshModelingTools.EProjectedHullAxis
enum class EProjectedHullAxis : uint8 {
	X,
	Y,
	Z,
	SmallestBoxDimension,
	SmallestVolume,
	EProjectedHullAxis_MAX,
};

// Enum MeshModelingTools.ECollisionGeometryType
enum class ECollisionGeometryType : uint8 {
	KeepExisting,
	AlignedBoxes,
	OrientedBoxes,
	MinimalSpheres,
	Capsules,
	ConvexHulls,
	SweptHulls,
	MinVolume,
	None,
	ECollisionGeometryType_MAX,
};

// Enum MeshModelingTools.ESetCollisionGeometryInputMode
enum class ESetCollisionGeometryInputMode : uint8 {
	CombineAll,
	PerInputObject,
	PerMeshComponent,
	PerMeshGroup,
	ESetCollisionGeometryInputMode_MAX,
};

// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8 {
	Iterative,
	Implicit,
	Diffusion,
	ESmoothMeshToolSmoothType_MAX,
};

// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8 {
	Ignore,
	Align,
	AlignFlipped,
	LastValue,
	ETransformMeshesSnapDragRotationMode_MAX,
};

// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8 {
	ClickPoint,
	Pivot,
	LastValue,
	ETransformMeshesSnapDragSource_MAX,
};

// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8 {
	SharedGizmo,
	SharedGizmoLocal,
	PerObjectGizmo,
	LastValue,
	ETransformMeshesTransformMode_MAX,
};

// ScriptStruct MeshModelingTools.PhysicsConvexData
// Size: 0x38 (Inherited: 0x00)
struct FPhysicsConvexData {
	int32_t NumVertices; // 0x00(0x04)
	int32_t NumFaces; // 0x04(0x04)
	struct FKShapeElem Element; // 0x08(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsCapsuleData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsCapsuleData {
	float Radius; // 0x00(0x04)
	float Length; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsBoxData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsBoxData {
	struct FVector Dimensions; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PhysicsSphereData
// Size: 0x70 (Inherited: 0x00)
struct FPhysicsSphereData {
	float Radius; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct FKShapeElem Element; // 0x40(0x30)
};

// ScriptStruct MeshModelingTools.PerlinLayerProperties
// Size: 0x08 (Inherited: 0x00)
struct FPerlinLayerProperties {
	float Frequency; // 0x00(0x04)
	float Intensity; // 0x04(0x04)
};

// ScriptStruct MeshModelingTools.EditPivotTarget
// Size: 0x10 (Inherited: 0x00)
struct FEditPivotTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// Size: 0x10 (Inherited: 0x00)
struct FTransformMeshesTarget {
	struct UTransformProxy* TransformProxy; // 0x00(0x08)
	struct UTransformGizmo* TransformGizmo; // 0x08(0x08)
};

