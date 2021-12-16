// Class CrowVehicles.CrowBoatsSimEngine
// Size: 0x290 (Inherited: 0x200)
struct UCrowBoatsSimEngine : USceneComponent {
	int32_t EngineIndex; // 0x1f8(0x04)
	struct USkeletalMeshComponent* BodyMesh; // 0x200(0x08)
	struct UCrowBoatsConfigEngine* EngineConfig; // 0x208(0x08)
	struct UCrowBoatsConfigBody* BodyConfig; // 0x210(0x08)
	struct UCrowVehicleOceanTracker* OceanTracker; // 0x218(0x08)
	struct FTransform InitialTransform; // 0x220(0x30)
	struct FVector SubstepLocation; // 0x250(0x0c)
	struct FVector SubstepLinearForce; // 0x25c(0x0c)
	struct FVector SubstepAngularForce; // 0x268(0x0c)
	struct FCrowVehicleInputValue AccelerationInput; // 0x274(0x08)
	float TargetAccelerationInput; // 0x27c(0x04)
	struct FCrowVehicleInputValue SteeringInput; // 0x280(0x08)
	float TargetSteeringInput; // 0x288(0x04)
	float DebugEngineDepthRatio; // 0x28c(0x04)
};

// Class CrowVehicles.CrowBoatsSimFloatingVolume
// Size: 0x2b0 (Inherited: 0x200)
struct UCrowBoatsSimFloatingVolume : USceneComponent {
	int32_t VolumeIndex; // 0x1f8(0x04)
	struct USkeletalMeshComponent* BodyMesh; // 0x200(0x08)
	struct FCrowBoatsFloatingVolumeSetup VolumeSetup; // 0x208(0x38)
	struct UCrowBoatsConfigBody* BodyConfig; // 0x240(0x08)
	struct UCrowVehicleOceanTracker* OceanTracker; // 0x248(0x08)
	struct FTransform InitialTransform; // 0x250(0x30)
	float SubstepDepthRatio; // 0x280(0x04)
	struct FVector SubstepBuoyancy; // 0x284(0x0c)
	struct FVector SubstepLinearDamping; // 0x290(0x0c)
	struct FVector SubstepAngularDamping; // 0x29c(0x0c)
	float DebugBuoyanceDepth; // 0x2a8(0x04)
};

// Class CrowVehicles.CrowBoatsConfigBody
// Size: 0xc0 (Inherited: 0x28)
struct UCrowBoatsConfigBody : UObject {
	bool DrawDebugInfo; // 0x28(0x01)
	bool SimulationGenerateHitEvents; // 0x29(0x01)
	bool LocalSpaceKinematics; // 0x2a(0x01)
	bool BeginWithReadyForDriving; // 0x2b(0x01)
	float AccelerationTilt; // 0x2c(0x04)
	float AccelerationRollForce; // 0x30(0x04)
	float AccelerationPitchForce; // 0x34(0x04)
	float AccelerationCameraYaw; // 0x38(0x04)
	float AccelerationCameraSpeed; // 0x3c(0x04)
	float InAirAngularResistance; // 0x40(0x04)
	float InAirAngularRecoverRoll; // 0x44(0x04)
	float InAirAngularRecoverPitch; // 0x48(0x04)
	float ChasisMass; // 0x4c(0x04)
	struct FVector ChasisSize; // 0x50(0x0c)
	struct FVector DirectionalDragRatio; // 0x5c(0x0c)
	struct FVector LinearDampingRatio; // 0x68(0x0c)
	float PitchDampingRatio; // 0x74(0x04)
	float RollDampingRatio; // 0x78(0x04)
	float YawDampingRatio; // 0x7c(0x04)
	float DepthOffset; // 0x80(0x04)
	float SpeedDragThreshold; // 0x84(0x04)
	float MaxTiltSpeed; // 0x88(0x04)
	float SteeringRollDegree; // 0x8c(0x04)
	float ThrottlePitchDegree; // 0x90(0x04)
	float InterpolationSpeedRoll; // 0x94(0x04)
	float InterpolationSpeedPitch; // 0x98(0x04)
	float InterpolationSpeed; // 0x9c(0x04)
	float RecoverAxisSpringConstant; // 0xa0(0x04)
	float RecoverMaxPitchTorque; // 0xa4(0x04)
	float RecoverMaxRollTorque; // 0xa8(0x04)
	enum class ECollisionChannel OceanTraceChannel; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct TArray<struct FCrowBoatsFloatingVolumeSetup> FloatingVolumes; // 0xb0(0x10)
};

