// Enum CrowVehicles.ECrowLandWheelsTireStatus
enum class ECrowLandWheelsTireStatus : uint8 {
	Normal,
	Flat,
	Destroyed,
	ECrowLandWheelsTireStatus_MAX,
};

// Enum CrowVehicles.ECrowVehicleFloodingWaterType
enum class ECrowVehicleFloodingWaterType : uint8 {
	NotInWater,
	WaterPlane,
	WaterBodyOcean,
	WaterBodyLake,
	WaterBodyOther,
	ECrowVehicleFloodingWaterType_MAX,
};

// Enum CrowVehicles.ECrowVehicleFloodingState
enum class ECrowVehicleFloodingState : uint8 {
	NONE,
	NoOverlap,
	Overlap,
	InWater,
	Immerge,
	ImmergeToFlooding,
	Flooding,
	ECrowVehicleFloodingState_MAX,
};

// Enum CrowVehicles.ECrowVehicleRotorType
enum class ECrowVehicleRotorType : uint8 {
	Acceleration,
	Torque,
	ECrowVehicleRotorType_MAX,
};

// ScriptStruct CrowVehicles.AnimNode_CrowLandWheelsHandler
// Size: 0x130 (Inherited: 0xc8)
struct FAnimNode_CrowLandWheelsHandler : FAnimNode_SkeletalControlBase {
	struct TMap<struct FName, struct FCrowLandWheelsHandlerAnimSetup> WheelAnimSetup; // 0xc8(0x50)
	struct TArray<struct FLandWheelLookupData> Wheels; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct CrowVehicles.LandWheelLookupData
// Size: 0x1c (Inherited: 0x00)
struct FLandWheelLookupData {
	int32_t WheelIndex; // 0x00(0x04)
	struct FBoneReference BoneReference; // 0x04(0x10)
	bool bUseSteerAnlge; // 0x14(0x01)
	bool bUseRotationAngle; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float RotationMultiply; // 0x18(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsHandlerAnimSetup
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandWheelsHandlerAnimSetup {
	int32_t WheelIndex; // 0x00(0x04)
	bool bUseSteerAngle; // 0x04(0x01)
	bool bUseRotationAngle; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float RotationMultiply; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowVehicles.CrowBoatsFloatingVolumeSetup
// Size: 0x38 (Inherited: 0x00)
struct FCrowBoatsFloatingVolumeSetup {
	struct FName BodySocketName; // 0x00(0x08)
	float Mass; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
	float MinWaterDepth; // 0x10(0x04)
	float BuoyancyDensity; // 0x14(0x04)
	float BuoyancyMultiplyMaxSpeed; // 0x18(0x04)
	struct FVector IdleOffset; // 0x1c(0x0c)
	struct FVector FullSpeedOffset; // 0x28(0x0c)
	float MaxOffsetSpeed; // 0x34(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FCrowLandWheelsAnimInstanceProxy : FAnimInstanceProxy {
	char pad_760[0x10]; // 0x760(0x10)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdateCacheBase
// Size: 0xe0 (Inherited: 0x00)
struct FCrowVehicleUpdateCacheBase {
	bool IsValidCache; // 0x00(0x01)
	bool UseSubstepping; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ElementIndex; // 0x04(0x04)
	float DeltaTime; // 0x08(0x04)
	float InverseDeltaTime; // 0x0c(0x04)
	float WorldGravity; // 0x10(0x04)
	float WaterCrashImpulse; // 0x14(0x04)
	struct UWorld* TraceWorld; // 0x18(0x08)
	struct AActor* OwnerActor; // 0x20(0x08)
	struct USkeletalMeshComponent* BodySKC; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct FTransform BodyTransform; // 0x40(0x30)
	struct FVector BodyLocation; // 0x70(0x0c)
	struct FVector BodyForward; // 0x7c(0x0c)
	struct FVector BodyRight; // 0x88(0x0c)
	struct FVector BodyUp; // 0x94(0x0c)
	struct FVector BodyCOM; // 0xa0(0x0c)
	struct FVector BodyAcceleration; // 0xac(0x0c)
	struct FVector BodyVelocity; // 0xb8(0x0c)
	struct FVector BodyAngularVelocity; // 0xc4(0x0c)
	float BodySpeed; // 0xd0(0x04)
	float BodySpeedForward; // 0xd4(0x04)
	float BodySpeedRight; // 0xd8(0x04)
	float TotalMass; // 0xdc(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsUpdateCache
// Size: 0x210 (Inherited: 0xe0)
struct FCrowLandWheelsUpdateCache : FCrowVehicleUpdateCacheBase {
	struct FCrowLandWheelsBodySetting BodySetting; // 0xe0(0x120)
	float ChasisMassPerWheel; // 0x200(0x04)
	float TotalMassPerWheel; // 0x204(0x04)
	int16_t ActiveWheelCount; // 0x208(0x02)
	char pad_20A[0x6]; // 0x20a(0x06)
};

// ScriptStruct CrowVehicles.CrowLandWheelsBodySetting
// Size: 0x120 (Inherited: 0x00)
struct FCrowLandWheelsBodySetting {
	bool UpdateBoneTransform; // 0x00(0x01)
	bool LocalSpaceKinematics; // 0x01(0x01)
	bool LocalSpaceSimulation; // 0x02(0x01)
	bool SimulationGenerateHitEvents; // 0x03(0x01)
	bool BeginWithReadyForDriving; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpeedMaxKmPH; // 0x08(0x04)
	float SpeedReverseMaxKmPH; // 0x0c(0x04)
	float AccelerationRollForce; // 0x10(0x04)
	float AccelerationPitchForce; // 0x14(0x04)
	float AccelerationCameraYaw; // 0x18(0x04)
	float AccelerationCameraSpeed; // 0x1c(0x04)
	float WheelRollingResistance; // 0x20(0x04)
	float InAirAngularResistance; // 0x24(0x04)
	float InAirAngularRecoverRoll; // 0x28(0x04)
	float InAirAngularRecoverPitch; // 0x2c(0x04)
	float ChasisMass; // 0x30(0x04)
	float ChasisMassInWater; // 0x34(0x04)
	struct FVector ChasisSize; // 0x38(0x0c)
	struct FVector DirectionalDragRatio; // 0x44(0x0c)
	float FallRestitution; // 0x50(0x04)
	float SpeedDragThreshold; // 0x54(0x04)
	float SlopeSlipPower; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UDamageType* DamageTypeClass; // 0x60(0x08)
	float WheelSqueezeDamagePerSecond; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FCrowLandWheelsTireAndWheel> WheelSetup; // 0x70(0x10)
	struct TArray<struct FCrowLandWheelsAntiRoll> AntiRollSetup; // 0x80(0x10)
	struct FCrowLandWheelsGripForce GripSetup; // 0x90(0x90)
};

// ScriptStruct CrowVehicles.CrowLandWheelsGripForce
// Size: 0x90 (Inherited: 0x00)
struct FCrowLandWheelsGripForce {
	float SuspensionMax; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRuntimeFloatCurve GripForceBySpeed; // 0x08(0x88)
};

// ScriptStruct CrowVehicles.CrowLandWheelsAntiRoll
// Size: 0x0c (Inherited: 0x00)
struct FCrowLandWheelsAntiRoll {
	int16_t WheelIndexLeft; // 0x00(0x02)
	int16_t WheelIndexRight; // 0x02(0x02)
	float AntiRollStrength; // 0x04(0x04)
	float SpringDiffThreshold; // 0x08(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTireAndWheel
// Size: 0x50 (Inherited: 0x00)
struct FCrowLandWheelsTireAndWheel {
	bool IsFlipWheelRotation; // 0x00(0x01)
	bool ShowDebug; // 0x01(0x01)
	bool UseOverrideWheelLocation; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName BodySocketName; // 0x04(0x08)
	struct FName SkeletalBoneName; // 0x0c(0x08)
	struct FVector OverrideWheelLocation; // 0x14(0x0c)
	struct FVector Offset; // 0x20(0x0c)
	struct FVector SweepOffset; // 0x2c(0x0c)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigClass; // 0x38(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigClassFlat; // 0x40(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigClassDestroyed; // 0x48(0x08)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTankSetting
// Size: 0xc0 (Inherited: 0x00)
struct FCrowLandWheelsTankSetting {
	float ThrottleSpeed; // 0x00(0x04)
	float SteeringSpeed; // 0x04(0x04)
	float FrictionYaw; // 0x08(0x04)
	float SteeringYawMultply; // 0x0c(0x04)
	float StandingRotationThrottle; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FRuntimeFloatCurve SteeringTorqueRatio; // 0x18(0x88)
	struct UStaticMesh* TrackMeshAsset; // 0xa0(0x08)
	float TrackThickness; // 0xa8(0x04)
	float TrackSingleLength; // 0xac(0x04)
	float TrackLeftLocalY; // 0xb0(0x04)
	float TrackRightLocalY; // 0xb4(0x04)
	bool ShowTrackDebug; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct CrowVehicles.CrowLandWheelsEngineSetting
// Size: 0xd0 (Inherited: 0x00)
struct FCrowLandWheelsEngineSetting {
	bool Debug; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FCrowVehicleInputSetting AccelerationInput; // 0x04(0x08)
	struct FCrowVehicleInputSetting BrakeInput; // 0x0c(0x08)
	float MaxRPM; // 0x14(0x04)
	float MaxRPMReverse; // 0x18(0x04)
	float MaxTorque; // 0x1c(0x04)
	float IdleBrake; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve TorqueCurveNormalized; // 0x28(0x88)
	struct TArray<struct FCrowLandWheelsGearSetting> GearBox; // 0xb0(0x10)
	float GearFinalRatio; // 0xc0(0x04)
	float GearSwitchDelay; // 0xc4(0x04)
	float GearKeepDelay; // 0xc8(0x04)
	float GearResetRPM; // 0xcc(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsGearSetting
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandWheelsGearSetting {
	int16_t GearIndex; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float GearUpRatioRPM; // 0x04(0x04)
	float GearDownRatioRPM; // 0x08(0x04)
	float GearRatioTorque; // 0x0c(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleInputSetting
// Size: 0x08 (Inherited: 0x00)
struct FCrowVehicleInputSetting {
	float InputRaise; // 0x00(0x04)
	float InputFall; // 0x04(0x04)
};

// ScriptStruct CrowVehicles.CrowTireAndWheelSetting
// Size: 0x110 (Inherited: 0x00)
struct FCrowTireAndWheelSetting {
	bool Debug; // 0x00(0x01)
	bool IsDrivingWheel; // 0x01(0x01)
	bool ApplyBrake; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FCrowLandWheelsWheelSetting Wheel; // 0x04(0x10)
	struct FCrowLandWheelsBrakeSetting Brake; // 0x14(0x0c)
	struct FCrowLandWheelsFrictionSetting Friction; // 0x20(0x18)
	struct FCrowLandWheelsSteeringSetting Steering; // 0x38(0x98)
	struct FCrowLandWheelsSuspensionSetting Suspension; // 0xd0(0x20)
	struct FCrowLandWheelsDamageSetting Damage; // 0xf0(0x14)
	float StationaryTime; // 0x104(0x04)
	float StationaryDistanceSquare; // 0x108(0x04)
	float StationaryRotationSpeedDegree; // 0x10c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsDamageSetting
// Size: 0x14 (Inherited: 0x00)
struct FCrowLandWheelsDamageSetting {
	float DrivingForceMultiply; // 0x00(0x04)
	float WheelDampingRatioAdd; // 0x04(0x04)
	float TireBumpForSuspension; // 0x08(0x04)
	float TireBumpFrequency; // 0x0c(0x04)
	float EngineTorqueLimit; // 0x10(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSuspensionSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowLandWheelsSuspensionSetting {
	enum class ECollisionChannel SuspensionTraceChannel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SuspensionLength; // 0x04(0x04)
	float SuspensionOffset; // 0x08(0x04)
	float SuspensionTopBump; // 0x0c(0x04)
	float SuspensionBottomBump; // 0x10(0x04)
	float SpringPower; // 0x14(0x04)
	float DampingRatio; // 0x18(0x04)
	float MultiplyOnSkeletalMesh; // 0x1c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSteeringSetting
// Size: 0x98 (Inherited: 0x00)
struct FCrowLandWheelsSteeringSetting {
	float MaxAngle; // 0x00(0x04)
	float RaiseSpeed; // 0x04(0x04)
	float FallSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve SteeringCurve; // 0x10(0x88)
};

// ScriptStruct CrowVehicles.CrowLandWheelsFrictionSetting
// Size: 0x18 (Inherited: 0x00)
struct FCrowLandWheelsFrictionSetting {
	float FrictionLongSlip; // 0x00(0x04)
	float FrictionLatSlip; // 0x04(0x04)
	float FrictionMagnitudeMax; // 0x08(0x04)
	float SlipRatioLongMax; // 0x0c(0x04)
	float SlipForceLongMax; // 0x10(0x04)
	float SlipRatioThresholdSpeed; // 0x14(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsBrakeSetting
// Size: 0x0c (Inherited: 0x00)
struct FCrowLandWheelsBrakeSetting {
	float MaxTorque; // 0x00(0x04)
	float MaxTorqueNoSlip; // 0x04(0x04)
	float Speed; // 0x08(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsWheelSetting
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandWheelsWheelSetting {
	float WheelRadius; // 0x00(0x04)
	float WheelWidth; // 0x04(0x04)
	float WheelMassInKg; // 0x08(0x04)
	float WheelRotationDampingRatio; // 0x0c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimEngine
// Size: 0x118 (Inherited: 0x00)
struct FCrowLandWheelsSimEngine {
	struct AActor* OwnerActor; // 0x00(0x08)
	struct FCrowLandWheelsEngineSetting EngineSetting; // 0x08(0xd0)
	struct FCrowLandWheelsSimEngineOutput EngineOutput; // 0xd8(0x0c)
	char pad_E4[0xc]; // 0xe4(0x0c)
	int16_t ZeroGearPosition; // 0xf0(0x02)
	int16_t GearIndexMin; // 0xf2(0x02)
	int16_t GearIndexMax; // 0xf4(0x02)
	bool GearBoxReady; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct FCrowVehicleInputValue AccelerationInput; // 0xf8(0x08)
	float TargetAccelerationInput; // 0x100(0x04)
	float EngineRPM; // 0x104(0x04)
	float ExternRotationSpeed; // 0x108(0x04)
	int16_t CurrentGearIndex; // 0x10c(0x02)
	int16_t TargetGearIndex; // 0x10e(0x02)
	float GearChangeTimeRemain; // 0x110(0x04)
	float GearKeepTimeRemain; // 0x114(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleInputValue
// Size: 0x08 (Inherited: 0x00)
struct FCrowVehicleInputValue {
	float CurrentValue; // 0x00(0x04)
	float TargetValue; // 0x04(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimEngineOutput
// Size: 0x0c (Inherited: 0x00)
struct FCrowLandWheelsSimEngineOutput {
	float Brake; // 0x00(0x04)
	float Torque; // 0x04(0x04)
	float RotationSpeedMax; // 0x08(0x04)
};

// ScriptStruct CrowVehicles.CrowVehiclePoolSuspension
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehiclePoolSuspension {
	int32_t CountPerGroup; // 0x00(0x04)
	int32_t MaxElementIndex; // 0x04(0x04)
	struct TArray<struct FCrowLandWheelsSimSuspension> PoolArray; // 0x08(0x10)
	struct TArray<int32_t> RecycleIndexes; // 0x18(0x10)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSimSuspension
// Size: 0x580 (Inherited: 0x00)
struct FCrowLandWheelsSimSuspension {
	char bValidElement : 1; // 0x00(0x01)
	char bVehicleAwake : 1; // 0x00(0x01)
	char ValidSuspension : 1; // 0x00(0x01)
	char ShowDebug : 1; // 0x00(0x01)
	char IsContactingPrev : 1; // 0x00(0x01)
	char AddCounterVelocity : 1; // 0x00(0x01)
	char PrevHoldingPosition : 1; // 0x00(0x01)
	char HoldingPosition : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ElementIndex; // 0x04(0x04)
	int32_t ElementCountPerGroup; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ACrowVehicleUpdater* VehicleUpdater; // 0x10(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigNormal; // 0x18(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigFlat; // 0x20(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* WheelConfigDestroyed; // 0x28(0x08)
	struct AActor* OwnerActor; // 0x30(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x38(0x08)
	int16_t WheelIndex; // 0x40(0x02)
	int16_t WheelGroupIndex; // 0x42(0x02)
	struct FVector SweepOffset; // 0x44(0x0c)
	struct FVector RelativeRestLocation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FQuat RelativeRestRotation; // 0x60(0x10)
	struct FCrowLandWheelsStateSuspension SuspensionState; // 0x70(0x14)
	enum class ECrowLandWheelsTireStatus CurrentTireStatus; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float TargetSteeringInput; // 0x88(0x04)
	float CurrentBrakingInput; // 0x8c(0x04)
	float EngineTorque; // 0x90(0x04)
	float EngineBrake; // 0x94(0x04)
	float EngineRotationSpeedMax; // 0x98(0x04)
	float BodySpeedMax; // 0x9c(0x04)
	float FinalSpringOffset; // 0xa0(0x04)
	struct FVector FinalRelativeLocation; // 0xa4(0x0c)
	struct FQuat FinalRelativeRotation; // 0xb0(0x10)
	struct FVector SubstepSpringForce; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FCrowTireAndWheelSetting WheelSetting; // 0xd0(0x110)
	struct FCrowLandWheelsUpdateCache UpdateCache; // 0x1e0(0x210)
	struct FCrowLandWheelsSuspensionSubstep Substep; // 0x3f0(0x60)
	struct FVector TotalDrivingForce; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FCrowLandWheelsStatusSurface SurfaceCurrent; // 0x460(0xc0)
	struct FVector LastSurfacePosition; // 0x520(0x0c)
	float StationaryDuration; // 0x52c(0x04)
	struct FCrowLandWheelsStatusSpring SpringCurrent; // 0x530(0x10)
	struct FCrowLandWheelsStatusSteering SteeringCurrent; // 0x540(0x0c)
	struct FCrowLandWheelsStatusRotation RotationCurrent; // 0x54c(0x18)
	float COMDistanceRatio; // 0x564(0x04)
	float DebugWheelSpeedRatio; // 0x568(0x04)
	float DebugWheelTangentSpeed; // 0x56c(0x04)
	float DebugSuspensionSpeedForward; // 0x570(0x04)
	float DebugDrivingSpringDefault; // 0x574(0x04)
	bool DrivingForceEnabled; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusRotation
// Size: 0x18 (Inherited: 0x00)
struct FCrowLandWheelsStatusRotation {
	float Rotation; // 0x00(0x04)
	float RotationSpeed; // 0x04(0x04)
	float RotationTorque; // 0x08(0x04)
	float SlipForward; // 0x0c(0x04)
	float SlipRight; // 0x10(0x04)
	float SlipRatio; // 0x14(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSteering
// Size: 0x0c (Inherited: 0x00)
struct FCrowLandWheelsStatusSteering {
	float Angle; // 0x00(0x04)
	float Steering; // 0x04(0x04)
	float TargetInput; // 0x08(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSpring
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandWheelsStatusSpring {
	float SpringPosition; // 0x00(0x04)
	float DamperSpeed; // 0x04(0x04)
	float SpringForceMagnitude; // 0x08(0x04)
	float SpringForceApplied; // 0x0c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStatusSurface
// Size: 0xc0 (Inherited: 0x00)
struct FCrowLandWheelsStatusSurface {
	char IsContacting : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char HitCount; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AngleDot; // 0x04(0x04)
	float NormalRatio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* OtherActor; // 0x10(0x08)
	struct USkeletalMeshComponent* OtherSKC; // 0x18(0x08)
	struct UPhysicalMaterial* OverlapMaterial; // 0x20(0x08)
	struct FVector OverlapPosition; // 0x28(0x0c)
	struct FHitResult HitResult; // 0x34(0x8c)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSuspensionSubstep
// Size: 0x60 (Inherited: 0x00)
struct FCrowLandWheelsSuspensionSubstep {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Forward; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector Up; // 0x24(0x0c)
	struct FVector Velocity; // 0x30(0x0c)
	struct FVector SuspensionTop; // 0x3c(0x0c)
	struct FVector SuspensionBottom; // 0x48(0x0c)
	float InAirDamperSpeed; // 0x54(0x04)
	float InAirSpringPosition; // 0x58(0x04)
	float Mass; // 0x5c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsStateSuspension
// Size: 0x14 (Inherited: 0x00)
struct FCrowLandWheelsStateSuspension {
	char Detached : 1; // 0x00(0x01)
	char DisabledSpring : 1; // 0x00(0x01)
	char DisabledDriving : 1; // 0x00(0x01)
	char DisabledBraking : 1; // 0x00(0x01)
	char DisabledSteering : 1; // 0x00(0x01)
	char DisabledTireFlat : 1; // 0x00(0x01)
	char DisabledTireDestroyed : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EfficiencySpring; // 0x04(0x04)
	float EfficiencyDriving; // 0x08(0x04)
	float EfficiencyBraking; // 0x0c(0x04)
	float EfficiencySteering; // 0x10(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleSuspensionTrace
// Size: 0xe0 (Inherited: 0x00)
struct FCrowVehicleSuspensionTrace {
	char pad_0[0x40]; // 0x00(0x40)
	struct AActor* OwnerActor; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FHitResult HitResult; // 0x50(0x8c)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct CrowVehicles.CrowVehiclePoolVirtualSuspension
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehiclePoolVirtualSuspension {
	int32_t CountPerGroup; // 0x00(0x04)
	int32_t MaxElementIndex; // 0x04(0x04)
	struct TArray<struct FCrowLandWheelsVirtualSuspension> PoolArray; // 0x08(0x10)
	struct TArray<int32_t> RecycleIndexes; // 0x18(0x10)
};

// ScriptStruct CrowVehicles.CrowLandWheelsVirtualSuspension
// Size: 0x3b8 (Inherited: 0x00)
struct FCrowLandWheelsVirtualSuspension {
	struct AActor* OwnerActor; // 0x00(0x08)
	char bValidElement : 1; // 0x08(0x01)
	char bVehicleAwake : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ElementIndex; // 0x0c(0x04)
	int32_t ElementCountPerGroup; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct ACrowVehicleUpdater* VehicleUpdater; // 0x18(0x08)
	struct FCrowTireAndWheelSetting WheelSetting; // 0x20(0x110)
	struct FCrowLandWheelsTankSetting TankSetting; // 0x130(0xc0)
	float TrackLocalY; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct USplineComponent* TrackSpline; // 0x1f8(0x08)
	struct UInstancedStaticMeshComponent* TrackISM; // 0x200(0x08)
	char pad_208[0x20]; // 0x208(0x20)
	struct TArray<struct FCrowLandWheelsTrackSplineNode> SplineNodes; // 0x228(0x10)
	struct TArray<struct FTransform> TrackInstanceTransforms; // 0x238(0x10)
	struct FVector DrivingForceLocation; // 0x248(0x0c)
	struct FVector FrontWheelLocation; // 0x254(0x0c)
	struct FVector BackWheelLocation; // 0x260(0x0c)
	struct FVector WorldLocation; // 0x26c(0x0c)
	struct FVector SuspensionVelocity; // 0x278(0x0c)
	int16_t WheelGroupIndex; // 0x284(0x02)
	char pad_286[0x2]; // 0x286(0x02)
	int32_t VirtualSuspensionIndex; // 0x288(0x04)
	float CountFloat; // 0x28c(0x04)
	float TotalMassForSuspension; // 0x290(0x04)
	float TotalTravelDistance; // 0x294(0x04)
	int32_t TrackUpdateFrame; // 0x298(0x04)
	struct FCrowLandWheelsStatusRotation RotationCurrent; // 0x29c(0x18)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FCrowLandWheelsStatusSurface SurfaceCurrent; // 0x2b8(0xc0)
	struct FCrowLandWheelsStatusSpring SpringCurrent; // 0x378(0x10)
	struct FVector SubstepDrivingForce; // 0x388(0x0c)
	struct FVector AccelerationForceFront; // 0x394(0x0c)
	struct FVector AccelerationForceBack; // 0x3a0(0x0c)
	float DebugDrivingForceForward; // 0x3ac(0x04)
	float DebugDrivingForceRight; // 0x3b0(0x04)
	float DebugDrivingSpringDefault; // 0x3b4(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsTrackSplineNode
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandWheelsTrackSplineNode {
	int32_t SuspensionIndex; // 0x00(0x04)
	struct FVector PositionOffset; // 0x04(0x0c)
};

// ScriptStruct CrowVehicles.VehicleImpactDamageEvent
// Size: 0xb0 (Inherited: 0x10)
struct FVehicleImpactDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x04)
	char VehicleImpactType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x18(0x0c)
	struct FHitResult HitInfo; // 0x24(0x8c)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityPoolLandWheels
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehicleEntityPoolLandWheels {
	int32_t CountPerGroup; // 0x00(0x04)
	int32_t MaxElementIndex; // 0x04(0x04)
	struct TArray<struct FCrowVehicleEntityLandWheels> PoolArray; // 0x08(0x10)
	struct TArray<int32_t> RecycleIndexes; // 0x18(0x10)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityLandWheels
// Size: 0x3d0 (Inherited: 0x210)
struct FCrowVehicleEntityLandWheels : FCrowLandWheelsUpdateCache {
	char IsValidMovement : 1; // 0x210(0x01)
	char IsPossessed : 1; // 0x210(0x01)
	char IsTargetActorValid : 1; // 0x210(0x01)
	char IsTargetActorAwake : 1; // 0x210(0x01)
	char IsReadyForDriving : 1; // 0x210(0x01)
	char IsBlockedPhysics : 1; // 0x210(0x01)
	char IsInAir : 1; // 0x210(0x01)
	char IsSafeToTrace : 1; // 0x210(0x01)
	char IsUseAntiRoll : 1; // 0x211(0x01)
	char IsVisibleInCamera : 1; // 0x211(0x01)
	char IsClientSafeToUpdate : 1; // 0x211(0x01)
	char pad_211_3 : 5; // 0x211(0x01)
	char pad_212[0xe]; // 0x212(0x0e)
	struct FTransform RootBoneRelativeTransform; // 0x220(0x30)
	struct FVector BoundsLocation; // 0x250(0x0c)
	float BoundsRadius; // 0x25c(0x04)
	struct FCrowLandWheelsSimEngine LandWheelsEngine; // 0x260(0x118)
	float EngineTorqueLimitPrev; // 0x378(0x04)
	char pad_37C[0x1c]; // 0x37c(0x1c)
	struct FVector ChasisDragArea; // 0x398(0x0c)
	float FullyStationaryDuration; // 0x3a4(0x04)
	struct FVector PrevBodyVelocity; // 0x3a8(0x0c)
	struct FVector SubstepLinearImpulse; // 0x3b4(0x0c)
	struct FVector SubstepAngularImpulse; // 0x3c0(0x0c)
	char pad_3CC[0x4]; // 0x3cc(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSqueezeDamage
// Size: 0x90 (Inherited: 0x00)
struct FCrowLandWheelsSqueezeDamage {
	struct FHitResult HitResult; // 0x00(0x8c)
	float Damage; // 0x8c(0x04)
};

// ScriptStruct CrowVehicles.CrowLandWheelsSingleWheelState
// Size: 0x40 (Inherited: 0x00)
struct FCrowLandWheelsSingleWheelState {
	struct FVector WorldPosition; // 0x00(0x0c)
	struct FVector OverlapPosition; // 0x0c(0x0c)
	float RotationSpeed; // 0x18(0x04)
	float SlipForward; // 0x1c(0x04)
	float SlipRight; // 0x20(0x04)
	float Slip; // 0x24(0x04)
	float SpringLengthRatio; // 0x28(0x04)
	char InAir : 1; // 0x2c(0x01)
	char bSpringSqueezed : 1; // 0x2c(0x01)
	char bSpringStretched : 1; // 0x2c(0x01)
	char pad_2C_3 : 5; // 0x2c(0x01)
	char pad_2D[0x13]; // 0x2d(0x13)
};

// ScriptStruct CrowVehicles.CrowLandWheelsMovementData
// Size: 0x50 (Inherited: 0x00)
struct FCrowLandWheelsMovementData {
	struct FTransform NetTransform; // 0x00(0x30)
	struct FVector NetVelocity; // 0x30(0x0c)
	struct FVector NetAngularVelocity; // 0x3c(0x0c)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityPoolTank
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehicleEntityPoolTank {
	int32_t CountPerGroup; // 0x00(0x04)
	int32_t MaxElementIndex; // 0x04(0x04)
	struct TArray<struct FCrowVehicleEntityTank> PoolArray; // 0x08(0x10)
	struct TArray<int32_t> RecycleIndexes; // 0x18(0x10)
};

// ScriptStruct CrowVehicles.CrowVehicleEntityTank
// Size: 0x610 (Inherited: 0x3d0)
struct FCrowVehicleEntityTank : FCrowVehicleEntityLandWheels {
	char pad_3D0[0x20]; // 0x3d0(0x20)
	struct FCrowTireAndWheelSetting VirtualWheelSetting; // 0x3f0(0x110)
	struct FCrowLandWheelsTankSetting TankSetting; // 0x500(0xc0)
	float SquareMappedThrottle; // 0x5c0(0x04)
	float SquareMappedSteering; // 0x5c4(0x04)
	float CurrentThrottle; // 0x5c8(0x04)
	float CurrentSteering; // 0x5cc(0x04)
	struct FCrowVehicleMovementTankValuePair TorqueRatioTarget; // 0x5d0(0x08)
	struct FCrowVehicleMovementTankValuePair TorqueRatioCurrent; // 0x5d8(0x08)
	struct FCrowVehicleMovementTankValuePair Torque; // 0x5e0(0x08)
	struct FCrowVehicleMovementTankValuePair Brake; // 0x5e8(0x08)
	float TorqueRatioDiff; // 0x5f0(0x04)
	struct FVector DrivingLinearForce; // 0x5f4(0x0c)
	struct FVector DrivingAngularForce; // 0x600(0x0c)
	char pad_60C[0x4]; // 0x60c(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleMovementTankValuePair
// Size: 0x08 (Inherited: 0x00)
struct FCrowVehicleMovementTankValuePair {
	float Left; // 0x00(0x04)
	float Right; // 0x04(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleMovementWaterInfo
// Size: 0x60 (Inherited: 0x00)
struct FCrowVehicleMovementWaterInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct CrowVehicles.CrowBoatsUpdateCache
// Size: 0xf0 (Inherited: 0xe0)
struct FCrowBoatsUpdateCache : FCrowVehicleUpdateCacheBase {
	struct UCrowBoatsConfigBody* BodyConfig; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct CrowVehicles.CrowRotorInputNetValue
// Size: 0x08 (Inherited: 0x00)
struct FCrowRotorInputNetValue {
	uint32_t PackedValue1; // 0x00(0x04)
	uint16_t PackedValue2; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct CrowVehicles.CrowMovementRotorValues
// Size: 0x18 (Inherited: 0x00)
struct FCrowMovementRotorValues {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
	float Collective; // 0x0c(0x04)
	float MoveForward; // 0x10(0x04)
	float MoveRight; // 0x14(0x04)
};

// ScriptStruct CrowVehicles.CrowRotorBodySetting
// Size: 0xa0 (Inherited: 0x00)
struct FCrowRotorBodySetting {
	float WeightInKg; // 0x00(0x04)
	float uuPerMeterFactor; // 0x04(0x04)
	float LinearDamping; // 0x08(0x04)
	float AngularDamping; // 0x0c(0x04)
	float MaxHoverForce; // 0x10(0x04)
	float MinHoverForce; // 0x14(0x04)
	float MaxPitchDegree; // 0x18(0x04)
	float MaxRollDegree; // 0x1c(0x04)
	float MaxPitchTorque; // 0x20(0x04)
	float MaxYawTorque; // 0x24(0x04)
	float MaxRollTorque; // 0x28(0x04)
	float RecoverAxisSpringConstantPitch; // 0x2c(0x04)
	float RecoverAxisSpringConstantYaw; // 0x30(0x04)
	float RecoverAxisSpringConstantRoll; // 0x34(0x04)
	float SpeedMultiplyForwardByRotation; // 0x38(0x04)
	float SpeedMultiplySideByRotation; // 0x3c(0x04)
	float MoveForwardPitchRatio; // 0x40(0x04)
	float MoveRightRollRatio; // 0x44(0x04)
	float YawToRollRatio; // 0x48(0x04)
	float MoveForwardForce; // 0x4c(0x04)
	float MoveRightForce; // 0x50(0x04)
	float MoveSpeedMax; // 0x54(0x04)
	float MaxPitchCameraAngle; // 0x58(0x04)
	float MaxYawCameraAngle; // 0x5c(0x04)
	float CameraRotationLookUpScale; // 0x60(0x04)
	float CameraRotationTurnScale; // 0x64(0x04)
	float EasyLandingHeight; // 0x68(0x04)
	float EasyLandingSpeed; // 0x6c(0x04)
	struct FVector DirectionalDragArea; // 0x70(0x0c)
	struct FVector DirectionalDragCoefficient; // 0x7c(0x0c)
	struct FVector DirectionalIdleDamping; // 0x88(0x0c)
	float MinInputValue; // 0x94(0x04)
	float ForceInterpolation; // 0x98(0x04)
	bool DrawDebugPhysicsLine; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterSetting
// Size: 0x10 (Inherited: 0x00)
struct FCrowVehicleUpdaterSetting {
	struct TArray<struct FString> TestMapNamesClientCalculation; // 0x00(0x10)
};

// ScriptStruct CrowVehicles.CrowVehiclesCameraInfo
// Size: 0x34 (Inherited: 0x00)
struct FCrowVehiclesCameraInfo {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct CrowVehicles.CrowVehicleForceAndDamage
// Size: 0xc0 (Inherited: 0x00)
struct FCrowVehicleForceAndDamage {
	struct TArray<struct FCrowVehicleForceItem> Forces; // 0x00(0x10)
	struct TArray<struct FCrowVehicleDamageItem> Damages; // 0x10(0x10)
	struct TMap<int32_t, int32_t> LookupForce; // 0x20(0x50)
	struct TMap<int32_t, int32_t> LookupDamage; // 0x70(0x50)
};

// ScriptStruct CrowVehicles.CrowVehicleDamageItem
// Size: 0xb8 (Inherited: 0x00)
struct FCrowVehicleDamageItem {
	struct AActor* TargetActor; // 0x00(0x08)
	struct UDamageType* DamageType; // 0x08(0x08)
	float DamageTotal; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AController* InstigatorController; // 0x18(0x08)
	struct AActor* InstigatorActor; // 0x20(0x08)
	struct FHitResult HitResult; // 0x28(0x8c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleForceItem
// Size: 0x18 (Inherited: 0x00)
struct FCrowVehicleForceItem {
	struct USkeletalMeshComponent* TargetSKC; // 0x00(0x08)
	struct FVector ForceTotal; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterSweepItem
// Size: 0xe0 (Inherited: 0x00)
struct FCrowVehicleUpdaterSweepItem {
	char pad_0[0xd0]; // 0x00(0xd0)
	struct TArray<struct FHitResult> HitResults; // 0xd0(0x10)
};

// ScriptStruct CrowVehicles.CrowVehicleUpdaterItem
// Size: 0x30 (Inherited: 0x00)
struct FCrowVehicleUpdaterItem {
	char IsValidElement : 1; // 0x00(0x01)
	char IsValidComponent : 1; // 0x00(0x01)
	char IsLegacyUpdate : 1; // 0x00(0x01)
	char IsVehicleSKC : 1; // 0x00(0x01)
	char IsFarFromCamera : 1; // 0x00(0x01)
	char IsSafeToUpdateClient : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	int8_t CounterSafeToUpdateClient; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UCrowVehicleMovementBase* VehicleMovement; // 0x08(0x08)
	struct UCrowVehicleFloodingComponent* VehicleFloodingComponent; // 0x10(0x08)
	struct USkeletalMeshComponent* BodySKC; // 0x18(0x08)
	struct UCrowVehicleSKC* VehicleSKC; // 0x20(0x08)
	struct AActor* OwnerActor; // 0x28(0x08)
};

