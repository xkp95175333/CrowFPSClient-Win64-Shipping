// Class SkyCreatorPlugin.SkyCreator
// Size: 0xec0 (Inherited: 0x220)
struct ASkyCreator : AActor {
	struct USceneComponent* Root; // 0x220(0x08)
	struct UBillboardComponent* Billboard; // 0x228(0x08)
	struct UStaticMeshComponent* Compass; // 0x230(0x08)
	struct USkyAtmosphereComponent* SkyAtmosphere; // 0x238(0x08)
	struct UVolumetricCloudComponent* VolumetricCloud; // 0x240(0x08)
	struct USkyLightComponent* SkyLight; // 0x248(0x08)
	struct UDirectionalLightComponent* SunLight; // 0x250(0x08)
	struct UDirectionalLightComponent* MoonLight; // 0x258(0x08)
	struct UExponentialHeightFogComponent* ExponentialHeightFog; // 0x260(0x08)
	struct UPostProcessComponent* Exposure; // 0x268(0x08)
	struct UStaticMeshComponent* StarMap; // 0x270(0x08)
	struct UStaticMeshComponent* SunSphere; // 0x278(0x08)
	struct UStaticMeshComponent* MoonSphere; // 0x280(0x08)
	struct UNiagaraComponent* WeatherFX; // 0x288(0x08)
	struct UStaticMeshComponent* SkySphere; // 0x290(0x08)
	struct UMaterialInterface* SkySphereMaterial; // 0x298(0x08)
	struct UMaterialInstanceDynamic* SkySphereMID; // 0x2a0(0x08)
	float EditorTimeOfDay; // 0x2a8(0x04)
	enum class ESkyCreatorEditorWeatherType EditorWeatherType; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct USkyCreatorWeatherPreset* EditorWeatherPreset; // 0x2b0(0x08)
	struct FSkyCreatorWeatherSettings EditorWeatherSettings; // 0x2b8(0x248)
	bool bIsEditorTickEnabled; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float SkySphereRadius; // 0x504(0x04)
	bool bLightOptimization; // 0x508(0x01)
	enum class EComponentMobility SkyAtmosphereMobility; // 0x509(0x01)
	enum class ESkyAtmosphereTransformMode TransformMode; // 0x50a(0x01)
	char pad_50B[0x1]; // 0x50b(0x01)
	float PlanetRadius; // 0x50c(0x04)
	float AtmosphereHeight; // 0x510(0x04)
	float TraceSampleCountScale; // 0x514(0x04)
	float LayerBottomAttitude; // 0x518(0x04)
	float LayerHeight; // 0x51c(0x04)
	float TracingStartMaxDistance; // 0x520(0x04)
	float TracingMaxDistance; // 0x524(0x04)
	bool bPerSampleAtmosphericLightTransmittance; // 0x528(0x01)
	bool bGroundContribution; // 0x529(0x01)
	char pad_52A[0x2]; // 0x52a(0x02)
	int32_t MultiScatteringApproximationOctaveCount; // 0x52c(0x04)
	float ViewSampleCountScale; // 0x530(0x04)
	float ReflectionSampleCountScale; // 0x534(0x04)
	float ShadowViewSampleCountScale; // 0x538(0x04)
	float ShadowReflectionSampleCountScale; // 0x53c(0x04)
	float ShadowTracingDistance; // 0x540(0x04)
	float LowCloudMapScale; // 0x544(0x04)
	struct FVector2D LowCloudMapOffset; // 0x548(0x08)
	float HighCloudMapScale; // 0x550(0x04)
	struct FVector2D HighCloudMapOffset; // 0x554(0x08)
	float HighCloudHorizonFadeHardness; // 0x55c(0x04)
	bool bAutoScale; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float ShapeNoiseScale; // 0x564(0x04)
	float DetailNoiseScale; // 0x568(0x04)
	enum class EComponentMobility SkyLightMobility; // 0x56c(0x01)
	bool bRealTimeCapture; // 0x56d(0x01)
	enum class EComponentMobility SunLightMobility; // 0x56e(0x01)
	bool bControlSunDirection; // 0x56f(0x01)
	bool bSunUseTemperature; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float SunAngularDiameter; // 0x574(0x04)
	bool bSunConstantAtmosphereDiskColorScale; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	struct FLinearColor SunAtmosphereDiskColorScale; // 0x57c(0x10)
	enum class ESkyCreatorSunOrbitType SunOrbitType; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	float SunriseTime; // 0x590(0x04)
	float SunsetTime; // 0x594(0x04)
	float SunDawnOffsetTime; // 0x598(0x04)
	float SunDuskOffsetTime; // 0x59c(0x04)
	float SunDawnTime; // 0x5a0(0x04)
	float SunDuskTime; // 0x5a4(0x04)
	float SunElevation; // 0x5a8(0x04)
	float SunAzimuth; // 0x5ac(0x04)
	float SunMinAngleAtDawnDusk; // 0x5b0(0x04)
	float SunFadeInOutTime; // 0x5b4(0x04)
	enum class EComponentMobility MoonLightMobility; // 0x5b8(0x01)
	bool bControlMoonDirection; // 0x5b9(0x01)
	bool bMoonUseTemperature; // 0x5ba(0x01)
	char pad_5BB[0x1]; // 0x5bb(0x01)
	float MoonAngularDiameter; // 0x5bc(0x04)
	bool bMoonConstantAtmosphereDiskColorScale; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	struct FLinearColor MoonAtmosphereDiskColorScale; // 0x5c4(0x10)
	float MoonPhase; // 0x5d4(0x04)
	float MoonRotation; // 0x5d8(0x04)
	enum class ESkyCreatorMoonOrbitType MoonOrbitType; // 0x5dc(0x01)
	char pad_5DD[0x3]; // 0x5dd(0x03)
	float MoonriseTime; // 0x5e0(0x04)
	float MoonsetTime; // 0x5e4(0x04)
	float MoonElevation; // 0x5e8(0x04)
	float MoonAzimuth; // 0x5ec(0x04)
	float MoonFadeInOutTime; // 0x5f0(0x04)
	enum class EComponentMobility ExponentialHeightFogMobility; // 0x5f4(0x01)
	bool bEnableExponentialHeightFog; // 0x5f5(0x01)
	bool bVolumetricFog; // 0x5f6(0x01)
	char pad_5F7[0x1]; // 0x5f7(0x01)
	float FogHeightOffset; // 0x5f8(0x04)
	float SecondFogHeightOffset; // 0x5fc(0x04)
	struct UTexture2D* StarMapTexture; // 0x600(0x08)
	enum class ESkyCreatorStarMapRotationType StarMapRotationType; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	struct FRotator StarMapAdditionalRotation; // 0x60c(0x0c)
	bool bSpawnOnlyUnderClouds; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float PrecipitationSpawnRadius; // 0x61c(0x04)
	float MaxRainParticles; // 0x620(0x04)
	float MaxSnowParticles; // 0x624(0x04)
	bool bEnableWind; // 0x628(0x01)
	bool bIndependentWindControl; // 0x629(0x01)
	char pad_62A[0x2]; // 0x62a(0x02)
	struct FSkyCreatorWindSettings EditorIndependentWindSettings; // 0x62c(0x24)
	float CloudWindSkewAmount; // 0x650(0x04)
	bool bUseBuiltInExposureSettings; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct FCameraExposureSettings ExposureSettings; // 0x658(0x40)
	char pad_698[0x8]; // 0x698(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x6a0(0x550)
	float TimeOfDay; // 0xbf0(0x04)
	struct FSkyCreatorWeatherSettings WeatherSettings; // 0xbf4(0x248)
	char pad_E3C[0x4]; // 0xe3c(0x04)
	struct FSkyCreatorVolumetricCloudMaterials VolumetricCloudMaterials; // 0xe40(0x30)
	struct UMaterialInterface* CurrentVolumetricCloudMaterial; // 0xe70(0x08)
	struct UMaterialInstanceDynamic* VolumetricCloudMID; // 0xe78(0x08)
	float CurrentShapeNoiseScale; // 0xe80(0x04)
	float CurrentDetailNoiseScale; // 0xe84(0x04)
	struct FVector LowCloudWindOffset; // 0xe88(0x0c)
	struct FVector LowCloudWindSkewDirection; // 0xe94(0x0c)
	float LowCloudWindSkewForce; // 0xea0(0x04)
	struct FVector HighCloudWindOffset; // 0xea4(0x0c)
	struct FVector CloudNoiseWindOffset; // 0xeb0(0x0c)
	char pad_EBC[0x4]; // 0xebc(0x04)

