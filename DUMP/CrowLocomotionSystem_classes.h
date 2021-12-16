// Class CrowLocomotionSystem.AnimNotify_CLSCameraShake
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_CLSCameraShake : UAnimNotify {
	struct UMatineeCameraShake* ShakeClass; // 0x38(0x08)
	float Scale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class CrowLocomotionSystem.AnimNotify_CLSEarlyBlendOut
// Size: 0x68 (Inherited: 0x30)
struct UAnimNotify_CLSEarlyBlendOut : UAnimNotifyState {
	float BlendOutTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<enum class ECLSMovementMode> MovementModes; // 0x38(0x10)
	struct TArray<enum class ECLSStance> Stances; // 0x48(0x10)
	bool bCheckMovementInput; // 0x58(0x01)
	bool bCheckRotationInput; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)
};

// Class CrowLocomotionSystem.AnimNotify_CLSMovementAction
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_CLSMovementAction : UAnimNotifyState {
	enum class ECLSMovementAction MovementAction; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class CrowLocomotionSystem.AnimNotify_CLSOverlayOverride
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_CLSOverlayOverride : UAnimNotifyState {
	int32_t OverlayOverrideState; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class CrowLocomotionSystem.AnimNotify_CLSWeaponAction
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_CLSWeaponAction : UAnimNotifyState {
	enum class ECLSWeaponAction WeaponAction; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class CrowLocomotionSystem.CLSCharacter
// Size: 0x1000 (Inherited: 0x4c0)
struct ACLSCharacter : ACharacter {
	char pad_4C0[0x8]; // 0x4c0(0x08)
	bool IsPressSprintKey; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct AActor* CurrentLadder; // 0x4d0(0x08)
	float OutOfSightTickDuration; // 0x4d8(0x04)
	char bIsProned : 1; // 0x4dc(0x01)
	char bIsSprinted : 1; // 0x4dc(0x01)
	char bIsWalked : 1; // 0x4dc(0x01)
	char bIsLookedFocus : 1; // 0x4dc(0x01)
	char bRightShoulder : 1; // 0x4dc(0x01)
	char bIsLookAround : 1; // 0x4dc(0x01)
	char bUnresolvedReplication_IsProned : 1; // 0x4dc(0x01)
	char bUnresolvedReplication_IsCrouched : 1; // 0x4dc(0x01)
	char bUnresolvedReplication_IsSprint : 1; // 0x4dd(0x01)
	char bUnresolvedReplication_IsWalk : 1; // 0x4dd(0x01)
	char bUnresolvedReplication_IsLookFocus : 1; // 0x4dd(0x01)
	char pad_4DD_3 : 5; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	float LookUpDownRate; // 0x4e0(0x04)
	float LookLeftRightRate; // 0x4e4(0x04)
	float LookDeltaSeconds; // 0x4e8(0x04)
	float StandToCrouchAnimRate; // 0x4ec(0x04)
	float StandToProneAnimRate; // 0x4f0(0x04)
	float CrouchToStandAnimRate; // 0x4f4(0x04)
	float CrouchToProneAnimRate; // 0x4f8(0x04)
	float ProneToStandAnimRate; // 0x4fc(0x04)
	float ProneToCrouchAnimRate; // 0x500(0x04)
	char bUseProneLimitedArea : 1; // 0x504(0x01)
	char pad_504_1 : 7; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct UCLSCharacterMovement* CachedCharacterMovement; // 0x508(0x08)
	enum class ECLSRotationMode AdjustClientRotationMode; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UTimelineComponent* VaultTimeline; // 0x518(0x08)
	struct UCurveFloat* VaultTimelineCurve; // 0x520(0x08)
	enum class ECLSRotationMode RotationMode; // 0x528(0x01)
	enum class ECLSViewMode DesiredViewMode; // 0x529(0x01)
	enum class ECLSViewMode ViewMode; // 0x52a(0x01)
	enum class ECLSRotationMode DesiredRotationMode; // 0x52b(0x01)
	enum class ECLSMovementMode CurrentMovementMode; // 0x52c(0x01)
	enum class ECLSMovementMode PrevMovementMode; // 0x52d(0x01)
	enum class ECLSMovementAction MovementAction; // 0x52e(0x01)
	enum class ECLSWeaponAction WeaponAction; // 0x52f(0x01)
	enum class ECLSCommonAction CommonAction; // 0x530(0x01)
	enum class ECLSBattleStance BattleStance; // 0x531(0x01)
	enum class ECLSOverlayState OverlayState; // 0x532(0x01)
	enum class ECLSPeekState DesiredPeekState; // 0x533(0x01)
	enum class ECLSPeekState ActualPeekState; // 0x534(0x01)
	bool bDesiredFiringState; // 0x535(0x01)
	bool bActualFiringState; // 0x536(0x01)
	enum class ECLSLadderState LadderState; // 0x537(0x01)
	struct FRotator LookingRotation; // 0x538(0x0c)
	struct FRotator LookAroundRotation; // 0x544(0x0c)
	struct FVector Acceleration; // 0x550(0x0c)
	bool bIsMoving; // 0x55c(0x01)
	bool bHasMovementInput; // 0x55d(0x01)
	char pad_55E[0x2]; // 0x55e(0x02)
	struct FRotator LastVelocityRotation; // 0x560(0x0c)
	struct FRotator LastMovementInputRotation; // 0x56c(0x0c)
	float Speed; // 0x578(0x04)
	float MovementInputAmount; // 0x57c(0x04)
	float AimYawRate; // 0x580(0x04)
	struct FVector SubRootOffset; // 0x584(0x0c)
	float CurrentSlopeAngle; // 0x590(0x04)
	bool bUseArmLOverwrite; // 0x594(0x01)
	struct FCLSCameraParameters CameraParameters; // 0x595(0x02)
	char pad_597[0x1]; // 0x597(0x01)
	struct FDataTableRowHandle MovementModel; // 0x598(0x10)
	struct FCLSMovementSettingsData MovementData; // 0x5a8(0x120)
	struct FRotator SmoothTargetRotation; // 0x6c8(0x0c)
	struct FRotator TurnTargetRotation; // 0x6d4(0x0c)
	struct FRotator InAirRotation; // 0x6e0(0x0c)
	float YawOffset; // 0x6ec(0x04)
	bool bRotateOnChangingProne; // 0x6f0(0x01)
	bool bPendingGroundRotate; // 0x6f1(0x01)
	bool bIsKeepWalking; // 0x6f2(0x01)
	char pad_6F3[0x5]; // 0x6f3(0x05)
	struct FCLSVaultParams VaultParams; // 0x6f8(0x28)
	struct FCLSComponentTransform VaultLedgeLS; // 0x720(0x120)
	struct FTransform VaultTarget; // 0x840(0x30)
	struct FTransform VaultActualStartOffset; // 0x870(0x30)
	struct FTransform VaultAnimatedStartOffset; // 0x8a0(0x30)
	struct FCLSVaultTraceSettings GroundedTraceSettings; // 0x8d0(0x1c)
	struct FCLSVaultTraceSettings FallingTraceSettings; // 0x8ec(0x1c)
	struct FVector RagdollLocation; // 0x908(0x0c)
	struct FVector RagdollVelocity; // 0x914(0x0c)
	bool bRagdollOnGround; // 0x920(0x01)
	bool bRagdollFaceUp; // 0x921(0x01)
	char pad_922[0x2]; // 0x922(0x02)
	struct FVector PreviousVelocity; // 0x924(0x0c)
	float PreviousAimYaw; // 0x930(0x04)
	float PreviousSlopeAngle; // 0x934(0x04)
	struct FCLSCharacterBattleStanceTime BattleStanceTimeSetting; // 0x938(0x10)
	struct UCurveVector* Vault1MCurve; // 0x948(0x08)
	struct UCurveVector* Vault2MCurve; // 0x950(0x08)
	struct FCLSVaultAsset Vault_2M_Default; // 0x958(0x40)
	struct FCLSVaultAsset Vault_1M_Default; // 0x998(0x40)
	struct FCLSVaultAsset Vault_1M_RH; // 0x9d8(0x40)
	struct FCLSVaultAsset Vault_1M_LH; // 0xa18(0x40)
	struct FCLSVaultAsset Vault_1M_2H; // 0xa58(0x40)
	struct FCLSVaultAsset Vault_1M_Box; // 0xa98(0x40)
	struct FCLSVaultAsset JumpOver_1M; // 0xad8(0x40)
	struct FCLSVaultAsset JumpOver_1M_Under; // 0xb18(0x40)
	struct FCLSVaultAsset JumpOver_1M_Damage; // 0xb58(0x40)
	struct FCLSVaultAsset JumpOver_1M_Dying; // 0xb98(0x40)
	struct FCLSVaultAsset JumpOver_1M_Dead; // 0xbd8(0x40)
	struct FCLSVaultAsset JumpOver_2M; // 0xc18(0x40)
	struct FCLSVaultAsset JumpOver2M_Damage; // 0xc58(0x40)
	struct FCLSVaultAsset JumpOver_2M_Under; // 0xc98(0x40)
	struct FCLSVaultAsset JumpOver_2M_Dying; // 0xcd8(0x40)
	struct FCLSVaultAsset JumpOver_2M_Dead; // 0xd18(0x40)
	struct FCLSVaultAsset JumpOver_Window; // 0xd58(0x40)
	struct FCLSVaultAsset JumpOver_Window_Under; // 0xd98(0x40)
	struct FVector NotMovingPivotOffset; // 0xdd8(0x0c)
	struct FVector WalkingPivotOffset; // 0xde4(0x0c)
	struct FVector RunningPivotOffset; // 0xdf0(0x0c)
	struct FVector SprintingPivotOffset; // 0xdfc(0x0c)
	struct FVector CrouchSprintingPivotOffset; // 0xe08(0x0c)
	float CrouchPivotOffsetZRatio; // 0xe14(0x04)
	float PronePivotOffsetZRatio; // 0xe18(0x04)
	struct FVector AddPronePivotOffset; // 0xe1c(0x0c)
	struct FVector WalkingPivotLerpSpeed; // 0xe28(0x0c)
	struct FVector RunningPivotLerpSpeed; // 0xe34(0x0c)
	struct FVector SprintingPivotLerpSpeed; // 0xe40(0x0c)
	struct FVector CrouchSprintingPivotLerpSpeed; // 0xe4c(0x0c)
	float WalkingAddFOV; // 0xe58(0x04)
	float RunningAddFOV; // 0xe5c(0x04)
	float SprintingAddFOV; // 0xe60(0x04)
	float CrouchSprintingAddFOV; // 0xe64(0x04)
	float WalkingAddFOVLerpSpeed; // 0xe68(0x04)
	float RunningAddFOVLerpSpeed; // 0xe6c(0x04)
	float SprintingAddFOVLerpSpeed; // 0xe70(0x04)
	float CrouchSprintingAddFOVLerpSpeed; // 0xe74(0x04)
	struct FVector DeadPivotOffset; // 0xe78(0x0c)
	float ShoulderViewChangedInterpolationSpeed; // 0xe84(0x04)
	struct FVector FPStandingOffset; // 0xe88(0x0c)
	struct FVector FPCrouchingOffset; // 0xe94(0x0c)
	struct FVector PrePivot; // 0xea0(0x0c)
	bool bShoulderViewChanged; // 0xeac(0x01)
	char pad_EAD[0x3]; // 0xead(0x03)
	float PrevPivotY; // 0xeb0(0x04)
	struct FVector CurrentAdditionalFPCameraOffset; // 0xeb4(0x0c)
	char pad_EC0[0x128]; // 0xec0(0x128)
	bool IsJumping; // 0xfe8(0x01)
	bool FallsDamageCheck; // 0xfe9(0x01)
	bool IsPlayingVault; // 0xfea(0x01)
	char pad_FEB[0x1]; // 0xfeb(0x01)
	struct FVector PrevVaultPos; // 0xfec(0x0c)
	float StartVaultPosition; // 0xff8(0x04)
	float PrevZValue; // 0xffc(0x04)

	void Walk(); // Function CrowLocomotionSystem.CLSCharacter.Walk // (Native|Public|BlueprintCallable) // @ game+0xae67f0
	void VaultUpdate(float BlendIn); // Function CrowLocomotionSystem.CLSCharacter.VaultUpdate // (Final|Native|Private) // @ game+0xae6770
	void VaultStart(float VaultHeight, float VaultEndHeight, struct FCLSComponentTransform VaultLedgeWS, enum class ECLSVaultType VaultType); // Function CrowLocomotionSystem.CLSCharacter.VaultStart // (Final|Native|Private|HasOutParms) // @ game+0xae6510
	bool VaultIsCheckJumpOver(struct FCLSVaultTraceSettings TraceSettings, struct FHitResult JumpHitResult, struct FVector TraceStart, bool IsWindow); // Function CrowLocomotionSystem.CLSCharacter.VaultIsCheckJumpOver // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xae6310
	void VaultEnd(); // Function CrowLocomotionSystem.CLSCharacter.VaultEnd // (Final|Native|Private) // @ game+0xae62f0
	bool VaultCheckWall(struct FVector FeetLocation, struct FCLSVaultTraceSettings TraceSettings, enum class ETraceTypeQuery TraceType, struct FVector ImpectPoint, struct FVector ImpectNormal, struct FVector TraceNormal, struct FVector WindowFloor, bool IsWindow); // Function CrowLocomotionSystem.CLSCharacter.VaultCheckWall // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xae6010
	bool VaultCheckGround(); // Function CrowLocomotionSystem.CLSCharacter.VaultCheckGround // (Final|Native|Public|BlueprintCallable) // @ game+0xae5fe0
	bool VaultCheckFalling(); // Function CrowLocomotionSystem.CLSCharacter.VaultCheckFalling // (Final|Native|Public|BlueprintCallable) // @ game+0xae5fb0
	bool VaultCheck(struct FCLSVaultTraceSettings TraceSettings); // Function CrowLocomotionSystem.CLSCharacter.VaultCheck // (Final|Native|Private) // @ game+0xae5ef0
	void UnRagdoll(bool bUseNetworking); // Function CrowLocomotionSystem.CLSCharacter.UnRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0xae5e60
	void ToRagdoll(bool bUseNetworking); // Function CrowLocomotionSystem.CLSCharacter.ToRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0xae5dd0
	void SwimUp(); // Function CrowLocomotionSystem.CLSCharacter.SwimUp // (Native|Public|BlueprintCallable) // @ game+0xae5db0
	void SwimDown(); // Function CrowLocomotionSystem.CLSCharacter.SwimDown // (Native|Public|BlueprintCallable) // @ game+0xae5d90
	void Stand(); // Function CrowLocomotionSystem.CLSCharacter.Stand // (Native|Public|BlueprintCallable) // @ game+0xae5d70
	void Sprint(); // Function CrowLocomotionSystem.CLSCharacter.Sprint // (Native|Public|BlueprintCallable) // @ game+0xae5d50
	void SetWeaponObject(struct UObject* WeaponObject); // Function CrowLocomotionSystem.CLSCharacter.SetWeaponObject // (Final|Native|Protected|BlueprintCallable) // @ game+0xae5cc0
	void SetVehicleObject(struct UObject* VehicleObject); // Function CrowLocomotionSystem.CLSCharacter.SetVehicleObject // (Final|Native|Protected|BlueprintCallable) // @ game+0xae5c30
	void SetRotationMode(enum class ECLSRotationMode NewRotationMode); // Function CrowLocomotionSystem.CLSCharacter.SetRotationMode // (Final|Native|Protected|BlueprintCallable) // @ game+0xae5bb0
	void SetRightShoulder(bool NewRightShoulder); // Function CrowLocomotionSystem.CLSCharacter.SetRightShoulder // (Final|Native|Protected|BlueprintCallable) // @ game+0xae5b20
	void SetPressedSprintState(bool IsPressed); // Function CrowLocomotionSystem.CLSCharacter.SetPressedSprintState // (Native|Public|BlueprintCallable) // @ game+0xae5a90
	void SetLadderState(enum class ECLSLadderState NewLadderState); // Function CrowLocomotionSystem.CLSCharacter.SetLadderState // (Native|Protected) // @ game+0xae5a10
	void SetBattleStance(enum class ECLSBattleStance NewBattleStance); // Function CrowLocomotionSystem.CLSCharacter.SetBattleStance // (Final|Native|Protected|BlueprintCallable) // @ game+0xae5990
	void Server_VaultStart(float VaultHeight, float VaultEndHeight, struct FCLSComponentTransform VaultLedgeWS, enum class ECLSVaultType VaultType); // Function CrowLocomotionSystem.CLSCharacter.Server_VaultStart // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae54d0
	void Server_UpdateRagdoll(struct FVector NewVelocity, struct FVector NewRagdollLocation, struct FVector NewActorLocation, struct FRotator NewActorRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_UpdateRagdoll // (Final|Net|Native|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae52d0
	void Server_UnRagdoll(bool bOnGround); // Function CrowLocomotionSystem.CLSCharacter.Server_UnRagdoll // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae5210
	void Server_ToRagdoll(); // Function CrowLocomotionSystem.CLSCharacter.Server_ToRagdoll // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae51c0
	void Server_StopAnimNetworked(struct FCLSAnimation AnimToStop, float BlendOut); // Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimNetworked // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae5090
	void Server_StopAnimGroupNetworked(enum class ECLSAnimationGroup GroupType, float BlendOut); // Function CrowLocomotionSystem.CLSCharacter.Server_StopAnimGroupNetworked // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4f90
	void Server_SetTurnTargetRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_SetTurnTargetRotation // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae4ec0
	void Server_SetSmoothTargetRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_SetSmoothTargetRotation // (Final|Net|Native|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae4df0
	void Server_SetRotationMode(enum class ECLSRotationMode NewRotationMode); // Function CrowLocomotionSystem.CLSCharacter.Server_SetRotationMode // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4d40
	void Server_SetRightShoulder(bool InRightShoulder); // Function CrowLocomotionSystem.CLSCharacter.Server_SetRightShoulder // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4c80
	void Server_SetLookingRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_SetLookingRotation // (Final|Net|Native|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae4bd0
	void Server_SetLookAroundRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAroundRotation // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae4b20
	void Server_SetLookAround(bool InLookAround); // Function CrowLocomotionSystem.CLSCharacter.Server_SetLookAround // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xae4a60
	void Server_SetLadderState(enum class ECLSLadderState NewLadderState); // Function CrowLocomotionSystem.CLSCharacter.Server_SetLadderState // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae49b0
	void Server_SetLadder(struct AActor* NewLadder); // Function CrowLocomotionSystem.CLSCharacter.Server_SetLadder // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae48f0
	void Server_SetDesiredPeekState(enum class ECLSPeekState NewPeekState); // Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredPeekState // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4840
	void Server_SetDesiredFiringState(bool bFiring); // Function CrowLocomotionSystem.CLSCharacter.Server_SetDesiredFiringState // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4780
	void Server_SetBattleStance(enum class ECLSBattleStance NewBattleStance); // Function CrowLocomotionSystem.CLSCharacter.Server_SetBattleStance // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae46d0
	void Server_ResetRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Server_ResetRotation // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0xae4600
	void Server_PlayAnimNetworked(struct FCLSAnimation Animation, struct FName SectionName, float PlayRate, float StartPosition, bool bStopMontages); // Function CrowLocomotionSystem.CLSCharacter.Server_PlayAnimNetworked // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae43f0
	void Server_MontangeSetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct FCLSAnimation Animation); // Function CrowLocomotionSystem.CLSCharacter.Server_MontangeSetNextSection // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4280
	void Server_LadderTopEntry(struct AActor* NewLader); // Function CrowLocomotionSystem.CLSCharacter.Server_LadderTopEntry // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae41c0
	void Server_ClearLadder(); // Function CrowLocomotionSystem.CLSCharacter.Server_ClearLadder // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0xae4170
	void Run(); // Function CrowLocomotionSystem.CLSCharacter.Run // (Native|Public|BlueprintCallable) // @ game+0xae4150
	void RequestLadderTopEntry(struct AActor* EntryTarget); // Function CrowLocomotionSystem.CLSCharacter.RequestLadderTopEntry // (Final|Native|Public) // @ game+0xae40c0
	void Prone(); // Function CrowLocomotionSystem.CLSCharacter.Prone // (Native|Public|BlueprintCallable) // @ game+0xae40a0
	void PeekStop(); // Function CrowLocomotionSystem.CLSCharacter.PeekStop // (Native|Public|BlueprintCallable) // @ game+0xae4080
	void PeekRight(bool Flag); // Function CrowLocomotionSystem.CLSCharacter.PeekRight // (Native|Public|BlueprintCallable) // @ game+0xae3ff0
	void PeekLeft(bool Flag); // Function CrowLocomotionSystem.CLSCharacter.PeekLeft // (Native|Public|BlueprintCallable) // @ game+0xae3f60
	void OnRep_SetRotationMode(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRotationMode // (Final|Native|Private) // @ game+0xae3f40
	void OnRep_SetRightShoulder(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_SetRightShoulder // (Final|Native|Private) // @ game+0xae3f20
	void OnRep_SetLookingRotation(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_SetLookingRotation // (Final|Native|Private) // @ game+0xae3f00
	void OnRep_SetBattleStance(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_SetBattleStance // (Final|Native|Private) // @ game+0xa996d0
	void OnRep_IsWalk(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_IsWalk // (Final|Native|Private) // @ game+0xae3ee0
	void OnRep_IsSprint(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_IsSprint // (Final|Native|Private) // @ game+0xae3ec0
	void OnRep_IsProned(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_IsProned // (Final|Native|Private) // @ game+0xae3ea0
	void OnRep_IsLookFocus(); // Function CrowLocomotionSystem.CLSCharacter.OnRep_IsLookFocus // (Native|Public) // @ game+0xae3e80
	void Multicast_VaultStart(float VaultHeight, float VaultEndHeight, struct FCLSComponentTransform VaultLedgeWS, enum class ECLSVaultType VaultType); // Function CrowLocomotionSystem.CLSCharacter.Multicast_VaultStart // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae39c0
	void Multicast_UpdateRagdoll(struct FVector NewLocation, struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Multicast_UpdateRagdoll // (Final|Net|Native|Event|NetMulticast|Private|HasDefaults|NetValidate) // @ game+0xae3880
	void Multicast_UnRagdoll(bool bOnGround); // Function CrowLocomotionSystem.CLSCharacter.Multicast_UnRagdoll // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae37c0
	void Multicast_ToRagdoll(); // Function CrowLocomotionSystem.CLSCharacter.Multicast_ToRagdoll // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae3770
	void Multicast_StopAnimNetworked(struct FCLSAnimation AnimToStop, float BlendOut); // Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimNetworked // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae3640
	void Multicast_StopAnimGroupNetworked(enum class ECLSAnimationGroup GroupType, float BlendOut); // Function CrowLocomotionSystem.CLSCharacter.Multicast_StopAnimGroupNetworked // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae3540
	void Multicast_SetTurnTargetRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Multicast_SetTurnTargetRotation // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults|NetValidate) // @ game+0xae3470
	void Multicast_SetLadderState(enum class ECLSLadderState NewLadderState); // Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadderState // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae33c0
	void Multicast_SetLadder(struct AActor* NewLadder); // Function CrowLocomotionSystem.CLSCharacter.Multicast_SetLadder // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae3300
	void Multicast_ResetRotation(struct FRotator NewRotation); // Function CrowLocomotionSystem.CLSCharacter.Multicast_ResetRotation // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults|NetValidate) // @ game+0xae3230
	void Multicast_PlayAnimNetworked(struct FCLSAnimation Animation, struct FName SectionName, float PlayRate, float StartPosition, bool bStopMontages); // Function CrowLocomotionSystem.CLSCharacter.Multicast_PlayAnimNetworked // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae3020
	void Multicast_MontageSetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct FCLSAnimation Animation); // Function CrowLocomotionSystem.CLSCharacter.Multicast_MontageSetNextSection // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae2eb0
	void Multicast_LadderTopEntry(struct AActor* NewLadder); // Function CrowLocomotionSystem.CLSCharacter.Multicast_LadderTopEntry // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae2df0
	void Multicast_ClearLadder(); // Function CrowLocomotionSystem.CLSCharacter.Multicast_ClearLadder // (Final|Net|NetReliableNative|Event|NetMulticast|Private|NetValidate) // @ game+0xae2da0
	void MoveUp(float AxisValue); // Function CrowLocomotionSystem.CLSCharacter.MoveUp // (Native|Public|BlueprintCallable) // @ game+0xae2d10
	void MoveRight(float AxisValue); // Function CrowLocomotionSystem.CLSCharacter.MoveRight // (Native|Public|BlueprintCallable) // @ game+0xae2c80
	void MoveForward(float AxisValue); // Function CrowLocomotionSystem.CLSCharacter.MoveForward // (Native|Public|BlueprintCallable) // @ game+0xae2bf0
	void LookUp(float AxisValue); // Function CrowLocomotionSystem.CLSCharacter.LookUp // (Native|Public|BlueprintCallable) // @ game+0xae2b60
	void LookRight(float AxisValue); // Function CrowLocomotionSystem.CLSCharacter.LookRight // (Native|Public|BlueprintCallable) // @ game+0xae2ad0
	void LookFocus(bool Value); // Function CrowLocomotionSystem.CLSCharacter.LookFocus // (Native|Public|BlueprintCallable) // @ game+0xae2a40
	void Latent_SmoothRotateOnProne(); // Function CrowLocomotionSystem.CLSCharacter.Latent_SmoothRotateOnProne // (Final|Native|Private) // @ game+0xae2a20
	void Latent_SetKeepWalking(); // Function CrowLocomotionSystem.CLSCharacter.Latent_SetKeepWalking // (Final|Native|Private) // @ game+0xae2a00
	void Latent_SetBattleStanceRelaxed(); // Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceRelaxed // (Final|Native|Private) // @ game+0xae29e0
	void Latent_SetBattleStanceReady(); // Function CrowLocomotionSystem.CLSCharacter.Latent_SetBattleStanceReady // (Final|Native|Private) // @ game+0xae29c0
	void Latent_PendingGroundRotate(); // Function CrowLocomotionSystem.CLSCharacter.Latent_PendingGroundRotate // (Final|Native|Private) // @ game+0xae29a0
	void Latent_OnLanded(); // Function CrowLocomotionSystem.CLSCharacter.Latent_OnLanded // (Final|Native|Private) // @ game+0xae2980
	void K2_OnWeaponActionChanged(enum class ECLSWeaponAction PrevWeaponAction); // Function CrowLocomotionSystem.CLSCharacter.K2_OnWeaponActionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_OnMovementActionChanged(enum class ECLSMovementAction PrevMovementAction); // Function CrowLocomotionSystem.CLSCharacter.K2_OnMovementActionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	void K2_OnCommonActionChanged(enum class ECLSCommonAction PrevCommonAction); // Function CrowLocomotionSystem.CLSCharacter.K2_OnCommonActionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	bool K2_IsHoldingBreath(); // Function CrowLocomotionSystem.CLSCharacter.K2_IsHoldingBreath // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	struct FDataTableRowHandle K2_GetVehiclePoseHandle(struct UObject* TargetObject); // Function CrowLocomotionSystem.CLSCharacter.K2_GetVehiclePoseHandle // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	struct FDataTableRowHandle K2_GetGroundPoseHandle(struct UObject* TargetObject); // Function CrowLocomotionSystem.CLSCharacter.K2_GetGroundPoseHandle // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	struct FDataTableRowHandle K2_GetGripPoseHandle(struct UObject* TargetObject); // Function CrowLocomotionSystem.CLSCharacter.K2_GetGripPoseHandle // (Event|Protected|BlueprintEvent) // @ game+0x1d38500
	struct FCLSAnimation K2_GetCommonAnimation(struct FName MainName, struct FName SubName, bool bUseRandom, int32_t Index); // Function CrowLocomotionSystem.CLSCharacter.K2_GetCommonAnimation // (Event|Protected|BlueprintEvent|Const) // @ game+0x1d38500
	struct UCameraComponent* K2_GetCameraFP(); // Function CrowLocomotionSystem.CLSCharacter.K2_GetCameraFP // (Event|Protected|BlueprintEvent|Const) // @ game+0x1d38500
	struct FCLSCharacterAdditional K2_GetAdditionalStates(); // Function CrowLocomotionSystem.CLSCharacter.K2_GetAdditionalStates // (Event|Protected|BlueprintEvent|Const) // @ game+0x1d38500
	struct FVector GetVaultFeetLoaction(struct FVector FeetLocation); // Function CrowLocomotionSystem.CLSCharacter.GetVaultFeetLoaction // (Final|Native|Protected|HasDefaults) // @ game+0xae28d0
	void FiringState(bool bFiring); // Function CrowLocomotionSystem.CLSCharacter.FiringState // (Native|Public|BlueprintCallable) // @ game+0xae2840
};

// Class CrowLocomotionSystem.CLSCharacterAnimInstance
// Size: 0xbf0 (Inherited: 0x2c0)
struct UCLSCharacterAnimInstance : UAnimInstance {
	struct ACharacter* Character; // 0x2c0(0x08)
	float CurrentDeltaSeconds; // 0x2c8(0x04)
	float ConstFloatOne; // 0x2cc(0x04)
	float ConstFloatZero; // 0x2d0(0x04)
	float SecondaryMotionAlpha; // 0x2d4(0x04)
	enum class ECLSMovementMode CurrentMovementMode; // 0x2d8(0x01)
	enum class ECLSMovementMode PrevMovementMode; // 0x2d9(0x01)
	enum class ECLSMovementAction MovementAction; // 0x2da(0x01)
	enum class ECLSWeaponAction WeaponAction; // 0x2db(0x01)
	enum class ECLSRotationMode RotationMode; // 0x2dc(0x01)
	enum class ECLSGait Gait; // 0x2dd(0x01)
	enum class ECLSStance Stance; // 0x2de(0x01)
	enum class ECLSBattleStance BattleStance; // 0x2df(0x01)
	enum class ECLSViewMode ViewMode; // 0x2e0(0x01)
	enum class ECLSOverlayState OverlayState; // 0x2e1(0x01)
	enum class ECLSPeekState PeekState; // 0x2e2(0x01)
	bool bUsingFPCam; // 0x2e3(0x01)
	struct FRotator AimingRotation; // 0x2e4(0x0c)
	struct FRotator CDBoneAimingRotation; // 0x2f0(0x0c)
	struct FVector Velocity; // 0x2fc(0x0c)
	struct FVector RelativeVelocityDirection; // 0x308(0x0c)
	struct FVector Acceleration; // 0x314(0x0c)
	struct FVector MovementInput; // 0x320(0x0c)
	bool bIsMoving; // 0x32c(0x01)
	bool bHasMovementInput; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	float Speed; // 0x330(0x04)
	float MovementInputAmount; // 0x334(0x04)
	float AimYawRate; // 0x338(0x04)
	float ZoomAmount; // 0x33c(0x04)
	bool bIsUsingProneOffset; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float StandToCrouchAnimRate; // 0x344(0x04)
	float StandToProneAnimRate; // 0x348(0x04)
	float CrouchToStandAnimRate; // 0x34c(0x04)
	float CrouchToProneAnimRate; // 0x350(0x04)
	float ProneToStandAnimRate; // 0x354(0x04)
	float ProneToCrouchAnimRate; // 0x358(0x04)
	enum class ECLSAdditionalState AdditionalMainState; // 0x35c(0x01)
	char AdditionalSubState; // 0x35d(0x01)
	enum class ECLSMovementDirection MovementDirection; // 0x35e(0x01)
	enum class ECLSHipsDirection TrackedHipDirection; // 0x35f(0x01)
	struct FVector RelativeAccelerationAmount; // 0x360(0x0c)
	bool bShouldMove; // 0x36c(0x01)
	bool bRotate_L; // 0x36d(0x01)
	bool bRotate_R; // 0x36e(0x01)
	bool bPivot; // 0x36f(0x01)
	bool bSkipFootIK; // 0x370(0x01)
	bool bSkipHandIK; // 0x371(0x01)
	bool bStopLookAndIK; // 0x372(0x01)
	bool bStopFootLock; // 0x373(0x01)
	float RotateOffset; // 0x374(0x04)
	float RotateDistance; // 0x378(0x04)
	float RotateRate; // 0x37c(0x04)
	float RotationScale; // 0x380(0x04)
	float DiagonalScaleAmount; // 0x384(0x04)
	float WalkRunBlend; // 0x388(0x04)
	float StandingPlayRate; // 0x38c(0x04)
	float CrouchingPlayRate; // 0x390(0x04)
	float PronePlayRate; // 0x394(0x04)
	float SwimPlayRate; // 0x398(0x04)
	float StrideBlend; // 0x39c(0x04)
	float CrouchingStrideBlend; // 0x3a0(0x04)
	struct FCLSVelocityBlend VelocityBlend; // 0x3a4(0x10)
	struct FCLSLeanAmount LeanAmount; // 0x3b4(0x08)
	float FYaw; // 0x3bc(0x04)
	float BYaw; // 0x3c0(0x04)
	float LYaw; // 0x3c4(0x04)
	float RYaw; // 0x3c8(0x04)
	enum class ECLSVehicleType VehicleType; // 0x3cc(0x01)
	enum class ECLSVehicleSeatType VehicleSeatType; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	float VehicleMovingDirectionForwardRatio; // 0x3d0(0x04)
	float VehicleMovingDirectionRightRatio; // 0x3d4(0x04)
	bool bVehicleInvalidData; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	struct FRotator PeekLeftRotation; // 0x3dc(0x0c)
	struct FRotator PeekRightRotation; // 0x3e8(0x0c)
	float PeekLeftWeight; // 0x3f4(0x04)
	float PeekRightWeight; // 0x3f8(0x04)
	bool bJumped; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float JumpPlayRate; // 0x400(0x04)
	float FallSpeed; // 0x404(0x04)
	float LandPrediction; // 0x408(0x04)
	float SwimImmersionDepth; // 0x40c(0x04)
	float SwimPelvisAdjust; // 0x410(0x04)
	float SwimPelvisPitch; // 0x414(0x04)
	struct FVector2D SkyDivingInput; // 0x418(0x08)
	float SkyDivingRoll; // 0x420(0x04)
	struct FRotator SmoothedAimingRotation; // 0x424(0x0c)
	struct FRotator SpineRotation; // 0x430(0x0c)
	struct FVector2D AimingAngle; // 0x43c(0x08)
	struct FVector2D SmoothedAimingAngle; // 0x444(0x08)
	struct FVector2D AimOffsetAngle; // 0x44c(0x08)
	float AimSweepTime; // 0x454(0x04)
	float InputYawOffsetTime; // 0x458(0x04)
	float ForwardYawTime; // 0x45c(0x04)
	float LeftYawTime; // 0x460(0x04)
	float RightYawTime; // 0x464(0x04)
	float Enable_SecondarySight; // 0x468(0x04)
	struct FVector CDBoneModificationBySituation; // 0x46c(0x0c)
	float LadderStepHeight; // 0x478(0x04)
	float LadderStepPosition; // 0x47c(0x04)
	enum class ECLSLadderState LadderState; // 0x480(0x01)
	bool bIsAliving; // 0x481(0x01)
	enum class ECLSStance AlivingStance; // 0x482(0x01)
	bool bIsUpSlope; // 0x483(0x01)
	float SlopePoseBlendingAlpha; // 0x484(0x04)
	float FlailRate; // 0x488(0x04)
	int32_t OverlayOverrideState; // 0x48c(0x04)
	float Enable_AimOffset; // 0x490(0x04)
	float Enable_AfterAimOffsetL; // 0x494(0x04)
	float Enable_AfterAimOffsetR; // 0x498(0x04)
	float BasePose_Stand; // 0x49c(0x04)
	float BasePose_Crouch; // 0x4a0(0x04)
	float BasePose_Prone; // 0x4a4(0x04)
	float Arm_L; // 0x4a8(0x04)
	float Arm_L_Add; // 0x4ac(0x04)
	float Arm_L_LS; // 0x4b0(0x04)
	float Arm_L_MS; // 0x4b4(0x04)
	float Arm_R; // 0x4b8(0x04)
	float Arm_R_Add; // 0x4bc(0x04)
	float Arm_R_LS; // 0x4c0(0x04)
	float Arm_R_MS; // 0x4c4(0x04)
	float hand_l; // 0x4c8(0x04)
	float hand_r; // 0x4cc(0x04)
	float Legs; // 0x4d0(0x04)
	float Legs_Add; // 0x4d4(0x04)
	float Pelvis; // 0x4d8(0x04)
	float Pelvis_Add; // 0x4dc(0x04)
	float Spine; // 0x4e0(0x04)
	float Spine_Add; // 0x4e4(0x04)
	float Head; // 0x4e8(0x04)
	float Head_Add; // 0x4ec(0x04)
	float Enable_GripIK_L; // 0x4f0(0x04)
	float Enable_GripIK_R; // 0x4f4(0x04)
	int32_t GripIKLFindPriorityIndex; // 0x4f8(0x04)
	float Enable_HandIK_L; // 0x4fc(0x04)
	float Enable_HandIK_R; // 0x500(0x04)
	float Enable_TargetIK_L; // 0x504(0x04)
	float Enable_TargetIK_R; // 0x508(0x04)
	float Enable_HandsFollowToHead; // 0x50c(0x04)
	float Enable_HandLFollowToHead; // 0x510(0x04)
	float Arm_L_Overwrite; // 0x514(0x04)
	char pad_518[0x8]; // 0x518(0x08)
	struct FTransform LeftHandIK; // 0x520(0x30)
	struct FTransform RightHandIK; // 0x550(0x30)
	bool bLeftValidHandIKTransform; // 0x580(0x01)
	bool bRightValidHandIKTransform; // 0x581(0x01)
	char pad_582[0x2]; // 0x582(0x02)
	float Enable_GripPose_L; // 0x584(0x04)
	float Enable_GripPose_R; // 0x588(0x04)
	struct FRotator LastUpdatedRotation; // 0x58c(0x0c)
	float FootLock_L_Alpha; // 0x598(0x04)
	float FootLock_R_Alpha; // 0x59c(0x04)
	struct FVector FootLock_L_Location; // 0x5a0(0x0c)
	struct FVector FootLock_R_Location; // 0x5ac(0x0c)
	struct FRotator FootLock_L_Rotation; // 0x5b8(0x0c)
	struct FRotator FootLock_R_Rotation; // 0x5c4(0x0c)
	struct FVector FootOffset_L_Location; // 0x5d0(0x0c)
	struct FVector FootOffset_R_Location; // 0x5dc(0x0c)
	struct FRotator FootOffset_L_Rotation; // 0x5e8(0x0c)
	struct FRotator FootOffset_R_Rotation; // 0x5f4(0x0c)
	struct FVector PelvisOffset; // 0x600(0x0c)
	struct FVector PelvisTranslation; // 0x60c(0x0c)
	float PelvisAlpha; // 0x618(0x04)
	struct FVector ProneNormal_Pelvis; // 0x61c(0x0c)
	struct FVector ProneOffset_Pelvis; // 0x628(0x0c)
	struct FVector ProneOffset_Spine; // 0x634(0x0c)
	struct FVector ProneOffset_Calf_L; // 0x640(0x0c)
	struct FVector ProneOffset_Calf_R; // 0x64c(0x0c)
	struct FCLSCharacterAimBobInfo AimBobInfo; // 0x658(0x30)
	float AimBobAlpha; // 0x688(0x04)
	float AimBobStartRatio; // 0x68c(0x04)
	float AimBobPlayRate; // 0x690(0x04)
	float AimBobElapsed; // 0x694(0x04)
	float TurnCheckMinAngle; // 0x698(0x04)
	float Turn180Threshold; // 0x69c(0x04)
	float AimYawRateLimit; // 0x6a0(0x04)
	float ElapsedDelayTime; // 0x6a4(0x04)
	float MinAngleDelay; // 0x6a8(0x04)
	float MaxAngleDelay; // 0x6ac(0x04)
	bool bIsBlendingNoOffset; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct FCLSTurnInPlaceAsset Stand_TurnIP_L90; // 0x6b8(0x20)
	struct FCLSTurnInPlaceAsset Stand_TurnIP_R90; // 0x6d8(0x20)
	struct FCLSTurnInPlaceAsset Stand_TurnIP_L180; // 0x6f8(0x20)
	struct FCLSTurnInPlaceAsset Stand_TurnIP_R180; // 0x718(0x20)
	struct FCLSTurnInPlaceAsset Crouch_TurnIP_L90; // 0x738(0x20)
	struct FCLSTurnInPlaceAsset Crouch_TurnIP_R90; // 0x758(0x20)
	struct FCLSTurnInPlaceAsset Crouch_TurnIP_L180; // 0x778(0x20)
	struct FCLSTurnInPlaceAsset Crouch_TurnIP_R180; // 0x798(0x20)
	float RotateMinThreshold; // 0x7b8(0x04)
	float RotateMaxThreshold; // 0x7bc(0x04)
	float AimYawRateMinRange; // 0x7c0(0x04)
	float AimYawRateMaxRange; // 0x7c4(0x04)
	float MinPlayRate; // 0x7c8(0x04)
	float MaxPlayRate; // 0x7cc(0x04)
	struct UCurveFloat* DiagonalScaleAmountCurve; // 0x7d0(0x08)
	struct UCurveFloat* StrideBlend_Stand_Walk; // 0x7d8(0x08)
	struct UCurveFloat* StrideBlend_Stand_Run; // 0x7e0(0x08)
	struct UCurveFloat* StrideBlend_Crouch_Walk; // 0x7e8(0x08)
	struct UCurveFloat* StrideBlend_Crouch_Run; // 0x7f0(0x08)
	struct UCurveFloat* StrideBlend_Prone_Walk; // 0x7f8(0x08)
	struct UCurveFloat* LandPredictionCurve; // 0x800(0x08)
	struct UCurveFloat* LeanInAirCurve; // 0x808(0x08)
	struct UCurveVector* YawOffset_FB; // 0x810(0x08)
	struct UCurveVector* YawOffset_LR; // 0x818(0x08)
	float AnimatedWalkSpeed; // 0x820(0x04)
	float AnimatedRunSpeed; // 0x824(0x04)
	float AnimatedSprintSpeed; // 0x828(0x04)
	float AnimatedCrouchWalkSpeed; // 0x82c(0x04)
	float AnimatedCrouchRunSpeed; // 0x830(0x04)
	float AnimatedCrouchSprintSpeed; // 0x834(0x04)
	float AnimatedProneSpeed; // 0x838(0x04)
	float AnimatedProneWalkSpeed; // 0x83c(0x04)
	float AnimatedSwimSpeed; // 0x840(0x04)
	float AnimatedSwimSprintSpeed; // 0x844(0x04)
	float VelocityBlendInterpSpeed; // 0x848(0x04)
	float GroundedLeanInterpSpeed; // 0x84c(0x04)
	float InAirLeanInterpSpeed; // 0x850(0x04)
	float VehicleLeanInterpSpeed; // 0x854(0x04)
	float SmoothedAimingRotationInterpSpeed; // 0x858(0x04)
	float InputYawOffsetInterpSpeed; // 0x85c(0x04)
	float TriggerPivotSpeedLimit; // 0x860(0x04)
	float FootHeight; // 0x864(0x04)
	float IK_TraceDistanceAboveFoot; // 0x868(0x04)
	float IK_TraceDistanceBelowFoot; // 0x86c(0x04)
	float IK_TraceDistanceBelowFootOnProne; // 0x870(0x04)
	float PelvisDownwardTraceDistance; // 0x874(0x04)
	float PelvisOffsetLerpSpeed; // 0x878(0x04)
	bool bCanPlayDynamicTransition; // 0x87c(0x01)
	char pad_87D[0x3]; // 0x87d(0x03)
	struct FCLSGroundPose GroundPose; // 0x880(0x58)
	struct FCLSVehiclePose VehiclePose; // 0x8d8(0x28)
	struct FCLSGripPose GripPose; // 0x900(0x10)
	struct UAnimSequenceBase* AnimOnStandStopR; // 0x910(0x08)
	struct UAnimSequenceBase* AnimOnStandStopL; // 0x918(0x08)
	struct UAnimSequenceBase* AnimOnCrouchStop; // 0x920(0x08)
	struct UAnimSequenceBase* AnimOnStandQuickStop; // 0x928(0x08)
	struct UAnimSequenceBase* AnimOnRollToIdle; // 0x930(0x08)
	struct UAnimSequenceBase* AnimOnLandToIdle; // 0x938(0x08)
	struct UAnimSequenceBase* AnimOnRelaxedToReady; // 0x940(0x08)
	struct UAnimSequenceBase* AnimOnReadyToRelaxed; // 0x948(0x08)
	struct UAnimSequenceBase* AnimOnBowRelaxedToReady; // 0x950(0x08)
	struct UAnimSequenceBase* AnimOnBowReadyToRelaxed; // 0x958(0x08)
	struct UAnimSequenceBase* AnimOnM4A1RelaxedToReady; // 0x960(0x08)
	struct UAnimSequenceBase* AnimOnM4A1ReadyToRelaxed; // 0x968(0x08)
	struct UAnimSequenceBase* AnimOnPistol1HRelaxedToReady; // 0x970(0x08)
	struct UAnimSequenceBase* AnimOnPistol1HReadyToRelaxed; // 0x978(0x08)
	struct UAnimSequenceBase* AnimOnPistol2HRelaxedToReady; // 0x980(0x08)
	struct UAnimSequenceBase* AnimOnPistol2HReadyToRelaxed; // 0x988(0x08)
	struct UAnimSequenceBase* AnimOnTransitionR; // 0x990(0x08)
	struct UAnimSequenceBase* AnimOnTransitionL; // 0x998(0x08)
	float StandRelaxedPauseTime; // 0x9a0(0x04)
	float StandRelaxedUpSlopePauseTime; // 0x9a4(0x04)
	float StandRelaxedDownSlopePauseTime; // 0x9a8(0x04)
	float StandRelaxedMovingPauseTime; // 0x9ac(0x04)
	float StandReadyPauseTime; // 0x9b0(0x04)
	float StandReadyMovingPauseTime; // 0x9b4(0x04)
	float StandBattlePauseTime; // 0x9b8(0x04)
	float StandBattleUpSlopePauseTime; // 0x9bc(0x04)
	float StandBattleDownSlopePauseTime; // 0x9c0(0x04)
	float StandBattleMovingPauseTime; // 0x9c4(0x04)
	float StandAimPauseTime; // 0x9c8(0x04)
	float StandAimMovingPauseTime; // 0x9cc(0x04)
	float StandSprintPauseTime; // 0x9d0(0x04)
	float CrouchRelaxedPauseTime; // 0x9d4(0x04)
	float CrouchRelaxedUpSlopePauseTime; // 0x9d8(0x04)
	float CrouchRelaxedDownSlopePauseTime; // 0x9dc(0x04)
	float CrouchRelaxedMovingPauseTime; // 0x9e0(0x04)
	float CrouchReadyPauseTime; // 0x9e4(0x04)
	float CrouchReadyMovingPauseTime; // 0x9e8(0x04)
	float CrouchBattlePauseTime; // 0x9ec(0x04)
	float CrouchBattleUpSlopePauseTime; // 0x9f0(0x04)
	float CrouchBattleDownSlopePauseTime; // 0x9f4(0x04)
	float CrouchBattleMovingPauseTime; // 0x9f8(0x04)
	float CrouchAimPauseTime; // 0x9fc(0x04)
	float CrouchAimMovingPauseTime; // 0xa00(0x04)
	float ProneRelaxedPauseTime; // 0xa04(0x04)
	float ProneRelaxedMovingPauseTime; // 0xa08(0x04)
	float ProneReadyPauseTime; // 0xa0c(0x04)
	float ProneReadyMovingPauseTime; // 0xa10(0x04)
	float ProneBattlePauseTime; // 0xa14(0x04)
	float ProneBattleMovingPauseTime; // 0xa18(0x04)
	float ProneAimPauseTime; // 0xa1c(0x04)
	float ProneAimMovingPauseTime; // 0xa20(0x04)
	float FallingPauseTime; // 0xa24(0x04)
	float LandPredictionPauseTime; // 0xa28(0x04)
	float FallingBattlePauseTime; // 0xa2c(0x04)
	float LandPredictionBattlePauseTime; // 0xa30(0x04)
	float VaultLowPauseTime; // 0xa34(0x04)
	float VaultHighPauseTime; // 0xa38(0x04)
	float GetUpDefaultPauseTime; // 0xa3c(0x04)
	float GetUpInjuredPauseTime; // 0xa40(0x04)
	float VehicleBoardingPauseTime; // 0xa44(0x04)
	float OnVehiclePauseTime; // 0xa48(0x04)
	float OnVehicleBattlePauseTime; // 0xa4c(0x04)
	float OnHellicopterBattlePauseTime; // 0xa50(0x04)
	float VehicleRelaxedPauseTime; // 0xa54(0x04)
	float VehicleBattlePauseTime; // 0xa58(0x04)
	char EqualBattleStance_Relaxed : 1; // 0xa5c(0x01)
	char EqualBattleStance_Ready : 1; // 0xa5c(0x01)
	char EqualBattleStance_Directed : 1; // 0xa5c(0x01)
	char EqualBattleStance_Aiming : 1; // 0xa5c(0x01)
	char EqualOrMoreBattleStance_Relaxed : 1; // 0xa5c(0x01)
	char EqualOrMoreBattleStance_Ready : 1; // 0xa5c(0x01)
	char EqualOrMoreBattleStance_Directed : 1; // 0xa5c(0x01)
	char EqualOrMoreBattleStance_Aiming : 1; // 0xa5c(0x01)
	char EqualOrLessBattleStance_Relaxed : 1; // 0xa5d(0x01)
	char EqualOrLessBattleStance_Ready : 1; // 0xa5d(0x01)
	char EqualOrLessBattleStance_Directed : 1; // 0xa5d(0x01)
	char EqualOrLessBattleStance_Aiming : 1; // 0xa5d(0x01)
	char EqualOrMoreBattleStance_Drected_OnVehicle : 1; // 0xa5d(0x01)
	char EqualOverlayState_Default : 1; // 0xa5d(0x01)
	char EqualOverlayState_Rifle : 1; // 0xa5d(0x01)
	char EqualOverlayState_HandGun1H : 1; // 0xa5d(0x01)
	char EqualOverlayState_HandGun2H : 1; // 0xa5e(0x01)
	char EqualOverlayState_Melee1H : 1; // 0xa5e(0x01)
	char EqualOverlayState_Melee2H : 1; // 0xa5e(0x01)
	char EqualOverlayState_Item1H : 1; // 0xa5e(0x01)
	char EqualOverlayState_Item2H : 1; // 0xa5e(0x01)
	char EqualOverlayState_VehicleWeapon : 1; // 0xa5e(0x01)
	char EqualOverlayState_NotLayering : 1; // 0xa5e(0x01)
	char NotOverlayState_Default : 1; // 0xa5e(0x01)
	char NotOverlayState_Rifle : 1; // 0xa5f(0x01)
	char NotOverlayState_HandGun1H : 1; // 0xa5f(0x01)
	char NotOverlayState_HandGun2H : 1; // 0xa5f(0x01)
	char NotOverlayState_Melee1H : 1; // 0xa5f(0x01)
	char NotOverlayState_Melee2H : 1; // 0xa5f(0x01)
	char NotOverlayState_Item1H : 1; // 0xa5f(0x01)
	char NotOverlayState_Item2H : 1; // 0xa5f(0x01)
	char NotOverlayState_VehicleWeapon : 1; // 0xa5f(0x01)
	char NotOverlayState_NotLayering : 1; // 0xa60(0x01)
	char UseOverlayState : 1; // 0xa60(0x01)
	char pad_A60_2 : 6; // 0xa60(0x01)
	char pad_A61[0x7]; // 0xa61(0x07)
	struct FCLSLadderAnimSet LaddAnimSet; // 0xa68(0xf0)
	char CLSTest_UseMovingAnimationOnSlope : 1; // 0xb58(0x01)
	char pad_B58_1 : 7; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	float HoldBreathUpTime; // 0xb5c(0x04)
	float HoldBreathDownTime; // 0xb60(0x04)
	struct FCLSLeanAmount PrevVehicleLeanAmmount; // 0xb64(0x08)
	char pad_B6C[0x84]; // 0xb6c(0x84)

	void TraceVerticalOffset(struct FName SocketName, struct FVector InOutOffset, struct FVector OutNormal, float OriginalHeight); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.TraceVerticalOffset // (Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xae9eb0
	void Latent_StopLookAndIK(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopLookAndIK // (Final|Native|Private) // @ game+0xae9e90
	void Latent_StopFootLock(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_StopFootLock // (Final|Native|Private) // @ game+0xae9e70
	void Latent_OnPlayDynamicTransition(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnPlayDynamicTransition // (Final|Native|Private) // @ game+0xae9e50
	void Latent_OnJumped(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnJumped // (Final|Native|Private) // @ game+0xae9e30
	void Latent_OnAnimNotifyPivot(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.Latent_OnAnimNotifyPivot // (Final|Native|Private) // @ game+0xae9e10
	bool IsSwimMoving(float MinOnSurface, float MinOnUnderWater); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsSwimMoving // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9d30
	bool IsOwnFPCamActive(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsOwnFPCamActive // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9d00
	bool IsEqualOrMoreBattleStance(enum class ECLSBattleStance CheckStance); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrMoreBattleStance // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9c70
	bool IsEqualOrLessBattleStance(enum class ECLSBattleStance CheckStance); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualOrLessBattleStance // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9be0
	bool IsEqualBattleStance(enum class ECLSBattleStance CheckStance); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsEqualBattleStance // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9b50
	bool IsAimThrowableMelee(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimThrowableMelee // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9b20
	bool IsAimSecondarySight(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.IsAimSecondarySight // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9af0
	struct FVector InterpOffset(struct FVector InCurrent, struct FVector InTarget, float DeltaSeconds, float InterpSpeed); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.InterpOffset // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xae9930
	float GetSwimDirection(float MinOnSurface, float MinOnUnderWater); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSwimDirection // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9850
	float GetSecondaryMotionAlpha(float InAlpha); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetSecondaryMotionAlpha // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae97b0
	struct FCLSLadderAnimSet GetLadderAnimSet(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetLadderAnimSet // (Final|Native|Public|BlueprintCallable) // @ game+0xae9700
	struct FCLSPoseExplicit GetExplicitVehicle(bool bIsBattle); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitVehicle // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9660
	struct FCLSPoseExplicit GetExplicitGround(enum class ECLSBasePoseType PoseType); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetExplicitGround // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae95c0
	struct UBlendSpaceBase* GetDriverAO(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetDriverAO // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9590
	struct UBlendSpaceBase* GetAimOffsetVehicle(bool bIsBattle); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetVehicle // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae94f0
	struct UBlendSpaceBase* GetAimOffsetStand(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetStand // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae94c0
	struct UBlendSpaceBase* GetAimOffsetProne(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetProne // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0xae94c0
	struct FVector2D GetAimOffsetAngle(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.GetAimOffsetAngle // (Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xae9480
	void AnimNotify_StopTransition(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StopTransition // (Final|Native|Private) // @ game+0xae9460
	void AnimNotify_StandStopR(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopR // (Final|Native|Private) // @ game+0xae9440
	void AnimNotify_StandStopL(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandStopL // (Final|Native|Private) // @ game+0xae9420
	void AnimNotify_StandQuickStop(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_StandQuickStop // (Final|Native|Private) // @ game+0xae9400
	void AnimNotify_RollToIdle(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RollToIdle // (Final|Native|Private) // @ game+0xae93e0
	void AnimNotify_ResetGroundedEntryState(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_ResetGroundedEntryState // (Final|Native|Private) // @ game+0xa996d0
	void AnimNotify_RelaxedToReady(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_RelaxedToReady // (Final|Native|Private) // @ game+0xae93c0
	void AnimNotify_Pivot(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pivot // (Final|Native|Private) // @ game+0xae93a0
	void AnimNotify_Pistol2HRelaxedToReady(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HRelaxedToReady // (Final|Native|Private) // @ game+0xae9380
	void AnimNotify_Pistol2HReadyToRelaxed(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol2HReadyToRelaxed // (Final|Native|Private) // @ game+0xae9360
	void AnimNotify_Pistol1HRelaxedToReady(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HRelaxedToReady // (Final|Native|Private) // @ game+0xae9340
	void AnimNotify_Pistol1HReadyToRelaxed(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_Pistol1HReadyToRelaxed // (Final|Native|Private) // @ game+0xae9320
	void AnimNotify_M4A1RelaxedToReady(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1RelaxedToReady // (Final|Native|Private) // @ game+0xae9300
	void AnimNotify_M4A1ReadyToRelaxed(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_M4A1ReadyToRelaxed // (Final|Native|Private) // @ game+0xae92e0
	void AnimNotify_LandToIdle(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_LandToIdle // (Final|Native|Private) // @ game+0xae92c0
	void AnimNotify_HipsRF(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRF // (Final|Native|Private) // @ game+0xae92a0
	void AnimNotify_HipsRB(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsRB // (Final|Native|Private) // @ game+0xae9280
	void AnimNotify_HipsLF(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLF // (Final|Native|Private) // @ game+0xae9260
	void AnimNotify_HipsLB(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsLB // (Final|Native|Private) // @ game+0xae9240
	void AnimNotify_HipsF(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsF // (Final|Native|Private) // @ game+0xae9220
	void AnimNotify_HipsB(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_HipsB // (Final|Native|Private) // @ game+0xae9200
	void AnimNotify_CrouchStop(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_CrouchStop // (Final|Native|Private) // @ game+0xae91e0
	void AnimNotify_BowRelaxedToReady(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowRelaxedToReady // (Final|Native|Private) // @ game+0xae91c0
	void AnimNotify_BowReadyToRelaxed(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BowReadyToRelaxed // (Final|Native|Private) // @ game+0xae91a0
	void AnimNotify_BlendOutNoOffset(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendOutNoOffset // (Final|Native|Private) // @ game+0xae9180
	void AnimNotify_BlendInNoOffset(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNotify_BlendInNoOffset // (Final|Native|Private) // @ game+0xae9160
	void AnimNoitfy_ReadyToRelaxed(); // Function CrowLocomotionSystem.CLSCharacterAnimInstance.AnimNoitfy_ReadyToRelaxed // (Final|Native|Private) // @ game+0xae9140
};

// Class CrowLocomotionSystem.CLSCharacterMovement
// Size: 0xb70 (Inherited: 0xb00)
struct UCLSCharacterMovement : UCharacterMovementComponent {
	bool bUseSlopeSpeedAtteunation; // 0xb00(0x01)
	bool bUseSprintInhibitionSlope; // 0xb01(0x01)
	char pad_B02[0x2]; // 0xb02(0x02)
	struct FCLSSpeedAtteunationOnSlope SpeedAtteunationOnSlopeInfo; // 0xb04(0x10)
	float StandedHalfHeight; // 0xb14(0x04)
	float PronedHalfHeight; // 0xb18(0x04)
	char bWantsToProne : 1; // 0xb1c(0x01)
	char bWantsToSprint : 1; // 0xb1c(0x01)
	char bWantsToWalk : 1; // 0xb1c(0x01)
	char bWantsToLookFocus : 1; // 0xb1c(0x01)
	char pad_B1C_4 : 4; // 0xb1c(0x01)
	char pad_B1D[0x3]; // 0xb1d(0x03)
	float SwimImmersionDepth; // 0xb20(0x04)
	struct FVector WaterPlaneLocation; // 0xb24(0x0c)
	struct FVector WaterWaveLocation; // 0xb30(0x0c)
	struct FVector WaterSurfaceNormal; // 0xb3c(0x0c)
	struct TWeakObjectPtr<struct APhysicsVolume> WaterVolumePtr; // 0xb48(0x08)
	struct TWeakObjectPtr<struct AWaterBody> WaterBodyPtr; // 0xb50(0x08)
	struct TWeakObjectPtr<struct AActor> WaterPlanePtr; // 0xb58(0x08)
	float WaterBodyImmersionDepth; // 0xb60(0x04)
	char pad_B64[0x4]; // 0xb64(0x04)
	struct ACLSCharacter* CachedCharacter; // 0xb68(0x08)

	void OnWaterPlaneOverlapEnd(struct AActor* InWaterPlaneActor); // Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapEnd // (Final|Native|Protected) // @ game+0xaea9c0
	void OnWaterPlaneOverlapBegin(struct AActor* InWaterPlaneActor); // Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterPlaneOverlapBegin // (Final|Native|Protected) // @ game+0xaea930
	void OnWaterBodyOverlapEnd(struct AWaterBody* InWaterBodyActor); // Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapEnd // (Final|Native|Protected) // @ game+0xaea8a0
	void OnWaterBodyOverlapBegin(struct AWaterBody* InWaterBodyActor, bool InIsAlight); // Function CrowLocomotionSystem.CLSCharacterMovement.OnWaterBodyOverlapBegin // (Final|Native|Protected) // @ game+0xaea7d0
	void OnCapsuleOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapEnd // (Native|Protected) // @ game+0xaea680
	void OnCapsuleOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function CrowLocomotionSystem.CLSCharacterMovement.OnCapsuleOverlapBegin // (Native|Protected|HasOutParms) // @ game+0xaea460
	void CheckWaterAndCallOverlapBegin(); // Function CrowLocomotionSystem.CLSCharacterMovement.CheckWaterAndCallOverlapBegin // (Final|Native|Protected) // @ game+0xaea440
};

// Class CrowLocomotionSystem.CLSAnimationInterface
// Size: 0x28 (Inherited: 0x28)
struct UCLSAnimationInterface : UInterface {
};

// Class CrowLocomotionSystem.CLSCameraInterface
// Size: 0x28 (Inherited: 0x28)
struct UCLSCameraInterface : UInterface {
};

// Class CrowLocomotionSystem.CLSCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct UCLSCharacterInterface : UInterface {

	void K2_StopAnimNetworked(struct FCLSAnimation Animation, float BlendOut); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimNetworked // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaebc10
	void K2_StopAnimGroupNetworked(enum class ECLSAnimationGroup GroupType, float BlendOut); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimGroupNetworked // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaebb40
	void K2_StopAnimationGroup(enum class ECLSAnimationGroup GroupType, float BlendOut); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimationGroup // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaebdf0
	void K2_StopAnimation(struct FCLSAnimation Animation, float BlendOut); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_StopAnimation // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaebd00
	float K2_PlayAnimNetworkedFromTable(struct FName MainName, struct FName SubName, struct FName SectionName, float PlayRate, float StartPosition, bool bStopMontages); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworkedFromTable // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaeb750
	float K2_PlayAnimNetworked(struct FCLSAnimation Animation, struct FName SectionName, float PlayRate, float StartPosition, bool bStopMontages); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimNetworked // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaeb5a0
	float K2_PlayAnimation(struct FCLSAnimation Animation, bool bIsLoop, struct FName SectionName, float PlayRate, float StartPosition, bool bStopMontages); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_PlayAnimation // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaeb930
	void K2_OnWeaponChanged(struct UObject* WeaponObject); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnWeaponChanged // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaeb510
	void K2_OnVehicleChanged(struct UObject* VehicleObject); // Function CrowLocomotionSystem.CLSCharacterInterface.K2_OnVehicleChanged // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xaeb480
};

// Class CrowLocomotionSystem.CLSHandIKInterface
// Size: 0x28 (Inherited: 0x28)
struct UCLSHandIKInterface : UInterface {

	struct FCLSCharacterHandIK K2_GetHandIKTargetByPawn(struct APawn* InPawn, bool bIsFPModel, int32_t FindPriorityIndex); // Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTargetByPawn // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xaeb300
	struct FCLSCharacterHandIK K2_GetHandIKTarget(bool bIsFPModel, int32_t FindPriorityIndex); // Function CrowLocomotionSystem.CLSHandIKInterface.K2_GetHandIKTarget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xaeb1c0
};

// Class CrowLocomotionSystem.CLSLadderInterface
// Size: 0x28 (Inherited: 0x28)
struct UCLSLadderInterface : UInterface {
};

// Class CrowLocomotionSystem.CLSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCLSLibrary : UBlueprintFunctionLibrary {

	bool IsExistLatentAction(struct UObject* WorldContextObject, struct UObject* InActionObject, int32_t InUUID); // Function CrowLocomotionSystem.CLSLibrary.IsExistLatentAction // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaecdf0
	struct FCLSVehiclePoseSet GetVehiclePoseSet(struct UDataTable* DataTable, struct FName RowName); // Function CrowLocomotionSystem.CLSLibrary.GetVehiclePoseSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaecc70
	struct FCLSVehiclePose GetVehiclePose(struct FCLSVehiclePoseSet PoseSet, int32_t SeatIndex); // Function CrowLocomotionSystem.CLSLibrary.GetVehiclePose // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaecab0
	struct FVector GetRebasedWorldLocation(struct UObject* WorldContextObject, struct FVector InLocation); // Function CrowLocomotionSystem.CLSLibrary.GetRebasedWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaec9d0
	struct FVector GetRealWorldLocation(struct UObject* WorldContextObject, struct FVector InLocation); // Function CrowLocomotionSystem.CLSLibrary.GetRealWorldLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xaec8f0
	struct FCLSGroundPoseSet GetGroundPoseSet(struct UDataTable* DataTable, struct FName RowName); // Function CrowLocomotionSystem.CLSLibrary.GetGroundPoseSet // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaec760
	struct FCLSGroundPose GetGroundPose(struct FCLSGroundPoseSet PoseSet, struct FName GripParts); // Function CrowLocomotionSystem.CLSLibrary.GetGroundPose // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xaec580
	struct FCLSGripPose GetGripPose(struct UDataTable* DataTable, struct FName RowName, struct FName WeaponTextIndex); // Function CrowLocomotionSystem.CLSLibrary.GetGripPose // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaec470
	struct FCLSAnimation GetCommonAnimation(struct UDataTable* DataTable, struct FName MainName, struct FName SubName, bool bUseRandom, int32_t Index); // Function CrowLocomotionSystem.CLSLibrary.GetCommonAnimation // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaec2a0
	struct UAnimMontage* FindActiveMontageByAnimSequence(struct UAnimInstance* AnimInstance, struct UAnimSequenceBase* Animation); // Function CrowLocomotionSystem.CLSLibrary.FindActiveMontageByAnimSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xaec1d0
};

// Class CrowLocomotionSystem.CLSPlayerCameraAnimInstance
// Size: 0x2d0 (Inherited: 0x2c0)
struct UCLSPlayerCameraAnimInstance : UAnimInstance {
	struct APawn* ControlledPawn; // 0x2b8(0x08)
	enum class ECLSMovementMode MovementMode; // 0x2c0(0x01)
	enum class ECLSMovementAction MovementAction; // 0x2c1(0x01)
	enum class ECLSRotationMode RotationMode; // 0x2c2(0x01)
	enum class ECLSGait Gait; // 0x2c3(0x01)
	enum class ECLSStance Stance; // 0x2c4(0x01)
	enum class ECLSBattleStance BattleStance; // 0x2c5(0x01)
	enum class ECLSViewMode ViewMode; // 0x2c6(0x01)
	enum class ECLSPeekState PeekState; // 0x2c7(0x01)
	bool bIsMoving; // 0x2c8(0x01)
	bool bRightShoulder; // 0x2c9(0x01)
};

// Class CrowLocomotionSystem.CLSPlayerCameraManager
// Size: 0x2870 (Inherited: 0x27b0)
struct ACLSPlayerCameraManager : APlayerCameraManager {
	struct USkeletalMeshComponent* CameraBehavior; // 0x27b0(0x08)
	char pad_27B8[0x8]; // 0x27b8(0x08)
	struct FTransform SmoothedPivotTarget; // 0x27c0(0x30)
	struct FVector PivotLocation; // 0x27f0(0x0c)
	struct FVector TargetCameraLocation; // 0x27fc(0x0c)
	struct FRotator TargetCameraRotation; // 0x2808(0x0c)
	float SmoothedAddFOV; // 0x2814(0x04)
	float PeekOffset; // 0x2818(0x04)
	float PeekToNoneBlendTime; // 0x281c(0x04)
	float NoneToPeekBlendTime; // 0x2820(0x04)
	float CameraPeekWeight; // 0x2824(0x04)
	enum class ECLSPeekState PrePeekState; // 0x2828(0x01)
	char pad_2829[0x3]; // 0x2829(0x03)
	float PeekCameraInterpoationSpeed; // 0x282c(0x04)
	char pad_2830[0x40]; // 0x2830(0x40)
};

// Class CrowLocomotionSystem.CLSPlayerController
// Size: 0x570 (Inherited: 0x570)
struct ACLSPlayerController : APlayerController {
};

