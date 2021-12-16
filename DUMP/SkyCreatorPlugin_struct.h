// Enum SkyCreatorPlugin.ESkyCreatorStarMapRotationType
enum class ESkyCreatorStarMapRotationType : uint8 {
	StarMapRotationType_NoRotation,
	StarMapRotationType_FollowSun,
	StarMapRotationType_FollowMoon,
	StarMapRotationType_MAX,
};

// Enum SkyCreatorPlugin.ESkyCreatorMoonOrbitType
enum class ESkyCreatorMoonOrbitType : uint8 {
	MoonOrbitType_SimplifiedCycle,
	MoonOrbitType_FixedElevation,
	MoonOrbitType_MAX,
};

// Enum SkyCreatorPlugin.ESkyCreatorSunOrbitType
enum class ESkyCreatorSunOrbitType : uint8 {
	SunOrbitType_SimplifiedCycle,
	SunOrbitType_Simulated,
	SunOrbitType_MAX,
};

// Enum SkyCreatorPlugin.ESkyCreatorEditorWeatherType
enum class ESkyCreatorEditorWeatherType : uint8 {
	EditorWeather_WeatherPreset,
	EditorWeather_WeatherSettings,
	EditorWeather_MAX,
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorVolumetricCloudMaterials
// Size: 0x30 (Inherited: 0x00)
struct FSkyCreatorVolumetricCloudMaterials {
	struct UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC0; // 0x00(0x08)
	struct UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC1; // 0x08(0x08)
	struct UMaterialInterface* VolumetricCloudMaterial_GC0_MSAOC2; // 0x10(0x08)
	struct UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC0; // 0x18(0x08)
	struct UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC1; // 0x20(0x08)
	struct UMaterialInterface* VolumetricCloudMaterial_GC1_MSAOC2; // 0x28(0x08)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorWeatherSettings
// Size: 0x248 (Inherited: 0x00)
struct FSkyCreatorWeatherSettings {
	struct FSkyCreatorSkyAtmosphereSettings SkyAtmosphereSettings; // 0x00(0x6c)
	struct FSkyCreatorVolumetricCloudSettings VolumetricCloudSettings; // 0x6c(0x8c)
	struct FSkyCreatorSkyLightSettings SkyLightSettings; // 0xf8(0x14)
	struct FSkyCreatorSunLightSettings SunLightSettings; // 0x10c(0x2c)
	struct FSkyCreatorMoonLightSettings MoonLightSettings; // 0x138(0x2c)
	struct FSkyCreatorExponentialHeightFogSettings ExponentialHeightFogSettings; // 0x164(0x64)
	struct FSkyCreatorStarMapSettings StarMapSettings; // 0x1c8(0x34)
	struct FSkyCreatorWeatherFXSettings WeatherFXSettings; // 0x1fc(0x24)
	struct FSkyCreatorWindSettings WindSettings; // 0x220(0x24)
	struct FSkyCreatorExposureSettings ExposureSettings; // 0x244(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorExposureSettings
// Size: 0x04 (Inherited: 0x00)
struct FSkyCreatorExposureSettings {
	float ExposureCompensation; // 0x00(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorWindSettings
// Size: 0x24 (Inherited: 0x00)
struct FSkyCreatorWindSettings {
	float LowCloudWindDirection; // 0x00(0x04)
	float LowCloudWindSpeed; // 0x04(0x04)
	float HighCloudWindDirection; // 0x08(0x04)
	float HighCloudWindSpeed; // 0x0c(0x04)
	float CloudNoiseWindDirection; // 0x10(0x04)
	float CloudNoiseWindSpeedHorizontal; // 0x14(0x04)
	float CloudNoiseWindSpeedVertical; // 0x18(0x04)
	float PrecipitationWindDirection; // 0x1c(0x04)
	float PrecipitationWindSpeed; // 0x20(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorWeatherFXSettings
// Size: 0x24 (Inherited: 0x00)
struct FSkyCreatorWeatherFXSettings {
	float RainAmount; // 0x00(0x04)
	float RainGravity; // 0x04(0x04)
	float RaindropThickness; // 0x08(0x04)
	float RaindropLength; // 0x0c(0x04)
	float SnowAmount; // 0x10(0x04)
	float SnowGravity; // 0x14(0x04)
	float SnowTurbulence; // 0x18(0x04)
	float SnowflakeSizeMin; // 0x1c(0x04)
	float SnowflakeSizeMax; // 0x20(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorStarMapSettings
// Size: 0x34 (Inherited: 0x00)
struct FSkyCreatorStarMapSettings {
	float StarMapBrightness; // 0x00(0x04)
	struct FLinearColor StarMapColorTint; // 0x04(0x10)
	struct FLinearColor NightHorizonColor; // 0x14(0x10)
	struct FLinearColor NightZenithColor; // 0x24(0x10)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorExponentialHeightFogSettings
// Size: 0x64 (Inherited: 0x00)
struct FSkyCreatorExponentialHeightFogSettings {
	float FogDensity; // 0x00(0x04)
	float FogHeightFalloff; // 0x04(0x04)
	struct FLinearColor FogInscatteringColor; // 0x08(0x10)
	float FogStartDistance; // 0x18(0x04)
	float SecondFogDensity; // 0x1c(0x04)
	float SecondFogHeightFalloff; // 0x20(0x04)
	float DirectionalInscatteringExponent; // 0x24(0x04)
	float DirectionalInscatteringStartDistance; // 0x28(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x2c(0x10)
	float VolumetricFogScatteringDistribution; // 0x3c(0x04)
	struct FLinearColor VolumetricFogAlbedo; // 0x40(0x10)
	struct FLinearColor VolumetricFogEmissive; // 0x50(0x10)
	float VolumetricFogExtinctionScale; // 0x60(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorMoonLightSettings
// Size: 0x2c (Inherited: 0x00)
struct FSkyCreatorMoonLightSettings {
	float Intensity; // 0x00(0x04)
	struct FLinearColor LightColor; // 0x04(0x10)
	float Temperature; // 0x14(0x04)
	float VolumetricScatteringIntensity; // 0x18(0x04)
	struct FLinearColor AtmosphereDiskColorScale; // 0x1c(0x10)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorSunLightSettings
// Size: 0x2c (Inherited: 0x00)
struct FSkyCreatorSunLightSettings {
	float Intensity; // 0x00(0x04)
	struct FLinearColor LightColor; // 0x04(0x10)
	float Temperature; // 0x14(0x04)
	float VolumetricScatteringIntensity; // 0x18(0x04)
	struct FLinearColor AtmosphereDiskColorScale; // 0x1c(0x10)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorSkyLightSettings
// Size: 0x14 (Inherited: 0x00)
struct FSkyCreatorSkyLightSettings {
	float Intensity; // 0x00(0x04)
	struct FLinearColor LightColor; // 0x04(0x10)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorVolumetricCloudSettings
// Size: 0x8c (Inherited: 0x00)
struct FSkyCreatorVolumetricCloudSettings {
	float LowCloudCoverage; // 0x00(0x04)
	float LowCloudDensity; // 0x04(0x04)
	float LowCloudAltitude; // 0x08(0x04)
	float LowCloudHeight; // 0x0c(0x04)
	float LowCloudHeightVariation; // 0x10(0x04)
	float LowCloudSecondaryCoverage; // 0x14(0x04)
	float LowCloudSecondaryAltitude; // 0x18(0x04)
	float LowCloudSecondaryHeight; // 0x1c(0x04)
	float HighCloudCoverage; // 0x20(0x04)
	float HighCloudDensity; // 0x24(0x04)
	float HighCloudHeight; // 0x28(0x04)
	float HighCloudAmountTypeA; // 0x2c(0x04)
	float HighCloudAmountTypeB; // 0x30(0x04)
	float HighCloudAmountTypeC; // 0x34(0x04)
	struct FLinearColor Albedo; // 0x38(0x10)
	struct FLinearColor AlbedoBottom; // 0x48(0x10)
	float BottomDarkening; // 0x58(0x04)
	struct FLinearColor NightEmissive; // 0x5c(0x10)
	float PhaseG; // 0x6c(0x04)
	float PhaseG2; // 0x70(0x04)
	float PhaseBlend; // 0x74(0x04)
	float MultiScatteringContribution; // 0x78(0x04)
	float MultiScatteringOcclusion; // 0x7c(0x04)
	float MultiScatteringEccentricity; // 0x80(0x04)
	float ShapeNoiseErosion; // 0x84(0x04)
	float DetailNoiseErosion; // 0x88(0x04)
};

// ScriptStruct SkyCreatorPlugin.SkyCreatorSkyAtmosphereSettings
// Size: 0x6c (Inherited: 0x00)
struct FSkyCreatorSkyAtmosphereSettings {
	float RayleighScatteringScale; // 0x00(0x04)
	struct FLinearColor RayleighScattering; // 0x04(0x10)
	float RayleighExponentialDistribution; // 0x14(0x04)
	float MieScatteringScale; // 0x18(0x04)
	struct FLinearColor MieScattering; // 0x1c(0x10)
	float MieAbsorptionScale; // 0x2c(0x04)
	struct FLinearColor MieAbsorption; // 0x30(0x10)
	float MieAnisotropy; // 0x40(0x04)
	float MieExponentialDistribution; // 0x44(0x04)
	float AbsorptionScale; // 0x48(0x04)
	struct FLinearColor Absorption; // 0x4c(0x10)
	struct FLinearColor SkyLuminanceFactor; // 0x5c(0x10)
};

