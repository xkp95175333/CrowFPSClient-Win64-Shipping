// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USteamVRInputDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSteamVR_ActionOrigin(struct FSteamVRAction SteamVRAction, struct FSteamVRActionSet SteamVRActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0f60
	void ShowAllSteamVR_ActionOrigins(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0f40
	float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0eb0
	void SetPoseSource(bool bUseSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0e30
	void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0d60
	bool ResetSeatedPosition(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0d30
	void PlaySteamVR_HapticFeedback(enum class ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0b90
	float GetUserIPD(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0b40
	bool GetSteamVR_OriginTrackedDeviceInfo(struct FSteamVRAction SteamVRAction, struct FSteamVRInputOriginInfo InputOriginInfo); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c09b0
	void GetSteamVR_OriginLocalizedName(struct FSteamVRAction SteamVRAction, struct TArray<enum class ESteamVRInputStringBits> LocalizedParts, struct FString OriginLocalizedName); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c07c0
	struct TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(struct FSteamVRAction SteamVRActionHandle); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c0670
	bool GetSteamVR_HandPoseRelativeToNow(struct FVector position, struct FRotator Orientation, enum class ESteamVRHand hand, float PredictedSecondsFromNow); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13c0500
	float GetSteamVR_GlobalPredictedSecondsFromNow(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13c04d0
	void GetSteamVR_ActionSetArray(struct TArray<struct FSteamVRActionSet> SteamVRActionSets); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c0410
	void GetSteamVR_ActionArray(struct TArray<struct FSteamVRAction> SteamVRActions); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c0350
	void GetSkeletalTransform(struct FSteamVRSkeletonTransform LeftHand, struct FSteamVRSkeletonTransform RightHand, bool bWithController); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c01e0
	void GetSkeletalState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13c0100
	void GetRightHandPoseData(struct FVector position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13bff80
	void GetPoseSource(bool bUsingSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bff00
	void GetLeftHandPoseData(struct FVector position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x13bfd80
	void GetFingerCurlsAndSplays(enum class EHand hand, struct FSteamVRFingerCurls FingerCurls, struct FSteamVRFingerSplays FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bfbf0
	void GetCurlsAndSplaysState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bfb10
	void GetControllerFidelity(enum class EControllerFidelity LeftControllerFidelity, enum class EControllerFidelity RightControllerFidelity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bfa30
	void FindSteamVR_OriginTrackedDeviceInfo(struct FName ActionName, bool bResult, struct FSteamVRInputOriginInfo InputOriginInfo, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bf8a0
	struct TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13bf790
	bool FindSteamVR_ActionOrigin(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13bf6c0
	void FindSteamVR_Action(struct FName ActionName, bool bResult, struct FSteamVRAction FoundAction, struct FSteamVRActionSet FoundActionSet, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13bf4e0
};

// Class SteamVRInputDevice.SteamVRTrackingReferences
// Size: 0x108 (Inherited: 0xb0)
struct USteamVRTrackingReferences : UActorComponent {
	struct FMulticastInlineDelegate OnTrackedDeviceActivated; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTrackedDeviceDeactivated; // 0xc0(0x10)
	float ActiveDevicePollFrequency; // 0xd0(0x04)
	struct FVector TrackingReferenceScale; // 0xd4(0x0c)
	struct TArray<struct UStaticMeshComponent*> TrackingReferences; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)

	bool ShowTrackingReferences(struct UStaticMesh* TrackingReferenceMesh); // Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences // (Final|Native|Public|BlueprintCallable) // @ game+0x13c10f0
	void HideTrackingReferences(); // Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences // (Final|Native|Public|BlueprintCallable) // @ game+0x13c0b70
};

