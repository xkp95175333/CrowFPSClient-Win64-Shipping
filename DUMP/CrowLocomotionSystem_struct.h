// Enum CrowLocomotionSystem.ECLSBasePoseType
enum class ECLSBasePoseType : uint8 {
	None,
	StandRelaxed,
	StandRelaxedUpSlope,
	StandRelaxedDownSlope,
	StandRelaxedMoving,
	StandReady,
	StandReadyMoving,
	StandBattle,
	StandBattleUpSlope,
	StandBattleDownSlope,
	StandBattleMoving,
	StandAim,
	StandAimMoving,
	StandSprint,
	CrouchRelaxed,
	CrouchRelaxedUpSlope,
	CrouchRelaxedDownSlope,
	CrouchRelaxedMoving,
	CrouchReady,
	CrouchReadyMoving,
	CrouchBattle,
	CrouchBattleUpSlope,
	CrouchBattleDownSlope,
	CrouchBattleMoving,
	CrouchAim,
	CrouchAimMoving,
	ProneRelaxed,
	ProneRelaxedMoving,
	ProneReady,
	ProneReadyMoving,
	ProneBattle,
	ProneBattleMoving,
	ProneAim,
	ProneAimMoving,
	Falling,
	LandPrediction,
	FallingBattle,
	LandPredictionBattle,
	Action,
	VaultLow,
	VaultHigh,
	GetUpDefault,
	GetUpInjured,
	VehicleBoarding,
	OnVehicle,
	OnVehicleBattle,
	OnHellicopterBattle,
	ECLSBasePoseType_MAX,
};

// Enum CrowLocomotionSystem.ECLSVehicleType
enum class ECLSVehicleType : uint8 {
	None,
	Tank,
	Helicopter,
	Car,
	APC,
	Boat,
	ECLSVehicleType_MAX,
};

// Enum CrowLocomotionSystem.ECLSVehicleSeatType
enum class ECLSVehicleSeatType : uint8 {
	None,
	Driver,
	VehicleWeapon,
	ArmedPassenger,
	ECLSVehicleSeatType_MAX,
};

// Enum CrowLocomotionSystem.ECLSPeekState
enum class ECLSPeekState : uint8 {
	None,
	Left,
	Right,
	ECLSPeekState_MAX,
};

// Enum CrowLocomotionSystem.ECLSAdditionalState
enum class ECLSAdditionalState : uint8 {
	None,
	Injured,
	Skydiving,
	ECLSAdditionalState_MAX,
};

// Enum CrowLocomotionSystem.ECLSAnimationGroup
enum class ECLSAnimationGroup : uint8 {
	Default,
	Ground,
	Layered,
	MovementAction,
	ECLSAnimationGroup_MAX,
};

// Enum CrowLocomotionSystem.ECLSMovementDirection
enum class ECLSMovementDirection : uint8 {
	Forward,
	Right,
	Left,
	Backward,
	ECLSMovementDirection_MAX,
};

// Enum CrowLocomotionSystem.ECLSVaultType
enum class ECLSVaultType : uint8 {
	VaultHigh,
	VaultLow,
	FallingCatch,
	JumpOverLow,
	JumpOverWindow,
	ValutHighJumpOver,
	JumpOverHigh,
	JumpOverWindowUnder,
	JumpOverHighUnder,
	JumpOverLowUnder,
	JumpOverLow_Damage,
	JumpOverLow_Dying,
	JumpOverLow_Dead,
	JumpOverHigh_Damage,
	JumpOverHigh_Dying,
	JumpOverHigh_Dead,
	ECLSVaultType_MAX,
};

// Enum CrowLocomotionSystem.ECLSPlayerState
enum class ECLSPlayerState : uint8 {
	Aliving,
	Alive,
	Dying,
	Other,
	ECLSPlayerState_MAX,
};

// Enum CrowLocomotionSystem.ECLSHipsDirection
enum class ECLSHipsDirection : uint8 {
	F,
	B,
	RF,
	RB,
	LF,
	LB,
	ECLSHipsDirection_MAX,
};

// Enum CrowLocomotionSystem.ECLSViewMode
enum class ECLSViewMode : uint8 {
	None,
	ThirdPerson,
	FirstPerson,
	ECLSViewMode_MAX,
};

// Enum CrowLocomotionSystem.ECLSStance
enum class ECLSStance : uint8 {
	Standing,
	Crouching,
	Prone,
	ECLSStance_MAX,
};