// Class CrowVehicles.CrowBoatsConfigEngine
// Size: 0x70 (Inherited: 0x28)
struct UCrowBoatsConfigEngine : UObject {
	bool Debug; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName BodySocketName; // 0x2c(0x08)
	float EngineSizeRadius; // 0x34(0x04)
	float MinWaterDepthForEngine; // 0x38(0x04)
	float SpeedMaxKmPH; // 0x3c(0x04)
	float SpeedReverseMaxKmPH; // 0x40(0x04)
	float SpeedIdleKmPH; // 0x44(0x04)
	float BrakeStrength; // 0x48(0x04)
	float AccelerationTime; // 0x4c(0x04)
	float SteeringMultiply; // 0x50(0x04)
	float SteeringRatioMax; // 0x54(0x04)
	float SteeringSpeedMax; // 0x58(0x04)
	struct FCrowVehicleInputSetting AccelerationInputSetting; // 0x5c(0x08)
	struct FCrowVehicleInputSetting SteeringInputSetting; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class CrowVehicles.CrowLandWheelsAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UCrowLandWheelsAnimInstance : UAnimInstance {
	struct UCrowVehicleMovementLandWheels* LandWheelsMovement; // 0x2b8(0x08)
	struct UCrowVehicleMovementBoats* BoatsMovement; // 0x2c0(0x08)
};

// Class CrowVehicles.CrowLandWheelsConfigTireAndWheel
// Size: 0x138 (Inherited: 0x28)
struct UCrowLandWheelsConfigTireAndWheel : UObject {
	struct FCrowTireAndWheelSetting Setting; // 0x28(0x110)
};

// Class CrowVehicles.CrowLandWheelsConfigEngine
// Size: 0x100 (Inherited: 0x28)
struct UCrowLandWheelsConfigEngine : UObject {
	bool Debug; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FCrowLandWheelsEngineSetting Setting; // 0x30(0xd0)
};

// Class CrowVehicles.CrowLandWheelsConfigBody
// Size: 0x148 (Inherited: 0x28)
struct UCrowLandWheelsConfigBody : UObject {
	struct FCrowLandWheelsBodySetting Setting; // 0x28(0x120)
};

// Class CrowVehicles.CrowLandWheelsConfigTank
// Size: 0xe8 (Inherited: 0x28)
struct UCrowLandWheelsConfigTank : UObject {
	struct FCrowLandWheelsTankSetting Setting; // 0x28(0xc0)
};

// Class CrowVehicles.CrowLibraryVehicleMath
// Size: 0x28 (Inherited: 0x28)
struct UCrowLibraryVehicleMath : UObject {
};

// Class CrowVehicles.CrowVehicleFloodingEffectSetting
// Size: 0x78 (Inherited: 0x28)
struct UCrowVehicleFloodingEffectSetting : UObject {
	struct UParticleSystem* FxImmerge; // 0x28(0x08)
	struct FName AttachSocketName_Bubble; // 0x30(0x08)
	struct UParticleSystem* FxBubble; // 0x38(0x08)
	struct FName AttachSocketName_DrivingForward; // 0x40(0x08)
	struct FName AttachSocketName_DrivingBackward; // 0x48(0x08)
	struct UParticleSystem* FxDriving; // 0x50(0x08)
	struct UParticleSystem* FxGroundDust; // 0x58(0x08)
	float SpeedForwardMax; // 0x60(0x04)
	float SpeedRightMax; // 0x64(0x04)
	struct FName ParamNameSpeedForward; // 0x68(0x08)
	struct FName ParamNameSpeedRight; // 0x70(0x08)
};

// Class CrowVehicles.CrowVehicleFloodingComponent
// Size: 0x660 (Inherited: 0x470)
struct UCrowVehicleFloodingComponent : UBoxComponent {
	char pad_470[0x48]; // 0x470(0x48)
	float TimeSecondToFlooding; // 0x4b8(0x04)
	float FloodingDamageTime; // 0x4bc(0x04)
	float FloodingDamage; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct UCurveFloat* WaterCrashImpulseCurve; // 0x4c8(0x08)
	struct UCurveFloat* Immerge_LinearDampingCurve; // 0x4d0(0x08)
	struct UCurveFloat* WaterLinearDampingCurve; // 0x4d8(0x08)
	bool bCheckValidHeight; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float ValidHeight_DrivingFX; // 0x4e4(0x04)
	struct UCrowVehicleFloodingEffectSetting* FloodingEffectSettingClass; // 0x4e8(0x08)
	struct FCrowVehicleMovementWaterInfo WaterInfo; // 0x4f0(0x60)
	struct UPrimitiveComponent* UpdatedComponent; // 0x550(0x08)
	enum class ECrowVehicleFloodingWaterType LastFloodingWaterType; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct UCrowVehicleFloodingEffectSetting* FloodingEffectSetting; // 0x560(0x08)
	enum class ECrowVehicleFloodingState FloodingState; // 0x568(0x01)
	bool bFlooding; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	float ElapsedOverlapTime; // 0x56c(0x04)
	float ElapsedFloodingTime; // 0x570(0x04)
	float DamageTimer; // 0x574(0x04)
	float CurrentFloodingDepth; // 0x578(0x04)
	float CurrentFloodingDepthClamped; // 0x57c(0x04)
	float WaterLinearDamping; // 0x580(0x04)
	float PrevOwnerVelocityZ; // 0x584(0x04)
	float WaterCrashImpulse; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UParticleSystemComponent* ParticleComponentImmerge; // 0x590(0x08)
	struct UParticleSystemComponent* ParticleComponentBubble; // 0x598(0x08)
	struct UParticleSystemComponent* ParticleComponentDrivingForward; // 0x5a0(0x08)
	struct UParticleSystemComponent* ParticleComponentDrivingBackward; // 0x5a8(0x08)
	struct UParticleSystemComponent* ParticleComponentGroundDust; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)
	struct FTransform RelativeTM_Bubble; // 0x5c0(0x30)
	struct FTransform RelativeTM_Driving; // 0x5f0(0x30)
	struct FTransform RelativeTM; // 0x620(0x30)
	struct UPrimitiveComponent* BodyComponent; // 0x650(0x08)
	bool bFadeOutDrivingParticle; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)

	void UpdateWaterLinearDamping(float DeltaTime); // Function CrowVehicles.CrowVehicleFloodingComponent.UpdateWaterLinearDamping // (Final|Native|Private) // @ game+0x108e7c0
	void UpdateFlooding(float DeltaTime); // Function CrowVehicles.CrowVehicleFloodingComponent.UpdateFlooding // (Final|Native|Public) // @ game+0x108e740
	void UpdateDrivingParticle(struct UParticleSystemComponent* InParticle, struct FName InSocketName, float InSpeedForwardRatio, float InSpeedRightRatio, bool InReverse); // Function CrowVehicles.CrowVehicleFloodingComponent.UpdateDrivingParticle // (Final|Native|Private|HasOutParms) // @ game+0x108e580
	void SetupFx(); // Function CrowVehicles.CrowVehicleFloodingComponent.SetupFx // (Final|Native|Private) // @ game+0x108e560
	void SetupBodyComponent(); // Function CrowVehicles.CrowVehicleFloodingComponent.SetupBodyComponent // (Final|Native|Private) // @ game+0x108e540
	void Reset(); // Function CrowVehicles.CrowVehicleFloodingComponent.Reset // (Final|Native|Private) // @ game+0x108e520
	void RequestChangeState(enum class ECrowVehicleFloodingState NewState); // Function CrowVehicles.CrowVehicleFloodingComponent.RequestChangeState // (Final|Native|Private) // @ game+0x108e4a0
	void OnWaterPlaneOverlapEnd(struct AActor* InWaterPlaneActor); // Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapEnd // (Final|Native|Private) // @ game+0x108e410
	void OnWaterPlaneOverlapBegin(struct AActor* InWaterPlaneActor); // Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterPlaneOverlapBegin // (Final|Native|Private) // @ game+0x108e380
	void OnWaterBodyOverlapEnd(struct AWaterBody* InWaterBodyActor); // Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapEnd // (Final|Native|Private) // @ game+0x108e2f0
	void OnWaterBodyOverlapBegin(struct AWaterBody* InWaterBodyActor); // Function CrowVehicles.CrowVehicleFloodingComponent.OnWaterBodyOverlapBegin // (Final|Native|Private) // @ game+0x108e260
	void OnImmerge(struct FVector InWaterLocation, struct FVector InWaterNormal); // Function CrowVehicles.CrowVehicleFloodingComponent.OnImmerge // (Final|Native|Private|HasDefaults) // @ game+0x108e180
	void OnFloodingExit(); // Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingExit // (Final|Native|Private) // @ game+0x108e160
	void OnFloodingEnter(); // Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingEnter // (Final|Native|Private) // @ game+0x108e140
	void OnFloodingDepthAndElapsedTime(float InDepth, float InDeltaTime); // Function CrowVehicles.CrowVehicleFloodingComponent.OnFloodingDepthAndElapsedTime // (Final|Native|Private) // @ game+0x108e070
	void OnDamage(float InDamage); // Function CrowVehicles.CrowVehicleFloodingComponent.OnDamage // (Final|Native|Private) // @ game+0x108dff0
	struct FVector GetBodyVelocity(); // Function CrowVehicles.CrowVehicleFloodingComponent.GetBodyVelocity // (Final|Native|Private|HasDefaults) // @ game+0x108dfb0
	void FadeOutParticle(float DeltaTime, struct UParticleSystemComponent* InParticle); // Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutParticle // (Final|Native|Private) // @ game+0x108dee0
	void FadeOutDrivingParticles(float DeltaTime); // Function CrowVehicles.CrowVehicleFloodingComponent.FadeOutDrivingParticles // (Final|Native|Private) // @ game+0x108de60
	void DeactivateDrivingParticles(); // Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateDrivingParticles // (Final|Native|Private) // @ game+0x108de40
	void DeactivateBubbleParticle(); // Function CrowVehicles.CrowVehicleFloodingComponent.DeactivateBubbleParticle // (Final|Native|Private) // @ game+0x108de20
	struct UParticleSystemComponent* CreateParticleSystem(struct UParticleSystem* InFxAsset, struct FName InAttachSocketName); // Function CrowVehicles.CrowVehicleFloodingComponent.CreateParticleSystem // (Final|Native|Private) // @ game+0x108dd50
	void ClientUpdateParticles(float DeltaTime); // Function CrowVehicles.CrowVehicleFloodingComponent.ClientUpdateParticles // (Final|Native|Private) // @ game+0x108dcd0
	void ActivateDrivingParticles(); // Function CrowVehicles.CrowVehicleFloodingComponent.ActivateDrivingParticles // (Final|Native|Private) // @ game+0x108dcb0
	void ActivateBubbleParticle(); // Function CrowVehicles.CrowVehicleFloodingComponent.ActivateBubbleParticle // (Final|Native|Private) // @ game+0x108dc90
};

