// Enum ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8 {
	DifferenceAB,
	DifferenceBA,
	Intersect,
	Union,
	TrimA,
	TrimB,
	ECSGOperation_MAX,
};

// Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8 {
	UseExistingTopology,
	FaceNormalThreshold,
	FaceGroupID,
	PerTriangle,
	PerVertex,
	ESplitNormalMethod_MAX,
};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8 {
	AreaWeighted,
	AngleWeighted,
	AreaAngleWeighting,
	ENormalCalculationMethod_MAX,
};

// Enum ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8 {
	TriangleFan,
	PolygonEarClipping,
	Planar,
	Minimal,
	Smooth,
	EHoleFillOpFillType_MAX,
};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8 {
	Uniform,
	Cotangent,
	MeanValue,
	ERemeshSmoothingType_MAX,
};

// Enum ModelingOperators.ERemeshType
enum class ERemeshType : uint8 {
	Standard,
	FullPass,
	NormalFlow,
	ERemeshType_MAX,
};

// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8 {
	Cube,
	Cylinder,
	Plane,
	EUVProjectionMethod_MAX,
};

// Enum ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8 {
	Dilate,
	Contract,
	Close,
	Open,
	EMorphologyOperation_MAX,
};

