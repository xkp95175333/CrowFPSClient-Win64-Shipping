// Enum Water.EWaveSpectrumType
enum class EWaveSpectrumType : uint8 {
	Phillips,
	PiersonMoskowitz,
	JONSWAP,
	EWaveSpectrumType_MAX,
};

// Enum Water.EWaterBodyType
enum class EWaterBodyType : uint8 {
	River,
	Lake,
	Ocean,
	Transition,
	Num,
	EWaterBodyType_MAX,
};

// Enum Water.EWaterBrushBlendType
enum class EWaterBrushBlendType : uint8 {
	AlphaBlend,
	Min,
	Max,
	Additive,
};

// Enum Water.EWaterBrushFalloffMode
enum class EWaterBrushFalloffMode : uint8 {
	Angle,
	Width,
	EWaterBrushFalloffMode_MAX,
};

// ScriptStruct Water.SphericalPontoon
// Size: 0x140 (Inherited: 0x00)
struct FSphericalPontoon {
	struct FName CenterSocket; // 0x00(0x08)
	struct FVector RelativeLocation; // 0x08(0x0c)
	float Radius; // 0x14(0x04)
	struct FVector LocalForce; // 0x18(0x0c)
	struct FVector CenterLocation; // 0x24(0x0c)
	struct FQuat SocketRotation; // 0x30(0x10)
	struct FVector Offset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	float WaterHeight; // 0x50(0x04)
	float WaterDepth; // 0x54(0x04)
	float ImmersionDepth; // 0x58(0x04)
	struct FVector WaterPlaneLocation; // 0x5c(0x0c)
	struct FVector WaterPlaneNormal; // 0x68(0x0c)
	struct FVector WaterSurfacePosition; // 0x74(0x0c)
	struct FVector WaterVelocity; // 0x80(0x0c)
	int32_t WaterBodyIndex; // 0x8c(0x04)
	char pad_90[0xa8]; // 0x90(0xa8)
	struct AWaterBody* CurrentWaterBody; // 0x138(0x08)
};

// ScriptStruct Water.BuoyancyData
// Size: 0x50 (Inherited: 0x00)
struct FBuoyancyData {
	struct TArray<struct FSphericalPontoon> Pontoons; // 0x00(0x10)
	float BuoyancyCoefficient; // 0x10(0x04)
	float BuoyancyDamp; // 0x14(0x04)
	float BuoyancyDamp2; // 0x18(0x04)
	float BuoyancyRampMinVelocity; // 0x1c(0x04)
	float BuoyancyRampMaxVelocity; // 0x20(0x04)
	float BuoyancyRampMax; // 0x24(0x04)
	float MaxBuoyantForce; // 0x28(0x04)
	float WaterShorePushFactor; // 0x2c(0x04)
	float WaterVelocityStrength; // 0x30(0x04)
	float MaxWaterForce; // 0x34(0x04)
	float DragCoefficient; // 0x38(0x04)
	float DragCoefficient2; // 0x3c(0x04)
	float AngularDragCoefficient; // 0x40(0x04)
	float MaxDragSpeed; // 0x44(0x04)
	bool bApplyDragForcesInWater; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Water.GerstnerWaveOctave
// Size: 0x14 (Inherited: 0x00)
struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x00(0x04)
	float AmplitudeScale; // 0x04(0x04)
	float MainDirection; // 0x08(0x04)
	float SpreadAngle; // 0x0c(0x04)
	bool bUniformSpread; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Water.GerstnerWave
// Size: 0x30 (Inherited: 0x00)
struct FGerstnerWave {
	float WaveLength; // 0x00(0x04)
	float Amplitude; // 0x04(0x04)
	float Steepness; // 0x08(0x04)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector2D WaveVector; // 0x18(0x08)
	float WaveSpeed; // 0x20(0x04)
	float WKA; // 0x24(0x04)
	float Q; // 0x28(0x04)
	float PhaseOffset; // 0x2c(0x04)
};

// ScriptStruct Water.UnderwaterPostProcessSettings
// Size: 0x570 (Inherited: 0x00)
struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Priority; // 0x04(0x04)
	float BlendRadius; // 0x08(0x04)
	float BlendWeight; // 0x0c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x10(0x550)
	struct UMaterialInterface* UnderwaterPostProcessMaterial; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
};