// Class CrowVehicles.CrowVehicleMovementBase
// Size: 0x190 (Inherited: 0xb0)
struct UCrowVehicleMovementBase : UActorComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	bool UseSubstepping; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct APawn* OwnerPawn; // 0xc8(0x08)
	struct UPrimitiveComponent* BodyComponent; // 0xd0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xd8(0x08)
	struct USpringArmComponent* SpringArm; // 0xe0(0x08)
	struct FRotator SpringArmInitialRotation; // 0xe8(0x0c)
	struct FRotator SpringArmCurrentRotation; // 0xf4(0x0c)
	struct FTransform RootBoneRelativeTransform; // 0x100(0x30)
	float CurrentThrottleInput; // 0x130(0x04)
	float CurrentSteeringInput; // 0x134(0x04)
	float LastRequestThrottleInput; // 0x138(0x04)
	float LastRequestSteeringInput; // 0x13c(0x04)
	float BoundsRadius; // 0x140(0x04)
	bool IsReadyForDriving; // 0x144(0x01)
	bool IsBlockedPhysics; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float LinearDamping; // 0x148(0x04)
	float LimitSteeringRatio; // 0x14c(0x04)
	char pad_150[0x40]; // 0x150(0x40)

	void SetThrottle(float ThrottleInput); // Function CrowVehicles.CrowVehicleMovementBase.SetThrottle // (Native|Public|BlueprintCallable) // @ game+0x1091fd0
	void SetSteering(float SteeringInput); // Function CrowVehicles.CrowVehicleMovementBase.SetSteering // (Native|Public|BlueprintCallable) // @ game+0x1091f40
	void SetSpringArm(struct USpringArmComponent* InSpringArm); // Function CrowVehicles.CrowVehicleMovementBase.SetSpringArm // (Native|Public|BlueprintCallable) // @ game+0x1091eb0
	void SetReadyForDriving(bool Ready); // Function CrowVehicles.CrowVehicleMovementBase.SetReadyForDriving // (Final|Native|Public|BlueprintCallable) // @ game+0x1091e20
	void SetBlockPhysicsCalculation(bool IsBlocked); // Function CrowVehicles.CrowVehicleMovementBase.SetBlockPhysicsCalculation // (Native|Public|BlueprintCallable) // @ game+0x1091d00
	void ServerShutDown(); // Function CrowVehicles.CrowVehicleMovementBase.ServerShutDown // (Native|Public|BlueprintCallable) // @ game+0x1091ce0
	void ServerFlooding(); // Function CrowVehicles.CrowVehicleMovementBase.ServerFlooding // (Native|Public|BlueprintCallable) // @ game+0x1091cc0
	void ServerEngineStart(); // Function CrowVehicles.CrowVehicleMovementBase.ServerEngineStart // (Native|Public|BlueprintCallable) // @ game+0x1091ca0
	void RequestUpdateInput(float ThrottleInput, float SteeringInput); // Function CrowVehicles.CrowVehicleMovementBase.RequestUpdateInput // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1091ba0
	void MulticastResetInput(); // Function CrowVehicles.CrowVehicleMovementBase.MulticastResetInput // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x1091a90
	void MulticastInput(float ThrottleInput, float SteeringInput); // Function CrowVehicles.CrowVehicleMovementBase.MulticastInput // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x10918d0
	struct FString GetStatusText(); // Function CrowVehicles.CrowVehicleMovementBase.GetStatusText // (Native|Public|BlueprintCallable) // @ game+0x1091730
	void BreakBoneConstraint(struct FName BoneName, struct FVector Impulse); // Function CrowVehicles.CrowVehicleMovementBase.BreakBoneConstraint // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1091480
};

