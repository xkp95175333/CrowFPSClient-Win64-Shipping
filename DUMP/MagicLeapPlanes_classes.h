// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size: 0x260 (Inherited: 0x200)
struct UMagicLeapPlanesComponent : USceneComponent {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x1f8(0x10)
	struct UBoxComponent* SearchVolume; // 0x208(0x08)
	int32_t MaxResults; // 0x210(0x04)
	float MinHolePerimeter; // 0x214(0x04)
	float MinPlaneArea; // 0x218(0x04)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x21c(0x01)
	float SimilarityThreshold; // 0x220(0x04)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x228(0x10)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x238(0x10)
	char pad_249[0x17]; // 0x249(0x17)

	bool RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1294530
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	void ReorderPlaneFlags(struct TArray<enum class EMagicLeapPlaneQueryFlags> InPriority, struct TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x12943b0
	bool RemovePersistentQuery(struct FGuid Handle); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1294310
	void RemoveFlagsNotInQuery(struct TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1294190
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1294030
	bool PlanesPersistentQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FGuid Handle, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1293e80
	bool IsTrackerValid(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1293e50
	struct FTransform GetContentScale(struct AActor* ContentActor, struct FMagicLeapPlaneResult PlaneResult); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1293d00
	bool DestroyTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1293cd0
	bool CreateTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1293ca0
	struct FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1293c10
};