	void UpdateSunMoonIntensity(float InTime); // Function SkyCreatorPlugin.SkyCreator.UpdateSunMoonIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c4d0
	void UpdateSettings(); // Function SkyCreatorPlugin.SkyCreator.UpdateSettings // (Final|Native|Private|BlueprintCallable) // @ game+0xf6c4b0
	void SetWindSettings(struct FSkyCreatorWindSettings InWindSettings); // Function SkyCreatorPlugin.SkyCreator.SetWindSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c3f0
	void SetWindIndependentSettings(struct FSkyCreatorWindSettings InWindSettings); // Function SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c330
	void SetWeatherSettings(struct FSkyCreatorWeatherSettings InWeatherSettings); // Function SkyCreatorPlugin.SkyCreator.SetWeatherSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c210
	void SetWeatherFXSettings(struct FSkyCreatorWeatherFXSettings InWeatherFXSettings); // Function SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c140
	void SetVolumetricCloudSettings(struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings); // Function SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6c050
	void SetTime(float InTime); // Function SkyCreatorPlugin.SkyCreator.SetTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bfd0
	void SetSunMoonPosition(float InTime); // Function SkyCreatorPlugin.SkyCreator.SetSunMoonPosition // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bf50
	void SetSunLightSettings(struct FSkyCreatorSunLightSettings InSunLightSettings); // Function SkyCreatorPlugin.SkyCreator.SetSunLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6be70
	void SetStarMapSettings(struct FSkyCreatorStarMapSettings InStarMapSettings); // Function SkyCreatorPlugin.SkyCreator.SetStarMapSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bd90
	void SetSkyLightSettings(struct FSkyCreatorSkyLightSettings InSkyLightSettings); // Function SkyCreatorPlugin.SkyCreator.SetSkyLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bce0
	void SetSkyAtmosphereSettings(struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings); // Function SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bbb0
	void SetMoonPhase(float InMoonPhase); // Function SkyCreatorPlugin.SkyCreator.SetMoonPhase // (Final|Native|Public|BlueprintCallable) // @ game+0xf6bb30
	void SetMoonLightSettings(struct FSkyCreatorMoonLightSettings InMoonLightSettings); // Function SkyCreatorPlugin.SkyCreator.SetMoonLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6ba50
	void SetExposureSettings(struct FSkyCreatorExposureSettings InExposureSettings); // Function SkyCreatorPlugin.SkyCreator.SetExposureSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b9d0
	void SetExponentialHeightFogSettings(struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings); // Function SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b8b0
	void SetComponentsSettings(); // Function SkyCreatorPlugin.SkyCreator.SetComponentsSettings // (Final|Native|Private|BlueprintCallable) // @ game+0xf6b890
	void RerunConstructionScript(); // Function SkyCreatorPlugin.SkyCreator.RerunConstructionScript // (Final|Native|Private|BlueprintCallable) // @ game+0xf6b870
	void RealtimeVolumetricCloudWind(float DeltaTime); // Function SkyCreatorPlugin.SkyCreator.RealtimeVolumetricCloudWind // (Final|Native|Public) // @ game+0xf6b7f0
	void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration); // Function SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b720
	void OnRep_UpdateWeather(); // Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather // (Final|Native|Private) // @ game+0xf6b700
	void OnRep_UpdateTime(); // Function SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime // (Final|Native|Private) // @ game+0xf6b6e0
	void LerpWindSettings(struct FSkyCreatorWindSettings InWindSettingsA, struct FSkyCreatorWindSettings InWindSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpWindSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b570
	void LerpWindIndependentSettings(struct FSkyCreatorWindSettings InWindSettingsA, struct FSkyCreatorWindSettings InWindSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b400
	void LerpWeatherSettings(struct FSkyCreatorWeatherSettings InWeatherSettingsA, struct FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpWeatherSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b1a0
	void LerpWeatherFXSettings(struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, struct FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6b020
	void LerpVolumetricCloudSettings(struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, struct FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6ae10
	void LerpSunLightSettings(struct FSkyCreatorSunLightSettings InSunLightSettingsA, struct FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpSunLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6ac60
	void LerpStarMapSettings(struct FSkyCreatorStarMapSettings InStarMapSettingsA, struct FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpStarMapSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6aab0
	void LerpSkyLightSettings(struct FSkyCreatorSkyLightSettings InSkyLightSettingsA, struct FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6a940
	void LerpSkyAtmosphereSettings(struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, struct FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6a6d0
	void LerpMoonLightSettings(struct FSkyCreatorMoonLightSettings InMoonLightSettingsA, struct FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6a520
	void LerpExposureSettings(struct FSkyCreatorExposureSettings InExposureSettingsA, struct FSkyCreatorExposureSettings InExposureSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpExposureSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6a410
	void LerpExponentialHeightFogSettings(struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, struct FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha); // Function SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xf6a1d0
	struct FSkyCreatorWindSettings GetWindSettings(); // Function SkyCreatorPlugin.SkyCreator.GetWindSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf6a180
	struct FSkyCreatorWeatherSettings GetWeatherSettings(); // Function SkyCreatorPlugin.SkyCreator.GetWeatherSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf6a0c0
	struct FSkyCreatorWeatherFXSettings GetWeatherFXSettings(); // Function SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69fb0
	struct FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings(); // Function SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69f20
	float GetTime(); // Function SkyCreatorPlugin.SkyCreator.GetTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69ef0
	struct FRotator GetSunPosition(float Time); // Function SkyCreatorPlugin.SkyCreator.GetSunPosition // (Final|Native|Public|HasDefaults) // @ game+0xf69e50
	struct FSkyCreatorSunLightSettings GetSunLightSettings(); // Function SkyCreatorPlugin.SkyCreator.GetSunLightSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69e00
	struct FSkyCreatorStarMapSettings GetStarMapSettings(); // Function SkyCreatorPlugin.SkyCreator.GetStarMapSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69db0
	struct FRotator GetStarMapRotation(float Time); // Function SkyCreatorPlugin.SkyCreator.GetStarMapRotation // (Final|Native|Public|HasDefaults) // @ game+0xf69d10
	struct FSkyCreatorSkyLightSettings GetSkyLightSettings(); // Function SkyCreatorPlugin.SkyCreator.GetSkyLightSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69cd0
	struct FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings(); // Function SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69c50
	struct FRotator GetMoonPosition(float Time); // Function SkyCreatorPlugin.SkyCreator.GetMoonPosition // (Final|Native|Public|HasDefaults) // @ game+0xf69bb0
	float GetMoonPhase(); // Function SkyCreatorPlugin.SkyCreator.GetMoonPhase // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69b80
	struct FSkyCreatorMoonLightSettings GetMoonLightSettings(); // Function SkyCreatorPlugin.SkyCreator.GetMoonLightSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69b30
	struct FSkyCreatorExposureSettings GetExposureSettings(); // Function SkyCreatorPlugin.SkyCreator.GetExposureSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69af0
	struct FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings(); // Function SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf69a80
	void CreateVolumetricCloudMID(); // Function SkyCreatorPlugin.SkyCreator.CreateVolumetricCloudMID // (Final|Native|Public) // @ game+0xf69a60
};

// Class SkyCreatorPlugin.SkyCreatorWeatherPreset
// Size: 0x290 (Inherited: 0x30)
struct USkyCreatorWeatherPreset : UDataAsset {
	struct FText Description; // 0x30(0x18)
	struct FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings; // 0x48(0x6c)
	struct FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings; // 0xb4(0x8c)
	struct FSkyCreatorSkyLightSettings SkyLightSettings; // 0x140(0x14)
	struct FSkyCreatorSunLightSettings SunLightSettings; // 0x154(0x2c)
	struct FSkyCreatorMoonLightSettings MoonLightSettings; // 0x180(0x2c)
	struct FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings; // 0x1ac(0x64)
	struct FSkyCreatorStarMapSettings StarMapSettings; // 0x210(0x34)
	struct FSkyCreatorWeatherFXSettings WeatherFXSettings; // 0x244(0x24)
	struct FSkyCreatorWindSettings WindSettings; // 0x268(0x24)
	struct FSkyCreatorExposureSettings ExposureSettings; // 0x28c(0x04)

	struct FSkyCreatorWeatherSettings GetWeatherPresetSettings(); // Function SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xf6a000
};

