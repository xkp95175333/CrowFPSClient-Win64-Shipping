// Class DLSSBlueprint.DLSSLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDLSSLibrary : UBlueprintFunctionLibrary {

	void SetDLSSSharpness(float Sharpness); // Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xf58170
	void SetDLSSMode(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.SetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0xf58100
	enum class UDLSSSupport QueryDLSSSupport(); // Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf580d0
	bool IsDLSSSupported(); // Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf580a0
	bool IsDLSSModeSupported(enum class UDLSSMode DLSSMode); // Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf58020
	struct TArray<enum class UDLSSMode> GetSupportedDLSSModes(); // Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf57fa0
	float GetDLSSSharpness(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf57f40
	void GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage); // Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xf57e60
	void GetDLSSModeInformation(enum class UDLSSMode DLSSMode, struct FVector2D ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness); // Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xf57bc0
	enum class UDLSSMode GetDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf57b90
	void GetDLSSMinimumDriverVersion(int32_t MinDriverVersionMajor, int32_t MinDriverVersionMinor); // Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xf57ab0
	enum class UDLSSMode GetDefaultDLSSMode(); // Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xf57f70
};

