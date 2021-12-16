// Enum PatrolActionSystem.EEnemyActionFinishResult
enum class EEnemyActionFinishResult : uint8 {
	Success,
	Aborted,
	ConditionFailed,
	EEnemyActionFinishResult_MAX,
};

// Enum PatrolActionSystem.EEnemyActionState
enum class EEnemyActionState : uint8 {
	ReadyForActivation,
	Active,
	Aborting,
	EEnemyActionState_MAX,
};

// Enum PatrolActionSystem.EPatrolMovementType
enum class EPatrolMovementType : uint8 {
	Clockwise,
	CounterClockwise,
	EPatrolMovementType_MAX,
};

// Enum PatrolActionSystem.EEnemyActionsExecutionType
enum class EEnemyActionsExecutionType : uint8 {
	RandomAction,
	AllInTurn,
	EEnemyActionsExecutionType_MAX,
};

// ScriptStruct PatrolActionSystem.DelayedGroupMovement
// Size: 0x20 (Inherited: 0x00)
struct FDelayedGroupMovement {
	struct AActor* MovementTargetActor; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct PatrolActionSystem.FormationPointsGenerationSettings
// Size: 0x0c (Inherited: 0x00)
struct FFormationPointsGenerationSettings {
	float Length; // 0x00(0x04)
	float Width; // 0x04(0x04)
	float DistanceBetweenPoints; // 0x08(0x04)
};

// ScriptStruct PatrolActionSystem.MovementGroupMemberInfo
// Size: 0x18 (Inherited: 0x00)
struct FMovementGroupMemberInfo {
	struct AUPSGroupMemberMovementPoint* GroupMemberMovementPointActor; // 0x00(0x08)
	struct FVector GroupMemberLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct PatrolActionSystem.DrawerItemInfo
// Size: 0x58 (Inherited: 0x00)
struct FDrawerItemInfo {
	char pad_0[0x50]; // 0x00(0x50)
	struct UWorld* World; // 0x50(0x08)
};

// ScriptStruct PatrolActionSystem.GroupVisualizationInfo
// Size: 0x01 (Inherited: 0x00)
struct FGroupVisualizationInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct PatrolActionSystem.UPSMoveParams
// Size: 0x18 (Inherited: 0x00)
struct FUPSMoveParams {
	bool bUsePathfinding; // 0x00(0x01)
	bool bAllowPartialPath; // 0x01(0x01)
	bool bProjectGoalLocation; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct UNavigationQueryFilter* NavFilter; // 0x08(0x08)
	float AcceptenceRadius; // 0x10(0x04)
	bool bReachTestIncludesAgentRadius; // 0x14(0x01)
	bool bCanStrafe; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct PatrolActionSystem.VisitedPoint
// Size: 0x10 (Inherited: 0x00)
struct FVisitedPoint {
	struct TWeakObjectPtr<struct AUPSPatrolPoint> FirstPoint; // 0x00(0x08)
	struct TWeakObjectPtr<struct AUPSPatrolPoint> SecondPoint; // 0x08(0x08)
};

// ScriptStruct PatrolActionSystem.UPSPathData
// Size: 0x18 (Inherited: 0x00)
struct FUPSPathData {
	struct TArray<struct FVector> PathPoints; // 0x00(0x10)
	bool bPathIsValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct PatrolActionSystem.UPSPatrolComponentPathData
// Size: 0x20 (Inherited: 0x18)
struct FUPSPatrolComponentPathData : FUPSPathData {
	struct TWeakObjectPtr<struct UUPSPatrolComponent> PatrolComponent; // 0x18(0x08)
};

// ScriptStruct PatrolActionSystem.UPSPatrolPointPathData
// Size: 0x28 (Inherited: 0x18)
struct FUPSPatrolPointPathData : FUPSPathData {
	struct TWeakObjectPtr<struct AUPSPatrolPoint> FirstPoint; // 0x18(0x08)
	struct TWeakObjectPtr<struct AUPSPatrolPoint> SecondPoint; // 0x20(0x08)
};

// ScriptStruct PatrolActionSystem.PatrolPointLink
// Size: 0x10 (Inherited: 0x00)
struct FPatrolPointLink {
	struct AUPSPatrolPoint* PatrolPoint; // 0x00(0x08)
	struct FGameplayTag LinkTag; // 0x08(0x08)
};

// ScriptStruct PatrolActionSystem.PatrolPointSettings
// Size: 0x40 (Inherited: 0x00)
struct FPatrolPointSettings {
	struct TArray<struct FPatrolPointScript> PatrolPointScripts; // 0x00(0x10)
	struct TArray<struct FEnemyActionSelector> PatrolPointActions; // 0x10(0x10)
	bool bUseEnemyActionsPreset; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UUPSEnemyActionsPreset* EnemyActionsPreset; // 0x28(0x08)
	enum class EEnemyActionsExecutionType EnemyActionsExecutionType; // 0x30(0x01)
	bool bRotateOnPointAfterReach; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float ReachRadius; // 0x34(0x04)
	struct UUPSPatrolPointSolver* NextPatrolPointSolver; // 0x38(0x08)
};

// ScriptStruct PatrolActionSystem.EnemyActionSelector
// Size: 0x18 (Inherited: 0x00)
struct FEnemyActionSelector {
	bool bUseInstancedEnemyActions; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UUPSEnemyAction* InstancedEnemyAction; // 0x08(0x08)
	struct UUPSEnemyAction* DAEnemyAction; // 0x10(0x08)
};

// ScriptStruct PatrolActionSystem.PatrolPointScript
// Size: 0x08 (Inherited: 0x00)
struct FPatrolPointScript {
	struct UUPSPatrolPointScript* PatrolPointScript; // 0x00(0x08)
};