// Class CrowVehicles.CrowVehicleMovementBoats
// Size: 0x200 (Inherited: 0x190)
struct UCrowVehicleMovementBoats : UCrowVehicleMovementBase {
	struct UCrowBoatsConfigEngine* EngineConfigClass; // 0x190(0x08)
	struct UCrowBoatsConfigBody* BodyConfigClass; // 0x198(0x08)
	struct UCrowBoatsConfigEngine* EngineConfig; // 0x1a0(0x08)
	struct UCrowBoatsConfigBody* BodyConfig; // 0x1a8(0x08)
	struct UCrowBoatsSimEngine* EngineComponent; // 0x1b0(0x08)
	struct TArray<struct UCrowBoatsSimFloatingVolume*> FloatingVolumeInstances; // 0x1b8(0x10)
	struct FVector ChasisDragArea; // 0x1c8(0x0c)
	float CachedDeltaTime; // 0x1d4(0x04)
	struct FVector PrevBodyVelocity; // 0x1d8(0x0c)
	struct FVector SubstepLinearForce; // 0x1e4(0x0c)
	struct FVector SubstepAngularTorque; // 0x1f0(0x0c)
	char pad_1FC[0x4]; // 0x1fc(0x04)

	bool IsInAir(); // Function CrowVehicles.CrowVehicleMovementBoats.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10917e0
	bool IsIdleSpeed(); // Function CrowVehicles.CrowVehicleMovementBoats.IsIdleSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10917b0
	struct FVector GetLocationOnSurface(); // Function CrowVehicles.CrowVehicleMovementBoats.GetLocationOnSurface // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10916f0
	float GetForwardSpeed(); // Function CrowVehicles.CrowVehicleMovementBoats.GetForwardSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x10916c0
	struct FVector GetBodyVelocity(); // Function CrowVehicles.CrowVehicleMovementBoats.GetBodyVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10915f0
	float GetBodySpeed(); // Function CrowVehicles.CrowVehicleMovementBoats.GetBodySpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10915c0
};