// Enum CrowLocomotionSystem.ECLSRotationMode
enum class ECLSRotationMode : uint8 {
	VelocityDirection,
	LookingDirection,
	CombatDirection,
	ECLSRotationMode_MAX,
};

// Enum CrowLocomotionSystem.ECLSOverlayState
enum class ECLSOverlayState : uint8 {
	Default,
	Rifle,
	HandGun1H,
	HandGun2H,
	Melee1H,
	Melee2H,
	Item1H,
	Item2H,
	VehicleWeapon,
	NotLayering,
	ECLSOverlayState_MAX,
};

// Enum CrowLocomotionSystem.ECLSBattleStance
enum class ECLSBattleStance : uint8 {
	Relaxed,
	Ready,
	Directed,
	Aimming,
	ECLSBattleStance_MAX,
};

// Enum CrowLocomotionSystem.ECLSCommonAction
enum class ECLSCommonAction : uint8 {
	None,
	Hit,
	Death,
	Burn,
	Injured,
	ECLSCommonAction_MAX,
};

// Enum CrowLocomotionSystem.ECLSWeaponAction
enum class ECLSWeaponAction : uint8 {
	None,
	Equip,
	Unequip,
	PreFire,
	Fire,
	PostFire,
	Reload,
	ReloadShort,
	BoltAction,
	ChangeFireMode,
	ECLSWeaponAction_MAX,
};

// Enum CrowLocomotionSystem.ECLSMovementAction
enum class ECLSMovementAction : uint8 {
	None,
	VaultLow,
	VaultHigh,
	GettingUp,
	ChangingProne,
	ECLSMovementAction_MAX,
};

// Enum CrowLocomotionSystem.ECLSGait
enum class ECLSGait : uint8 {
	NotMoving,
	Walking,
	Running,
	Sprinting,
	ECLSGait_MAX,
};

// Enum CrowLocomotionSystem.ECLSLadderState
enum class ECLSLadderState : uint8 {
	None,
	LadderBottomEnter,
	LadderBottomExit,
	LadderIdle,
	LadderUp,
	LadderDown,
	LadderTopEnter,
	LadderTopExit,
	LadderMiddleExit,
	ECLSLadderState_MAX,
};

// Enum CrowLocomotionSystem.ECLSCustomMovementMode
enum class ECLSCustomMovementMode : uint8 {
	None,
	Ragdoll,
	Death,
	OnVehicle,
	Vault,
	Drowning,
	Ladder,
	ECLSCustomMovementMode_MAX,
};

// Enum CrowLocomotionSystem.ECLSMovementMode
enum class ECLSMovementMode : uint8 {
	None,
	Grounded,
	Falling,
	Swimming,
	Flying,
	OnVehicle,
	Death,
	Ragdoll,
	Vault,
	Drowning,
	Ladder,
	ECLSMovementMode_MAX,
};

