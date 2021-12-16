// Class AkAudio.AkSoundAUD
// Size: 0x30 (Inherited: 0x28)
struct UAkSoundAUD : UAssetUserData {
	bool IsSoundOccluder; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t OcclusionPercent; // 0x2c(0x04)
};

// Class AkAudio.AkAcousticPortal
// Size: 0x2e8 (Inherited: 0x258)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float ObstructionRefreshInterval; // 0x25c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x260(0x01)
	char pad_261[0x87]; // 0x261(0x87)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x118a740
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a310
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x118a200
};

// Class AkAudio.AkPortalComponent
// Size: 0x200 (Inherited: 0x200)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAmbientSound
// Size: 0x260 (Inherited: 0x220)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	struct UAkComponent* AkComponent; // 0x228(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x01)
	bool AutoPost; // 0x231(0x01)
	char pad_232[0x2e]; // 0x232(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b970
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b950
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x70 (Inherited: 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x04)
	char pad_2C[0x44]; // 0x2c(0x44)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x90 (Inherited: 0x70)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct TSoftObjectPtr<struct UAkMediaAsset>> MediaList; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkAudioBank
// Size: 0x128 (Inherited: 0x58)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct TSet<struct TSoftObjectPtr<struct UAkAudioEvent>> LinkedAkEvents; // 0xb0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100(0x08)
	char pad_108[0x20]; // 0x108(0x20)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x88 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<struct UAkGroupValue> GroupValue; // 0x28(0x28)
	struct UAkGroupValue* DefaultGroupValue; // 0x50(0x08)
	struct TArray<struct TSoftObjectPtr<struct UAkMediaAsset>> MediaList; // 0x58(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xb8 (Inherited: 0x90)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x90(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class AkAudio.AkAudioEventData
// Size: 0x280 (Inherited: 0xb8)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xb8(0x04)
	bool IsInfinite; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float MinimumDuration; // 0xc0(0x04)
	float MaximumDuration; // 0xc4(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xc8(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0x118(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x168(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x1b8(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x208(0x50)
	char pad_258[0x28]; // 0x258(0x28)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe8 (Inherited: 0x58)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8(0x08)
	float MaxAttenuationRadius; // 0xc0(0x04)
	bool IsInfinite; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float MinimumDuration; // 0xc8(0x04)
	float MaximumDuration; // 0xcc(0x04)
	char pad_D0[0x18]; // 0xd0(0x18)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a3d0
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a3a0
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a370
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a340
};

// Class AkAudio.AkGameObject
// Size: 0x220 (Inherited: 0x200)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x1f8(0x08)
	struct FString EventName; // 0x200(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x11926b0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo, int32_t PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1190490
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x11902f0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t PlayingID, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118fb30
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118f900
};