// Class CrowVehicles.CrowVehicleMovementLandWheels
// Size: 0x2f0 (Inherited: 0x190)
struct UCrowVehicleMovementLandWheels : UCrowVehicleMovementBase {
	struct UCrowLandWheelsConfigEngine* EngineConfigClass; // 0x190(0x08)
	struct UCrowLandWheelsConfigBody* BodyConfigClass; // 0x198(0x08)
	struct FCrowLandWheelsEngineSetting EngineSetting; // 0x1a0(0xd0)
	char pad_270[0x10]; // 0x270(0x10)
	struct TArray<struct FCrowLandWheelsSingleWheelState> WheelStates; // 0x280(0x10)
	int32_t UpdateCacheIndex; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TMap<struct AActor*, struct FCrowLandWheelsSqueezeDamage> DamagesByWheel; // 0x298(0x50)
	float LastDamageTime; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void TestDestroyOneWheel(int32_t WheelIndex); // Function CrowVehicles.CrowVehicleMovementLandWheels.TestDestroyOneWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x1092060
	void SetDrivingForceUpdateEnable(bool Enabled); // Function CrowVehicles.CrowVehicleMovementLandWheels.SetDrivingForceUpdateEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x1091d90
	float GetForwardSpeed(); // Function CrowVehicles.CrowVehicleMovementLandWheels.GetForwardSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x10916c0
	float GetEngineRotationSpeed(); // Function CrowVehicles.CrowVehicleMovementLandWheels.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1091690
	int32_t GetCurrentGear(); // Function CrowVehicles.CrowVehicleMovementLandWheels.GetCurrentGear // (Final|Native|Public|BlueprintCallable) // @ game+0x1091660
	float GetBrakeOutput(); // Function CrowVehicles.CrowVehicleMovementLandWheels.GetBrakeOutput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1091630
};