// ScriptStruct CrowLocomotionSystem.AnimNode_CLSDistanceMatch
// Size: 0x90 (Inherited: 0x80)
struct FAnimNode_CLSDistanceMatch : FAnimNode_SequencePlayer {
	struct FName CurveName; // 0x80(0x08)
	float Distance; // 0x88(0x04)
	bool bBadDataLog; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FCLSCharacterAnimInstanceProxy : FAnimInstanceProxy {
	struct UCLSCharacterAnimInstance* AnimInstance; // 0x760(0x08)
	char pad_768[0x8]; // 0x768(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSSpeedAtteunationOnSlope
// Size: 0x10 (Inherited: 0x00)
struct FCLSSpeedAtteunationOnSlope {
	float SpeedAttenuationSlopeStartAngle; // 0x00(0x04)
	float SpeedAttenuationSlopeEndAngle; // 0x04(0x04)
	float SpeedAtteunationTotalValue; // 0x08(0x04)
	float SprintInhibitionSlopeAngle; // 0x0c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSLadderAnimSet
// Size: 0xf0 (Inherited: 0x00)
struct FCLSLadderAnimSet {
	struct FCLSAnimation LadderBottomEnter; // 0x00(0x20)
	struct FCLSAnimation LadderBottomExit; // 0x20(0x20)
	struct FCLSAnimation LadderTopEnter; // 0x40(0x20)
	struct FCLSAnimation LadderTopExit; // 0x60(0x20)
	struct FCLSAnimation LadderIdle; // 0x80(0x20)
	struct FCLSAnimation LadderUp; // 0xa0(0x20)
	struct FCLSAnimation LadderDown; // 0xc0(0x20)
	struct UAnimSequence* NoRootMotionLadderUp; // 0xe0(0x08)
	struct UAnimSequence* NoRootMotionLadderDown; // 0xe8(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSAnimation
// Size: 0x20 (Inherited: 0x00)
struct FCLSAnimation {
	struct UAnimMontage* TP; // 0x00(0x08)
	struct UAnimMontage* FP; // 0x08(0x08)
	struct UAnimMontage* TP_Prone; // 0x10(0x08)
	struct UAnimMontage* FP_Prone; // 0x18(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSGripPoseSet
// Size: 0x58 (Inherited: 0x08)
struct FCLSGripPoseSet : FTableRowBase {
	struct TMap<struct FName, struct FCLSGripPose> GripPose; // 0x08(0x50)
};

// ScriptStruct CrowLocomotionSystem.CLSGripPose
// Size: 0x10 (Inherited: 0x00)
struct FCLSGripPose {
	struct UAnimSequence* TP; // 0x00(0x08)
	struct UAnimSequence* FP; // 0x08(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSCommonAnimSet
// Size: 0x58 (Inherited: 0x08)
struct FCLSCommonAnimSet : FTableRowBase {
	struct TMap<struct FName, struct FCLSCommonAnimList> AnimMap; // 0x08(0x50)
};

// ScriptStruct CrowLocomotionSystem.CLSCommonAnimList
// Size: 0x10 (Inherited: 0x00)
struct FCLSCommonAnimList {
	struct TArray<struct FCLSAnimation> AnimArray; // 0x00(0x10)
};

// ScriptStruct CrowLocomotionSystem.CLSWeaponAnimation
// Size: 0x230 (Inherited: 0x00)
struct FCLSWeaponAnimation {
	struct FCLSAnimation Select; // 0x00(0x20)
	struct FCLSAnimation Deselect; // 0x20(0x20)
	struct FCLSAnimation SelectLeftSide; // 0x40(0x20)
	struct FCLSAnimation DeselectLeftSide; // 0x60(0x20)
	struct FCLSAnimation PreFire; // 0x80(0x20)
	struct TArray<struct FCLSAnimation> FireArray; // 0xa0(0x10)
	struct FCLSAnimation PostFire; // 0xb0(0x20)
	struct FCLSAnimation ChangeFireMode; // 0xd0(0x20)
	struct FCLSMagazineAnimation MagazineAnim; // 0xf0(0xa0)
	struct FCLSMagazineAnimation ProneMagazineAnim; // 0x190(0xa0)
};

// ScriptStruct CrowLocomotionSystem.CLSMagazineAnimation
// Size: 0xa0 (Inherited: 0x00)
struct FCLSMagazineAnimation {
	struct FCLSAnimation Reload; // 0x00(0x20)
	struct FCLSAnimation ReloadShort; // 0x20(0x20)
	struct FCLSAnimation ReloadStart; // 0x40(0x20)
	struct FCLSAnimation ReloadLoop; // 0x60(0x20)
	struct FCLSAnimation ReloadEnd; // 0x80(0x20)
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePoseSet
// Size: 0x68 (Inherited: 0x08)
struct FCLSVehiclePoseSet : FTableRowBase {
	struct UAnimSequenceBase* BasePose; // 0x08(0x08)
	struct UBlendSpaceBase* DriverAO; // 0x10(0x08)
	struct TMap<int32_t, struct FCLSVehiclePoseInfo> InfoMap; // 0x18(0x50)
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePoseInfo
// Size: 0x18 (Inherited: 0x00)
struct FCLSVehiclePoseInfo {
	int32_t RelaxedFrameIndex; // 0x00(0x04)
	int32_t BattleFrameIndex; // 0x04(0x04)
	struct UBlendSpaceBase* AimOffsetRelaxed; // 0x08(0x08)
	struct UBlendSpaceBase* AimOffsetBattle; // 0x10(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSVehiclePose
// Size: 0x28 (Inherited: 0x00)
struct FCLSVehiclePose {
	struct UBlendSpaceBase* DriverAO; // 0x00(0x08)
	struct UAnimSequenceBase* BasePose; // 0x08(0x08)
	int32_t RelaxedFrameIndex; // 0x10(0x04)
	int32_t BattleFrameIndex; // 0x14(0x04)
	struct UBlendSpaceBase* AimOffsetRelaxed; // 0x18(0x08)
	struct UBlendSpaceBase* AimOffsetBattle; // 0x20(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSGroundPoseSet
// Size: 0x60 (Inherited: 0x08)
struct FCLSGroundPoseSet : FTableRowBase {
	enum class ECLSOverlayState OverlayState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<struct FName, struct FCLSGroundPose> PoseMap; // 0x10(0x50)
};

// ScriptStruct CrowLocomotionSystem.CLSGroundPose
// Size: 0x58 (Inherited: 0x00)
struct FCLSGroundPose {
	struct UAnimSequenceBase* BasePose; // 0x00(0x08)
	struct TMap<enum class ECLSBasePoseType, int32_t> PoseFrameMap; // 0x08(0x50)
};

// ScriptStruct CrowLocomotionSystem.CLSPoseExplicit
// Size: 0x10 (Inherited: 0x00)
struct FCLSPoseExplicit {
	struct UAnimSequenceBase* Anim; // 0x00(0x08)
	float ExplicitTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterBattleStanceTime
// Size: 0x10 (Inherited: 0x00)
struct FCLSCharacterBattleStanceTime {
	float ToReady; // 0x00(0x04)
	float ToRelaxed; // 0x04(0x04)
	float ToKeepDirectedOnWalk; // 0x08(0x04)
	float ToReadyOnWalkStop; // 0x0c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAimBobInfo
// Size: 0x30 (Inherited: 0x00)
struct FCLSCharacterAimBobInfo {
	float AlphaBasis; // 0x00(0x04)
	float AlphaStand; // 0x04(0x04)
	float AlphaCrouch; // 0x08(0x04)
	float AlphaProne; // 0x0c(0x04)
	float CycleSpeed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* HoldBreathDownSpeedCurve; // 0x18(0x08)
	struct UCurveFloat* HoldBreathUpSpeedCurve; // 0x20(0x08)
	struct FVector2D PlayRateMinMax; // 0x28(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterHandIK
// Size: 0x70 (Inherited: 0x00)
struct FCLSCharacterHandIK {
	struct FTransform LeftHand; // 0x00(0x30)
	struct FTransform RightHand; // 0x30(0x30)
	bool bLeftValidIKTransform; // 0x60(0x01)
	bool bRightValidIKTransform; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalLadder
// Size: 0x0c (Inherited: 0x00)
struct FCLSCharacterAdditionalLadder {
	float LadderStepPosition; // 0x00(0x04)
	float LadderStepHeight; // 0x04(0x04)
	enum class ECLSLadderState LadderState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalInjured
// Size: 0x02 (Inherited: 0x00)
struct FCLSCharacterAdditionalInjured {
	bool bIsAliving; // 0x00(0x01)
	enum class ECLSStance AlivingStance; // 0x01(0x01)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalSkydiving
// Size: 0x0c (Inherited: 0x00)
struct FCLSCharacterAdditionalSkydiving {
	struct FVector2D InputAmount; // 0x00(0x08)
	float RollAmount; // 0x08(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalSwim
// Size: 0x0c (Inherited: 0x00)
struct FCLSCharacterAdditionalSwim {
	bool bFloorHit; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ImmersionDepth; // 0x04(0x04)
	float TargetAdjust; // 0x08(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditionalVehicle
// Size: 0x18 (Inherited: 0x00)
struct FCLSCharacterAdditionalVehicle {
	enum class ECLSVehicleType VehicleType; // 0x00(0x01)
	enum class ECLSVehicleSeatType VehicleSeatType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MovingDirectionForwardAngleRatio; // 0x04(0x04)
	float MovingDirectionRightAngleRatio; // 0x08(0x04)
	struct FVector2D Strain; // 0x0c(0x08)
	bool bInvalidData; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterAdditional
// Size: 0x02 (Inherited: 0x00)
struct FCLSCharacterAdditional {
	enum class ECLSAdditionalState MainState; // 0x00(0x01)
	char SubState; // 0x01(0x01)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterEssential
// Size: 0x60 (Inherited: 0x00)
struct FCLSCharacterEssential {
	struct FVector Velocity; // 0x00(0x0c)
	struct FVector Acceleration; // 0x0c(0x0c)
	struct FVector MovementInput; // 0x18(0x0c)
	bool bIsMoving; // 0x24(0x01)
	bool bHasMovementInput; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float Speed; // 0x28(0x04)
	float MovementInputAmount; // 0x2c(0x04)
	struct FRotator AimingRotation; // 0x30(0x0c)
	float AimYawRate; // 0x3c(0x04)
	float RotateOffset; // 0x40(0x04)
	float StandToCrouchAnimRate; // 0x44(0x04)
	float StandToProneAnimRate; // 0x48(0x04)
	float CrouchToStandAnimRate; // 0x4c(0x04)
	float CrouchToProneAnimRate; // 0x50(0x04)
	float ProneToStandAnimRate; // 0x54(0x04)
	float ProneToCrouchAnimRate; // 0x58(0x04)
	bool bUseArmLOverwrite; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSCharacterStates
// Size: 0x0d (Inherited: 0x00)
struct FCLSCharacterStates {
	enum class ECLSMovementMode CurrentMovementMode; // 0x00(0x01)
	enum class ECLSMovementMode PrevMovementMode; // 0x01(0x01)
	enum class ECLSMovementAction MovementAction; // 0x02(0x01)
	enum class ECLSWeaponAction WeaponAction; // 0x03(0x01)
	enum class ECLSCommonAction CommonAction; // 0x04(0x01)
	enum class ECLSRotationMode RotationMode; // 0x05(0x01)
	enum class ECLSGait ActualGait; // 0x06(0x01)
	enum class ECLSStance ActualStance; // 0x07(0x01)
	enum class ECLSBattleStance BattleStance; // 0x08(0x01)
	enum class ECLSViewMode ViewMode; // 0x09(0x01)
	enum class ECLSOverlayState OverlayState; // 0x0a(0x01)
	enum class ECLSPeekState PeekState; // 0x0b(0x01)
	enum class ECLSLadderState LadderState; // 0x0c(0x01)
};

// ScriptStruct CrowLocomotionSystem.CLSTPTraceParams
// Size: 0x14 (Inherited: 0x00)
struct FCLSTPTraceParams {
	struct FVector TraceOrigin; // 0x00(0x0c)
	float TraceRadius; // 0x0c(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSViewModeParameters
// Size: 0x18 (Inherited: 0x00)
struct FCLSViewModeParameters {
	enum class ECLSViewMode DesiredViewMode; // 0x00(0x01)
	enum class ECLSViewMode ActualViewMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float FirstPersonInTime; // 0x04(0x04)
	float FirstPersonOutTime; // 0x08(0x04)
	float FirstPersonChangeRate; // 0x0c(0x04)
	float ThirdPersonChangeRate; // 0x10(0x04)
	bool bIsImmediately; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CrowLocomotionSystem.CLSCameraParameters
// Size: 0x02 (Inherited: 0x00)
struct FCLSCameraParameters {
	enum class ECLSViewMode DesiredViewMode; // 0x00(0x01)
	bool bRightShoulder; // 0x01(0x01)
};

// ScriptStruct CrowLocomotionSystem.CLSVelocityBlend
// Size: 0x10 (Inherited: 0x00)
struct FCLSVelocityBlend {
	float F; // 0x00(0x04)
	float B; // 0x04(0x04)
	float L; // 0x08(0x04)
	float R; // 0x0c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSTurnInPlaceAsset
// Size: 0x20 (Inherited: 0x00)
struct FCLSTurnInPlaceAsset {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float AnimatedAngle; // 0x08(0x04)
	struct FName SlotName; // 0x0c(0x08)
	float PlayRate; // 0x14(0x04)
	bool bScaleTurnAngle; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowLocomotionSystem.CLSRotateInPlaceAsset
// Size: 0x20 (Inherited: 0x00)
struct FCLSRotateInPlaceAsset {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FName SlotName; // 0x08(0x08)
	float SlowTurnRate; // 0x10(0x04)
	float FastTurnRate; // 0x14(0x04)
	float SlowPlayRate; // 0x18(0x04)
	float FastPlayRate; // 0x1c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsData
// Size: 0x120 (Inherited: 0x08)
struct FCLSMovementSettingsData : FTableRowBase {
	struct FCLSMovementSettingsStance OnGround; // 0x08(0x60)
	struct FCLSMovementSettingsStance OnInjured; // 0x68(0x60)
	struct FCLSMovementSettingsSwim OnSwimming; // 0xc8(0x48)
	struct FCLSMovementSettingsLadder OnLadder; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsLadder
// Size: 0x0c (Inherited: 0x00)
struct FCLSMovementSettingsLadder {
	float LadderUpSpeed; // 0x00(0x04)
	float LadderDownSpeed; // 0x04(0x04)
	float LadderJumpOutImpulse; // 0x08(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsSwim
// Size: 0x48 (Inherited: 0x00)
struct FCLSMovementSettingsSwim {
	struct FCLSMovementSettings Settings; // 0x00(0x20)
	float DiveAcceleration; // 0x20(0x04)
	float BuoyancySurface; // 0x24(0x04)
	float BuoyancyUnderwater; // 0x28(0x04)
	float DiveImpactDelayTime; // 0x2c(0x04)
	float DiveImpactBuoyancy; // 0x30(0x04)
	float DiveImpactDelayDecel; // 0x34(0x04)
	float DiveImpactSpeedXY; // 0x38(0x04)
	float DiveImpactSpeedZ; // 0x3c(0x04)
	float CrouchLimitDepth; // 0x40(0x04)
	float ProneLimitDepth; // 0x44(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettings
// Size: 0x20 (Inherited: 0x00)
struct FCLSMovementSettings {
	float WalkSpeed; // 0x00(0x04)
	float RunSpeed; // 0x04(0x04)
	float SprintSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveVector* MovementCurve; // 0x10(0x08)
	struct UCurveFloat* RotationRateCurve; // 0x18(0x08)
};

// ScriptStruct CrowLocomotionSystem.CLSMovementSettingsStance
// Size: 0x60 (Inherited: 0x00)
struct FCLSMovementSettingsStance {
	struct FCLSMovementSettings Standing; // 0x00(0x20)
	struct FCLSMovementSettings Crouching; // 0x20(0x20)
	struct FCLSMovementSettings Prone; // 0x40(0x20)
};

// ScriptStruct CrowLocomotionSystem.CLSVaultTraceSettings
// Size: 0x1c (Inherited: 0x00)
struct FCLSVaultTraceSettings {
	float MaxLedgeHeight; // 0x00(0x04)
	float MinLedgeHeight; // 0x04(0x04)
	float ReachDistance; // 0x08(0x04)
	float RunReachDistance; // 0x0c(0x04)
	float ForwardTraceRadius; // 0x10(0x04)
	float DownwardTraceRadius; // 0x14(0x04)
	float MaxWindowHeightSize; // 0x18(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSVaultParams
// Size: 0x28 (Inherited: 0x00)
struct FCLSVaultParams {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	struct UCurveVector* PositionCorrectionCurve; // 0x08(0x08)
	float StartingPosition; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	struct FVector StartingOffset; // 0x18(0x0c)
	float BlendOutTime; // 0x24(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSVaultAsset
// Size: 0x40 (Inherited: 0x00)
struct FCLSVaultAsset {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	struct UCurveVector* PositionCorrectionCurve; // 0x08(0x08)
	struct FVector StartingOffset; // 0x10(0x0c)
	float LowHeight; // 0x1c(0x04)
	float LowPlayRate; // 0x20(0x04)
	float LowStartPosition; // 0x24(0x04)
	float HighHeight; // 0x28(0x04)
	float HighPlayRate; // 0x2c(0x04)
	float HighStartPosition; // 0x30(0x04)
	float BlendOutTime; // 0x34(0x04)
	float JumpOverCurveOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSLeanAmount
// Size: 0x08 (Inherited: 0x00)
struct FCLSLeanAmount {
	float LR; // 0x00(0x04)
	float FB; // 0x04(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSDynamicMontageParams
// Size: 0x18 (Inherited: 0x00)
struct FCLSDynamicMontageParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float BlendInTime; // 0x08(0x04)
	float BlendOutTime; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	float StartTime; // 0x14(0x04)
};

// ScriptStruct CrowLocomotionSystem.CLSComponentTransform
// Size: 0x120 (Inherited: 0x00)
struct FCLSComponentTransform {
	struct FMatrix TransformMatrix; // 0x00(0x40)
	struct FTransform Transform; // 0x40(0x30)
	struct UPrimitiveComponent* Component; // 0x70(0x08)
	struct FHitResult HitResult; // 0x78(0x8c)
	char pad_104[0x4]; // 0x104(0x04)
	struct FString ComponentName; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