// Class AkAudio.AkComponent
// Size: 0x3e0 (Inherited: 0x220)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x218(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x220(0x01)
	char pad_222[0x2]; // 0x222(0x02)
	char EnableSpotReflectors : 1; // 0x224(0x01)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x228(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x230(0x10)
	int32_t EarlyReflectionOrder; // 0x240(0x04)
	float EarlyReflectionBusSendGain; // 0x244(0x04)
	float EarlyReflectionMaxPathLength; // 0x248(0x04)
	float roomReverbAuxBusGain; // 0x24c(0x04)
	int32_t diffractionMaxEdges; // 0x250(0x04)
	int32_t diffractionMaxPaths; // 0x254(0x04)
	float diffractionMaxPathLength; // 0x258(0x04)
	char DrawFirstOrderReflections : 1; // 0x25c(0x01)
	char DrawSecondOrderReflections : 1; // 0x25c(0x01)
	char DrawHigherOrderReflections : 1; // 0x25c(0x01)
	char DrawDiffraction : 1; // 0x25c(0x01)
	char pad_25C_4 : 4; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	bool StopWhenOwnerDestroyed; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	float AttenuationScalingFactor; // 0x264(0x04)
	float OcclusionRefreshInterval; // 0x268(0x04)
	bool bUseReverbVolumes; // 0x26c(0x01)
	char pad_26D[0x173]; // 0x26d(0x173)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118bb80
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x118b990
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b7a0
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b710
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkComponent.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b560
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b4e0
	void SetListeners(struct TArray<struct UAkComponent*> Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118b430
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b320
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b280
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118b180
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118af10
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ad40
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118abd0
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118ab20
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118a950
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118a760
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkComponent.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118a400
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a2b0
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x3f0 (Inherited: 0x3e0)
struct UAkAudioInputComponent : UAkComponent {
	char pad_3E0[0x10]; // 0x3e0(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x118aee0
};

// Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x58(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xb28 (Inherited: 0x120)
struct UAkCheckBox : UContentWidget {
	char pad_120[0x398]; // 0x120(0x398)
	enum class ECheckBoxState CheckedState; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct FDelegate CheckedStateDelegate; // 0x4bc(0x10)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x4d0(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xa50(0x01)
	bool IsFocusable; // 0xa51(0x01)
	char pad_A52[0x6]; // 0xa52(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xa58(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xa68(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xaa8(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xab8(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xac8(0x10)
	char pad_AD8[0x50]; // 0xad8(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x118b3a0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x118b200
	void SetAkItemId(struct FGuid ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x118b0e0
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x118b040
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a680
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a650
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a2e0
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a260
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x118a220
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192d30
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1192b10
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192a80
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11929a0
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1192830
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192810
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x11927f0
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192770
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192750
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x11926d0
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192620
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192590
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192510
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x11922d0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192180
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1192080
	void SetSpeakerAngles(struct TArray<float> SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1191f30
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1191ce0
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191e70
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191c70
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1191bb0
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191b30
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1191a70
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191910
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191730
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191550
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1191460
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191310
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191240
	void Seek(struct UAkComponent* AC, int32_t MilliSeconds, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.Seek // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1191140
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1191040
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1190f20
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1190d30
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1190bc0
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1190a00
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1190710
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1190090
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118fdf0
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118f8e0
	void LoadBanks(struct TArray<struct UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118f7f0
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118f760
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118f680
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118f510
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118f480
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118f450
	void GetSpeakerAngles(struct TArray<float> SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118f2c0
	int32_t GetSourcePlayPosition(int32_t PlayingID); // Function AkAudio.AkGameplayStatics.GetSourcePlayPosition // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118f230
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118f000
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118ee70
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118eb30
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118e8c0
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118e650
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x118e720
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x118e650
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118e510
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118e340
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118e320
	void CancelEventCallback(struct FDelegate PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x118e280
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x118e1f0
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x8]; // 0x38(0x08)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x118f420
	bool GetProgramChange(struct FAkMidiProgramChange AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ef50
	bool GetPitchBend(struct FAkMidiPitchBend AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118eea0
	bool GetNoteOn(struct FAkMidiNoteOnOff AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118edc0
	bool GetNoteOff(struct FAkMidiNoteOnOff AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ed10
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ec60
	bool GetGeneric(struct FAkMidiGeneric AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ebb0
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118ea80
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x118ea50
	bool GetCc(struct FAkMidiCc AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x118e9a0
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x330 (Inherited: 0x200)
struct UAkGeometryComponent : USceneComponent {
	enum class AkMeshType MeshType; // 0x1f8(0x01)
	int32_t LOD; // 0x1fc(0x04)
	float WeldingThreshold; // 0x200(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x208(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x258(0x10)
	char bEnableDiffraction : 1; // 0x268(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x268(0x01)
	char pad_269_2 : 6; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct AActor* AssociatedRoom; // 0x270(0x08)
	char pad_278[0x10]; // 0x278(0x10)
	struct FAkGeometryData GeometryData; // 0x288(0x50)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> PreviousStaticMeshSurfaceOverride; // 0x2d8(0x50)
	char pad_328[0x8]; // 0x328(0x08)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x1196da0
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x1196ce0
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1196b40
};

// Class AkAudio.AkGroupValue
// Size: 0x58 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType {
	uint32_t GroupShortID; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0xa0 (Inherited: 0x90)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x90(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196a40
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196950
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1196d00
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196be0
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196b60
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196a40
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196950
};

// Class AkAudio.AkItemProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1196d00
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196c60
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196b60
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x240 (Inherited: 0x200)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x1f8(0x01)
	struct UAkAuxBus* AuxBus; // 0x200(0x08)
	struct FString AuxBusName; // 0x208(0x10)
	float SendLevel; // 0x218(0x04)
	float FadeRate; // 0x21c(0x04)
	float Priority; // 0x220(0x04)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x228(0x08)
	char pad_230[0x10]; // 0x230(0x10)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLuminInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkLuminPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLuminPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x40 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
	char pad_2A[0x16]; // 0x2a(0x16)
};

// Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x58 (Inherited: 0x58)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xb8 (Inherited: 0x58)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_58[0x60]; // 0x58(0x60)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x119aae0
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x290 (Inherited: 0x258)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x258(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UAkAuxBus* AuxBus; // 0x260(0x08)
	struct FString AuxBusName; // 0x268(0x10)
	float SendLevel; // 0x278(0x04)
	float FadeRate; // 0x27c(0x04)
	float Priority; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x288(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x240 (Inherited: 0x220)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x218(0x01)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x220(0x08)
	float Priority; // 0x228(0x04)
	float WallOcclusion; // 0x22c(0x04)
	float AuxSendLevel; // 0x230(0x04)
	bool AutoPost; // 0x234(0x01)
	char pad_235_1 : 7; // 0x235(0x01)
	char pad_236[0xa]; // 0x236(0x0a)
};

// Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x140 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TMap<struct TSoftObjectPtr<struct UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	bool SplitSwitchContainerMedia; // 0xa8(0x01)
	bool SplitMediaPerFolder; // 0xa9(0x01)
	bool UseEventBasedPackaging; // 0xaa(0x01)
	bool EnableAutomaticAssetSynchronization; // 0xab(0x01)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString CommandletCommitMessage; // 0xb0(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xc0(0x50)
	bool AskedToUseNewAssetManagement; // 0x110(0x01)
	bool bEnableMultiCoreRendering; // 0x111(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x112(0x01)
	bool FixupRedirectorsDuringMigration; // 0x113(0x01)
	char pad_114[0x4]; // 0x114(0x04)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x118(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool bAutoConnectToWAAPI; // 0x64(0x01)
	bool AutoSyncSelection; // 0x65(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x01)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class AkAudio.AkSlider
// Size: 0x530 (Inherited: 0x108)
struct UAkSlider : UWidget {
	float Value; // 0x108(0x04)
	struct FDelegate ValueDelegate; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FSliderStyle WidgetStyle; // 0x120(0x340)
	enum class EOrientation Orientation; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FLinearColor SliderBarColor; // 0x464(0x10)
	struct FLinearColor SliderHandleColor; // 0x474(0x10)
	bool IndentHandle; // 0x484(0x01)
	bool Locked; // 0x485(0x01)
	char pad_486[0x2]; // 0x486(0x02)
	float StepSize; // 0x488(0x04)
	bool IsFocusable; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x490(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4a0(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x500(0x10)
	char pad_510[0x20]; // 0x510(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x119b1e0
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x119b090
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x119b000
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x119af70
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x119aee0
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x119ae50
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x119adb0
	void SetAkSliderItemId(struct FGuid ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x119ad10
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119aab0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119a9d0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x119a990
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x270 (Inherited: 0x258)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x260(0x08)
	struct UAkRoomComponent* Room; // 0x268(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x248 (Inherited: 0x220)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x228(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x238(0x08)
	float DistanceScalingFactor; // 0x240(0x04)
	float Level; // 0x244(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x58 (Inherited: 0x58)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x230 (Inherited: 0x200)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x1f8(0x01)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x200(0x10)
	char bEnableDiffraction : 1; // 0x210(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x210(0x01)
	char pad_210_3 : 5; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct AActor* AssociatedRoom; // 0x218(0x08)
	char pad_220[0x10]; // 0x220(0x10)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x119b5f0
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x119acf0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x119acd0
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x58 (Inherited: 0x58)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId SubscriptionId, bool UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119b4d0
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri WaapiUri, struct FAKWaapiJsonObject WaapiOptions, struct FDelegate Callback, struct FAkWaapiSubscriptionId SubscriptionId, bool SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119b260
	void SetSubscriptionID(struct FAkWaapiSubscriptionId Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119b110
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119ac20
	bool RegisterWaapiConnectionLostCallback(struct FDelegate Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119ab70
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119aa20
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x119a8a0
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x119a7d0
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri WaapiUri, struct FAKWaapiJsonObject WaapiArgs, struct FAKWaapiJsonObject WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119a5d0
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196a40
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196950
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a0e90
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a0c70
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a0aa0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a08d0
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames FieldName, struct TArray<struct FString> FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a06d0
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames FieldName, struct TArray<struct FAKWaapiJsonObject> FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a04b0
	struct FString GetStringField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119fed0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119fc30
	float GetNumberField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119fae0
	int32_t GetIntegerField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119f990
	bool GetBoolField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119f840
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x119f5f0
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x119f4c0
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x119f3b0
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196a40
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1196950
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x148 (Inherited: 0x108)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1196d00
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x119fdb0
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1196b60
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x168 (Inherited: 0x108)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
	char pad_128[0x40]; // 0x128(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)
	char pad_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x118a6b0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1d0 (Inherited: 0xe8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E8[0x40]; // 0xe8(0x40)
	struct UAkAudioEvent* Event; // 0x128(0x08)
	bool RetriggerEvent; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32_t ScrubTailLengthMs; // 0x134(0x04)
	bool StopAtSectionEnd; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FString EventName; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)
	float MaxSourceDuration; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString MaxDurationSourceID; // 0x178(0x10)
	char pad_188[0x48]; // 0x188(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
	char bIsAMasterTrack : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x250 (Inherited: 0xe8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe8(0x08)
	struct FString Name; // 0xf0(0x10)
	struct FRichCurve FloatCurve; // 0x100(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b0(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x98 (Inherited: 0x90)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x60]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x11a00a0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x11a0060
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x11a0330
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x11a0080
};