// Class CrowVehicles.CrowRotorConfigHeli
// Size: 0x168 (Inherited: 0x28)
struct UCrowRotorConfigHeli : UObject {
	struct FCrowRotorBodySetting Setting; // 0x28(0xa0)
	struct FCrowRotorBodySetting Setting_Accel; // 0xc8(0xa0)
};

// Class CrowVehicles.CrowVehicleMovementRotor
// Size: 0x440 (Inherited: 0x190)
struct UCrowVehicleMovementRotor : UCrowVehicleMovementBase {
	struct UCrowRotorConfigHeli* BodyConfig; // 0x190(0x08)
	struct APawn* VehiclePawn; // 0x198(0x08)
	struct UPrimitiveComponent* PhysicsBody; // 0x1a0(0x08)
	struct FCrowRotorBodySetting PhysicsParam; // 0x1a8(0xa0)
	float IdleHoverForce; // 0x248(0x04)
	float WorldOceanZ; // 0x24c(0x04)
	float WorldAltitudeLimitZ; // 0x250(0x04)
	int32_t RotorType; // 0x254(0x04)
	float TorqueToAccel; // 0x258(0x04)
	bool IsDirtyClientInput; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FCrowMovementRotorValues ClientRawInput; // 0x260(0x18)
	struct FCrowMovementRotorValues ReceivedInput; // 0x278(0x18)
	struct FCrowMovementRotorValues CalculatedInput; // 0x290(0x18)
	struct FCrowMovementRotorValues ForceAndTorque; // 0x2a8(0x18)
	struct FCrowMovementRotorValues ForceAndTorqueCurrent; // 0x2c0(0x18)
	char pad_2D8[0xc8]; // 0x2d8(0xc8)
	struct FVector PhysicsBodyForward; // 0x3a0(0x0c)
	struct FVector PhysicsBodyRight; // 0x3ac(0x0c)
	struct FVector PhysicsBodyUp; // 0x3b8(0x0c)
	struct FVector PlanarForward; // 0x3c4(0x0c)
	struct FVector PlanarRight; // 0x3d0(0x0c)
	struct FVector PhysicsBodyVelocity; // 0x3dc(0x0c)
	struct FVector DirectionalVelocity; // 0x3e8(0x0c)
	struct FVector DragForce; // 0x3f4(0x0c)
	struct FVector IdleDampingForce; // 0x400(0x0c)
	float CurrentCollectiveForce; // 0x40c(0x04)
	bool IsEngineStart; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FCrowMovementRotorValues DamagedEffectInput; // 0x414(0x18)
	float DamagedEffectEnginePower; // 0x42c(0x04)
	float DamagedInputFactor; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)

	void RequestClientInputRotor(struct FCrowRotorInputNetValue InputValues); // Function CrowVehicles.CrowVehicleMovementRotor.RequestClientInputRotor // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1091ae0
	void MulticastInputRotor(struct FCrowRotorInputNetValue InputValues); // Function CrowVehicles.CrowVehicleMovementRotor.MulticastInputRotor // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x10919d0
	void MulticastEngineChanged(bool IsStart); // Function CrowVehicles.CrowVehicleMovementRotor.MulticastEngineChanged // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x1091810
};