// ScriptStruct Water.WaterBodyHeightmapSettings
// Size: 0x80 (Inherited: 0x00)
struct FWaterBodyHeightmapSettings {
	enum class EWaterBrushBlendType BlendMode; // 0x00(0x01)
	bool bInvertShape; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FWaterFalloffSettings FalloffSettings; // 0x04(0x14)
	struct FWaterBrushEffects Effects; // 0x18(0x60)
	int32_t Priority; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Water.WaterBrushEffects
// Size: 0x60 (Inherited: 0x00)
struct FWaterBrushEffects {
	struct FWaterBrushEffectBlurring Blurring; // 0x00(0x08)
	struct FWaterBrushEffectCurlNoise CurlNoise; // 0x08(0x10)
	struct FWaterBrushEffectDisplacement Displacement; // 0x18(0x28)
	struct FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40(0x08)
	struct FWaterBrushEffectTerracing Terracing; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Water.WaterBrushEffectTerracing
// Size: 0x14 (Inherited: 0x00)
struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x00(0x04)
	float TerraceSpacing; // 0x04(0x04)
	float TerraceSmoothness; // 0x08(0x04)
	float MaskLength; // 0x0c(0x04)
	float MaskStartOffset; // 0x10(0x04)
};

// ScriptStruct Water.WaterBrushEffectSmoothBlending
// Size: 0x08 (Inherited: 0x00)
struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x00(0x04)
	float OuterSmoothDistance; // 0x04(0x04)
};

// ScriptStruct Water.WaterBrushEffectDisplacement
// Size: 0x28 (Inherited: 0x00)
struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x00(0x04)
	float DisplacementTiling; // 0x04(0x04)
	struct UTexture2D* Texture; // 0x08(0x08)
	float Midpoint; // 0x10(0x04)
	struct FLinearColor Channel; // 0x14(0x10)
	float WeightmapInfluence; // 0x24(0x04)
};

// ScriptStruct Water.WaterBrushEffectCurlNoise
// Size: 0x10 (Inherited: 0x00)
struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x00(0x04)
	float Curl2Amount; // 0x04(0x04)
	float Curl1Tiling; // 0x08(0x04)
	float Curl2Tiling; // 0x0c(0x04)
};

// ScriptStruct Water.WaterBrushEffectBlurring
// Size: 0x08 (Inherited: 0x00)
struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Radius; // 0x04(0x04)
};

// ScriptStruct Water.WaterFalloffSettings
// Size: 0x14 (Inherited: 0x00)
struct FWaterFalloffSettings {
	enum class EWaterBrushFalloffMode FalloffMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FalloffAngle; // 0x04(0x04)
	float FalloffWidth; // 0x08(0x04)
	float EdgeOffset; // 0x0c(0x04)
	float ZOffset; // 0x10(0x04)
};

// ScriptStruct Water.WaterBodyWeightmapSettings
// Size: 0x20 (Inherited: 0x00)
struct FWaterBodyWeightmapSettings {
	float FalloffWidth; // 0x00(0x04)
	float EdgeOffset; // 0x04(0x04)
	struct UTexture2D* ModulationTexture; // 0x08(0x08)
	float TextureTiling; // 0x10(0x04)
	float TextureInfluence; // 0x14(0x04)
	float Midpoint; // 0x18(0x04)
	float FinalOpacity; // 0x1c(0x04)
};

// ScriptStruct Water.WaterBrushEffectCurves
// Size: 0x20 (Inherited: 0x00)
struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* ElevationCurveAsset; // 0x08(0x08)
	float ChannelEdgeOffset; // 0x10(0x04)
	float ChannelDepth; // 0x14(0x04)
	float CurveRampWidth; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Water.WaterCurveSettings
// Size: 0x20 (Inherited: 0x00)
struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* ElevationCurveAsset; // 0x08(0x08)
	float ChannelEdgeOffset; // 0x10(0x04)
	float ChannelDepth; // 0x14(0x04)
	float CurveRampWidth; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Water.WaterSplineCurveDefaults
// Size: 0x10 (Inherited: 0x00)
struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x00(0x04)
	float DefaultWidth; // 0x04(0x04)
	float DefaultVelocity; // 0x08(0x04)
	float DefaultAudioIntensity; // 0x0c(0x04)
};