// Class CrowVehicles.CrowVehicleMovementTank
// Size: 0x320 (Inherited: 0x2f0)
struct UCrowVehicleMovementTank : UCrowVehicleMovementLandWheels {
	struct UCrowLandWheelsConfigTank* TankConfigClass; // 0x2f0(0x08)
	struct UCrowLandWheelsConfigTireAndWheel* VirtualWheelConfigClass; // 0x2f8(0x08)
	char pad_300[0x8]; // 0x300(0x08)
	bool IsFirstUpdate; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float DistanceAlwaysVisible; // 0x30c(0x04)
	float DistanceFar; // 0x310(0x04)
	char pad_314[0xc]; // 0x314(0x0c)
};

// Class CrowVehicles.CrowVehicleOceanTracker
// Size: 0x118 (Inherited: 0xb0)
struct UCrowVehicleOceanTracker : UActorComponent {
	struct UMaterialParameterCollection* TargetCollection; // 0xb0(0x08)
	bool DrawDebugInfo; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float OceanDefaultZ; // 0xbc(0x04)
	float Intensity1; // 0xc0(0x04)
	float Intensity2; // 0xc4(0x04)
	float Intensity3; // 0xc8(0x04)
	float Speed1; // 0xcc(0x04)
	float Speed2; // 0xd0(0x04)
	float Speed3; // 0xd4(0x04)
	float WaveScale1; // 0xd8(0x04)
	float WaveScale2; // 0xdc(0x04)
	float WaveScale3; // 0xe0(0x04)
	float MasterSpeed; // 0xe4(0x04)
	float MasterIntensity; // 0xe8(0x04)
	float Offset; // 0xec(0x04)
	float ServerWorldTime; // 0xf0(0x04)
	bool OceanFollowCamera; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct AActor* OceanActor; // 0xf8(0x08)
	struct FVector OceanActorLocation; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct AWaterBody* WaterBodyOceanActor; // 0x110(0x08)
};

// Class CrowVehicles.CrowVehicleSettings
// Size: 0x48 (Inherited: 0x38)
struct UCrowVehicleSettings : UDeveloperSettings {
	struct FCrowVehicleUpdaterSetting CrowVehicleUpdaterSetting; // 0x38(0x10)

	struct UCrowVehicleSettings* Get(); // Function CrowVehicles.CrowVehicleSettings.Get // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1091560
};

// Class CrowVehicles.CrowVehicleSKC
// Size: 0xf60 (Inherited: 0xed0)
struct UCrowVehicleSKC : USkeletalMeshComponent {
	char pad_ED0[0x4]; // 0xed0(0x04)
	float ComponentTransformUpdateDelayMin; // 0xed4(0x04)
	float ComponentTransformUpdateDelayMax; // 0xed8(0x04)
	float ComponentTransformUpdateDistanceMin; // 0xedc(0x04)
	struct FTransform CachedWorldTransform; // 0xee0(0x30)
	struct FTransform RootBoneRelativeTransform; // 0xf10(0x30)
	struct FVector ReplicatedLocation; // 0xf40(0x0c)
	float ElapsedTimeAfterReplication; // 0xf4c(0x04)
	float TransformUpdateDelay; // 0xf50(0x04)
	int32_t TickUpdateCount; // 0xf54(0x04)
	char pad_F58[0x8]; // 0xf58(0x08)
};

// Class CrowVehicles.CrowVehiclesPropertyActor
// Size: 0x230 (Inherited: 0x220)
struct ACrowVehiclesPropertyActor : AActor {
	struct UStaticMeshComponent* SphereMesh; // 0x220(0x08)
	struct UCrowVehicleOceanTracker* OceanTracker; // 0x228(0x08)
};

// Class CrowVehicles.CrowVehicleUpdater
// Size: 0x460 (Inherited: 0x220)
struct ACrowVehicleUpdater : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct USphereComponent* SceneRoot; // 0x230(0x08)
	bool UseClientUpdateAlways; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UStaticMeshComponent* SphereMesh; // 0x240(0x08)
	struct TArray<struct FCrowVehicleUpdaterItem> UpdateItems; // 0x248(0x10)
	struct TArray<int32_t> IndexToRemoveList; // 0x258(0x10)
	struct FCrowVehiclesCameraInfo CameraInfo; // 0x268(0x34)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FCrowVehicleForceAndDamage ForceAndDamageCache; // 0x2a0(0xc0)
	float LastDamageTime; // 0x360(0x04)
	float CameraDistanceMin; // 0x364(0x04)
	float CameraDistanceMax; // 0x368(0x04)
	bool InitializedUpdater; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	int32_t AvailableCoreCount; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct FCrowVehicleEntityPoolLandWheels PoolLandWheels; // 0x378(0x28)
	struct FCrowVehicleEntityPoolTank PoolTankEntity; // 0x3a0(0x28)
	struct FCrowVehiclePoolVirtualSuspension PoolTankVirtualSuspensions; // 0x3c8(0x28)
	struct TArray<struct FCrowVehiclePoolSuspension> PoolSuspensionLandWheelsArray; // 0x3f0(0x10)
	struct TMap<int32_t, int32_t> LookupWheelCountToPoolIndex; // 0x400(0x50)
	struct TArray<struct FCrowVehicleUpdaterSweepItem> SweepItems; // 0x450(0x10)
};

