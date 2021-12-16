// Enum CrowFPS.ECrowVehicleWeaponAxis
enum class ECrowVehicleWeaponAxis : uint8 {
	Yaw,
	Pitch,
	Roll,
	ECrowVehicleWeaponAxis_MAX,
};

// Enum CrowFPS.ECrowAISpawnerState
enum class ECrowAISpawnerState : uint8 {
	Active,
	Finished,
	ECrowAISpawnerState_MAX,
};

// Enum CrowFPS.ECrowAIZoneState
enum class ECrowAIZoneState : uint8 {
	Active,
	Finished,
	ECrowAIZoneState_MAX,
};

// Enum CrowFPS.ECrowAIFindCoverPointMode
enum class ECrowAIFindCoverPointMode : uint8 {
	BlackboardValue,
	Near,
	Far,
	NearTarget,
	FarTarget,
	Random,
	ECrowAIFindCoverPointMode_MAX,
};

// Enum CrowFPS.ECrowAICharacterStance
enum class ECrowAICharacterStance : uint8 {
	Stand,
	Crouch,
	Prone,
	ECrowAICharacterStance_MAX,
};

// Enum CrowFPS.ECrowAICharacterMoveMode
enum class ECrowAICharacterMoveMode : uint8 {
	Walk,
	Run,
	Sprint,
	ECrowAICharacterMoveMode_MAX,
};

// Enum CrowFPS.ECrowCharacterGasMaskNotifyType
enum class ECrowCharacterGasMaskNotifyType : uint8 {
	HoldInHand,
	On,
	Off,
	PutInPocket,
	ECrowCharacterGasMaskNotifyType_MAX,
};

// Enum CrowFPS.ECrowCharacterSwimBodyParts
enum class ECrowCharacterSwimBodyParts : uint8 {
	Head,
	Hand,
	Hand_L,
	Hand_R,
	Waist,
	Chest,
	ECrowCharacterSwimBodyParts_MAX,
};

// Enum CrowFPS.ECrowCharacterSwimAction
enum class ECrowCharacterSwimAction : uint8 {
	Idle,
	Forward,
	Back,
	DivingForward,
	ECrowCharacterSwimAction_MAX,
};

// Enum CrowFPS.ECrowCrowAnimNotify
enum class ECrowCrowAnimNotify : uint8 {
	None,
	WeaponFire1P,
	WeaponFire3P,
	WeaponShellEject1P,
	WeaponShellEject3P,
	WeaponReloadBegin1P,
	WeaponReloadBegin3P,
	WeaponReloadEnd1P,
	WeaponReloadEnd3P,
	WeaponReloadShortBegin1P,
	WeaponReloadShortBegin3P,
	WeaponReloadShortDetach1P,
	WeaponReloadShortDetach3P,
	WeaponReloadShortAttach1P,
	WeaponReloadShortAttach3P,
	WeaponReloadShortEnd1P,
	WeaponReloadShortEnd3P,
	WeaponDeselected1P,
	WeaponDeselected3P,
	WeaponAttachLeftHand1P,
	WeaponAttachLeftHand3P,
	WeaponAttachRightHand1P,
	WeaponAttachRightHand3P,
	WeaponThrowMagazine1P,
	WeaponThrowMagazine3P,
	WeaponDetachOldMagazine1P,
	WeaponDetachOldMagazine3P,
	WeaponAttachNewMagazine1P,
	WeaponAttachNewMagazine3P,
	WeaponAttachBag3P,
	WeaponShow,
	WeaponHide,
	WeaponMeleeThrow1P,
	WeaponMeleeThrow3P,
	WeaponThrowPinOut1P,
	WeaponThrowPinOut3P,
	WeaponShowAllBullet,
	ECrowCrowAnimNotify_MAX,
};

// Enum CrowFPS.ECrowArmorType
enum class ECrowArmorType : uint8 {
	None,
	Head,
	Body,
	ECrowArmorType_MAX,
};

// Enum CrowFPS.EActorType
enum class EActorType : uint8 {
	None,
	Vehicle,
	Water,
	House,
	EActorType_MAX,
};

// Enum CrowFPS.ECrowBackPackListItemType
enum class ECrowBackPackListItemType : uint8 {
	Nomal,
	LootSlot,
	PickupInven,
	ECrowBackPackListItemType_MAX,
};

// Enum CrowFPS.ECrowBuildingEditorLOD
enum class ECrowBuildingEditorLOD : uint8 {
	LODAuto,
	LOD0,
	LOD1,
	LOD2,
	LOD3,
	ECrowBuildingEditorLOD_MAX,
};

// Enum CrowFPS.ECrowBuildingPartsPropertyFlag
enum class ECrowBuildingPartsPropertyFlag : uint8 {
	Destructible,
	Interaction,
	ShowOverMergedMesh,
	LODBodyTarget,
	LODExtraTarget,
	AlwaysUseStaticMesh,
	AlwaysUseISMC,
	AlwaysHiddenInGame,
	ECrowBuildingPartsPropertyFlag_MAX,
};

// Enum CrowFPS.EBuldingDestructionFlag
enum class EBuldingDestructionFlag : uint8 {
	ThrowingThrough,
	PistolProjectile,
	RifleProjectile,
	SniperRifleProjectile,
	CannonProjectile,
	GranadeExplosion,
	BombExplosion,
	Parkour,
	EBuldingDestructionFlag_MAX,
};

// Enum CrowFPS.ECrowBuildingPartsAnimType
enum class ECrowBuildingPartsAnimType : uint8 {
	Open,
	Close,
	Blocked,
	ECrowBuildingPartsAnimType_MAX,
};

// Enum CrowFPS.ECrowBuildingPartsActionType
enum class ECrowBuildingPartsActionType : uint8 {
	Static,
	OpenClose,
	ECrowBuildingPartsActionType_MAX,
};

// Enum CrowFPS.ECrowBuildingPartsLODType
enum class ECrowBuildingPartsLODType : uint8 {
	LODBody,
	LODExtra,
	ShowOverLOD,
	NoMerge,
	ECrowBuildingPartsLODType_MAX,
};

// Enum CrowFPS.EBuildingHISMCGeomType
enum class EBuildingHISMCGeomType : uint8 {
	Body,
	Trigger1,
	Trigger2,
	Checker1,
	Checker2,
	Trace,
	EBuildingHISMCGeomType_MAX,
};

// Enum CrowFPS.ECrowBuildingHISMCDestruction
enum class ECrowBuildingHISMCDestruction : uint8 {
	Indestructible,
	SimplyDetach,
	SimplyHide,
	DefinedInTable,
	ECrowBuildingHISMCDestruction_MAX,
};

// Enum CrowFPS.ECrowBuildingLODHideCondition
enum class ECrowBuildingLODHideCondition : uint8 {
	Instantly,
	WaitForSyncHub,
	ECrowBuildingLODHideCondition_MAX,
};

// Enum CrowFPS.ECrowBuildingLODState
enum class ECrowBuildingLODState : uint8 {
	Normal,
	RequestToHide,
	ReadyToHide,
	ECrowBuildingLODState_MAX,
};

// Enum CrowFPS.ECrowBuildingEditorShowLOD
enum class ECrowBuildingEditorShowLOD : uint8 {
	LOD0,
	LOD1,
	LOD2,
	LOD3,
	ECrowBuildingEditorShowLOD_MAX,
};

// Enum CrowFPS.ECrowBuildingEditorShowType
enum class ECrowBuildingEditorShowType : uint8 {
	ShowAll,
	NoneLODOnly,
	LODAll,
	LODBodyOnly,
	LODExtraOnly,
	ECrowBuildingEditorShowType_MAX,
};

// Enum CrowFPS.ECrowCharacterBehaviourType
enum class ECrowCharacterBehaviourType : uint8 {
	MoveForward,
	MoveBackward,
	MoveLeft,
	MoveRight,
	Jump,
	Walk,
	Sprint,
	ToggleCrouch,
	ToggleProne,
	LeanLeft,
	LeanRight,
	Fire,
	Reload,
	Targeting,
	NextWeapon,
	PrevWeapon,
	ThirdPersonToggle,
	Use,
	Use02,
	ECrowCharacterBehaviourType_MAX,
};

// Enum CrowFPS.ECrowCharacterSwimWaterType
enum class ECrowCharacterSwimWaterType : uint8 {
	NotInWater,
	WaterPlane,
	WaterBodyOcean,
	WaterBodyLake,
	WaterBodyOther,
	ECrowCharacterSwimWaterType_MAX,
};

// Enum CrowFPS.ECrowCharacterFallType
enum class ECrowCharacterFallType : uint8 {
	Default,
	Flail,
	Parachute,
	ECrowCharacterFallType_MAX,
};

// Enum CrowFPS.ECrowCustomMovementMode
enum class ECrowCustomMovementMode : uint8 {
	Standard,
	Ragdoll,
	Death,
	OnVehicle,
	Vault,
	ECrowCustomMovementMode_MAX,
};

// Enum CrowFPS.ECrowCardinalDirection
enum class ECrowCardinalDirection : uint8 {
	North,
	East,
	West,
	South,
	_Max,
	ECrowCardinalDirection_MAX,
};

// Enum CrowFPS.ECrowCharacterFireTargetPart
enum class ECrowCharacterFireTargetPart : uint8 {
	Head,
	UpperBody,
	LowerBody,
	CoveringFire,
	ECrowCharacterFireTargetPart_MAX,
};

// Enum CrowFPS.ECrowSoundScriptConditionType
enum class ECrowSoundScriptConditionType : uint8 {
	Reload,
	GrenadeThrow,
	SmokeThrow,
	IncendiaryThrow,
	FlashBangThrow,
	KillEnemy,
	Damaged,
	ECrowSoundScriptConditionType_MAX,
};

// Enum CrowFPS.ECrowSoundStateType
enum class ECrowSoundStateType : uint8 {
	Outdoor,
	ShieldingVehicle,
	HalfShieldingVehicle,
	OpenVehicle,
	InWood,
	InConcrete,
	InHugeArea,
	InContainer,
	InWarehouse,
	InTunnel,
	InBasement,
	OnWater,
	UnderWater,
	InHouse,
	None,
	ECrowSoundStateType_MAX,
};

// Enum CrowFPS.ECrowConditionFlags
enum class ECrowConditionFlags : uint8 {
	None,
	Burning,
	Poisoning,
	ECrowConditionFlags_MAX,
};

// Enum CrowFPS.ECrowCharacterDamageType
enum class ECrowCharacterDamageType : uint8 {
	None,
	Hit,
	AliveToDying,
	DyingToDeath,
	Death,
	ECrowCharacterDamageType_MAX,
};

// Enum CrowFPS.ECrowAnimSupplyTablet
enum class ECrowAnimSupplyTablet : uint8 {
	None,
	Equip,
	Idle,
	Control,
	UnEquip,
	ECrowAnimSupplyTablet_MAX,
};

// Enum CrowFPS.ECrowCharacterHandIKType
enum class ECrowCharacterHandIKType : uint8 {
	None,
	PrivateWeapon,
	VehicleDriver,
	VehicleWeapon,
	ECrowCharacterHandIKType_MAX,
};

// Enum CrowFPS.ECrowAnimEndType
enum class ECrowAnimEndType : uint8 {
	Completed,
	Interrupted,
	ECrowAnimEndType_MAX,
};

// Enum CrowFPS.ECrowCharacterHitDirection
enum class ECrowCharacterHitDirection : uint8 {
	None,
	Forward,
	Backward,
	Left,
	Right,
	ECrowCharacterHitDirection_MAX,
};

// Enum CrowFPS.ECrowCharacterHitParts
enum class ECrowCharacterHitParts : uint8 {
	None,
	Head,
	Body,
	LeftArm,
	RightArm,
	LeftLeg,
	RightLeg,
	ECrowCharacterHitParts_MAX,
};

// Enum CrowFPS.ECrowPrivateWeaponAnimType
enum class ECrowPrivateWeaponAnimType : uint8 {
	None,
	L129A1,
	AEK973,
	L115A3,
	ECrowPrivateWeaponAnimType_MAX,
};

// Enum CrowFPS.ECrowCharacterVehicleAnimType
enum class ECrowCharacterVehicleAnimType : uint8 {
	None,
	Abrams,
	Mh6,
	Passat,
	RoadRover,
	Dagor,
	ECrowCharacterVehicleAnimType_MAX,
};

// Enum CrowFPS.ECrowCharacterSlotAnimType
enum class ECrowCharacterSlotAnimType : uint8 {
	None,
	FullBody,
	UpperWithAimOffset,
	UpperNonAimOffset,
	TurnStandCrouch,
	TurnProne,
	TransitionStandCrouch,
	TransitionProne,
	ECrowCharacterSlotAnimType_MAX,
};

// Enum CrowFPS.ECrowCharacterGaitMode
enum class ECrowCharacterGaitMode : uint8 {
	None,
	Walking,
	Running,
	Sprinting,
	ECrowCharacterGaitMode_MAX,
};

// Enum CrowFPS.ECrowCharacterAnimActionType
enum class ECrowCharacterAnimActionType : uint8 {
	None,
	Shooting,
	Throwing,
	Swing,
	Using,
	ECrowCharacterAnimActionType_MAX,
};

// Enum CrowFPS.ECrowCharacterAnimWeapon
enum class ECrowCharacterAnimWeapon : uint8 {
	Idle,
	Equip,
	UnEquip,
	Reload,
	PreFire,
	Fire,
	PostFire,
	ChangeFire,
	Aim,
	ReloadShort,
	BoltAction,
	ECrowCharacterAnimWeapon_MAX,
};

// Enum CrowFPS.ECrowCharacterAnimInAir
enum class ECrowCharacterAnimInAir : uint8 {
	Ground,
	Jump,
	Fall,
	ECrowCharacterAnimInAir_MAX,
};

// Enum CrowFPS.ECrowCharacterAnimTurn
enum class ECrowCharacterAnimTurn : uint8 {
	None,
	InPlaceLeft,
	InPlaceRight,
	ECrowCharacterAnimTurn_MAX,
};

// Enum CrowFPS.ECrowCharacterAnimStance
enum class ECrowCharacterAnimStance : uint8 {
	None,
	Stand,
	Crouch,
	Prone,
	ECrowCharacterAnimStance_MAX,
};

// Enum CrowFPS.ECrowCharacterFootStepType
enum class ECrowCharacterFootStepType : uint8 {
	LeftFoot,
	RightFoot,
	Both,
	ECrowCharacterFootStepType_MAX,
};

// Enum CrowFPS.ECrowCharacterPeekState
enum class ECrowCharacterPeekState : uint8 {
	None,
	Left,
	Right,
	ECrowCharacterPeekState_MAX,
};

// Enum CrowFPS.ECrowCharacterBattleStance
enum class ECrowCharacterBattleStance : uint8 {
	None,
	Peaceful,
	Relaxed,
	GunDown,
	Directed,
	Aimed,
	_MAX,
	ECrowCharacterBattleStance_MAX,
};

// Enum CrowFPS.ECrowMovementMode
enum class ECrowMovementMode : uint8 {
	None,
	Grounded,
	Falling,
	Ragdoll,
	Death,
	OnVehicle,
	Vault,
	Swimming,
	Ladder,
	_Max,
	ECrowMovementMode_MAX,
};

// Enum CrowFPS.ECrowRotationMode
enum class ECrowRotationMode : uint8 {
	VelocityDirection,
	LookingDirection,
	_Max,
	ECrowRotationMode_MAX,
};

// Enum CrowFPS.ECrowMovementFlags
enum class ECrowMovementFlags : uint8 {
	None,
	Stand,
	Crouch,
	Prone,
	Jump,
	Stop,
	Walk,
	Run,
	Sprint,
	All,
	ECrowMovementFlags_MAX,
};

// Enum CrowFPS.ECrowChatMessaageType
enum class ECrowChatMessaageType : uint8 {
	Message_User,
	Message_System,
	Message_MAX,
};

// Enum CrowFPS.EClanSlotViewType
enum class EClanSlotViewType : uint8 {
	None,
	Join,
	JoinAccept,
	Reception,
	Cancel,
	Rank,
	Max,
};

// Enum CrowFPS.EClanMemberSort
enum class EClanMemberSort : uint8 {
	All,
	SubMaster,
	IgnoreSubMaster,
	IgnoreMaster,
	Max,
};

// Enum CrowFPS.EClanJoinMenuState
enum class EClanJoinMenuState : uint8 {
	ClanInfo,
	ClanMarkChange,
	JoinClanRank,
	Max,
};

// Enum CrowFPS.EClanNotJoinMenuState
enum class EClanNotJoinMenuState : uint8 {
	JoinClan,
	CreateClan,
	NotJoinClanRank,
	Max,
};

// Enum CrowFPS.EClanSettingState
enum class EClanSettingState : uint8 {
	None,
	ChangeHappyTime,
	AddCommander,
	CommanderSetDel,
	ClanInvited,
	KickClanUser,
	ClanInvitedSet,
	CaptainTransfer,
	ClanDismantle,
	ClanSecession,
	Max,
};

// Enum CrowFPS.EClanJoinState
enum class EClanJoinState : uint8 {
	NotJoinClan,
	JoinClan,
	Max,
};

// Enum CrowFPS.EClanAuthority
enum class EClanAuthority : uint8 {
	None,
	Crew,
	SubMaster,
	Master,
	Max,
};

// Enum CrowFPS.EClanJoinType
enum class EClanJoinType : uint8 {
	FreeJoin,
	ComfirmJoin,
	Closed,
	Max,
};

// Enum CrowFPS.EMarkAcquireType
enum class EMarkAcquireType : uint8 {
	Entry,
	Bundle,
	Expantion,
	Max,
};

// Enum CrowFPS.EMarkType
enum class EMarkType : uint8 {
	ClanMark,
	ClanMarkBG,
	Max,
};

// Enum CrowFPS.EUserSlotState
enum class EUserSlotState : uint8 {
	UserList,
	UserInvite,
	UserCancel,
	UserAccept,
	Max,
};

// Enum CrowFPS.ECrowClothExpertSkill
enum class ECrowClothExpertSkill : uint8 {
	None,
	AddMagazine,
	Parachute,
	ECrowClothExpertSkill_MAX,
};

// Enum CrowFPS.ECrowColorTarget
enum class ECrowColorTarget : uint8 {
	None,
	Player,
	Enemy,
	UI,
	All,
	ECrowColorTarget_MAX,
};

// Enum CrowFPS.ECrowConquestSoundState
enum class ECrowConquestSoundState : uint8 {
	None,
	CapturingMyTeam,
	CapturingEnemy,
	CaptureCompleteMyTeam,
	CaptureCompleteEnemy,
	ECrowConquestSoundState_MAX,
};

// Enum CrowFPS.ECrowConquestIconState
enum class ECrowConquestIconState : uint8 {
	None,
	Neutrality_Normal,
	MyTeam_Normal,
	Enemy_Normal,
	Neutrality_Change,
	MyTeam_Change,
	Enemy_Change,
	ECrowConquestIconState_MAX,
};

// Enum CrowFPS.ECrowConquestBattleState
enum class ECrowConquestBattleState : uint8 {
	None,
	RedOnly,
	BlueOnly,
	RedStronger,
	BlueStronger,
	Same,
	ECrowConquestBattleState_MAX,
};

// Enum CrowFPS.ECrowConquestAreaVehicleSpawnerState
enum class ECrowConquestAreaVehicleSpawnerState : uint8 {
	None,
	Ready,
	Spawned,
	Cool,
	ECrowConquestAreaVehicleSpawnerState_MAX,
};

// Enum CrowFPS.ECrowConquestHeavyBomberState
enum class ECrowConquestHeavyBomberState : uint8 {
	None,
	StartDelay,
	Attack,
	End,
	ECrowConquestHeavyBomberState_MAX,
};

// Enum CrowFPS.ECrowConquestLineType
enum class ECrowConquestLineType : uint8 {
	None,
	DotLine,
	BothArrow,
	ArrowMyTeam,
	ArrowEnemy,
	LineMyTeam,
	LineEnemy,
	Hidden,
	ECrowConquestLineType_MAX,
};

// Enum CrowFPS.ECrowMMeteorPieceState
enum class ECrowMMeteorPieceState : uint8 {
	None,
	Wait,
	Fire,
	Explosion,
	ECrowMMeteorPieceState_MAX,
};

// Enum CrowFPS.ECrowConquestSkillResult
enum class ECrowConquestSkillResult : uint8 {
	Unknown,
	Success,
	Cool,
	NotEnoughMoney,
	NotEnoughItem,
	ECrowConquestSkillResult_MAX,
};

// Enum CrowFPS.ECrowConquestSkill
enum class ECrowConquestSkill : uint8 {
	None,
	MorphineBox,
	UAVSupport,
	SquadRespawn,
	A10,
	HeavyBombard,
	DirectRocketLauncher,
	HomingRocketLaunhcer,
	Shield,
	ECrowConquestSkill_MAX,
};

// Enum CrowFPS.ECrowConquestUAVSupportState
enum class ECrowConquestUAVSupportState : uint8 {
	None,
	Start,
	End,
	ECrowConquestUAVSupportState_MAX,
};

// Enum CrowFPS.ECrowContaminationAreaType
enum class ECrowContaminationAreaType : uint8 {
	Sphere,
	Cylinder,
	ECrowContaminationAreaType_MAX,
};

// Enum CrowFPS.ECrowContaminationAreaEventState
enum class ECrowContaminationAreaEventState : uint8 {
	None,
	Begine,
	Wait,
	Scaled,
	End,
	ECrowContaminationAreaEventState_MAX,
};

// Enum CrowFPS.ECrowCustomizeEmotionDescState
enum class ECrowCustomizeEmotionDescState : uint8 {
	Emotion,
	ResultMVP,
	ECrowCustomizeEmotionDescState_MAX,
};

// Enum CrowFPS.ECrowCustomizeEmotionRadialState
enum class ECrowCustomizeEmotionRadialState : uint8 {
	None,
	Normal,
	ReadyToEquip,
	ECrowCustomizeEmotionRadialState_MAX,
};

// Enum CrowFPS.ESprayWidgetState
enum class ESprayWidgetState : uint8 {
	Normal,
	RegistListToSlot,
	RegistAnimation,
	ESprayWidgetState_MAX,
};

// Enum CrowFPS.ECrowWeaponPartsOption
enum class ECrowWeaponPartsOption : uint8 {
	AimSpreadDefault,
	HipFireSpreadDefault,
	Recoil,
	RecoilHorizontal,
	RecoilVertical,
	FireSpeed,
	RecoilDecrease,
	AmmoVelocity,
	AmmoDamage,
	AmmoDamageMin,
	AmmoDamageMax,
	AmmoDamageDropDistance,
	Reload,
	AimShake,
	AimTime,
	CharacterMoveSpeed,
	AttackRange,
	MAX,
};

// Enum CrowFPS.ECrowCustomizeCategoryType
enum class ECrowCustomizeCategoryType : uint8 {
	OutFit,
	Appearance,
	ECrowCustomizeCategoryType_MAX,
};

// Enum CrowFPS.ECrowCustomFilterReaminSlot
enum class ECrowCustomFilterReaminSlot : uint8 {
	None,
	NotExist,
	Reamin1_6,
	Reamin6_11,
	Reamin11,
	ECrowCustomFilterReaminSlot_MAX,
};

// Enum CrowFPS.ECrowCustomFilterMaxUser
enum class ECrowCustomFilterMaxUser : uint8 {
	None,
	User80_101,
	User60_80,
	User40_60,
	User20_40,
	User19,
	ECrowCustomFilterMaxUser_MAX,
};

// Enum CrowFPS.ECrowCustomRoomState
enum class ECrowCustomRoomState : uint8 {
	None,
	Ready,
	Cancel,
	Play,
	ECrowCustomRoomState_MAX,
};

// Enum CrowFPS.ECrowCustomTeamType
enum class ECrowCustomTeamType : uint8 {
	None,
	Red,
	Blue,
	Misassign,
	Watcher,
	ECrowCustomTeamType_MAX,
};

// Enum CrowFPS.ECrowCustomMode
enum class ECrowCustomMode : uint8 {
	None,
	WaitingRoom,
	TeamGameRoom,
	GameRoom,
	ECrowCustomMode_MAX,
};

// Enum CrowFPS.ECrowDamageCauser
enum class ECrowDamageCauser : uint8 {
	None,
	Weapon,
	ServerWeapon,
	Fall,
	Drown,
	Burn,
	OutOfWorld,
	BlastingVehicle,
	Bombing,
	Pressure,
	BombMissionExplode,
	CheatConsole,
	Impact,
	ZombieExplosion,
	A10,
	Meteor,
	HazardGas,
	Environment,
	ImpactCar,
	ImpactAPC,
	ImpactHeli,
	ImpactTank,
	ImpactBoat,
	ECrowDamageCauser_MAX,
};

// Enum CrowFPS.EDamageSourceType
enum class EDamageSourceType : uint8 {
	None,
	Point,
	Melee,
	Explosion,
	Impulse,
	Burning,
	ContaminationArea,
	Falling,
	EDamageSourceType_MAX,
};

// Enum CrowFPS.ECrowDeathCameraState
enum class ECrowDeathCameraState : uint8 {
	None,
	MoveMyBody,
	MoveKiller,
	TraceKiller,
	Free,
	TopDown,
	ECrowDeathCameraState_MAX,
};

// Enum CrowFPS.ECrowDecalType
enum class ECrowDecalType : uint8 {
	Unknown,
	Bullet,
	Explosion,
	FootPrint,
	Blood,
	WeaponSticker,
	Max,
};

// Enum CrowFPS.ECrowFoliageAffectorAnimState
enum class ECrowFoliageAffectorAnimState : uint8 {
	Idle,
	Ready,
	Animating,
	TooClose,
	TimeOut,
	Finished,
	ECrowFoliageAffectorAnimState_MAX,
};

// Enum CrowFPS.ECrowFoliageAffectorAnimType
enum class ECrowFoliageAffectorAnimType : uint8 {
	NoAnimation,
	ByVelocity,
	ByTime,
	ECrowFoliageAffectorAnimType_MAX,
};

// Enum CrowFPS.ECrowErrorCode
enum class ECrowErrorCode : uint8 {
	Success,
	ServerQuerySericeError,
	ServerConnectError,
	ServerDisconnected,
	DediServerDisconnected,
	ServerArgEmpty,
	ECrowErrorCode_MAX,
};

// Enum CrowFPS.ECrowEscapePointState
enum class ECrowEscapePointState : uint8 {
	None,
	Active,
	Called,
	Complete,
	Deactive,
	ECrowEscapePointState_MAX,
};

// Enum CrowFPS.ECrowEtcItemType
enum class ECrowEtcItemType : uint8 {
	None,
	ChangeNickName,
	RandomBoxCard,
	ClothSlotPass,
	WeaponSlotPass,
	WeaponLevelJumpItem,
	ChangeClanName,
	RoyalCrowPoint,
	GPoint,
	BattlePassItem,
	ECrowEtcItemType_MAX,
};

// Enum CrowFPS.EEventPageType
enum class EEventPageType : uint8 {
	None,
	EventPage,
	ShopPackagePage,
	EEventPageType_MAX,
};

// Enum CrowFPS.ECrowFallsDamageType
enum class ECrowFallsDamageType : uint8 {
	None,
	NoDamage,
	Damage,
	BeforeDead,
	Dead,
	ECrowFallsDamageType_MAX,
};

// Enum CrowFPS.ECrowFallsStartType
enum class ECrowFallsStartType : uint8 {
	None,
	Nomal,
	Vehicle,
	ECrowFallsStartType_MAX,
};

// Enum CrowFPS.ECrowFoliageBendingInterpType
enum class ECrowFoliageBendingInterpType : uint8 {
	Lerp,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	Num,
	ECrowFoliageBendingInterpType_MAX,
};

// Enum CrowFPS.EFriendSlotBTNType
enum class EFriendSlotBTNType : uint8 {
	PartyInvite,
	CancelInvite,
	JoinParty,
	PlayWith,
	RecentUserPartyInvite,
	RecentUserCancelInvite,
	RecentRequestFriend,
	Kick,
	PromotedUser,
	SearchInviteParty,
	SearchCancelInvite,
	SearchRequestFriend,
	FriendRequestAccept,
	FriendRequestReject,
	FriendCancelRequest,
	SessionInvite,
	EFriendSlotBTNType_MAX,
};

// Enum CrowFPS.EFriendSlotType
enum class EFriendSlotType : uint8 {
	Friend,
	FriendRequest,
	FriendSend,
	Recent,
	Party,
	Search,
	Session,
	EFriendSlotType_MAX,
};

// Enum CrowFPS.EFriendTabType
enum class EFriendTabType : uint8 {
	Friend,
	Recent,
	Party,
	EFriendTabType_MAX,
};

// Enum CrowFPS.ECrowFxType
enum class ECrowFxType : uint8 {
	SurfaceBullet,
	TracerBullet,
	Footstep,
	CharacterParticle,
	Muzzle,
	Backblast,
	Swimming,
	VehicleImpact,
	Explosion,
	None,
	ECrowFxType_MAX,
};

// Enum CrowFPS.ESquadHUDState
enum class ESquadHUDState : uint8 {
	Play,
	WatchMyTeam,
	Summary,
	WatchEnemyTeam,
	Max,
};

// Enum CrowFPS.ECrowIconType
enum class ECrowIconType : uint8 {
	None,
	Player_Local,
	Player_MySquad,
	Player_MyTeam,
	Player_Enemy,
	Player_Death,
	Vehicle_Air_Local,
	Vehicle_Air_MySquad,
	Vehicle_Air_MyTeam,
	Vehicle_Air_Enemy,
	Vehicle_Air_Empty,
	Vehicle_Ground_Local,
	Vehicle_Ground_MySquad,
	Vehicle_Ground_MyTeam,
	Vehicle_Ground_Enemy,
	Vehicle_Ground_Empty,
	Mission_Main,
	Mission_Main_MyTeam,
	Mission_Main_Enemy,
	Mission_Sub,
	Mission_Sub_MyTeam,
	Mission_Sub_Enemy,
	Area_Main,
	Area_Supply,
	Area_Bombing,
	Area_Other,
	Supply_Position,
	Ping_Position,
	Projectile_Throw,
	TransportAirPlane,
	TransportAirPlaneRoute,
	Ranker_SendMineral,
	Ranker_OwnedMineral,
	Map_ZoneMarker,
	SupplyWeaponBox,
	CustomModeObserver,
	ECrowIconType_MAX,
};

// Enum CrowFPS.ECrowSquadRewardState
enum class ECrowSquadRewardState : uint8 {
	None,
	RecvComplete,
	ECrowSquadRewardState_MAX,
};

// Enum CrowFPS.ECrowModPointIndex
enum class ECrowModPointIndex : uint8 {
	ModPoint_None,
	ModPoint_EnemyDyingPoint,
	ModPoint_KillPoint,
	ModPoint_KillPointWeapon,
	ModPoint_MissionPoint,
	ModPoint_MedalPoint,
	ModPoint_VehicleDestroyPoint,
	ModPoint_DyingPlayerPoint,
	ModPoint_ReviveMySquadPoint,
	ModPoint_UseSquadRespawn,
	ModPoint_AssistCharacter,
	ModPoint_AssistSquadCharacter,
	ModPoint_AssistCar,
	ModPoint_AssistSquadCar,
	ModPoint_AssistTank,
	ModPoint_AssistSquadTank,
	ModPoint_AssistHeli,
	ModPoint_AssistSquadHeli,
	ModPoint_AssistBoat,
	ModPoint_AssistSquadBoat,
	ModPoint_ObtainQ_ON_5001,
	ModPoint_ObtainQ_ON_20001,
	ModPoint_ObtainQ_ON_40001,
	ModPoint_ObtainQ_ON_50001,
	ModPoint_ObtainQ_ON_80001,
	ModPoint_ObtainQ_ON_100001,
	ModPoint_CallHeli,
	ModPoint_EscapeSuccess,
	ModPoint_MAX,
};

// Enum CrowFPS.ECrowTakeExpType
enum class ECrowTakeExpType : uint8 {
	Misc,
	KillPoint,
	DyingPlayerPoint,
	VehicleDestoyPoint,
	MedalPoint,
	DailyMission,
	WeeklyMission,
	SquadPoint,
	AssistPoint,
	ModePoint,
	Max,
	All,
};

// Enum CrowFPS.ECrowWeaponEventType
enum class ECrowWeaponEventType : uint8 {
	None,
	LevelUp,
	WeaponUnLock,
	WeaponParsUnLock,
	ECrowWeaponEventType_MAX,
};

// Enum CrowFPS.ECrowSpawnerType
enum class ECrowSpawnerType : uint8 {
	Match,
	WaitUser,
	None,
	ECrowSpawnerType_MAX,
};

// Enum CrowFPS.ECrowTabletScene
enum class ECrowTabletScene : uint8 {
	Scene_MainMenu,
	Scene_Supply,
	Scene_Bombard,
	Scene_Drone,
	Scene_MAX,
};

// Enum CrowFPS.ECrowCommunityPartyOption
enum class ECrowCommunityPartyOption : uint8 {
	None,
	All,
	Friend,
	Refuse,
	ECrowCommunityPartyOption_MAX,
};

// Enum CrowFPS.ECrowCommunityFollowOption
enum class ECrowCommunityFollowOption : uint8 {
	Off,
	On,
	ECrowCommunityFollowOption_MAX,
};

// Enum CrowFPS.ECrowGameRoundState
enum class ECrowGameRoundState : uint8 {
	None,
	PlayCountdown,
	Match,
	Finish,
	ECrowGameRoundState_MAX,
};

// Enum CrowFPS.ECrowGameState
enum class ECrowGameState : uint8 {
	None,
	WaitUser,
	PlayCountdown,
	Match,
	Finish,
	Replay,
	ECrowGameState_MAX,
};

// Enum CrowFPS.ECrowLobbyPartyUserState
enum class ECrowLobbyPartyUserState : uint8 {
	None,
	Online,
	Offline,
	Matching,
	GamePlay,
	ECrowLobbyPartyUserState_MAX,
};

// Enum CrowFPS.ECrowLobbyPartyUserScene
enum class ECrowLobbyPartyUserScene : uint8 {
	None,
	Lobby,
	Shop,
	Loadout,
	Outfit,
	Apperance,
	Vehicle,
	Option,
	Profile,
	Game,
	Spray,
	Emotion,
	VehicleSkin,
	ECrowLobbyPartyUserScene_MAX,
};

// Enum CrowFPS.ECrowLobbyFriendState
enum class ECrowLobbyFriendState : uint8 {
	None,
	OnLine,
	OffLine,
	Party,
	PartyFull,
	GamePlay,
	ECrowLobbyFriendState_MAX,
};

// Enum CrowFPS.ECrowMatchingState
enum class ECrowMatchingState : uint8 {
	None,
	Start,
	Matching,
	Cancel,
	StartGame,
	ECrowMatchingState_MAX,
};

// Enum CrowFPS.ECrowLobbyPartyState
enum class ECrowLobbyPartyState : uint8 {
	None,
	Wait,
	MapChanging,
	Matching,
	GamePlay,
	ECrowLobbyPartyState_MAX,
};

// Enum CrowFPS.ECrowClothPartHairType
enum class ECrowClothPartHairType : uint8 {
	Hair_Short,
	Hair_Long,
	Hair_MAX,
};

// Enum CrowFPS.ECrowClothPartMaskType
enum class ECrowClothPartMaskType : uint8 {
	Mask_Gas,
	Mask_Cotton,
	Mask_Steel,
	Mask_Half,
	Mask_MAX,
};

// Enum CrowFPS.ECrowClothPartGlassesType
enum class ECrowClothPartGlassesType : uint8 {
	Glasses_Goggles,
	Glasses_sunglasses,
	Glasses_MAX,
};

// Enum CrowFPS.ECrowClothPartHeadType
enum class ECrowClothPartHeadType : uint8 {
	Head_Helmet,
	Head_Beanie,
	Head_Cap,
	Head_HeadSet,
	Head_CapHeadSet,
	Head_MAX,
};

// Enum CrowFPS.ECrowClothPartsMesh
enum class ECrowClothPartsMesh : uint8 {
	Hair,
	Head,
	Glasses,
	Mask,
	Top,
	Gloves,
	Bottoms,
	Shoes,
	Outer,
	Backpack,
	costume,
	KnifePouch,
	PistolPouch,
	Beard,
	Patch,
	MAX,
};

// Enum CrowFPS.ECrowClothPartsFitType
enum class ECrowClothPartsFitType : uint8 {
	Fit_Tight,
	Fit_Loose,
	Fit_Hide,
	Fit_UnEquip,
	Fit_MAX,
};

// Enum CrowFPS.ECrowCameraMode
enum class ECrowCameraMode : uint8 {
	FirstPerson,
	ThirdPerson,
	FirstPersonInVehicle,
	FirstVehicle,
	ThirdVehicle,
	Death,
	DisableCharacterCamera,
	_Max,
	ECrowCameraMode_MAX,
};

// Enum CrowFPS.EHittingAreaType
enum class EHittingAreaType : uint8 {
	None,
	HeadArmor,
	BodyArmor,
	HeadArmorBroken,
	BodyArmorBroken,
	Vehicle,
	AliveToDeath,
	TacticalKit,
	Max,
};

// Enum CrowFPS.EIndicatorType
enum class EIndicatorType : uint8 {
	E_Player,
	E_Vehicle,
	E_MAX,
};

// Enum CrowFPS.ECrowMatchStartType
enum class ECrowMatchStartType : uint8 {
	None,
	PlayCameraWork,
	Rejoin,
	ECrowMatchStartType_MAX,
};

// Enum CrowFPS.ECrowTeam_RedBlue
enum class ECrowTeam_RedBlue : uint8 {
	RedTeam,
	BlueTeam,
	ObserverTeam,
	AllTeam,
	NoTeam,
	TeamNone,
	ECrowTeam_RedBlue_MAX,
};

// Enum CrowFPS.ECrowTeamID_Bitflags
enum class ECrowTeamID_Bitflags : uint8 {
	Red,
	Blue,
	Yellow,
	Purple,
	ECrowTeamID_MAX,
};

// Enum CrowFPS.ECrowTeamID
enum class ECrowTeamID : uint8 {
	Red,
	Blue,
	Yellow,
	Purple,
	NoTeam,
	TeamNone,
	ECrowTeamID_MAX,
};

// Enum CrowFPS.ECrowSquadRole
enum class ECrowSquadRole : uint8 {
	None,
	Leader,
	Assistant,
	Member01,
	Member02,
	ECrowSquadRole_MAX,
};

// Enum CrowFPS.ECrowPlayerState
enum class ECrowPlayerState : uint8 {
	None,
	Spectator,
	Aliving,
	Alive,
	Dying,
	Dead,
	GameMaster,
	MatchMaster,
	MatchObserver,
	CustomModeObserver,
	ECrowPlayerState_MAX,
};

// Enum CrowFPS.ECrowGameMode
enum class ECrowGameMode : uint8 {
	None,
	Conquest,
	TeamDeathMatch,
	CaptureTheFlag,
	SquadMatch,
	DeathMatch,
	Training,
	TestFlight,
	BombMission,
	BattleRoyal,
	QuickMatch,
	CustomMatch,
	ECrowGameMode_MAX,
};

// Enum CrowFPS.ECrowLobbyNoticeType
enum class ECrowLobbyNoticeType : uint8 {
	None,
	PartyInvitation,
	CustomModeInvitation,
	FriendRequest,
	ECrowLobbyNoticeType_MAX,
};

// Enum CrowFPS.ECrowStartCameraWorkState
enum class ECrowStartCameraWorkState : uint8 {
	None,
	MoveCamera,
	MoveFade,
	DisplayUI,
	End,
	ECrowStartCameraWorkState_MAX,
};

// Enum CrowFPS.ECrowSquadPointRewardType
enum class ECrowSquadPointRewardType : uint8 {
	None,
	ItemBox,
	LoadoutBox,
	Vehicle,
	ECrowSquadPointRewardType_MAX,
};

// Enum CrowFPS.ECrowGameStateSquadMatch
enum class ECrowGameStateSquadMatch : uint8 {
	None,
	ActiveEscapePoint,
	CalledEscapeVehicle,
	CompleteEscapeVehicle,
	ECrowGameStateSquadMatch_MAX,
};

// Enum CrowFPS.ECrowGasMaskSoundState
enum class ECrowGasMaskSoundState : uint8 {
	None,
	Idle,
	Moving,
	Sprinting,
	MovingEnd,
	ECrowGasMaskSoundState_MAX,
};

// Enum CrowFPS.ECrowEvent
enum class ECrowEvent : uint8 {
	None,
	Ok,
	Cancel,
	Yes,
	No,
	Ignore,
	Close,
	Min,
	Max,
	Add,
	Remove,
	Start,
	End,
	Click,
	Select,
	Deselect,
	DragStart,
	DragEnd,
	DragCancel,
	Equip,
	Ping,
	ItemCreated,
	ItemDestroyed,
	ItemOwnerChanged,
	AuthorizeUser,
	StartGame,
	DisableIntrusion,
	EndGame,
	RemoveSquad,
	ChangeMissionPoint,
	Conquest_ChangeTeam,
	Conquest_PlayerRespawn,
	EnableFirstRespawn,
	ChangeGameState,
	SelectRespawn,
	DeselectRespawn,
	SelectVehicleSpawner,
	DeselectVehicleSpawner,
	ExecRespawn,
	ExecDoubleClickRespawn,
	ScanMineral,
	InitWorldMapIcon,
	ChangeIconDisplayInfo,
	CallHelp,
	BeginWorldEvent,
	EndWorldEvent,
	AddObjectiveActor,
	RemoveObjectiveActor,
	IconPingHovered,
	IconPingTargeted,
	VehicleSkin_ChangeType,
	VehicleSkin_ChangeVehicle,
	VehicleSkin_SelectItem,
	VehicleSkin_HoverItem,
	VehicleSkin_UnHoverItem,
	LV_SelectItem,
	LV_HoverItem,
	LV_UnHoverItem,
	Hit,
	InitSquadIcon,
	InitObserverIcon,
};

// Enum CrowFPS.ECrowHUDWidgetType
enum class ECrowHUDWidgetType : uint8 {
	None,
	Default,
	Bottom,
	Top,
	Mode,
	ECrowHUDWidgetType_MAX,
};

// Enum CrowFPS.ETireState
enum class ETireState : uint8 {
	eTireNormal,
	eTireFlat,
	eTireDestroyed,
	ETireState_MAX,
};

// Enum CrowFPS.ELoadOutUIMode
enum class ELoadOutUIMode : uint8 {
	None,
	Hidden,
	LoadOut,
	LoadOutWeaponChange,
	LoadOutWeaponCustomize,
	LoadOutWeaponSkinCustomize,
	LoadOutWeaponStickerCustomize,
	LoadOutWeaponAccCustomize,
	LoadOutSprayCustomize,
	LoadOutWeaponLegendary,
	ELoadOutUIMode_MAX,
};

// Enum CrowFPS.ECrowCharacterInputMode
enum class ECrowCharacterInputMode : uint8 {
	None,
	Block,
	Skydiving,
	Default,
	FindConstructionSite,
	Construction,
	GameAndUI,
	WorldMapUI,
	OnlyUI,
	RadialMenu,
	OnVehicle,
	DyingCharacter,
	OnlyRotation,
	InRespawnAirPlane,
	OnlyTrigger,
	Spectator,
	BombMissionPlayCountdown,
	FindBombKitTarget,
	SquadMatchRespawn,
	Emotion,
	Replay,
	Movie,
	AnyKey,
	ECrowCharacterInputMode_MAX,
};

// Enum CrowFPS.ECrowItemControllerType
enum class ECrowItemControllerType : uint8 {
	None,
	Rifle,
	Grenade,
	ECrowItemControllerType_MAX,
};

// Enum CrowFPS.ECrowItemOwnType
enum class ECrowItemOwnType : uint8 {
	OnlyInventory,
	OnlyEquipment,
	Both,
	ECrowItemOwnType_MAX,
};

// Enum CrowFPS.ECrowEquipmentType
enum class ECrowEquipmentType : uint8 {
	Rifle,
	Pistol,
	Knife,
	Grenade,
	Ammo,
	Scope,
	Mask,
	HeadGear,
	ECrowEquipmentType_MAX,
};

// Enum CrowFPS.ECrowEquipmentSlot
enum class ECrowEquipmentSlot : uint8 {
	Slot1,
	Slot2,
	Slot3,
	Slot4,
	Slot5,
	Slot6,
	Slot7,
	Slot8,
	Slot9,
	ECrowEquipmentSlot_MAX,
};

// Enum CrowFPS.ECrowItemSlotMiniWSType
enum class ECrowItemSlotMiniWSType : uint8 {
	Color,
	ECrowItemSlotMiniWSType_MAX,
};

// Enum CrowFPS.ECrowItemSlotWSType
enum class ECrowItemSlotWSType : uint8 {
	Weapon,
	WeaponParts,
	OutFit,
	Appearance,
	Color,
	UnEquip,
	ECrowItemSlotWSType_MAX,
};

// Enum CrowFPS.ECrowItemAssetRows
enum class ECrowItemAssetRows : uint8 {
	Face,
	Hair,
	Beard,
	Head,
	Glasses,
	Mask,
	Gloves,
	Top,
	Bottom,
	Shoes,
	Outer,
	Backpack,
	Costume,
	KnifePouch,
	PistolPouch,
	ECrowItemAssetRows_MAX,
};

// Enum CrowFPS.ECrowShopItemStateType
enum class ECrowShopItemStateType : uint8 {
	None,
	Hot,
	New,
	ECrowShopItemStateType_MAX,
};

// Enum CrowFPS.ECrowItemSoundType
enum class ECrowItemSoundType : uint8 {
	Inven_DragStart,
	Inven_DropItem,
	Inven_Equip,
	Inven_AddInven,
	Inven_MAX,
};

// Enum CrowFPS.ECrowItemSpawnType
enum class ECrowItemSpawnType : uint8 {
	None,
	World,
	PickupInventory,
	ECrowItemSpawnType_MAX,
};

// Enum CrowFPS.ECrowEquipmentSlotType
enum class ECrowEquipmentSlotType : uint8 {
	Primary01,
	Primary02,
	Melee,
	Throw,
	Kit,
	HealKit,
	HeadArmor,
	BodyArmor,
	InvenBag,
	MissionKit,
	GasCutter,
	__Max__,
	WeaponParts,
	WeaponSlotMax,
	ArmorBegin,
	ArmorEnd,
	ECrowEquipmentSlotType_MAX,
};

// Enum CrowFPS.ECrowBuffValueType
enum class ECrowBuffValueType : uint8 {
	Absolute,
	Percent,
	ECrowBuffValueType_MAX,
};

// Enum CrowFPS.ECrowBuffType
enum class ECrowBuffType : uint8 {
	None,
	AccountExp,
	WeaponExp,
	WeaponTypeExp,
	ECrowBuffType_MAX,
};

// Enum CrowFPS.ECrowBuffEventType
enum class ECrowBuffEventType : uint8 {
	Normal,
	Event,
	ECrowBuffEventType_MAX,
};

// Enum CrowFPS.ECrowWeaponUIType
enum class ECrowWeaponUIType : uint8 {
	None,
	AR,
	SR,
	SG,
	HG,
	MG,
	SMG,
	DMR,
	RL,
	MELEE,
	THROW,
	HEALKIT,
	KIT,
	ECrowWeaponUIType_MAX,
};

// Enum CrowFPS.ECrowWeaponAccType
enum class ECrowWeaponAccType : uint8 {
	None,
	Skin,
	Sticker,
	EtcAcc,
	ECrowWeaponAccType_MAX,
};

// Enum CrowFPS.ECrowWeaponThrowableType
enum class ECrowWeaponThrowableType : uint8 {
	Frag,
	Smoke,
	FlashBang,
	Incendiary,
	ECrowWeaponThrowableType_MAX,
};

// Enum CrowFPS.ECrowCharacterAppearanceType
enum class ECrowCharacterAppearanceType : uint8 {
	Gender,
	Face,
	FaceColor,
	EyeColor,
	Hair,
	Tattoo,
	Beard,
	ECrowCharacterAppearanceType_MAX,
};

// Enum CrowFPS.ECrowWeaponPartsType
enum class ECrowWeaponPartsType : uint8 {
	Barrel,
	Magazine,
	Muzzle,
	PistolGrip,
	PrimarySight,
	SecondarySight,
	SideBarrel,
	Stock,
	UnderBarrel,
	MainBody,
	Min,
	Max,
	None,
};

// Enum CrowFPS.ECrowItemGrade
enum class ECrowItemGrade : uint8 {
	Common,
	Uncommon,
	Rare,
	Epic,
	Legendary,
	Custom1,
	Custom2,
	Custom3,
	Custom4,
	ECrowItemGrade_MAX,
};

// Enum CrowFPS.ECrowItemType
enum class ECrowItemType : uint8 {
	None,
	Weapon,
	VehicleWeapon,
	WeaponPartsBarrel,
	WeaponPartsMagazine,
	WeaponPartsMuzzle,
	WeaponPartsPistolGrip,
	WeaponPartsPrimarySight,
	WeaponPartsSideBarrel,
	WeaponPartsStock,
	WeaponPartsUnderBarrel,
	Ammo,
	Character,
	ClothPartsHair,
	ClothPartsHead,
	ClothPartsGlasses,
	ClothPartsMask,
	ClothPartsTop,
	ClothPartsGloves,
	ClothPartsBottom,
	ClothPartsShoes,
	ClothPartsOuter,
	ClothPartsBackPack,
	ClothPartsCostume,
	ClothPartsKnifePouch,
	ClothPartsPistolPouch,
	ClothPartsBeard,
	Armor,
	InvenBag,
	BattleMoney,
	WeaponPartsSecondarySight,
	WeaponPartsAccCharm,
	SquadMatchPoint,
	ClothPartsPatch,
	EtcItem,
	Exp,
	VehicleSkin,
	WeaponSkin,
	WeaponSticker,
	RoyalCrowPoint,
	Buff,
	Tattoo,
	CharacterEyeColor,
	Emotion,
	ResultMVP,
	ClanMark,
	ParachuteSkin,
	Spray,
	GPoint,
	RandomBox,
	ECrowItemType_MAX,
};

// Enum CrowFPS.ECrowLedgeTraceType
enum class ECrowLedgeTraceType : uint8 {
	AllowAllSides,
	AllowTwoSides,
	AllowOneSides,
	ECrowLedgeTraceType_MAX,
};

// Enum CrowFPS.ECrowLedgeVaultType
enum class ECrowLedgeVaultType : uint8 {
	ClimbOn,
	ClimbOver,
	ECrowLedgeVaultType_MAX,
};

// Enum CrowFPS.ECrowLevelLayer
enum class ECrowLevelLayer : uint8 {
	Unknown,
	Persistent,
	GameDesign,
	Environment,
	Terrain,
	Tree,
	SubLevel,
	Effect,
	UnderWater,
	Num,
	ECrowLevelLayer_MAX,
};

// Enum CrowFPS.ECrowLevelSequenceResult
enum class ECrowLevelSequenceResult : uint8 {
	None,
	Success,
	Fail,
	TimeOut,
	ECrowLevelSequenceResult_MAX,
};

// Enum CrowFPS.ECrowBuildingFindCollision
enum class ECrowBuildingFindCollision : uint8 {
	Success,
	NoCollision,
	AlreadyContact,
	ECrowBuildingFindCollision_MAX,
};

// Enum CrowFPS.ELocalizationCulture
enum class ELocalizationCulture : uint8 {
	EN,
	KO,
	ZH_CN,
	ELocalizationCulture_MAX,
};

// Enum CrowFPS.ECrowTimeKind
enum class ECrowTimeKind : uint8 {
	UTC,
	Local,
	ECrowTimeKind_MAX,
};

// Enum CrowFPS.ECrowLoadoutBoxState
enum class ECrowLoadoutBoxState : uint8 {
	None,
	Falling,
	Landed,
	ECrowLoadoutBoxState_MAX,
};

// Enum CrowFPS.ECrowSampleCharacterCount
enum class ECrowSampleCharacterCount : uint8 {
	One,
	Two,
	Three,
	Four,
	ECrowSampleCharacterCount_MAX,
};

// Enum CrowFPS.EAnimLobbyIdle
enum class EAnimLobbyIdle : uint8 {
	Idle_2,
	Idle_3,
	Idle_4,
	Idle_5,
	CharCustom_Idle,
	EAnimLobbyIdle_MAX,
};

// Enum CrowFPS.ELobbyUIMode
enum class ELobbyUIMode : uint8 {
	None,
	Main,
	PlaySetting,
	ModSelect,
	LoadOut,
	LoadOutWeaponChange,
	LoadOutWeaponCustomize,
	LoadOutWeaponSkinCustomize,
	LoadOutWeaponStickerCustomize,
	LoadOutWeaponAccCustomize,
	LoadOutWeaponLegendary,
	OutFitList,
	OutFitCustomize,
	AppearanceCustomize,
	Shop,
	Mission,
	Record,
	Spray,
	Emotion,
	VehicleSkin,
	Social,
	Clan,
	RandomBoxOpen,
	WeaponPreview,
	ELobbyUIMode_MAX,
};

// Enum CrowFPS.ECrowLobbyProfileRecordType
enum class ECrowLobbyProfileRecordType : uint8 {
	Total,
	Conquest,
	SquadMatch,
	ECrowLobbyProfileRecordType_MAX,
};

// Enum CrowFPS.ECrowLobbyRecordScoreTab
enum class ECrowLobbyRecordScoreTab : uint8 {
	None,
	All,
	Grade,
	SeasonLevel,
	Conquest,
	SquadOperation,
	ECrowLobbyRecordScoreTab_MAX,
};

// Enum CrowFPS.ECrowLobbyRecordTab
enum class ECrowLobbyRecordTab : uint8 {
	None,
	Score,
	Weapon,
	Replay,
	MainMedal,
	ECrowLobbyRecordTab_MAX,
};

// Enum CrowFPS.ECrowLobbySlotType
enum class ECrowLobbySlotType : uint8 {
	Loadout,
	OutFit,
	ECrowLobbySlotType_MAX,
};

// Enum CrowFPS.ECrowLobbyVehicleEtcType
enum class ECrowLobbyVehicleEtcType : uint8 {
	None,
	ParachuteSkin,
	ECrowLobbyVehicleEtcType_MAX,
};

// Enum CrowFPS.ELoadingState
enum class ELoadingState : uint8 {
	None,
	Ready,
	Start,
	Idle,
	End,
	ELoadingState_MAX,
};

// Enum CrowFPS.ECrowMailPopupState
enum class ECrowMailPopupState : uint8 {
	Personal,
	Account,
	ECrowMailPopupState_MAX,
};

// Enum CrowFPS.ECrowMainMedalUIType
enum class ECrowMainMedalUIType : uint8 {
	Killstreak,
	VehicleBoom,
	Longshot,
	Combat,
	Bomber,
	All,
	ECrowMainMedalUIType_MAX,
};

// Enum CrowFPS.ECrowMBButtonType
enum class ECrowMBButtonType : uint8 {
	None,
	Ok,
	Yes,
	No,
	Cancel,
	ECrowMBButtonType_MAX,
};

// Enum CrowFPS.ECrowMBType
enum class ECrowMBType : uint8 {
	None,
	Ok,
	YesNo,
	OkCancel,
	NoBGBlurNone,
	OkError,
	ECrowMBType_MAX,
};

// Enum CrowFPS.ECrowMeteorEventState
enum class ECrowMeteorEventState : uint8 {
	None,
	Wait,
	FireWait,
	Fire,
	Landed,
	MineralDestroyed,
	ECrowMeteorEventState_MAX,
};

// Enum CrowFPS.ECrowMiningPointState
enum class ECrowMiningPointState : uint8 {
	None,
	Active,
	Mining,
	Complete,
	Deactive,
	ECrowMiningPointState_MAX,
};

// Enum CrowFPS.ECrowMissionConditionType
enum class ECrowMissionConditionType : uint8 {
	None,
	AllComboKill,
	WeaponTypeKill,
	WeaponKill,
	WeaponTypeHeadShot,
	WeaponHeadShot,
	WeaponTypeComboKill,
	WeaponComboKill,
	MeterKill,
	ModeWin,
	ModeLose,
	PlantCompositionBoomb,
	DefuseCompositionBoomb,
	InVehicleKill,
	ConquestUse,
	CharacterZ,
	CharacterC,
	CharacterShift,
	CharacterSpaceBar,
	WeaponGunZoomin,
	Weapon2Key,
	Weapon3Key,
	Weapon4Key,
	keyboardGKey,
	keyboardTKey,
	ResourceGet,
	DroneSummon,
	BandageUse,
	SyringeUse,
	TankVehicle,
	CarVehicle,
	ECrowMissionConditionType_MAX,
};

// Enum CrowFPS.ECrowMissionType
enum class ECrowMissionType : uint8 {
	None,
	DailyMission,
	WeeklyMission,
	Achievements,
	SessionMission,
	FirstUserMission,
	Tutorial,
	_Max,
	ECrowMissionType_MAX,
};

// Enum CrowFPS.EWebNoticeType
enum class EWebNoticeType : uint8 {
	Maintenance,
	Announcement,
	EWebNoticeType_MAX,
};

// Enum CrowFPS.ECrowResultEventState
enum class ECrowResultEventState : uint8 {
	None,
	UserLevel,
	WeaponLevel,
	Rank,
	ECrowResultEventState_MAX,
};

// Enum CrowFPS.ECrowResultWidgetState
enum class ECrowResultWidgetState : uint8 {
	None,
	Exp,
	NotLevelUp,
	LevelUp,
	RankNotUp,
	RankUp,
	ECrowResultWidgetState_MAX,
};

// Enum CrowFPS.ECrowPersonalResultItemState
enum class ECrowPersonalResultItemState : uint8 {
	None,
	Update,
	End,
	ECrowPersonalResultItemState_MAX,
};

// Enum CrowFPS.ECrowPickupInventoryState
enum class ECrowPickupInventoryState : uint8 {
	None,
	Normal,
	Normal_WorldSpawned,
	Use,
	Destroying,
	Destroyed,
	ECrowPickupInventoryState_MAX,
};

// Enum CrowFPS.EPingWidgetType
enum class EPingWidgetType : uint8 {
	FAR_MODE,
	ROW_MODE,
	DETAIL_PICKUPINVEN_MODE,
	EPingWidgetType_MAX,
};

// Enum CrowFPS.ECrowPingType
enum class ECrowPingType : uint8 {
	None,
	Item,
	Ally,
	Enemy,
	Neutral,
	Ground,
	ConquestAreaIcon,
	MiningPoint,
	MiningPoint_Mining_MySquad,
	MiningPoint_Mining_Enemy,
	MiningPoint_Complete_MySquad,
	MiningPoint_Complete_Enemy,
	EscapePoint_Active,
	EscapePoint_Called,
	EscapePoint_Complete,
	EscapeHeli,
	EnemyTrace,
	Move,
	LocateEnemy,
	FoundItem,
	Attack,
	WatchOut,
	HoldPosition,
	Observe,
	Max,
};

// Enum CrowFPS.ECrowPingWidgetState
enum class ECrowPingWidgetState : uint8 {
	None,
	Hovered,
	Targeted,
	ECrowPingWidgetState_MAX,
};

// Enum CrowFPS.ECrowPlayerConstructionState
enum class ECrowPlayerConstructionState : uint8 {
	None,
	FindBuildablePlace,
	Build,
	ECrowPlayerConstructionState_MAX,
};

// Enum CrowFPS.ECrowExitWorldType
enum class ECrowExitWorldType : uint8 {
	None,
	Lobby,
	Quit,
	ECrowExitWorldType_MAX,
};

// Enum CrowFPS.ECrowLogTakeExpType
enum class ECrowLogTakeExpType : uint8 {
	None,
	Kill,
	VehicleDestoy,
	DailyMission,
	WeeklyMission,
	Medal,
	Mode,
	ReviveMySquad,
	ConquestAreaGauge,
	DyingPlayerPoint,
	AssistUAV,
	AssistCar,
	AssistTank,
	AssistHeli,
	AssistBoat,
	AssistSquadCar,
	AssistSquadTank,
	AssistSquadHeli,
	AssistSquadBoat,
	AssistSquadCharacter,
	AssistCharacter,
	ECrowLogTakeExpType_MAX,
};

// Enum CrowFPS.ECrowBloodAnimType
enum class ECrowBloodAnimType : uint8 {
	AppearBlood,
	AppearBloodScreen,
	DisappearBlood,
	DisappearBloodScreen,
	ECrowBloodAnimType_MAX,
};

// Enum CrowFPS.ECrowPostProcess
enum class ECrowPostProcess : uint8 {
	None,
	ECrowPostProcess_MAX,
};

// Enum CrowFPS.ECrowMatchWidgetType
enum class ECrowMatchWidgetType : uint8 {
	WaitUser,
	TransportAirPlaneUser,
	ECrowMatchWidgetType_MAX,
};

// Enum CrowFPS.ECrowProgressBarFillType
enum class ECrowProgressBarFillType : uint8 {
	LeftToRight,
	RightToLeft,
	ECrowProgressBarFillType_MAX,
};

// Enum CrowFPS.ECrowProjectileMoveType
enum class ECrowProjectileMoveType : uint8 {
	None,
	MovementComponent,
	TrajectoryComponent,
	PhysicsSimulation,
	ECrowProjectileMoveType_MAX,
};

// Enum CrowFPS.ECrowClaymoreMineState
enum class ECrowClaymoreMineState : uint8 {
	None,
	Wait,
	Active,
	InstallPawnDie,
	Collect,
	SelfDestroy,
	Detection,
	Bomb,
	ECrowClaymoreMineState_MAX,
};

// Enum CrowFPS.ERankAlarmWidgetSwitcher
enum class ERankAlarmWidgetSwitcher : uint8 {
	First,
	Second,
	Third,
	Fourth,
	Fifth,
	ETCRank,
	FirstRecapture,
	ERankAlarmWidgetSwitcher_MAX,
};

// Enum CrowFPS.ECrowRankingPeriodType
enum class ECrowRankingPeriodType : uint8 {
	Year,
	Season,
	ECrowRankingPeriodType_MAX,
};

// Enum CrowFPS.ECrowRankingRecordType
enum class ECrowRankingRecordType : uint8 {
	MercenaryLevel,
	SeasonLevel,
	Conquest,
	SquadMatch,
	ECrowRankingRecordType_MAX,
};

// Enum CrowFPS.ECrowRecordPawnType
enum class ECrowRecordPawnType : uint8 {
	None,
	Character,
	Tank,
	Heli,
	Car,
	Boat,
	CombatCar,
	ECrowRecordPawnType_MAX,
};

// Enum CrowFPS.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	NotRouted,
	RelevantAllConnections,
	Pawn,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dormancy,
	EClassRepNodeMapping_MAX,
};

// Enum CrowFPS.ECrowAirPlaneState
enum class ECrowAirPlaneState : uint8 {
	AirPlaneStateReady,
	AirPlaneStateCanDrop,
	AirPlaneStateForcedDrop,
	ECrowAirPlaneState_MAX,
};

// Enum CrowFPS.ECrowRespawnSelecteInfoWidgetState
enum class ECrowRespawnSelecteInfoWidgetState : uint8 {
	None,
	Waiting,
	Ready,
	PossibleRespawn,
	ImpossibleRespawn,
	ECrowRespawnSelecteInfoWidgetState_MAX,
};

// Enum CrowFPS.ECrowRotorType
enum class ECrowRotorType : uint8 {
	EMainRotor,
	ESubRotor,
	EMax,
	ECrowRotorType_MAX,
};

// Enum CrowFPS.ECrowSafeBoxEventState
enum class ECrowSafeBoxEventState : uint8 {
	None,
	Begin,
	Opening,
	Opened,
	Completed,
	ECrowSafeBoxEventState_MAX,
};

// Enum CrowFPS.ECrowSceneCaptureType
enum class ECrowSceneCaptureType : uint8 {
	Bending,
	Wind,
	ECrowSceneCaptureType_MAX,
};

// Enum CrowFPS.ELoadOutMode
enum class ELoadOutMode : uint8 {
	None,
	Hidden,
	WeaponLodOut,
	WeaponCustom,
	ELoadOutMode_MAX,
};

// Enum CrowFPS.EMainCameraType
enum class EMainCameraType : uint8 {
	Center,
	Left,
	Right,
	EMainCameraType_MAX,
};

// Enum CrowFPS.ECharacterCustomCameraType
enum class ECharacterCustomCameraType : uint8 {
	Default,
	Upper,
	Lower,
	ECharacterCustomCameraType_MAX,
};

// Enum CrowFPS.ERotationMode
enum class ERotationMode : uint8 {
	None,
	Vertical,
	Horizontal,
	ERotationMode_MAX,
};

// Enum CrowFPS.EMatchingCancelReason
enum class EMatchingCancelReason : uint8 {
	None,
	ServerError,
	ByUser,
	Timeout,
	DedicatedServerState,
	DoesNotExistDedicatedServer,
	EMatchingCancelReason_MAX,
};

// Enum CrowFPS.EStartGameType
enum class EStartGameType : uint8 {
	None,
	StartGamePlay,
	GamePlay,
	QuickPlay,
	JoinGame,
	EStartGameType_MAX,
};

// Enum CrowFPS.ESaveAppearanceType
enum class ESaveAppearanceType : uint8 {
	Face,
	Hair,
	HairColor,
	Beard,
	BeardColor,
	EyeColor,
	TattooArm,
	TattooFace,
	AppearanceType_Max,
	ESaveAppearanceType_MAX,
};

// Enum CrowFPS.ELobbyMainSpawnSlot
enum class ELobbyMainSpawnSlot : uint8 {
	SpawnSlot_2,
	SpawnSlot_3,
	SpawnSlot_4,
	SpawnSlot_5,
	SpawnSlot_Max,
};

// Enum CrowFPS.ELobbySceneMode
enum class ELobbySceneMode : uint8 {
	None,
	Main,
	PlaySetting,
	CharacterCustom,
	CharacterCustomAppearance,
	WeaponLodOut,
	WeaponCustom,
	WeaponCustomSticker,
	Mission,
	Shop,
	Spray,
	Emotion,
	VehicleSkin,
	Record,
	Clan,
	WeaponPreview,
	ELobbySceneMode_MAX,
};

// Enum CrowFPS.ECameratBlendFunctionn
enum class ECameratBlendFunctionn : uint8 {
	Blend_Linear,
	Blend_Cubic,
	Blend_EaseIn,
	Blend_EaseOut,
	Blend_EaseInOut,
	Blend_MAX,
};

// Enum CrowFPS.ECrowSceneType
enum class ECrowSceneType : uint8 {
	None,
	Lobby,
	Inventory,
	Shop,
	Game,
	Login,
	PIE_Entry,
	ECrowSceneType_MAX,
};

// Enum CrowFPS.ECrowScorePawnType
enum class ECrowScorePawnType : uint8 {
	None,
	Character,
	Tank,
	Heli,
	Car,
	Boat,
	ECrowScorePawnType_MAX,
};

// Enum CrowFPS.ESettingsSlotIndexedValueFillType
enum class ESettingsSlotIndexedValueFillType : uint8 {
	Custom,
	Resolution,
	ESettingsSlotIndexedValueFillType_MAX,
};

// Enum CrowFPS.ESettingPopupTitleType
enum class ESettingPopupTitleType : uint8 {
	Alert,
	ESettingPopupTitleType_MAX,
};

// Enum CrowFPS.ESettingPopupMessageType
enum class ESettingPopupMessageType : uint8 {
	ConfirmMessage,
	HasModifiedSettings,
	SettingDefault,
	ApplyMessage,
	ESettingPopupMessageType_MAX,
};

// Enum CrowFPS.ESettingsVoiceChatWay
enum class ESettingsVoiceChatWay : uint8 {
	Radio,
	Phone,
	NotUsed,
	ESettingsVoiceChatWay_MAX,
};

// Enum CrowFPS.ESettingsCustomCrossHairColorType
enum class ESettingsCustomCrossHairColorType : uint8 {
	Common,
	GroundVehicle,
	AirVehicle,
	SeaVehicle,
	ESettingsCustomCrossHairColorType_MAX,
};

// Enum CrowFPS.ESettingsSlotType
enum class ESettingsSlotType : uint8 {
	KeyBinding,
	OnOff,
	Slider,
	Selection,
	Dropdown,
	CrossHair,
	Button,
	Invalid,
	ESettingsSlotType_MAX,
};

// Enum CrowFPS.ESettingKeySlotType
enum class ESettingKeySlotType : uint8 {
	FirstKeySlot,
	SecondKeySlot,
	GamepadSlot,
	MaxSlot,
	UnknownSlot,
	ESettingKeySlotType_MAX,
};

// Enum CrowFPS.ESettingKeySlotCategory
enum class ESettingKeySlotCategory : uint8 {
	CommonBehaviour,
	SpecificBehaviour,
	Communication,
	Combat,
	VehicleCommon,
	WheeledVehicle,
	RotorVehicle,
	WaterVehicle,
	HeliVehicle,
	InventoryBehaviour,
	UIBehaviour,
	SpectationBehaviour,
	Max,
	UnknownCategory,
};

// Enum CrowFPS.ESettingCategoryType
enum class ESettingCategoryType : uint8 {
	Display,
	AdvancedDisplay,
	Audio,
	Input,
	Gameplay,
	Control,
	Etc,
	Max,
	SubItem,
};

// Enum CrowFPS.ESettingRepositoryType
enum class ESettingRepositoryType : uint8 {
	Default,
	User,
	Modified,
	ESettingRepositoryType_MAX,
};

// Enum CrowFPS.ShopItemSlotType
enum class ShopItemSlotType : uint8 {
	None,
	Icon,
	Inventory,
	ShopItemSlotType_MAX,
};

// Enum CrowFPS.ECrowShopSortType
enum class ECrowShopSortType : uint8 {
	None,
	New,
	Sale,
	Recommend,
	LowPrice,
	HighPrice,
	ECrowShopSortType_MAX,
};

// Enum CrowFPS.EItemOwnerType
enum class EItemOwnerType : uint8 {
	OwnUser,
	OwnClan,
	EItemOwnerType_MAX,
};

// Enum CrowFPS.ECrowShopProductSubType
enum class ECrowShopProductSubType : uint8 {
	None,
	KeySubStore,
	BoxSubStore,
	RCPSubStore,
	ETCItemSubStore,
	SkinSubStore,
	StickerSubStore,
	HeadSubStore,
	GlassesSubStore,
	FaceItemSubStore,
	TopSubStore,
	GlovesSubStore,
	OuterSubStore,
	PantsSubStore,
	ShoesSubStore,
	BagSubStore,
	RaceSubStore,
	HairSubStore,
	BeardSubStore,
	EyeColorSubStore,
	TattooSubStore,
	SpraySubStore,
	WeaponChoiceTab,
	AssistantWeaponChoiceTab,
	PartChoiceTab,
	BattlePassTab,
	PackageSubStore,
	EmotionTab,
	WinMotionTab,
	VehicleSkinPulsarTab,
	VehicleSkinBuggyTab,
	VehicleSkinBrawlerTab,
	VehicleSkinGrizzlyTab,
	VehicleSkinRoadRoverTab,
	VehicleSkinRhinoTab,
	VehicleSkinLeonidTab,
	VehicleSkinSparrowRocketTab,
	VehicleSkinSparrowGatilingTab,
	VehicleSkinSeaHorseTab,
	ClothTopPatchTab,
	ClanEmblemMarkTab,
	ClanEmblemBGTab,
	VehicleSkinParachuteTab,
	LegendaryWeapon,
	ECrowShopProductSubType_MAX,
};

// Enum CrowFPS.ECrowShopProductType
enum class ECrowShopProductType : uint8 {
	None,
	NormalStorePage,
	PackageStorePage,
	BattlePassStorePage,
	ClothStorePage,
	WeaponStorePage,
	EmotionStorePage,
	SprayStorePage,
	LookChangeStorePage,
	VehicleStoreNomalCarSkinPage,
	VehicleStoreCombetCarSkinPage,
	VehicleStoreTankSkinPage,
	VehicleStoreHeliSkinPage,
	VehicleStoreBoatSkinPage,
	ClanMark,
	ShopItemDeconstruct,
	ShopInventoryPage,
	WeaponLevelJump,
	ClothSlotPass,
	WeaponSlotPass,
	VehicleStoreEtcSkinPage,
	ECrowShopProductType_MAX,
};

// Enum CrowFPS.ECrowSkydivingParachuteState
enum class ECrowSkydivingParachuteState : uint8 {
	None,
	Spread,
	Fall,
	Land,
	ECrowSkydivingParachuteState_MAX,
};

// Enum CrowFPS.ESocialTabType
enum class ESocialTabType : uint8 {
	FriendList,
	FriendRequst,
	Recent,
	Search,
	ESocialTabType_MAX,
};

// Enum CrowFPS.ESortState
enum class ESortState : uint8 {
	Normal,
	Ascending,
	Descending,
	ESortState_MAX,
};

// Enum CrowFPS.ECrowSpectatorType
enum class ECrowSpectatorType : uint8 {
	Default,
	CustomModeObserver,
	ECrowSpectatorType_MAX,
};

// Enum CrowFPS.ESprayType
enum class ESprayType : uint8 {
	Normal,
	Foil,
	Holo,
	Max,
};

// Enum CrowFPS.ECrowSquadMatchReward
enum class ECrowSquadMatchReward : uint8 {
	None,
	ItemBox,
	LoadoutBox,
	Vehicle,
	CallHeli,
	ECrowSquadMatchReward_MAX,
};

// Enum CrowFPS.ECrowStatusWidgetFlags
enum class ECrowStatusWidgetFlags : uint8 {
	None,
	Heal,
	Gadget,
	KeyGuide_T,
	KeyGuide_F,
	Default,
	All,
	ECrowStatusWidgetFlags_MAX,
};

// Enum CrowFPS.ECrowSupplyBoxType
enum class ECrowSupplyBoxType : uint8 {
	None,
	BulletBox,
	MorphineBox,
	WeaponBox,
	ECrowSupplyBoxType_MAX,
};

// Enum CrowFPS.ECrowSupplyEventState
enum class ECrowSupplyEventState : uint8 {
	None,
	Falling,
	Landed,
	ECrowSupplyEventState_MAX,
};

// Enum CrowFPS.ECrowTattooType
enum class ECrowTattooType : uint8 {
	Face,
	Arm,
	ECrowTattooType_MAX,
};

// Enum CrowFPS.ETriggerInputKeyType
enum class ETriggerInputKeyType : uint8 {
	None,
	Key_2,
	Key_3,
	ETriggerInputKeyType_MAX,
};

// Enum CrowFPS.ETriggerMessageParamType
enum class ETriggerMessageParamType : uint8 {
	BindKeyImage,
	PressKeyHoldTime,
	ETriggerMessageParamType_MAX,
};

// Enum CrowFPS.ECrowTutorialInfoColor
enum class ECrowTutorialInfoColor : uint8 {
	Black,
	Red,
	ECrowTutorialInfoColor_MAX,
};

// Enum CrowFPS.EKeyInputType
enum class EKeyInputType : uint8 {
	None,
	Ctrl_Button,
	Esc_Button,
	EKeyInputType_MAX,
};

// Enum CrowFPS.EMouseButtonType
enum class EMouseButtonType : uint8 {
	None,
	Left_click,
	Right_click,
	Center_click,
	EMouseButtonType_MAX,
};

// Enum CrowFPS.ECrowWinLose
enum class ECrowWinLose : uint8 {
	Win,
	Lose,
	Draw,
	Invalidity,
	MAX,
};

// Enum CrowFPS.ECrowSkydivingAnimState
enum class ECrowSkydivingAnimState : uint8 {
	None,
	FreeFall,
	ParachuteSpread,
	Parachute,
	ReadyToLand,
	Land,
	WalkLand,
	RollLand,
	Falling,
	FallingLand,
	Swim,
	ECrowSkydivingAnimState_MAX,
};

// Enum CrowFPS.ECrowSkydivingState
enum class ECrowSkydivingState : uint8 {
	None,
	FreeFall,
	ParachuteSpread,
	Parachute,
	ReadyToLand,
	Land,
	Dying,
	ECrowSkydivingState_MAX,
};

// Enum CrowFPS.ECrowChatWidgetStatus
enum class ECrowChatWidgetStatus : uint8 {
	ChatTyping,
	ChatMessageInfo,
	ECrowChatWidgetStatus_MAX,
};

// Enum CrowFPS.ECrowVoiceAudioFadeModel
enum class ECrowVoiceAudioFadeModel : uint8 {
	InverseByDistance,
	LinearByDistance,
	ExponentialByDistance,
	ECrowVoiceAudioFadeModel_MAX,
};

// Enum CrowFPS.ECrowVoiceChannelType
enum class ECrowVoiceChannelType : uint8 {
	NonPositional,
	Positional,
	Echo,
	ECrowVoiceChannelType_MAX,
};

// Enum CrowFPS.ECrowVoiceInputType
enum class ECrowVoiceInputType : uint8 {
	VoicInputType_None,
	VoiceInputType_PressToSpeak,
	VoiceInputType_Disable,
	VoiceInputType_Alaways,
	ECrowVoiceInputType_MAX,
};

// Enum CrowFPS.ECrowVoiceChannel
enum class ECrowVoiceChannel : uint8 {
	VoiceChannel_None,
	VoiceChannel_Party,
	VoiceChannel_Team,
	VoiceChannel_Squad,
	VoiceChannel_MAX,
};

// Enum CrowFPS.ECrowVoiceState
enum class ECrowVoiceState : uint8 {
	VoiceOff,
	VoiceOn,
	VoiceMute,
	ECrowVoiceState_MAX,
};

// Enum CrowFPS.ECrowChatType
enum class ECrowChatType : uint8 {
	Chat_Notice,
	Chat_IngameAll,
	Chat_Party,
	Chat_Team,
	Chat_Team_Ghost,
	Chat_Squad,
	Chat_Whisper,
	Chat_Error,
	Chat_MAX,
};

// Enum CrowFPS.ECrowBleedingType
enum class ECrowBleedingType : uint8 {
	Bleeding_None,
	Bleeding_Fast,
	Bleeding_Slow,
	Bleeding_MAX,
};

// Enum CrowFPS.ECrowScopeSightRate
enum class ECrowScopeSightRate : uint8 {
	ScopeSightRate_2,
	ScopeSightRate_3,
	ScopeSightRate_4,
	ScopeSightRate_5,
	ScopeSightRate_7,
	ScopeSightRate_9,
	ScopeSightRate_13,
	HighMagnification,
	ECrowScopeSightRate_MAX,
};

// Enum CrowFPS.ECrowClothComponentType
enum class ECrowClothComponentType : uint8 {
	ThirdPersonComponent,
	FirstPersonBodyComponent,
	FirstPersonArmComponent,
	ECrowClothComponentType_MAX,
};

// Enum CrowFPS.EVehicleIdentity
enum class EVehicleIdentity : uint8 {
	None,
	Tank,
	Helicopter,
	Car,
	APC,
	Boat,
	EVehicleIdentity_MAX,
};

// Enum CrowFPS.EVehicleSeatType
enum class EVehicleSeatType : uint8 {
	None,
	Driver,
	AssistDriver,
	Shooter,
	ArmedPassenger,
	ArmedPassengerLowReady,
	Passenger,
	EVehicleSeatType_MAX,
};

// Enum CrowFPS.EFireType
enum class EFireType : uint8 {
	Shooting,
	OverhandThrow,
	UnderhandThrow,
	_Max,
	EFireType_MAX,
};

// Enum CrowFPS.EFireStance
enum class EFireStance : uint8 {
	Idle,
	Ready,
	ReadyToAiming,
	Aiming,
	Firing,
	_Max,
	EFireStance_MAX,
};

// Enum CrowFPS.EStance
enum class EStance : uint8 {
	Standing,
	Crouching,
	Prone,
	Sprinting,
	Dying,
	_Max,
	EStance_MAX,
};

// Enum CrowFPS.ECrowMedalShowType
enum class ECrowMedalShowType : uint8 {
	Icon,
	Text,
	All,
	_Max,
	ECrowMedalShowType_MAX,
};

// Enum CrowFPS.ECrowMedalType
enum class ECrowMedalType : uint8 {
	Medal_Kill_Streak1,
	Medal_Kill_Streak2,
	Medal_Kill_Streak4,
	Medal_Kill_Streak5,
	Medal_Kill_Streak6,
	Medal_Kill_Streak8,
	Medal_Kill_Streak10,
	Medal_Kill_Streak12,
	Medal_Kill_Streak14,
	Medal_Kill_Streak15,
	Medal_Kill_Streak16,
	Medal_Kill_Streak18,
	Medal_Kill_Streak20,
	Medal_Kill_Streak22,
	Medal_Kill_Streak24,
	Medal_Kill_Streak25,
	Medal_Kill_Streak26,
	Medal_Kill_Streak28,
	Medal_Kill_Streak30,
	Medal_Kill_Streak32,
	Medal_Kill_CarBoom,
	Medal_Kill_APCBoom,
	Medal_kill_TankBoom,
	Medal_Kill_HeliBoom,
	Medal_Kill_BoatBoom,
	Medal_Kill_HeadHunter,
	Medal_Kill_LongShot50,
	Medal_Kill_LongShot100,
	Medal_Kill_LongShot150,
	Medal_Kill_LongShot200,
	Medal_Kill_LongShot250,
	Medal_Kill_LongShot300,
	Medal_Kill_LongShot350,
	Medal_Kill_LongShot400,
	Medal_Kill_LongShot450,
	Medal_Kill_LongShot500,
	Medal_Kill_LongShot550,
	Medal_Kill_LongShot600,
	Medal_Kill_LongShot650,
	Medal_Kill_LongShot700,
	Medal_Kill_LongShot750,
	Medal_Kill_LongShot800,
	Medal_Kill_Combat,
	Medal_Kill_BomberGrenade,
	Medal_Kill_BomberGL,
	Medal_Kill_BomberC4,
	Medal_Kill_Skillful,
	Medal_Kill_HitandRun,
	Medal_Kill_Accident,
	Medal_Kill_Demolisher,
	Medal_Kill_StreakN,
	Medal_BombMission_PlantComposition,
	Medal_BombMission_DefuseComposition,
	Medal_Kill_First,
	Medal_Kill_Twice,
	Medal_Kill_Revenge,
	Medal_Kill_AceKiller,
	Medal_Capture_Complete,
	Medal_Capture_DefenseKill,
	Medal_Capture_OffenseKill,
	Medal_Medic_Ally,
	Medal_ExtractorInstallation,
	Medal_ExtractorQ_ON_Earn,
	Medal_EnemyExtractorQ_ON_Earn,
	Medal_EnemyQ_ON_Earn,
	Medal_ZetaZombieKill,
	__Max__,
	ECrowMedalType_MAX,
};

// Enum CrowFPS.EVehicleDamageParameterType
enum class EVehicleDamageParameterType : uint8 {
	EnginePowerPercent,
	InputFactor,
	RotorYaw,
	RotorPitch,
	RotorRoll,
	PrarameterTypeMax,
	EVehicleDamageParameterType_MAX,
};

// Enum CrowFPS.EVehicleDamageStatus
enum class EVehicleDamageStatus : uint8 {
	Damage_None,
	Damage_Minor,
	Damage_Major,
	Damage_Critical,
	Damage_MAX,
};

// Enum CrowFPS.EVehicleEvent
enum class EVehicleEvent : uint8 {
	Event_Repose,
	Event_EngineStart,
	Event_ReadyToDrive,
	Event_ShutDown,
	Event_PressedHorn,
	Event_ReleasedHorn,
	Event_Immerge,
	Event_MAX,
};

// Enum CrowFPS.ECrowVehicleBoatState
enum class ECrowVehicleBoatState : uint8 {
	Idle,
	Driving,
	InAir,
	ECrowVehicleBoatState_MAX,
};

// Enum CrowFPS.ECrowVehicleParachuteState
enum class ECrowVehicleParachuteState : uint8 {
	None,
	Down,
	Up,
	ECrowVehicleParachuteState_MAX,
};

// Enum CrowFPS.EVehicleShieldingType
enum class EVehicleShieldingType : uint8 {
	Open,
	Shielding,
	HalfShielding,
	EVehicleShieldingType_MAX,
};

// Enum CrowFPS.EVehicleSeat
enum class EVehicleSeat : uint8 {
	Driver,
	Weapon,
	Other,
	EVehicleSeat_MAX,
};

// Enum CrowFPS.ECrowVehicleInputBlockMask
enum class ECrowVehicleInputBlockMask : uint8 {
	None,
	MoveForward,
	MoveRight,
	Yaw,
	Pitch,
	Roll,
	Collective,
	All_FR,
	All_YPRC,
	All,
	ECrowVehicleInputBlockMask_MAX,
};

// Enum CrowFPS.ECrowVehicleState
enum class ECrowVehicleState : uint8 {
	None,
	Repose,
	EngineStart,
	Ready,
	AutoHover,
	ShutDown,
	Crash,
	Flooding,
	ECrowVehicleState_MAX,
};

// Enum CrowFPS.ECrowVehicleType
enum class ECrowVehicleType : uint8 {
	None,
	Car,
	CombatCar,
	Tank,
	Heli,
	Boat,
	ECrowVehicleType_MAX,
};

// Enum CrowFPS.ECrowVehicleTask
enum class ECrowVehicleTask : uint8 {
	None,
	Rotor_GroundFx,
	ECrowVehicleTask_MAX,
};

// Enum CrowFPS.ECrowStickerType
enum class ECrowStickerType : uint8 {
	Normal,
	Slot,
	ECrowStickerType_MAX,
};

// Enum CrowFPS.ECrowWeaponAnimGatlingState
enum class ECrowWeaponAnimGatlingState : uint8 {
	Idle,
	PreHeating,
	Fire,
	OverHeating,
	Cooling,
	ECrowWeaponAnimGatlingState_MAX,
};

// Enum CrowFPS.ECrowLockOnLauncherState
enum class ECrowLockOnLauncherState : uint8 {
	None,
	Targeting,
	LockOn,
	ECrowLockOnLauncherState_MAX,
};

// Enum CrowFPS.ECrowOffSetType
enum class ECrowOffSetType : uint8 {
	Up,
	Bottom,
	ECrowOffSetType_MAX,
};

// Enum CrowFPS.ECrowWeaponKeyFlags
enum class ECrowWeaponKeyFlags : uint8 {
	None,
	Fire,
	AimPrimary,
	AimSecondary,
	Light,
	LaserSight,
	AimThrowableMelee,
	DefaultFlags,
	SpecialFlags,
	Aim,
	ECrowWeaponKeyFlags_MAX,
};

// Enum CrowFPS.ECrowWeaponFireState
enum class ECrowWeaponFireState : uint8 {
	None,
	WaitFire,
	PreFire,
	Fire,
	PostFire,
	ECrowWeaponFireState_MAX,
};

// Enum CrowFPS.ECrowWeaponSubState
enum class ECrowWeaponSubState : uint8 {
	None,
	Idle,
	Entering,
	Active,
	Exiting,
	ECrowWeaponSubState_MAX,
};

// Enum CrowFPS.ECrowWeaponState
enum class ECrowWeaponState : uint8 {
	Idle,
	Select,
	Reload,
	BoltAction,
	ChangeFireMode,
	Deselect,
	DeselectComplete,
	ECrowWeaponState_MAX,
};

// Enum CrowFPS.ECrowWeaponAimMode
enum class ECrowWeaponAimMode : uint8 {
	None,
	Only_FP,
	Only_TP,
	Both,
	ECrowWeaponAimMode_MAX,
};

// Enum CrowFPS.ECrowWeaponFireMode
enum class ECrowWeaponFireMode : uint8 {
	None,
	Single,
	Burst,
	Normal,
	ECrowWeaponFireMode_MAX,
};

// Enum CrowFPS.ECrowAmmoFireType
enum class ECrowAmmoFireType : uint8 {
	None,
	ServerHitScan,
	ClientHitScan,
	ServerProjectile,
	ClientProjectile,
	UseKit,
	UseKitImmediate,
	NoAmmoNeededClientHitScan,
	ECrowAmmoFireType_MAX,
};

// Enum CrowFPS.ECrowWeaponSubType
enum class ECrowWeaponSubType : uint8 {
	AssultRifle,
	MachineGun,
	SubMachineGun,
	ShotGun,
	AutoSniper,
	BoltActionSniper,
	HandGun,
	AutoHandGun,
	Melee,
	Throw,
	Vehicle,
	Kit,
	HealKit,
	GasCutter,
	ECrowWeaponSubType_MAX,
};

// Enum CrowFPS.ECrowWeaponType
enum class ECrowWeaponType : uint8 {
	None,
	Primary,
	Secondary,
	Melee,
	Throw,
	NoConsume,
	ECrowWeaponType_MAX,
};

// Enum CrowFPS.ECrowAmmoType
enum class ECrowAmmoType : uint8 {
	None,
	Bullet_5_56mm,
	Bullet_7_62mm,
	Bullet_9mm,
	Bullet_338_LMag,
	Bullet_12_7mm,
	Bullet_12_7mm_Ground,
	Bullet_0_44Mag,
	Bullet_00BuckShot,
	Bullet_14_5mm,
	Bullet_25mm,
	Grenade_M26,
	Grenade_M18,
	Grenade_AN_M14,
	Grenade_M84,
	Grenade_40mm,
	Cannon_120mmAP,
	Cannon_120mmHE,
	Smoke_66mm,
	Rocket_66mm,
	Rocket_70mm,
	Rocket_85mm,
	Missile_70mm,
	Missile_127mm,
	Melee_Knife,
	Kit_Normal,
	Kit_Heal,
	C4,
	ClaymoreMine,
	Heli_Flare,
	GasMask_Filters,
	Zombie_Punch,
	ECrowAmmoType_MAX,
};

// Enum CrowFPS.ECrowUIEventMethod
enum class ECrowUIEventMethod : uint8 {
	None,
	EVENT_OK,
	EVENT_CANCEL,
	EVENT_SELECT,
	EVENT_DESELECT,
	EVENT_DRAG_START,
	EVENT_DRAG_CANCEL,
	ECrowUIEventMethod_MAX,
};

// Enum CrowFPS.ECrowImageLimitType
enum class ECrowImageLimitType : uint8 {
	None,
	LimitWidth,
	LimitHeight,
	ECrowImageLimitType_MAX,
};

// Enum CrowFPS.EViewPortRenderOrder
enum class EViewPortRenderOrder : uint8 {
	Standalone,
	Popup,
	EViewPortRenderOrder_MAX,
};

// Enum CrowFPS.ETweenInterpolate
enum class ETweenInterpolate : uint8 {
	Linear,
	EaseIn,
	EaseOut,
	EaseInOut,
	ETweenInterpolate_MAX,
};

// Enum CrowFPS.ECrowWorldEditorTaskResult
enum class ECrowWorldEditorTaskResult : uint8 {
	Working,
	ResultSuccess,
	ResultFail,
	ECrowWorldEditorTaskResult_MAX,
};

// Enum CrowFPS.ECrowWorldEventWidgetType
enum class ECrowWorldEventWidgetType : uint8 {
	None,
	Alarm,
	Success,
	Fail,
	ECrowWorldEventWidgetType_MAX,
};

// Enum CrowFPS.ECrowWorldEventState
enum class ECrowWorldEventState : uint8 {
	None,
	Wait,
	Begin,
	End,
	ECrowWorldEventState_MAX,
};

// Enum CrowFPS.ECrowWorldEventActivationType
enum class ECrowWorldEventActivationType : uint8 {
	Random,
	Sequence,
	ECrowWorldEventActivationType_MAX,
};

// Enum CrowFPS.ECrowWorldHLODResult
enum class ECrowWorldHLODResult : uint8 {
	Success,
	Skip,
	Failed,
	ECrowWorldHLODResult_MAX,
};

// Enum CrowFPS.EMoveState
enum class EMoveState : uint8 {
	None,
	Move,
	NotMove,
	EMoveState_MAX,
};

// Enum CrowFPS.EZoomState
enum class EZoomState : uint8 {
	None,
	ZoomIn,
	ZoomOut,
	EZoomState_MAX,
};

// Enum CrowFPS.EMapType
enum class EMapType : uint8 {
	None,
	WorldMap,
	MiniMap,
	RespawnMap,
	EMapType_MAX,
};

// Enum CrowFPS.ECrowWorldMapIconType
enum class ECrowWorldMapIconType : uint8 {
	None,
	Player,
	Vehicle,
	ConquestObject,
	MainMission,
	RespawnArea,
	FirstRespawnArea,
	SupplySpawnTarget,
	SupplySpawnArea,
	BombingTartget,
	BombingActor,
	Ping,
	EnemyPlayer,
	EnemyVehicle,
	TransportAirPlane,
	TransportAirPlaneRoute,
	DropItem,
	DeathPlayer,
	UAVTarget,
	KitBomber,
	MapAreaName,
	SkyRespawnPoint,
	AreaMiniMap,
	All,
	ECrowWorldMapIconType_MAX,
};

// Enum CrowFPS.ECrowWorldMapType
enum class ECrowWorldMapType : uint8 {
	None,
	HeavyBombard,
	UAV,
	ECrowWorldMapType_MAX,
};

// Enum CrowFPS.ESnapToGroundMode
enum class ESnapToGroundMode : uint8 {
	UseHeightmap,
	UseLineTrace,
	ESnapToGroundMode_MAX,
};

// Enum CrowFPS.ECrowMeshPaintAction
enum class ECrowMeshPaintAction : uint8 {
	Paint,
	Erase,
	ECrowMeshPaintAction_MAX,
};

// Enum CrowFPS.ECrowWorldSplineMode
enum class ECrowWorldSplineMode : uint8 {
	Road,
	Fence,
	UtilityPole,
	Havest,
	ECrowWorldSplineMode_MAX,
};

// Enum CrowFPS.ECrowWorldSplineMeshAxis
enum class ECrowWorldSplineMeshAxis : uint8 {
	X,
	Y,
	Z,
	Num,
	ECrowWorldSplineMeshAxis_MAX,
};

// Enum CrowFPS.ECrowWorldEditorAsyncTask
enum class ECrowWorldEditorAsyncTask : uint8 {
	None,
	Working,
	TaskResult_Success,
	TaskResult_Fail,
	COLLECT_LoadNextLevel,
	COLLECT_CopyNextLevel,
	COLLECT_CollectGeneratedLevels,
	HLOD_LoadNextLevel,
	HLOD_UnloadPrevLevel,
	HLOD_WaitNextLevel,
	HLOD_BuildLODActor,
	ECrowWorldEditorAsyncTask_MAX,
};

// Enum CrowFPS.ECrowWorldSyncPropFlags
enum class ECrowWorldSyncPropFlags : uint8 {
	None,
	Destructible,
	BigSize,
	Simulation,
	ECrowWorldSyncPropFlags_MAX,
};

// Enum CrowFPS.ECrowWorldSyncActorType
enum class ECrowWorldSyncActorType : uint8 {
	Unknown,
	Building,
	BuildingProp,
	WorldProp,
	ECrowWorldSyncActorType_MAX,
};

// ScriptStruct CrowFPS.AnimNode_AimLocationGather
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_AimLocationGather : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FBoneReference BoneToFind; // 0x20(0x10)
};

// ScriptStruct CrowFPS.AnimNode_CarDashBoardHandler
// Size: 0x118 (Inherited: 0xc8)
struct FAnimNode_CarDashBoardHandler : FAnimNode_SkeletalControlBase {
	struct FCrowCarDashBoardHandlerAnimSetup SpeedAnimSetup; // 0xc8(0x0c)
	struct FCrowCarDashBoardHandlerAnimSetup RPMAnimSetup; // 0xd4(0x0c)
	struct FBoneReference SpeedBoneReference; // 0xe0(0x10)
	struct FBoneReference RPMBoneReference; // 0xf0(0x10)
	struct TArray<struct FBoneReference> BoneReferences; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)
};

// ScriptStruct CrowFPS.CrowCarDashBoardHandlerAnimSetup
// Size: 0x0c (Inherited: 0x00)
struct FCrowCarDashBoardHandlerAnimSetup {
	struct FName BoneName; // 0x00(0x08)
	float RotationMultiply; // 0x08(0x04)
};

// ScriptStruct CrowFPS.AnimNode_CarSteeringHandler
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_CarSteeringHandler : FAnimNode_SkeletalControlBase {
	struct FBoneReference SteeringBoneReference; // 0xc8(0x10)
	struct FRotator SteeringOriginRotation; // 0xd8(0x0c)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct CrowFPS.AnimNode_MachineGunHandler
// Size: 0xf0 (Inherited: 0xc8)
struct FAnimNode_MachineGunHandler : FAnimNode_SkeletalControlBase {
	struct TArray<struct FCrowMachineGunBoneInfo> BoneInfoArray; // 0xc8(0x10)
	struct UCrowWeaponCharacterAnimInst* WeaponCharacterAnimInst; // 0xd8(0x08)
	struct TArray<struct FBoneReference> BoneReferences; // 0xe0(0x10)
};

// ScriptStruct CrowFPS.CrowMachineGunBoneInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowMachineGunBoneInfo {
	int32_t LimitAmmoInClip; // 0x00(0x04)
	struct FName BoneName; // 0x04(0x08)
};

// ScriptStruct CrowFPS.AnimNode_RotorHandler
// Size: 0xe0 (Inherited: 0xc8)
struct FAnimNode_RotorHandler : FAnimNode_SkeletalControlBase {
	char pad_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct FRotorAnimData> RotorAnimDatas; // 0xd0(0x10)
};

// ScriptStruct CrowFPS.RotorAnimData
// Size: 0x14 (Inherited: 0x00)
struct FRotorAnimData {
	int32_t ProxyDataIndex; // 0x00(0x04)
	struct FBoneReference RotorBoneRefrence; // 0x04(0x10)
};

// ScriptStruct CrowFPS.AnimNode_VehicleWeaponHandler
// Size: 0x100 (Inherited: 0xc8)
struct FAnimNode_VehicleWeaponHandler : FAnimNode_SkeletalControlBase {
	struct FCrowVehicleWeaponHandlerAnimSetup AnimSetup; // 0xc8(0x18)
	struct TArray<struct FBoneReference> BoneReferences; // 0xe0(0x10)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// ScriptStruct CrowFPS.CrowVehicleWeaponHandlerAnimSetup
// Size: 0x18 (Inherited: 0x00)
struct FCrowVehicleWeaponHandlerAnimSetup {
	char SpringArmId; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneToModify; // 0x04(0x10)
	enum class ECrowVehicleWeaponAxis Axis; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CrowFPS.BitArrayUint32
// Size: 0x10 (Inherited: 0x00)
struct FBitArrayUint32 {
	struct TArray<uint32_t> FlagBlocks; // 0x00(0x10)
};

// ScriptStruct CrowFPS.ClassMapKey
// Size: 0x08 (Inherited: 0x00)
struct FClassMapKey {
	struct UObject* Class; // 0x00(0x08)
};

// ScriptStruct CrowFPS.CrowAimEvent
// Size: 0x18 (Inherited: 0x00)
struct FCrowAimEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CrowFPS.CrowAICharacterSpawnData
// Size: 0x48 (Inherited: 0x00)
struct FCrowAICharacterSpawnData {
	enum class ECrowTeamID TeamID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t TotalSpawnAICharacter; // 0x04(0x04)
	uint32_t MaxSpawnAICharacterSameTime; // 0x08(0x04)
	float SpawnTime; // 0x0c(0x04)
	struct ACrowAICharacterController* SpawnAIChatacterControllerTemplate; // 0x10(0x08)
	struct ACrowAICharacterPawn* SpawnAICharacterPawnTemplate; // 0x18(0x08)
	struct TArray<struct FCrowAICharacterData> SpawnAICharacterDataList; // 0x20(0x10)
	struct AUPSPatrolPoint* IntroPatrolPoint; // 0x30(0x08)
	struct ACrowAICharacterCoverPoint* IntroCoverPoint; // 0x38(0x08)
	struct AUPSPatrolPoint* InitialPatrolPoint; // 0x40(0x08)
};

// ScriptStruct CrowFPS.CrowAICharacterData
// Size: 0x60 (Inherited: 0x00)
struct FCrowAICharacterData {
	struct FString NickName; // 0x00(0x10)
	char FaceIndex; // 0x10(0x01)
	char HairIndex; // 0x11(0x01)
	char HairColorIndex; // 0x12(0x01)
	char BeardIndex; // 0x13(0x01)
	char BeardColorIndex; // 0x14(0x01)
	char EyeColorIndex; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct FCrowTestWeapon> WeaponItemList; // 0x18(0x10)
	struct TArray<struct FCrowItemData> EquipItemList; // 0x28(0x10)
	struct TArray<struct FCrowClothItemData> ClothItemList; // 0x38(0x10)
	struct TArray<uint32_t> TattooIndexList; // 0x48(0x10)
	enum class ECrowTeamID TeamID; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct CrowFPS.CrowClothItemData
// Size: 0x10 (Inherited: 0x00)
struct FCrowClothItemData {
	enum class ECrowClothPartsMesh ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	uint64_t ItemInvenNo; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowItemData
// Size: 0x30 (Inherited: 0x00)
struct FCrowItemData {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ECrowItemType ItemType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t ItemIndex; // 0x0c(0x04)
	uint32_t ItemCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t ItemInvenNo; // 0x18(0x08)
	char ItemState; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t ItemCost; // 0x24(0x04)
	char ItemTeamID; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CrowFPS.CrowTestWeapon
// Size: 0x40 (Inherited: 0x00)
struct FCrowTestWeapon {
	uint32_t WeaponIndex; // 0x00(0x04)
	uint32_t SkinIndex; // 0x04(0x04)
	uint32_t PartsBarrel; // 0x08(0x04)
	uint32_t PartsMagazine; // 0x0c(0x04)
	uint32_t PartsMuzzle; // 0x10(0x04)
	uint32_t PartsPistolGrip; // 0x14(0x04)
	uint32_t PartsPrimarySight; // 0x18(0x04)
	uint32_t PartsSecondarySight; // 0x1c(0x04)
	uint32_t PartsSideBarrel; // 0x20(0x04)
	uint32_t PartsStock; // 0x24(0x04)
	uint32_t PartsUnderBarrel; // 0x28(0x04)
	uint32_t CharmIndex; // 0x2c(0x04)
	struct TArray<int32_t> StickerIndex; // 0x30(0x10)
};

// ScriptStruct CrowFPS.CrowAIFireTargetData
// Size: 0x18 (Inherited: 0x00)
struct FCrowAIFireTargetData {
	struct TArray<struct FCrowAIFireTargetPart> RifleFireTagetPartList; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowAIFireTargetPart
// Size: 0x0c (Inherited: 0x00)
struct FCrowAIFireTargetPart {
	enum class ECrowCharacterFireTargetPart TargetPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TargetPartRadius; // 0x04(0x04)
	uint32_t RandomRate; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowAICharacterParameter
// Size: 0x20 (Inherited: 0x00)
struct FCrowAICharacterParameter {
	float SightRadius; // 0x00(0x04)
	float LoseSightRadius; // 0x04(0x04)
	float LoseSightRadiusTime; // 0x08(0x04)
	float IgnoreSightDegreesRadius; // 0x0c(0x04)
	float FindCoverPointRadius; // 0x10(0x04)
	float IgnoreCoverPointDistanceFromAIBot; // 0x14(0x04)
	float IgnoreCoverPointDistanceFromTarget; // 0x18(0x04)
	float DamageNotifyRadius; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowTeamPawnPair
// Size: 0x10 (Inherited: 0x00)
struct FCrowTeamPawnPair {
	char TeamID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ACrowCharacterBase* CharacterPawn; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowItemTableBaseRow
// Size: 0x168 (Inherited: 0x08)
struct FCrowItemTableBaseRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString TextIndex; // 0x10(0x10)
	struct FText Name; // 0x20(0x18)
	struct FText ItemTypeName; // 0x38(0x18)
	struct FText Description; // 0x50(0x18)
	struct FText ItemInfoWidgetDesc; // 0x68(0x18)
	bool bIsHidden; // 0x80(0x01)
	enum class ECrowItemGrade ItemGrade; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct UPaperSprite* DefaultIcon; // 0x88(0x08)
	struct UPaperSprite* PictogramIcon; // 0x90(0x08)
	uint32_t MaxStackCount; // 0x98(0x04)
	char InventorySortOrder; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	uint32_t MaxInvenItemCount; // 0xa0(0x04)
	bool ItemDeleteCheck; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float ItemDeleteTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FCrowGameIconDisplayInfo IconDisplayInfo; // 0xb0(0x88)
	struct UAkAudioEvent* PingSound; // 0x138(0x08)
	float MeshBoundsScale; // 0x140(0x04)
	bool CalcBoundsOnDedicatedServer; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct UAkAudioEvent* DragStartSound; // 0x148(0x08)
	struct UAkAudioEvent* EquipSound; // 0x150(0x08)
	struct UAkAudioEvent* AddInvenSound; // 0x158(0x08)
	struct UAkAudioEvent* DropItemSound; // 0x160(0x08)
};

// ScriptStruct CrowFPS.CrowGameIconDisplayInfo
// Size: 0x88 (Inherited: 0x00)
struct FCrowGameIconDisplayInfo {
	enum class ECrowIconType IconType; // 0x00(0x04)
	bool bIsEnableWorldMap; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UCrowWidgetBase* WorldMapIconClass; // 0x08(0x08)
	float WorldMapIconScale; // 0x10(0x04)
	bool WorldMapDisplayName; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float DisplayMapIconDistance; // 0x18(0x04)
	bool IsEnableScale; // 0x1c(0x01)
	bool bIsEnableIndicator; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct UCrowWidgetBase* IndicatorIconClass; // 0x20(0x08)
	float IndicatorIconScale; // 0x28(0x04)
	float IndicatorHeightOffset; // 0x2c(0x04)
	bool LockIndicatorInScreen; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DisplaySymbolMinDistance; // 0x34(0x04)
	float DisplaySymbolDistance; // 0x38(0x04)
	float DisplayNameMinDistance; // 0x3c(0x04)
	float DisplayNameDistance; // 0x40(0x04)
	float DisplayDistanceMinDistance; // 0x44(0x04)
	float DisplayDistanceDistance; // 0x48(0x04)
	float DisplayDistanceDecimalPoint; // 0x4c(0x04)
	float ScaleMin; // 0x50(0x04)
	float ScaleMax; // 0x54(0x04)
	float ScaleMinDistance; // 0x58(0x04)
	float ScaleMaxDistance; // 0x5c(0x04)
	float AlphaMin; // 0x60(0x04)
	float AlphaMax; // 0x64(0x04)
	float AlphaMinDistance; // 0x68(0x04)
	float AlphaMaxDistance; // 0x6c(0x04)
	float IconChangeMinDistance; // 0x70(0x04)
	float IconCenterAlpha; // 0x74(0x04)
	float ScanTargetDistance; // 0x78(0x04)
	enum class ECrowPingType IconPingType; // 0x7c(0x01)
	bool LockRotateMiniMap; // 0x7d(0x01)
	char pad_7E[0xa]; // 0x7e(0x0a)
};

// ScriptStruct CrowFPS.CrowAmmoTableRow
// Size: 0x220 (Inherited: 0x168)
struct FCrowAmmoTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowAmmoType AmmoType; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString EffectKey; // 0x180(0x10)
	enum class ECrowAmmoFireType AmmoFireType; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	uint32_t DropItemCount; // 0x194(0x04)
	struct FSoftObjectPath Mesh3P; // 0x198(0x18)
	struct UDamageType* DamegeType; // 0x1b0(0x08)
	struct ACrowProjectileBase* ProjectileActor; // 0x1b8(0x08)
	struct TMap<struct FString, struct ACrowProjectileBase*> ProjectileActorOverride; // 0x1c0(0x50)
	struct ACrowProjectileShell* ShellClass; // 0x210(0x08)
	struct ACrowFoliageAffectorActor* ExplosionFoliageAffector; // 0x218(0x08)
};

// ScriptStruct CrowFPS.CrowArmorTableRow
// Size: 0x1b8 (Inherited: 0x168)
struct FCrowArmorTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowArmorType ArmorType; // 0x178(0x04)
	int32_t ArmorTier; // 0x17c(0x04)
	struct FSoftObjectPath Mesh3P; // 0x180(0x18)
	float HP; // 0x198(0x04)
	float Reduction; // 0x19c(0x04)
	bool Head; // 0x1a0(0x01)
	bool neck_01; // 0x1a1(0x01)
	bool clavicle_l; // 0x1a2(0x01)
	bool clavicle_r; // 0x1a3(0x01)
	bool spine_01; // 0x1a4(0x01)
	bool spine_02; // 0x1a5(0x01)
	bool spine_03; // 0x1a6(0x01)
	bool upperarm_l; // 0x1a7(0x01)
	bool upperarm_r; // 0x1a8(0x01)
	bool lowerarm_l; // 0x1a9(0x01)
	bool lowerarm_r; // 0x1aa(0x01)
	bool hand_l; // 0x1ab(0x01)
	bool hand_r; // 0x1ac(0x01)
	bool Pelvis; // 0x1ad(0x01)
	bool thigh_l; // 0x1ae(0x01)
	bool thigh_r; // 0x1af(0x01)
	bool calf_l; // 0x1b0(0x01)
	bool calf_r; // 0x1b1(0x01)
	bool foot_l; // 0x1b2(0x01)
	bool foot_r; // 0x1b3(0x01)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct CrowFPS.CrowBattleContainer
// Size: 0x20 (Inherited: 0x00)
struct FCrowBattleContainer {
	struct UCrowBattleShape* BattleShape; // 0x00(0x08)
	struct UCrowBattleStatus* BattleStatus; // 0x08(0x08)
	struct UCrowBattleIdentity* BattleIdentity; // 0x10(0x08)
	struct UCrowBattleDamageHandlerBase* BattleDamageHandler; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowBattlePassPackageData
// Size: 0x50 (Inherited: 0x00)
struct FCrowBattlePassPackageData {
	struct TMap<struct FName, struct FCrowBattlePassPackageTableRow> PackageTableRows; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowBattlePassPackageTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowBattlePassPackageTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct FString SeasonIndex; // 0x18(0x10)
	char FreePayType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t NeededLevel; // 0x2a(0x02)
	uint32_t RewardIndex; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowBattlePassLevelInfoTableRow
// Size: 0x10 (Inherited: 0x08)
struct FCrowBattlePassLevelInfoTableRow : FTableRowBase {
	uint32_t RequiredTotalExp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowBattlePassFreePassCostTableRow
// Size: 0x10 (Inherited: 0x08)
struct FCrowBattlePassFreePassCostTableRow : FTableRowBase {
	uint32_t RCPCost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowBattlePassSeasonTableRow
// Size: 0x58 (Inherited: 0x08)
struct FCrowBattlePassSeasonTableRow : FTableRowBase {
	struct FString HelpIndex; // 0x08(0x10)
	char Seaoson; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText SeasonText; // 0x20(0x18)
	struct FString SeasonStartTime; // 0x38(0x10)
	struct FString SeasonEndTime; // 0x48(0x10)
};

// ScriptStruct CrowFPS.CrowBombingTableRow
// Size: 0x98 (Inherited: 0x08)
struct FCrowBombingTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct AActor* ProjectileActor; // 0x18(0x08)
	struct AActor* ExplosionFXActor; // 0x20(0x08)
	struct AActor* BombingTargetActor; // 0x28(0x08)
	int32_t AuthItemKeyIndex; // 0x30(0x04)
	int32_t Cost_Point; // 0x34(0x04)
	float BombingRadius; // 0x38(0x04)
	int32_t BombingDelayTime; // 0x3c(0x04)
	int32_t BombAmount; // 0x40(0x04)
	float SpawnIntervalTimeMin; // 0x44(0x04)
	float SpawnIntervalTimeMax; // 0x48(0x04)
	float MinRadius; // 0x4c(0x04)
	float MaxRadius; // 0x50(0x04)
	float MinDamege; // 0x54(0x04)
	float MaxDamege; // 0x58(0x04)
	float BombMinDistacne; // 0x5c(0x04)
	float BombingSpawnHeight; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UAkAudioEvent* ExplosionSound; // 0x68(0x08)
	struct UMatineeCameraShake* CameraShake; // 0x70(0x08)
	float CameraShakeMinDistance; // 0x78(0x04)
	float CameraShakeMaxDistance; // 0x7c(0x04)
	int32_t Cost_Mineral; // 0x80(0x04)
	float ProjectileSpeed; // 0x84(0x04)
	float Falloff; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UDamageType* DamegeType; // 0x90(0x08)
};

// ScriptStruct CrowFPS.CrowBombMissionScoreListItemData
// Size: 0x28 (Inherited: 0x00)
struct FCrowBombMissionScoreListItemData {
	char LocalTeamID; // 0x00(0x01)
	char TeamID; // 0x01(0x01)
	char AttackerTeamID; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString PlayerNickName; // 0x08(0x10)
	bool bIsLocalPlayer; // 0x18(0x01)
	bool bIsDeath; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	uint32_t Score; // 0x1c(0x04)
	char KillCount; // 0x20(0x01)
	char DeathCount; // 0x21(0x01)
	char PlantCompositionCCount; // 0x22(0x01)
	char DefuseCompositionCCount; // 0x23(0x01)
	bool bIsCompositionCHolder; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct CrowFPS.CrowBombMissionTeamScoreData
// Size: 0x10 (Inherited: 0x00)
struct FCrowBombMissionTeamScoreData {
	char TeamID; // 0x00(0x01)
	char AttackerTeamID; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t TotalRoundCount; // 0x04(0x04)
	uint32_t WinRoundCount; // 0x08(0x04)
	uint32_t TotalScore; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowBuffTableRow
// Size: 0x190 (Inherited: 0x168)
struct FCrowBuffTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowBuffEventType BuffEventType; // 0x178(0x01)
	enum class ECrowBuffType BuffType; // 0x179(0x01)
	enum class ECrowWeaponUIType WeaponUIType; // 0x17a(0x01)
	enum class ECrowBuffValueType BuffValueType; // 0x17b(0x01)
	int32_t BuffIntValue; // 0x17c(0x04)
	float BuffFloatValue; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	int64_t DurationTime; // 0x188(0x08)
};

// ScriptStruct CrowFPS.CrowBuffIconInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuffIconInfo {
	uint32_t BuffIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCrowButton* BuffButton; // 0x08(0x08)
	struct UImage* BuffImage; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingReflectionData
// Size: 0x50 (Inherited: 0x00)
struct FCrowBuildingReflectionData {
	struct FTransform RelativeTransform; // 0x00(0x30)
	struct FVector CaptureOffset; // 0x30(0x0c)
	float InfluenceRadius; // 0x3c(0x04)
	char SourceType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Brightness; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingDecalData
// Size: 0x50 (Inherited: 0x00)
struct FCrowBuildingDecalData {
	struct FTransform RelativeTransform; // 0x00(0x30)
	int32_t SortOrder; // 0x30(0x04)
	struct FVector DecalSize; // 0x34(0x0c)
	struct UMaterialInterface* DecalMaterial; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingCustomLOD
// Size: 0x78 (Inherited: 0x00)
struct FCrowBuildingCustomLOD {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct UStaticMesh* ExtraMesh; // 0x08(0x08)
	bool SkipExtraMesh; // 0x10(0x01)
	bool ShowLODBodyAsExtra; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x18(0x10)
	struct TMap<int16_t, int16_t> LODParts; // 0x28(0x50)
};

// ScriptStruct CrowFPS.CrowBuildingCustomLODParts
// Size: 0x04 (Inherited: 0x00)
struct FCrowBuildingCustomLODParts {
	int16_t PartsIndex; // 0x00(0x02)
	int16_t LODLevel; // 0x02(0x02)
};

// ScriptStruct CrowFPS.CrowBuildingInitialReplication
// Size: 0x38 (Inherited: 0x00)
struct FCrowBuildingInitialReplication {
	struct FBitArrayUint32 LayoutDestroyedFlags; // 0x00(0x10)
	struct FMultiBitArrayUint32 LayoutDynamicStates; // 0x10(0x20)
	uint16_t DestructibleCount; // 0x30(0x02)
	uint16_t DynamicStateCount; // 0x32(0x02)
	char IsFullyDestroyed; // 0x34(0x01)
	char IsValid; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct CrowFPS.MultiBitArrayUint32
// Size: 0x20 (Inherited: 0x00)
struct FMultiBitArrayUint32 {
	struct TArray<uint32_t> ValueBlocks; // 0x00(0x10)
	int16_t MaxValueCount; // 0x10(0x02)
	int8_t BitPerValue; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	uint64_t ValueMask; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingPartsState
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuildingPartsState {
	char IsValidParts : 1; // 0x00(0x01)
	char IsDestroyedParts : 1; // 0x00(0x01)
	char CanReceiveDamage : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char PartsStateValue; // 0x01(0x01)
	char PartsProperty; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct FCrowBuildingPartsElement> Elements; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingPartsElement
// Size: 0x14 (Inherited: 0x00)
struct FCrowBuildingPartsElement {
	float CurrentHP; // 0x00(0x04)
	char CanReceiveDamage : 1; // 0x04(0x01)
	char IsDestructible : 1; // 0x04(0x01)
	char HasInteraction : 1; // 0x04(0x01)
	char pad_4_3 : 5; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t HISMCInfoIndex; // 0x08(0x04)
	int32_t RemainsHISMCInfoIndex; // 0x0c(0x04)
	enum class EPhysicalSurface SurfaceType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CrowFPS.CrowBuildingHISMCInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuildingHISMCInfo {
	int16_t PartsIndex; // 0x00(0x02)
	int8_t ElementIndex; // 0x02(0x01)
	char IsDestructible : 1; // 0x03(0x01)
	char HasInteraction : 1; // 0x03(0x01)
	char IsRemains : 1; // 0x03(0x01)
	char IsVisible : 1; // 0x03(0x01)
	char pad_3_4 : 4; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCrowBuildingHISMCKey HISMCKey; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingHISMCKey
// Size: 0x10 (Inherited: 0x00)
struct FCrowBuildingHISMCKey {
	struct UCrowBuildingSMC* SMC; // 0x00(0x08)
	struct UStaticMeshComponent* DecalReceiver; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingDemolitionSetting
// Size: 0x70 (Inherited: 0x00)
struct FCrowBuildingDemolitionSetting {
	struct UStaticMesh* RemainBodyMesh; // 0x00(0x08)
	struct USkeletalMesh* DemolitionMesh; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> RemainMeshMaterials; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DemolitionMeshMaterials; // 0x20(0x10)
	struct FName DemolitionRootBoneName; // 0x30(0x08)
	struct FName HideRootBoneName; // 0x38(0x08)
	struct FVector ImpulseOffset; // 0x40(0x0c)
	float ImpulseRadius; // 0x4c(0x04)
	float ImpulseStrengthMin; // 0x50(0x04)
	float ImpulseStrengthMax; // 0x54(0x04)
	bool UseVelChange; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Duration; // 0x5c(0x04)
	struct UStaticMesh* BasePartsMesh; // 0x60(0x08)
	struct UAkAudioEvent* SoundAsset; // 0x68(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingActorEditor
// Size: 0x08 (Inherited: 0x00)
struct FCrowBuildingActorEditor {
	struct ACrowBuildingActor* BuildingActor; // 0x00(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingDynamicParts
// Size: 0x120 (Inherited: 0x08)
struct FCrowBuildingDynamicParts : FTableRowBase {
	struct FCrowBuildingDynamicPartsAsset Asset; // 0x08(0x18)
	struct FCrowBuildingDynamicPartsDestruction Destruction; // 0x20(0x70)
	struct FCrowBuildingDynamicPartsAnim AnimOpen; // 0x90(0x30)
	struct FCrowBuildingDynamicPartsAnim AnimClose; // 0xc0(0x30)
	struct FCrowBuildingDynamicPartsAnim AnimBlocked; // 0xf0(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingDynamicPartsAnim
// Size: 0x30 (Inherited: 0x00)
struct FCrowBuildingDynamicPartsAnim {
	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* AnimationCurve; // 0x08(0x08)
	struct UAkAudioEvent* Sound; // 0x10(0x08)
	bool HasQuickAction; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DurationQuick; // 0x1c(0x04)
	struct UCurveFloat* AnimationCurveQuick; // 0x20(0x08)
	struct UAkAudioEvent* SoundQuick; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingDynamicPartsDestruction
// Size: 0x70 (Inherited: 0x00)
struct FCrowBuildingDynamicPartsDestruction {
	bool NoDestruction; // 0x00(0x01)
	bool HideWhileBuildingDemolition; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UPhysicalMaterial* DamageCalculationMaterial; // 0x08(0x08)
	bool UseMeshPivotForVFX; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UParticleSystem* DestructionVFX; // 0x18(0x08)
	struct UAkAudioEvent* DestructionSFX; // 0x20(0x08)
	bool UseDestructibleMesh; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UDestructibleMesh* DestructibleMeshAsset; // 0x30(0x08)
	float ImpulseMin; // 0x38(0x04)
	float ImpulseMax; // 0x3c(0x04)
	bool UseDamagedMesh; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UStaticMesh*> DamagedMeshes; // 0x48(0x10)
	float DamagedMeshMassOverride; // 0x58(0x04)
	float ImpulseMinDamagedMesh; // 0x5c(0x04)
	float ImpulseMaxDamagedMesh; // 0x60(0x04)
	float BlockInteractionDuration; // 0x64(0x04)
	uint32_t DestructionFlags; // 0x68(0x04)
	float MaxHP; // 0x6c(0x04)
};

// ScriptStruct CrowFPS.CrowBuildingDynamicPartsAsset
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuildingDynamicPartsAsset {
	struct UStaticMesh* SourceMesh; // 0x00(0x08)
	struct UStaticMesh* RemainMesh; // 0x08(0x08)
	struct UStaticMesh* TriggerMesh; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingEditorSubMesh
// Size: 0x20 (Inherited: 0x00)
struct FCrowBuildingEditorSubMesh {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	struct FName AttachSocketName; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingGeneratedParts
// Size: 0x60 (Inherited: 0x00)
struct FCrowBuildingGeneratedParts {
	char IsValidParts : 1; // 0x00(0x01)
	char IsSubMeshParts : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char PartsProperty; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t ParentPartsIndex; // 0x04(0x04)
	struct TArray<struct FCrowBuildingHISMCKey> HISMCKeys; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
	struct TArray<struct FCrowBuildingSubMesh> SubMeshes; // 0x50(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingSubMesh
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingSubMesh {
	int32_t SubMeshPartsIndex; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingEditorLayout
// Size: 0x50 (Inherited: 0x00)
struct FCrowBuildingEditorLayout {
	struct TArray<struct FCrowBuildingEditorPartsData> DataArray; // 0x00(0x10)
	struct TArray<struct FCrowBuildingEditorPropData> PropArray; // 0x10(0x10)
	struct TArray<struct FCrowBuildingEditorItemSpawnerData> ItemSpawnerArray; // 0x20(0x10)
	struct TArray<struct FCrowBuildingPartsOverride> PartsOverrides; // 0x30(0x10)
	struct TArray<struct FCrowBuildingEditorMeshData> SubMeshArray; // 0x40(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingEditorMeshData
// Size: 0x60 (Inherited: 0x00)
struct FCrowBuildingEditorMeshData {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform RelativeTransform; // 0x20(0x30)
	int32_t ParentPartsIndex; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct CrowFPS.CrowBuildingPartsOverride
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingPartsOverride {
	int16_t PartsIndex; // 0x00(0x02)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingEditorItemSpawnerData
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingEditorItemSpawnerData {
	struct ACrowItemSpawner* ItemSpawnerAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingEditorPropData
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingEditorPropData {
	struct ACrowWorldPropActor* PropAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingEditorPartsData
// Size: 0x70 (Inherited: 0x00)
struct FCrowBuildingEditorPartsData {
	struct ACrowBuildingEditorPartsActor* PartsAsset; // 0x00(0x08)
	struct FCrowBuildingEditorMeshAsset MeshAsset; // 0x08(0x18)
	struct FTransform RelativeTransform; // 0x20(0x30)
	struct TArray<struct FCrowBuildingEditorMeshAsset> PartsMeshOverrides; // 0x50(0x10)
	struct TArray<struct FCrowBuildingEditorMeshAsset> SubMeshOverrides; // 0x60(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingEditorMeshAsset
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuildingEditorMeshAsset {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingLODTableRowInfo
// Size: 0x06 (Inherited: 0x00)
struct FCrowBuildingLODTableRowInfo {
	int16_t LODLevel; // 0x00(0x02)
	enum class ECrowBuildingPartsLODType LODType; // 0x02(0x01)
	bool AlwaysHiddenInGame; // 0x03(0x01)
	bool AlwaysUseStaticMesh; // 0x04(0x01)
	bool AlwaysUseISMC; // 0x05(0x01)
};

// ScriptStruct CrowFPS.CrowBuildingEditorDefaultLOD
// Size: 0x30 (Inherited: 0x08)
struct FCrowBuildingEditorDefaultLOD : FTableRowBase {
	int16_t LODLevel; // 0x08(0x02)
	enum class ECrowBuildingPartsLODType LODType; // 0x0a(0x01)
	bool AlwaysHiddenInGame; // 0x0b(0x01)
	bool AlwaysUseStaticMesh; // 0x0c(0x01)
	bool AlwaysUseISMC; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> Meshes; // 0x10(0x10)
	struct TArray<struct TSoftObjectPtr<struct UBlueprint>> BuildingParts; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingEditorSupport
// Size: 0x28 (Inherited: 0x08)
struct FCrowBuildingEditorSupport : FTableRowBase {
	struct TArray<struct FCrowBuildingEditorMeshAsset> BuildingMeshes; // 0x08(0x10)
	struct TArray<struct ACrowBuildingEditorPartsActor*> BuildingParts; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingHISMCDetail
// Size: 0x68 (Inherited: 0x00)
struct FCrowBuildingHISMCDetail {
	char bIsDestructible : 1; // 0x00(0x01)
	char bHasInteraction : 1; // 0x00(0x01)
	char bHasDoorSlide : 1; // 0x00(0x01)
	char bHasDoorHinge1 : 1; // 0x00(0x01)
	char bHasDoorHinge2 : 1; // 0x00(0x01)
	char bIsGlassMaterial : 1; // 0x00(0x01)
	char bIsTranslucent : 1; // 0x00(0x01)
	char bIsNoDecal : 1; // 0x00(0x01)
	char bIsCharacterInteraction : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char DestructionType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MassOverride; // 0x04(0x04)
	struct FVector SlideDistance; // 0x08(0x0c)
	struct FVector HingeLocation1; // 0x14(0x0c)
	struct FRotator HingeRotator1; // 0x20(0x0c)
	struct FVector HingeLocation2; // 0x2c(0x0c)
	struct FRotator HingeRotator2; // 0x38(0x0c)
	struct FVector BoundingBoxCenter; // 0x44(0x0c)
	struct FVector DestructibleSocket; // 0x50(0x0c)
	char pad_5C[0xc]; // 0x5c(0x0c)
};

// ScriptStruct CrowFPS.CrowBuildingPartsInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingPartsInfo {
	struct ACrowBuildingActor* BuildingActor; // 0x00(0x08)
	int16_t IndexInHISMCKeyArray; // 0x08(0x02)
	int16_t PartsIndexInLayout; // 0x0a(0x02)
	int8_t PartsSubMeshIndex; // 0x0c(0x01)
	char Hidden; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowBuildingModularItem
// Size: 0x40 (Inherited: 0x00)
struct FCrowBuildingModularItem {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct FCrowBuildingModularItemMaterial StaticMeshMaterials; // 0x08(0x10)
	struct TArray<struct UStaticMesh*> OptionalMeshes; // 0x18(0x10)
	struct TArray<struct FCrowBuildingModularItemMaterial> OptionalMeshesMaterials; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct CrowFPS.CrowBuildingModularItemMaterial
// Size: 0x10 (Inherited: 0x00)
struct FCrowBuildingModularItemMaterial {
	struct TArray<struct UMaterialInterface*> StyleMaterials; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingModularItemHandlers
// Size: 0x01 (Inherited: 0x00)
struct FCrowBuildingModularItemHandlers {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowFPS.ModularHandlerParam
// Size: 0x50 (Inherited: 0x00)
struct FModularHandlerParam {
	struct AActor* TargetActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FCrowBuildingPartsInfo PartsInfo; // 0x10(0x40)
};

// ScriptStruct CrowFPS.CrowBuildingSyncData
// Size: 0x68 (Inherited: 0x08)
struct FCrowBuildingSyncData : FTableRowBase {
	struct TArray<struct FCrowWorldSyncClassLink> CollectionSyncClassLink; // 0x08(0x10)
	struct TArray<struct FCrowWorldSyncAreaLink> CollectionSyncAreaLink; // 0x18(0x10)
	struct TArray<struct FCrowWorldSyncNodeLink> CollectionSyncNodeLink; // 0x28(0x10)
	struct TArray<struct FCrowWorldSyncBuildingLink> CollectionBuildingLink; // 0x38(0x10)
	struct TArray<struct FCrowWorldSyncBuildingPropLink> CollectionBuildingPropLink; // 0x48(0x10)
	struct TArray<struct FCrowWorldSyncWorldPropLink> CollectionWorldPropLink; // 0x58(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncWorldPropLink
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldSyncWorldPropLink {
	int32_t WorldPropIndex; // 0x00(0x04)
	int32_t WorldPropClassIndex; // 0x04(0x04)
	int32_t ParentSyncNodeIndex; // 0x08(0x04)
	int32_t LocalIndexInSyncNode; // 0x0c(0x04)
	uint32_t PropFlags; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform InitialTransform; // 0x20(0x30)
};

// ScriptStruct CrowFPS.CrowWorldSyncBuildingPropLink
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldSyncBuildingPropLink {
	int32_t BuildingPropIndex; // 0x00(0x04)
	int32_t BuildingPropClassIndex; // 0x04(0x04)
	int32_t ParentBuildingIndex; // 0x08(0x04)
	int32_t LocalIndexInBuilding; // 0x0c(0x04)
	uint32_t PropFlags; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform InitialTransform; // 0x20(0x30)
};

// ScriptStruct CrowFPS.CrowWorldSyncBuildingLink
// Size: 0x90 (Inherited: 0x00)
struct FCrowWorldSyncBuildingLink {
	int32_t BuildingIndex; // 0x00(0x04)
	int32_t BuildingClassIndex; // 0x04(0x04)
	int32_t ParentSyncNodeIndex; // 0x08(0x04)
	int32_t LocalIndexInSyncNode; // 0x0c(0x04)
	int32_t ParentSyncAreaIndex; // 0x10(0x04)
	int32_t LocalIndexInSyncArea; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform InitialTransform; // 0x20(0x30)
	struct TArray<int32_t> BuildingStaticPropIndexes; // 0x50(0x10)
	struct TArray<int32_t> BuildingDynamicPropIndexes; // 0x60(0x10)
	struct TArray<int32_t> BuildingItemSpawnerIndexes; // 0x70(0x10)
	struct TArray<struct FCrowWorldSyncPartsOverride> BuildingPartsOverrides; // 0x80(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncPartsOverride
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldSyncPartsOverride {
	int16_t PartsIndex; // 0x00(0x02)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowWorldSyncNodeLink
// Size: 0x38 (Inherited: 0x00)
struct FCrowWorldSyncNodeLink {
	int32_t SyncNodeIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> BuildingIndexes; // 0x08(0x10)
	struct TArray<int32_t> WorldPropIndexes; // 0x18(0x10)
	struct TArray<int32_t> WorldDynamicPropIndexes; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncAreaLink
// Size: 0x38 (Inherited: 0x00)
struct FCrowWorldSyncAreaLink {
	int32_t SyncAreaIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> BuildingIndexes; // 0x08(0x10)
	struct TArray<int32_t> WorldPropIndexes; // 0x18(0x10)
	struct TArray<int32_t> WorldDynamicPropIndexes; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncClassLink
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSyncClassLink {
	int32_t ClassIndex; // 0x00(0x04)
	int32_t InstanceCount; // 0x04(0x04)
	uint32_t PropFlags; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ClassFullPath; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingVisualizer
// Size: 0x58 (Inherited: 0x00)
struct FCrowBuildingVisualizer {
	struct ACrowBuildingActor* BuildingActor; // 0x00(0x08)
	struct UCrowBuildingModularBuilder* ModularBuilder; // 0x08(0x08)
	struct TWeakObjectPtr<struct ACrowWorldSyncHubActor> SyncHubActor; // 0x10(0x08)
	struct TArray<struct UCrowBuildingSMC*> EditorSMCList; // 0x18(0x10)
	struct TWeakObjectPtr<struct UStaticMeshComponent> LODBody; // 0x28(0x08)
	struct TWeakObjectPtr<struct UStaticMeshComponent> LODExtra; // 0x30(0x08)
	int32_t CurrentLODLevel; // 0x38(0x04)
	enum class ECrowBuildingLODState LODState; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FBitArrayUint32> LODShowFlags; // 0x40(0x10)
	struct FCrowBuildingEditorPreview PreviewSetting; // 0x50(0x03)
	char IsInitialized : 1; // 0x53(0x01)
	char IsGameWorld : 1; // 0x53(0x01)
	char IsGameShowingLODBody : 1; // 0x53(0x01)
	char IsGameShowingLODExtra : 1; // 0x53(0x01)
	char IsEditorShowingBodyCandidates : 1; // 0x53(0x01)
	char IsEditorShowingExtraCandidates : 1; // 0x53(0x01)
	char pad_53_6 : 2; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct CrowFPS.CrowBuildingEditorPreview
// Size: 0x03 (Inherited: 0x00)
struct FCrowBuildingEditorPreview {
	bool UsePreview; // 0x00(0x01)
	enum class ECrowBuildingEditorShowType ShowType; // 0x01(0x01)
	enum class ECrowBuildingEditorShowLOD ShowLOD; // 0x02(0x01)
};

// ScriptStruct CrowFPS.CrowCarAnimInstanceProxy
// Size: 0x790 (Inherited: 0x770)
struct FCrowCarAnimInstanceProxy : FCrowLandWheelsAnimInstanceProxy {
	char pad_770[0x18]; // 0x770(0x18)
	struct UCrowCarAnimInstance* AnimInstance; // 0x788(0x08)
};

// ScriptStruct CrowFPS.CrowCarWeaponAnimData
// Size: 0x01 (Inherited: 0x00)
struct FCrowCarWeaponAnimData {
	char SpringArmId; // 0x00(0x01)
};

// ScriptStruct CrowFPS.CharacterAnimRow
// Size: 0x30 (Inherited: 0x08)
struct FCharacterAnimRow : FTableRowBase {
	struct UAnimMontage* AnimMesh3P; // 0x08(0x08)
	struct UAnimMontage* AnimMesh1PLowBody; // 0x10(0x08)
	struct UAnimMontage* AnimMesh1PArm; // 0x18(0x08)
	struct USoundCue* SoundFx; // 0x20(0x08)
	char bIsBeginRagdoll; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float RagdollBlendDuration; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterAnimProxy
// Size: 0xb10 (Inherited: 0x760)
struct FCrowCharacterAnimProxy : FAnimInstanceProxy {
	struct TMap<int32_t, struct FName> GroundNotMovingStates; // 0x760(0x50)
	struct TMap<int32_t, struct FName> GroundMainStates; // 0x7b0(0x50)
	struct TMap<int32_t, struct FName> GroundWeaponStates; // 0x800(0x50)
	struct TMap<int32_t, struct FName> VehicleWeaponStates; // 0x850(0x50)
	char pad_8A0[0x260]; // 0x8a0(0x260)
	struct UCrowCharacterAnimInst* AnimInstance; // 0xb00(0x08)
	char pad_B08[0x8]; // 0xb08(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimProxyBase
// Size: 0x770 (Inherited: 0x760)
struct FCrowCharacterAnimProxyBase : FAnimInstanceProxy {
	char pad_760[0x10]; // 0x760(0x10)
};

// ScriptStruct CrowFPS.CrowCharacterDeathAnimByDirection
// Size: 0x50 (Inherited: 0x00)
struct FCrowCharacterDeathAnimByDirection {
	struct TMap<enum class ECrowCharacterHitDirection, struct UAnimMontage*> Montages; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowCharacterMontageDepends
// Size: 0x50 (Inherited: 0x00)
struct FCrowCharacterMontageDepends {
	struct UAnimMontage* MontageStandToCrouch; // 0x00(0x08)
	struct UAnimMontage* MontageStandToProne; // 0x08(0x08)
	struct UAnimMontage* MontageCrouchToStand; // 0x10(0x08)
	struct UAnimMontage* MontageCrouchToProne; // 0x18(0x08)
	struct UAnimMontage* MontageProneToStand; // 0x20(0x08)
	struct UAnimMontage* MontageProneToCrouch; // 0x28(0x08)
	struct UAnimMontage* MontageStandTurnLeft; // 0x30(0x08)
	struct UAnimMontage* MontageStandTurnRight; // 0x38(0x08)
	struct UAnimMontage* MontageCrouchTurnLeft; // 0x40(0x08)
	struct UAnimMontage* MontageCrouchTurnRight; // 0x48(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAimOffsetVehicle
// Size: 0x58 (Inherited: 0x00)
struct FCrowCharacterAimOffsetVehicle {
	struct UAimOffsetBlendSpace* AimOffsetIdle; // 0x00(0x08)
	struct TMap<enum class ECrowWeaponSubType, struct UAimOffsetBlendSpace*> AimOffsetPrivateWeapon; // 0x08(0x50)
};

// ScriptStruct CrowFPS.CrowCharacterAimOffsetDepends
// Size: 0x50 (Inherited: 0x00)
struct FCrowCharacterAimOffsetDepends {
	struct UAimOffsetBlendSpace* AimOffsetStand; // 0x00(0x08)
	struct UAimOffsetBlendSpace* AimOffsetCrouch; // 0x08(0x08)
	struct UAimOffsetBlendSpace* AimOffsetProne; // 0x10(0x08)
	struct UAimOffsetBlendSpace* AimOffsetStandNonBattle; // 0x18(0x08)
	struct UAimOffsetBlendSpace* AimOffsetStandPeekL; // 0x20(0x08)
	struct UAimOffsetBlendSpace* AimOffsetStandPeekR; // 0x28(0x08)
	struct UAimOffsetBlendSpace* AimOffsetCrouchPeekL; // 0x30(0x08)
	struct UAimOffsetBlendSpace* AimOffsetCrouchPeekR; // 0x38(0x08)
	struct UAimOffsetBlendSpace* AimOffsetPronePeekL; // 0x40(0x08)
	struct UAimOffsetBlendSpace* AimOffsetPronePeekR; // 0x48(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimProxyFP
// Size: 0xb10 (Inherited: 0xb10)
struct FCrowCharacterAnimProxyFP : FCrowCharacterAnimProxy {
};

// ScriptStruct CrowFPS.CrowCharacterAnimCommonRow
// Size: 0xd8 (Inherited: 0x08)
struct FCrowCharacterAnimCommonRow : FTableRowBase {
	struct UAnimSequenceBase* DeathStandF; // 0x08(0x08)
	struct UAnimSequenceBase* DeathStandB; // 0x10(0x08)
	struct UAnimSequenceBase* DeathStandL; // 0x18(0x08)
	struct UAnimSequenceBase* DeathStandR; // 0x20(0x08)
	struct UAnimSequenceBase* DeathCrouchF; // 0x28(0x08)
	struct UAnimSequenceBase* DeathCrouchB; // 0x30(0x08)
	struct UAnimSequenceBase* DeathCrouchL; // 0x38(0x08)
	struct UAnimSequenceBase* DeathCrouchR; // 0x40(0x08)
	struct UAnimSequenceBase* DeathProneF; // 0x48(0x08)
	struct UAnimSequenceBase* DeathProneB; // 0x50(0x08)
	struct UAnimSequenceBase* DeathProneL; // 0x58(0x08)
	struct UAnimSequenceBase* DeathProneR; // 0x60(0x08)
	struct TArray<struct UAnimSequenceBase*> DeathBurningArray; // 0x68(0x10)
	struct UAnimSequenceBase* DamageHitHead; // 0x78(0x08)
	struct UAnimSequenceBase* DamageHitBody; // 0x80(0x08)
	struct UAnimSequenceBase* DamageHitLeftArm; // 0x88(0x08)
	struct UAnimSequenceBase* DamageHitRightArm; // 0x90(0x08)
	struct UAnimSequenceBase* DamageHitLeftLeg; // 0x98(0x08)
	struct UAnimSequenceBase* DamageHitRightLeg; // 0xa0(0x08)
	struct UAnimSequenceBase* DamageBurning; // 0xa8(0x08)
	struct UAnimSequenceBase* InjuredStand; // 0xb0(0x08)
	struct UAnimSequenceBase* InjuredCrouch; // 0xb8(0x08)
	struct UAnimSequenceBase* InjuredProne; // 0xc0(0x08)
	struct UAnimMontage* InjuredSave_1P; // 0xc8(0x08)
	struct UAnimMontage* InjuredSave_3P; // 0xd0(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimOnVehicleRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowCharacterAnimOnVehicleRow : FTableRowBase {
	struct UAnimSequenceBase* IdleTP; // 0x08(0x08)
	struct UAnimSequenceBase* CombatIdleTP; // 0x10(0x08)
	struct UAnimSequenceBase* GetInTP; // 0x18(0x08)
	struct UAnimSequenceBase* GetOutTP; // 0x20(0x08)
	struct UAimOffsetBlendSpace* AimOffset; // 0x28(0x08)
	struct UAimOffsetBlendSpace* CombatAimOffset; // 0x30(0x08)
	struct UBlendSpace* Strain; // 0x38(0x08)
	struct UAnimSequenceBase* IdleFP; // 0x40(0x08)
	struct UAnimSequenceBase* CombatIdleFP; // 0x48(0x08)
	struct UAnimSequenceBase* GetInFP; // 0x50(0x08)
	struct UAnimSequenceBase* GetOutFP; // 0x58(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimItemActionRow
// Size: 0x68 (Inherited: 0x08)
struct FCrowCharacterAnimItemActionRow : FTableRowBase {
	struct UAnimSequenceBase* EquipTP; // 0x08(0x08)
	struct UAnimSequenceBase* UnEquipTP; // 0x10(0x08)
	struct UAnimSequenceBase* ReloadTP; // 0x18(0x08)
	struct UAnimSequenceBase* PreFireTP; // 0x20(0x08)
	struct UAnimSequenceBase* FireTP; // 0x28(0x08)
	struct UAnimSequenceBase* PostFireTP; // 0x30(0x08)
	struct UAnimSequenceBase* EquipFP; // 0x38(0x08)
	struct UAnimSequenceBase* UnEquipFP; // 0x40(0x08)
	struct UAnimSequenceBase* ReloadFP; // 0x48(0x08)
	struct UAnimSequenceBase* PreFireFP; // 0x50(0x08)
	struct UAnimSequenceBase* FireFP; // 0x58(0x08)
	struct UAnimSequenceBase* PostFireFP; // 0x60(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimPrivateReloadRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowCharacterAnimPrivateReloadRow : FTableRowBase {
	struct UAnimSequenceBase* ReloadTP; // 0x08(0x08)
	struct UAnimSequenceBase* ReloadTPShort; // 0x10(0x08)
	struct UAnimSequenceBase* ReloadFP; // 0x18(0x08)
	struct UAnimSequenceBase* ReloadFPShort; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimPrivateShootRow
// Size: 0x40 (Inherited: 0x08)
struct FCrowCharacterAnimPrivateShootRow : FTableRowBase {
	struct UAnimSequenceBase* PreFireTP; // 0x08(0x08)
	struct UAnimSequenceBase* FireTP; // 0x10(0x08)
	struct UAnimSequenceBase* PostFireTP; // 0x18(0x08)
	struct UAnimSequenceBase* PreFireFP; // 0x20(0x08)
	struct UAnimSequenceBase* FireFP; // 0x28(0x08)
	struct UAnimSequenceBase* AimFireFP; // 0x30(0x08)
	struct UAnimSequenceBase* PostFireFP; // 0x38(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimPrivateWeaponFPRow
// Size: 0xa0 (Inherited: 0x08)
struct FCrowCharacterAnimPrivateWeaponFPRow : FTableRowBase {
	struct UAnimSequence* StandIdle; // 0x08(0x08)
	struct UAnimSequence* StandGundown; // 0x10(0x08)
	struct UAnimSequenceBase* StandRelaxed; // 0x18(0x08)
	struct UAnimSequence* Stand2ndaryDirected; // 0x20(0x08)
	struct UBlendSpace* WeaponSway; // 0x28(0x08)
	struct UAnimSequence* OverlayLeftHand; // 0x30(0x08)
	struct UAnimSequence* OverlayRightHand; // 0x38(0x08)
	struct UBlendSpace* StandMovement; // 0x40(0x08)
	struct UBlendSpace* CrouchMovement; // 0x48(0x08)
	struct UBlendSpace* ProneMovement; // 0x50(0x08)
	struct UAnimSequence* JumpStart; // 0x58(0x08)
	struct UAnimSequence* JumpLoop; // 0x60(0x08)
	struct UAnimSequence* JumpFlail; // 0x68(0x08)
	struct UAnimSequence* JumpLand; // 0x70(0x08)
	struct UAnimSequence* JumpLandDelayed; // 0x78(0x08)
	struct UAnimSequence* StandToProne; // 0x80(0x08)
	struct UAnimSequence* ProneToStand; // 0x88(0x08)
	struct UAnimSequence* Equip; // 0x90(0x08)
	struct UAnimSequence* UnEquip; // 0x98(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimPrivateWeaponTPRow
// Size: 0x190 (Inherited: 0x08)
struct FCrowCharacterAnimPrivateWeaponTPRow : FTableRowBase {
	struct UAnimSequence* StandIdle; // 0x08(0x08)
	struct UAnimSequence* CrouchIdle; // 0x10(0x08)
	struct UAnimSequence* ProneIdle; // 0x18(0x08)
	struct UAnimSequence* StandGundown; // 0x20(0x08)
	struct UAnimSequence* CrouchGundown; // 0x28(0x08)
	struct UAnimSequenceBase* StandRelaxed; // 0x30(0x08)
	struct UAnimSequenceBase* CrouchRelaxed; // 0x38(0x08)
	struct UAnimSequence* OverlayLeftHand; // 0x40(0x08)
	struct UAnimSequence* OverlayRightHand; // 0x48(0x08)
	struct UBlendSpace* StandMovement; // 0x50(0x08)
	struct UBlendSpace* CrouchMovement; // 0x58(0x08)
	struct UBlendSpace* ProneMovement; // 0x60(0x08)
	struct UBlendSpace* StandMoveGundown; // 0x68(0x08)
	struct UBlendSpace* CrouchMoveGundown; // 0x70(0x08)
	struct UAnimSequence* JumpStart; // 0x78(0x08)
	struct UAnimSequence* JumpApex; // 0x80(0x08)
	struct UAnimSequence* JumpLoop; // 0x88(0x08)
	struct UAnimSequence* JumpFlail; // 0x90(0x08)
	struct UAnimSequence* JumpLand; // 0x98(0x08)
	struct UAnimSequence* JumpLandAdditive; // 0xa0(0x08)
	struct UAnimSequence* JumpLandDelay; // 0xa8(0x08)
	struct UAnimSequence* StandToCrouch; // 0xb0(0x08)
	struct UAnimSequence* StandToProne; // 0xb8(0x08)
	struct UAnimSequence* CrouchToStand; // 0xc0(0x08)
	struct UAnimSequence* CrouchToProne; // 0xc8(0x08)
	struct UAnimSequence* ProneToStand; // 0xd0(0x08)
	struct UAnimSequence* ProneToCrouch; // 0xd8(0x08)
	struct UAnimSequence* StandTurnLeft; // 0xe0(0x08)
	struct UAnimSequence* StandTurnRight; // 0xe8(0x08)
	struct UAnimSequence* CrouchTurnLeft; // 0xf0(0x08)
	struct UAnimSequence* CrouchTurnRight; // 0xf8(0x08)
	struct UAnimSequence* StandPeekLeftStart; // 0x100(0x08)
	struct UAnimSequence* StandPeekLeftLoop; // 0x108(0x08)
	struct UAnimSequence* StandPeekLeftEnd; // 0x110(0x08)
	struct UAnimSequence* StandPeekRightStart; // 0x118(0x08)
	struct UAnimSequence* StandPeekRightLoop; // 0x120(0x08)
	struct UAnimSequence* StandPeekRightEnd; // 0x128(0x08)
	struct UAnimSequence* CrouchPeekLeftStart; // 0x130(0x08)
	struct UAnimSequence* CrouchPeekLeftLoop; // 0x138(0x08)
	struct UAnimSequence* CrouchPeekLeftEnd; // 0x140(0x08)
	struct UAnimSequence* CrouchPeekRightStart; // 0x148(0x08)
	struct UAnimSequence* CrouchPeekRightLoop; // 0x150(0x08)
	struct UAnimSequence* CrouchPeekRightEnd; // 0x158(0x08)
	struct UAnimSequence* Equip; // 0x160(0x08)
	struct UAnimSequence* UnEquip; // 0x168(0x08)
	struct UAimOffsetBlendSpace* DefaultAimOffset; // 0x170(0x08)
	struct UAimOffsetBlendSpace* StandAimOffset; // 0x178(0x08)
	struct UAimOffsetBlendSpace* CrouchAimOffset; // 0x180(0x08)
	struct UAimOffsetBlendSpace* ProneAimOffset; // 0x188(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAppearance
// Size: 0x06 (Inherited: 0x00)
struct FCrowCharacterAppearance {
	char FaceIndex; // 0x00(0x01)
	char EyeColorIndex; // 0x01(0x01)
	char HairIndex; // 0x02(0x01)
	char HairColorIndex; // 0x03(0x01)
	char BeardIndex; // 0x04(0x01)
	char BeardColorIndex; // 0x05(0x01)
};

// ScriptStruct CrowFPS.CrowCharacterHUDSetting
// Size: 0x24 (Inherited: 0x00)
struct FCrowCharacterHUDSetting {
	float VisibleMaxDistance; // 0x00(0x04)
	float UnscaledDistance; // 0x04(0x04)
	float ScaledDistanceMax; // 0x08(0x04)
	float FullyOpaqueDistance; // 0x0c(0x04)
	float ComputeOpacityDistanceMax; // 0x10(0x04)
	float ScaleMin; // 0x14(0x04)
	float ScaleMax; // 0x18(0x04)
	float OpacityMin; // 0x1c(0x04)
	float OpacityMax; // 0x20(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterMainAnimProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterMainAnimProxy : FCrowCharacterAnimProxyBase {
};

// ScriptStruct CrowFPS.CrowCharacterMainAnimFPArmProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterMainAnimFPArmProxy : FCrowCharacterMainAnimProxy {
};

// ScriptStruct CrowFPS.CrowCharacterMainAnimFPBodyProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterMainAnimFPBodyProxy : FCrowCharacterMainAnimProxy {
};

// ScriptStruct CrowFPS.CrowCharacterMainAnimTPProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterMainAnimTPProxy : FCrowCharacterMainAnimProxy {
};

// ScriptStruct CrowFPS.CrowMovementSetting
// Size: 0x60 (Inherited: 0x00)
struct FCrowMovementSetting {
	float JumpRatioHorizontal; // 0x00(0x04)
	float MaxFallVelocityZ; // 0x04(0x04)
	float LandImpactVelocityRatio; // 0x08(0x04)
	float FlailStartVelocity; // 0x0c(0x04)
	float LandRecoveryOnDefault; // 0x10(0x04)
	float LandRecoveryOnFlail; // 0x14(0x04)
	float CantActionRecovery; // 0x18(0x04)
	float SwimSpeed; // 0x1c(0x04)
	float FastSwimSpeed; // 0x20(0x04)
	float SwimmingAcceleration; // 0x24(0x04)
	float DiveAcceleration; // 0x28(0x04)
	float SwimmingDeceleration; // 0x2c(0x04)
	float BuoyancySurface; // 0x30(0x04)
	float BuoyancyUnderwater; // 0x34(0x04)
	float DiveImpactDelayTime; // 0x38(0x04)
	float DiveImpactBuoyancy; // 0x3c(0x04)
	float DiveImpactDelayDecel; // 0x40(0x04)
	float DiveImpactSpeedXY; // 0x44(0x04)
	float DiveImpactSpeedZ; // 0x48(0x04)
	float CrouchLimitDepth; // 0x4c(0x04)
	float ProneLimitDepth; // 0x50(0x04)
	float DrownedMoveDelay; // 0x54(0x04)
	float DrownedMoveSpeed; // 0x58(0x04)
	float DrowendBuoyancy; // 0x5c(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterMovementWaterInfo
// Size: 0x60 (Inherited: 0x00)
struct FCrowCharacterMovementWaterInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct CrowFPS.CrowCharacterPartDamageData
// Size: 0x338 (Inherited: 0x08)
struct FCrowCharacterPartDamageData : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct FName BoneName; // 0x18(0x08)
	float DamageMultiply; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UParticleSystem* Particle_Bullet; // 0x28(0x08)
	struct UParticleSystem* Particle_Slash; // 0x30(0x08)
	struct UParticleSystem* Particle_ZombiePunch; // 0x38(0x08)
	struct FCrowDecalInfo BulletDecalInfo; // 0x40(0x50)
	struct FCrowDecalInfo BodyDecalInfo; // 0x90(0x50)
	struct FCrowDecalInfo MeleeDecalInfo; // 0xe0(0x50)
	struct FCrowDecalInfo MeleeBodyDecalInfo; // 0x130(0x50)
	struct UParticleSystem* Particle_Bullet_Zombie; // 0x180(0x08)
	struct UParticleSystem* Particle_Slash_Zombie; // 0x188(0x08)
	struct UParticleSystem* Particle_ZombiePunch_Zombie; // 0x190(0x08)
	struct FCrowDecalInfo BulletDecalInfo_Zombie; // 0x198(0x50)
	struct FCrowDecalInfo BodyDecalInfo_Zombie; // 0x1e8(0x50)
	struct FCrowDecalInfo MeleeDecalInfo_Zombie; // 0x238(0x50)
	struct FCrowDecalInfo MeleeBodyDecalInfo_Zombie; // 0x288(0x50)
	struct UAkAudioEvent* HitSound_Bullet_W; // 0x2d8(0x08)
	struct UAkAudioEvent* HitSound_Slash_W; // 0x2e0(0x08)
	struct TMap<enum class ECrowWeaponUIType, float> WeaponTypeMultipleDamage; // 0x2e8(0x50)
};

// ScriptStruct CrowFPS.CrowDecalInfo
// Size: 0x50 (Inherited: 0x00)
struct FCrowDecalInfo {
	struct UMaterialInterface* Material; // 0x00(0x08)
	float LifeSpan; // 0x08(0x04)
	float ScaleMin; // 0x0c(0x04)
	float ScaleMax; // 0x10(0x04)
	float RotateMin; // 0x14(0x04)
	float RotateMax; // 0x18(0x04)
	float FadeScreenSize; // 0x1c(0x04)
	uint32_t RandomCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* FadeOutIn; // 0x28(0x08)
	struct UCurveFloat* FadeOutCurve; // 0x30(0x08)
	struct UCurveFloat* EmissiveInCurve; // 0x38(0x08)
	struct UCurveFloat* EmissiveOutCurve; // 0x40(0x08)
	float RelativeScaleX; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct CrowFPS.CrowSoundScriptData
// Size: 0x48 (Inherited: 0x00)
struct FCrowSoundScriptData {
	enum class ECrowSoundScriptConditionType ConditionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* SoundScriptEventRed_M; // 0x08(0x08)
	struct UAkAudioEvent* SoundScriptEventBlue_M; // 0x10(0x08)
	struct UAkAudioEvent* SoundScriptEventRed_F; // 0x18(0x08)
	struct UAkAudioEvent* SoundScriptEventBlue_F; // 0x20(0x08)
	float Parameter; // 0x28(0x04)
	float SoundScriptCoolTime; // 0x2c(0x04)
	float Distance; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<enum class ECrowGameMode> IgnoreGameModes; // 0x38(0x10)
};

// ScriptStruct CrowFPS.CrowDotDamageInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowDotDamageInfo {
	float Value; // 0x00(0x04)
	float ElapsedTime; // 0x04(0x04)
	uint32_t RemainSeconds; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterPeekSetup
// Size: 0x08 (Inherited: 0x00)
struct FCrowCharacterPeekSetup {
	float FPCameraAngle; // 0x00(0x04)
	float InterpSpeed; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterLookLimitStance
// Size: 0xac (Inherited: 0x00)
struct FCrowCharacterLookLimitStance {
	struct FCrowCharacterLookLimit Stand; // 0x00(0x18)
	struct FCrowCharacterLookLimit Crouch; // 0x18(0x18)
	struct FCrowCharacterLookLimit Prone; // 0x30(0x18)
	struct FCrowCharacterLookLimit Dying; // 0x48(0x18)
	struct FCrowCharacterLookLimit Vault; // 0x60(0x18)
	struct FCrowCharacterLookLimit Ladder; // 0x78(0x18)
	struct FCrowCharacterLookLimit LookAround; // 0x90(0x18)
	float InterpSpeed; // 0xa8(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterLookLimit
// Size: 0x18 (Inherited: 0x00)
struct FCrowCharacterLookLimit {
	struct FRotator Min; // 0x00(0x0c)
	struct FRotator Max; // 0x0c(0x0c)
};

// ScriptStruct CrowFPS.CrowCharacterSoundSetup
// Size: 0x10 (Inherited: 0x00)
struct FCrowCharacterSoundSetup {
	struct UAkAudioEvent* RespawnSound; // 0x00(0x08)
	struct UAkAudioEvent* DeadItemDropSound; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowBattleSetup
// Size: 0x20 (Inherited: 0x00)
struct FCrowBattleSetup {
	float MaxHealth; // 0x00(0x04)
	float DyingSecond; // 0x04(0x04)
	float ReviveSecond; // 0x08(0x04)
	float StopBleedingPercent; // 0x0c(0x04)
	float OverBleedingPercent; // 0x10(0x04)
	float ReviveHealth; // 0x14(0x04)
	int32_t CanReviveMAX; // 0x18(0x04)
	float DyingHealth; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.RagdollIKOffsets
// Size: 0x60 (Inherited: 0x00)
struct FRagdollIKOffsets {
	struct FTransform LeftFootTransform; // 0x00(0x30)
	struct FTransform RightFootTransform; // 0x30(0x30)
};

// ScriptStruct CrowFPS.ProneIKOffsets
// Size: 0x60 (Inherited: 0x00)
struct FProneIKOffsets {
	struct FVector Pelvis; // 0x00(0x0c)
	struct FVector Spine; // 0x0c(0x0c)
	struct FVector LeftArm; // 0x18(0x0c)
	struct FVector RightArm; // 0x24(0x0c)
	struct FVector LeftCalf; // 0x30(0x0c)
	struct FVector RightCalf; // 0x3c(0x0c)
	struct FVector LeftFoot; // 0x48(0x0c)
	struct FVector RightFoot; // 0x54(0x0c)
};

// ScriptStruct CrowFPS.FootIKOffsets
// Size: 0x1c (Inherited: 0x00)
struct FFootIKOffsets {
	struct FVector LeftFoot; // 0x00(0x0c)
	struct FVector RightFoot; // 0x0c(0x0c)
	float Pelvis; // 0x18(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterProneIKSetup
// Size: 0x54 (Inherited: 0x00)
struct FCrowCharacterProneIKSetup {
	bool bUseDrawDebugLine; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SpineBoneName; // 0x04(0x08)
	struct FName PelvisBoneName; // 0x0c(0x08)
	struct FName LeftArmBoneName; // 0x14(0x08)
	struct FName RightArmBoneName; // 0x1c(0x08)
	struct FName LeftCalfBoneName; // 0x24(0x08)
	struct FName RightCalfBoneName; // 0x2c(0x08)
	struct FName LeftFootBoneName; // 0x34(0x08)
	struct FName RightFootBoneName; // 0x3c(0x08)
	float TraceLengthAbove; // 0x44(0x04)
	float TraceLengthBelow; // 0x48(0x04)
	float InterpSpeedTranslation; // 0x4c(0x04)
	float InterpSpeedRotation; // 0x50(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterFootIKSetup
// Size: 0x50 (Inherited: 0x00)
struct FCrowCharacterFootIKSetup {
	bool bUseDrawDebugLine; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName LeftFootBoneName; // 0x04(0x08)
	struct FName RightFootBoneName; // 0x0c(0x08)
	float TraceLengthAboveFoot; // 0x14(0x04)
	float TraceLengthBelowFoot; // 0x18(0x04)
	struct FCrowCharacterFootIKLimit LimitStanding; // 0x1c(0x18)
	struct FCrowCharacterFootIKLimit LimitCrouching; // 0x34(0x18)
	float InterpSpeed; // 0x4c(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterFootIKLimit
// Size: 0x18 (Inherited: 0x00)
struct FCrowCharacterFootIKLimit {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
};

// ScriptStruct CrowFPS.CrowCharacterSubAnimProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterSubAnimProxy : FCrowCharacterAnimProxyBase {
};

// ScriptStruct CrowFPS.CrowCharacterSubAnimOnGroundProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterSubAnimOnGroundProxy : FCrowCharacterSubAnimProxy {
};

// ScriptStruct CrowFPS.CrowCharacterSubAnimOnVehicleProxy
// Size: 0x770 (Inherited: 0x770)
struct FCrowCharacterSubAnimOnVehicleProxy : FCrowCharacterSubAnimProxy {
};

// ScriptStruct CrowFPS.CrowCharacterSwimTableRow
// Size: 0x12b0 (Inherited: 0x08)
struct FCrowCharacterSwimTableRow : FTableRowBase {
	struct UPhysicalMaterial* Material; // 0x08(0x08)
	struct FCrowCharacterSwimActionSetting FP; // 0x10(0x950)
	struct FCrowCharacterSwimActionSetting TP; // 0x960(0x950)
};

// ScriptStruct CrowFPS.CrowCharacterSwimActionSetting
// Size: 0x950 (Inherited: 0x00)
struct FCrowCharacterSwimActionSetting {
	struct FCrowCharacterSwimBodyPartsSetting Idle; // 0x00(0x190)
	struct FCrowCharacterSwimBodyPartsSetting ForwardSpeed_1; // 0x190(0x190)
	struct FCrowCharacterSwimBodyPartsSetting ForwardSpeed_2; // 0x320(0x190)
	struct FCrowCharacterSwimBodyPartsSetting BackSpeed_1; // 0x4b0(0x190)
	struct FCrowCharacterSwimBodyPartsSetting DivingForwardSpeed_1; // 0x640(0x190)
	struct FName EnterFX_SocketName; // 0x7d0(0x08)
	struct FCrowCharacterSwimFXSetting EnterFX; // 0x7d8(0x50)
	struct UAkAudioEvent* EnterSound_W; // 0x828(0x08)
	struct FName DeepEnterFX_SocketName; // 0x830(0x08)
	struct FCrowCharacterSwimFXSetting DeepEnterFX; // 0x838(0x50)
	struct UAkAudioEvent* DeepEnterSound_W; // 0x888(0x08)
	struct FName DeepExitFX_SocketName; // 0x890(0x08)
	struct FCrowCharacterSwimFXSetting DeepExitFX; // 0x898(0x50)
	struct UAkAudioEvent* DeepExitSound_W; // 0x8e8(0x08)
	struct FName ExitFX_SocketName; // 0x8f0(0x08)
	struct FCrowCharacterSwimFXSetting ExitFX; // 0x8f8(0x50)
	struct UAkAudioEvent* ExitSound_W; // 0x948(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterSwimFXSetting
// Size: 0x50 (Inherited: 0x00)
struct FCrowCharacterSwimFXSetting {
	struct TSoftObjectPtr<struct UParticleSystem> FX; // 0x00(0x28)
	struct TSoftObjectPtr<struct UNiagaraSystem> FX_N; // 0x28(0x28)
};

// ScriptStruct CrowFPS.CrowCharacterSwimBodyPartsSetting
// Size: 0x190 (Inherited: 0x00)
struct FCrowCharacterSwimBodyPartsSetting {
	struct FCrowCharacterSwimFXSetting Head_FX; // 0x00(0x50)
	struct FCrowCharacterSwimFXSetting HandLeft_FX; // 0x50(0x50)
	struct FCrowCharacterSwimFXSetting HandRight_FX; // 0xa0(0x50)
	struct FCrowCharacterSwimFXSetting Chest_FX; // 0xf0(0x50)
	struct FCrowCharacterSwimFXSetting Waist_FX; // 0x140(0x50)
};

// ScriptStruct CrowFPS.CrowCharacterTableRow
// Size: 0x180 (Inherited: 0x168)
struct FCrowCharacterTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct ACrowCharacterPawn* CharacterClass; // 0x178(0x08)
};

// ScriptStruct CrowFPS.CrowCharacterAnimWeapon
// Size: 0x40 (Inherited: 0x00)
struct FCrowCharacterAnimWeapon {
	struct UAnimSequenceBase* Equip; // 0x00(0x08)
	struct UAnimSequenceBase* UnEquip; // 0x08(0x08)
	struct UAnimSequenceBase* Reload; // 0x10(0x08)
	struct UAnimSequenceBase* ReloadShort; // 0x18(0x08)
	struct UAnimSequenceBase* PreFire; // 0x20(0x08)
	struct UAnimSequenceBase* Fire; // 0x28(0x08)
	struct UAnimSequenceBase* AimFire; // 0x30(0x08)
	struct UAnimSequenceBase* PostFire; // 0x38(0x08)
};

// ScriptStruct CrowFPS.CrowAnimPoseSet
// Size: 0x18 (Inherited: 0x00)
struct FCrowAnimPoseSet {
	struct UAnimationAsset* WeaponNormal1P; // 0x00(0x08)
	struct UAnimationAsset* WeaponNormal3P; // 0x08(0x08)
	struct UAnimationAsset* WeaponProne3P; // 0x10(0x08)
};

// ScriptStruct CrowFPS.LocoCameraTargets
// Size: 0x294 (Inherited: 0x00)
struct FLocoCameraTargets {
	struct FLocoCameraSettingsByStance VelocityDirection; // 0x00(0x140)
	struct FLocoCameraSettingsByStance LookingDirection; // 0x140(0x140)
	struct FLocoCameraSettings Ragdoll; // 0x280(0x14)
};

// ScriptStruct CrowFPS.LocoCameraSettings
// Size: 0x14 (Inherited: 0x00)
struct FLocoCameraSettings {
	float TargetArmLength; // 0x00(0x04)
	float CameraLagSpeed; // 0x04(0x04)
	struct FVector SocketOffset; // 0x08(0x0c)
};

// ScriptStruct CrowFPS.LocoCameraSettingsByStance
// Size: 0x140 (Inherited: 0x00)
struct FLocoCameraSettingsByStance {
	struct FLocoCameraSettingsByGait Standing; // 0x00(0x50)
	struct FLocoCameraSettingsByGait Crouching; // 0x50(0x50)
	struct FLocoCameraSettingsByGait Prone; // 0xa0(0x50)
	struct FLocoCameraSettingsByGait Swimming; // 0xf0(0x50)
};

// ScriptStruct CrowFPS.LocoCameraSettingsByGait
// Size: 0x50 (Inherited: 0x00)
struct FLocoCameraSettingsByGait {
	struct FLocoCameraSettings Idle; // 0x00(0x14)
	struct FLocoCameraSettings Walk; // 0x14(0x14)
	struct FLocoCameraSettings Run; // 0x28(0x14)
	struct FLocoCameraSettings Sprint; // 0x3c(0x14)
};

// ScriptStruct CrowFPS.CrowChatData
// Size: 0x48 (Inherited: 0x00)
struct FCrowChatData {
	enum class ECrowChatType ChatType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t playerId; // 0x08(0x08)
	struct FString ServerAppID; // 0x10(0x10)
	struct FString ChatMessage; // 0x20(0x10)
	struct FString SendedPlayerNickname; // 0x30(0x10)
	struct ACrowPlayerStateBase* SendedPlayerState; // 0x40(0x08)
};

// ScriptStruct CrowFPS.CrowChatTypeText
// Size: 0x0c (Inherited: 0x00)
struct FCrowChatTypeText {
	enum class ECrowChatType ChatType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ChatText; // 0x04(0x08)
};

// ScriptStruct CrowFPS.CrowClanExpTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowClanExpTableRow : FTableRowBase {
	char pad_8[0x4]; // 0x08(0x04)
	int32_t Level; // 0x0c(0x04)
	int32_t Exp; // 0x10(0x04)
	int32_t HappyTimeBonus; // 0x14(0x04)
};

// ScriptStruct CrowFPS.ClanInfo
// Size: 0x78 (Inherited: 0x00)
struct FClanInfo {
	int32_t ClanId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ClanName; // 0x08(0x10)
	struct FString ClanNotice; // 0x18(0x10)
	int32_t ClanMark; // 0x28(0x04)
	int32_t ClanRankingMonth; // 0x2c(0x04)
	int32_t ClanRankingTotal; // 0x30(0x04)
	int32_t ClanMarkBG; // 0x34(0x04)
	int32_t ClanLeval; // 0x38(0x04)
	int32_t ClanMemberCurrent; // 0x3c(0x04)
	int32_t ClanMemberMax; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t MonthContributionPoint; // 0x48(0x08)
	int64_t TotalContributionPoint; // 0x50(0x08)
	int32_t HappyTimeHour; // 0x58(0x04)
	int32_t HappyTimeMinute; // 0x5c(0x04)
	enum class EClanJoinType ClanInviteType; // 0x60(0x01)
	enum class EClanAuthority ClanAuthority; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct FCrewInfo> ClanUserList; // 0x68(0x10)
};

// ScriptStruct CrowFPS.CrewInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrewInfo {
	uint64_t UserId; // 0x00(0x08)
	uint64_t SteamId; // 0x08(0x08)
	struct FString UserName; // 0x10(0x10)
	int32_t UserLevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime LastPlayTime; // 0x28(0x08)
	bool bOnline; // 0x30(0x01)
	enum class EClanAuthority UserAuthority; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	int64_t UserContributionPoint; // 0x38(0x08)
};

// ScriptStruct CrowFPS.SearchUserInfo
// Size: 0x28 (Inherited: 0x00)
struct FSearchUserInfo {
	uint64_t UserId; // 0x00(0x08)
	uint64_t SteamId; // 0x08(0x08)
	struct FString UserName; // 0x10(0x10)
	int32_t UserLevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CrowFPS.ClanListItem
// Size: 0x40 (Inherited: 0x00)
struct FClanListItem {
	int32_t ClanId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ClanName; // 0x08(0x10)
	int32_t ClanMark; // 0x18(0x04)
	int32_t ClanMarkBG; // 0x1c(0x04)
	int32_t ClanLeval; // 0x20(0x04)
	int32_t ClanRanking; // 0x24(0x04)
	int32_t ClanMemberCurrent; // 0x28(0x04)
	int32_t ClanMemberMax; // 0x2c(0x04)
	int64_t ContributionPoint; // 0x30(0x08)
	enum class EClanJoinType ClanInviteType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct CrowFPS.CrowClanMarkTableRow
// Size: 0x198 (Inherited: 0x168)
struct FCrowClanMarkTableRow : FCrowItemTableBaseRow {
	struct FText HelpText; // 0x168(0x18)
	enum class EMarkType ImageType; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UPaperSprite* Resource; // 0x188(0x08)
	enum class EMarkAcquireType AcquireType; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	int32_t ShopIndex; // 0x194(0x04)
};

// ScriptStruct CrowFPS.CrowClothItem
// Size: 0x40 (Inherited: 0x00)
struct FCrowClothItem {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct USkeletalMesh* SkeletalMeshAsset; // 0x18(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x20(0x10)
	struct TArray<struct FCrowClothItemMaterial> ItemMaterials; // 0x30(0x10)
};

// ScriptStruct CrowFPS.CrowClothItemMaterial
// Size: 0x10 (Inherited: 0x00)
struct FCrowClothItemMaterial {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowClothTableBaseRow
// Size: 0x258 (Inherited: 0x168)
struct FCrowClothTableBaseRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct FString SortGroup; // 0x178(0x10)
	struct USkeletalMesh* ClothMesh_FP; // 0x188(0x08)
	struct USkeletalMesh* ClothMesh_FP_Loose; // 0x190(0x08)
	struct USkeletalMesh* ClothMesh_TP; // 0x198(0x08)
	struct USkeletalMesh* ClothMesh_TP_Loose; // 0x1a0(0x08)
	struct USkeletalMesh* ClothMesh_FP_Female; // 0x1a8(0x08)
	struct USkeletalMesh* ClothMesh_FP_Loose_Female; // 0x1b0(0x08)
	struct USkeletalMesh* ClothMesh_TP_Female; // 0x1b8(0x08)
	struct USkeletalMesh* ClothMesh_TP_Loose_Female; // 0x1c0(0x08)
	struct UPaperSprite* DefaultIcon_Female; // 0x1c8(0x08)
	struct TArray<struct FCrowChangeRenderClothParts> ChangeRenderClothParts; // 0x1d0(0x10)
	struct TArray<struct UMaterialInterface*> Materials1P; // 0x1e0(0x10)
	struct TArray<struct UMaterialInterface*> Materials3P; // 0x1f0(0x10)
	struct TArray<struct UMaterialInterface*> Materials1P_Female; // 0x200(0x10)
	struct TArray<struct UMaterialInterface*> Materials3P_Female; // 0x210(0x10)
	struct FName WeaponAttachSocket; // 0x220(0x08)
	enum class ECrowClothExpertSkill ExpertSkill; // 0x228(0x04)
	char ExpertSkillCount; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct TArray<enum class ECrowAmmoType> ExpertSkillAmmoTypeArray; // 0x230(0x10)
	struct FText ExpertSkillDesc; // 0x240(0x18)
};

// ScriptStruct CrowFPS.CrowChangeRenderClothParts
// Size: 0x06 (Inherited: 0x00)
struct FCrowChangeRenderClothParts {
	enum class ECrowClothPartsMesh ChangeRenderClothMainType; // 0x00(0x01)
	enum class ECrowClothPartHeadType ChangeRenderClothHead; // 0x01(0x01)
	enum class ECrowClothPartGlassesType ChangeRenderClothGlasses; // 0x02(0x01)
	enum class ECrowClothPartMaskType ChangeRenderClothMask; // 0x03(0x01)
	enum class ECrowClothPartHairType ChangeRenderClothHair; // 0x04(0x01)
	enum class ECrowClothPartsFitType FitType; // 0x05(0x01)
};

// ScriptStruct CrowFPS.CrowClothPatchTableRow
// Size: 0x260 (Inherited: 0x258)
struct FCrowClothPatchTableRow : FCrowClothTableBaseRow {
	struct UMaterialInstance* PatchMaterial; // 0x258(0x08)
};

// ScriptStruct CrowFPS.CrowClothTopTableRow
// Size: 0x278 (Inherited: 0x258)
struct FCrowClothTopTableRow : FCrowClothTableBaseRow {
	struct USkeletalMesh* ClothMesh_FP_Patch; // 0x258(0x08)
	struct USkeletalMesh* ClothMesh_TP_Patch; // 0x260(0x08)
	struct USkeletalMesh* ClothMesh_FP_Patch_Female; // 0x268(0x08)
	struct USkeletalMesh* ClothMesh_TP_Patch_Female; // 0x270(0x08)
};

// ScriptStruct CrowFPS.CrowClothHairTableRow
// Size: 0x260 (Inherited: 0x258)
struct FCrowClothHairTableRow : FCrowClothTableBaseRow {
	enum class ECrowClothPartHairType SubClothType; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// ScriptStruct CrowFPS.CrowClothMaskTableRow
// Size: 0x260 (Inherited: 0x258)
struct FCrowClothMaskTableRow : FCrowClothTableBaseRow {
	enum class ECrowClothPartMaskType SubClothType; // 0x258(0x01)
	bool bIsGasMask; // 0x259(0x01)
	char pad_25A[0x6]; // 0x25a(0x06)
};

// ScriptStruct CrowFPS.CrowClothGlassesTableRow
// Size: 0x260 (Inherited: 0x258)
struct FCrowClothGlassesTableRow : FCrowClothTableBaseRow {
	enum class ECrowClothPartGlassesType SubClothType; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// ScriptStruct CrowFPS.CrowClothHeadTableRow
// Size: 0x260 (Inherited: 0x258)
struct FCrowClothHeadTableRow : FCrowClothTableBaseRow {
	enum class ECrowClothPartHeadType SubClothType; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// ScriptStruct CrowFPS.CrowClothBeardTableRow
// Size: 0x2a8 (Inherited: 0x258)
struct FCrowClothBeardTableRow : FCrowClothTableBaseRow {
	struct TMap<struct FString, struct USkeletalMesh*> RaceBeardMeshList; // 0x258(0x50)
};

// ScriptStruct CrowFPS.CrowCloudCollision
// Size: 0x18 (Inherited: 0x00)
struct FCrowCloudCollision {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UCrowCloudDamage* CloudDamageSetting; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowCloudCollisionEvent
// Size: 0x1c (Inherited: 0x00)
struct FCrowCloudCollisionEvent {
	float ElapsedOverlapTime; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x04(0x08)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x0c(0x08)
	struct TWeakObjectPtr<struct ACrowCharacterPawn> CharacterPawn; // 0x14(0x08)
};

// ScriptStruct CrowFPS.CrowCloudAnimInfo
// Size: 0x14 (Inherited: 0x00)
struct FCrowCloudAnimInfo {
	bool bLoop; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LoopStartTime; // 0x04(0x04)
	float AnimStartTime; // 0x08(0x04)
	float MinTime; // 0x0c(0x04)
	float MaxTime; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowCloudScapeParamDynamic
// Size: 0x10 (Inherited: 0x00)
struct FCrowCloudScapeParamDynamic {
	float CloudDensity; // 0x00(0x04)
	struct FVector CloudScale; // 0x04(0x0c)
};

// ScriptStruct CrowFPS.CrowCloudScapeSetting
// Size: 0x180 (Inherited: 0x00)
struct FCrowCloudScapeSetting {
	int32_t Index; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform SplineCurveTM; // 0x40(0x30)
	struct FSplineCurves SplineCurves; // 0x70(0x70)
	struct FVector CloudCollisionScale; // 0xe0(0x0c)
	bool bEnvCloud; // 0xec(0x01)
	bool bNoCollision; // 0xed(0x01)
	bool bMove; // 0xee(0x01)
	bool bScale; // 0xef(0x01)
	float Density; // 0xf0(0x04)
	float MaxScaleZ; // 0xf4(0x04)
	float RotationRate; // 0xf8(0x04)
	float CloudMoveTime; // 0xfc(0x04)
	struct UCurveFloat* ScaleAnimCurve; // 0x100(0x08)
	struct UCurveFloat* MoveRateCurve; // 0x108(0x08)
	struct UCurveFloat* DensityCurve; // 0x110(0x08)
	struct UCurveFloat* HeightCurve; // 0x118(0x08)
	struct FVector CloudMeshScale; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UStaticMesh* CloudMesh; // 0x130(0x08)
	struct UStaticMesh* BoundaryMesh_Inside; // 0x138(0x08)
	struct UStaticMesh* BoundaryMesh_Outside; // 0x140(0x08)
	struct UStaticMesh* MeshForFixArtifacts; // 0x148(0x08)
	struct UMaterialInterface* CloudMaterial; // 0x150(0x08)
	struct UMaterialInterface* BoundaryMaterial_Inside; // 0x158(0x08)
	struct UMaterialInterface* BoundaryMaterial_Outside; // 0x160(0x08)
	struct UMaterialInterface* MaterialForFixArtifacts; // 0x168(0x08)
	struct UCrowCloudDamage* CloudDamageSetting; // 0x170(0x08)
	char pad_178[0x8]; // 0x178(0x08)
};

// ScriptStruct CrowFPS.CrowCloudScapeReplication
// Size: 0x10 (Inherited: 0x00)
struct FCrowCloudScapeReplication {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime StartUtcDateTime; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowCloudScapeUpdateData
// Size: 0x170 (Inherited: 0x00)
struct FCrowCloudScapeUpdateData {
	bool bEnvCloud; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DataArrayIndex; // 0x04(0x04)
	int32_t Index; // 0x08(0x04)
	float RotationRate; // 0x0c(0x04)
	float TranslateDuration; // 0x10(0x04)
	float ScaleDuration; // 0x14(0x04)
	struct FDateTime StartUtcTime; // 0x18(0x08)
	float Density; // 0x20(0x04)
	float HeightRatio; // 0x24(0x04)
	float MaxScaleZ; // 0x28(0x04)
	float CloudMoveTime; // 0x2c(0x04)
	bool bNoCollision; // 0x30(0x01)
	bool bMove; // 0x31(0x01)
	bool bScale; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	struct FVector Scale; // 0x34(0x0c)
	struct FVector VisualScale; // 0x40(0x0c)
	struct FVector Location; // 0x4c(0x0c)
	struct FVector CloudLocation; // 0x58(0x0c)
	struct FRotator Rotation; // 0x64(0x0c)
	struct FLinearColor Orientation; // 0x70(0x10)
	struct FVector StartScale; // 0x80(0x0c)
	struct FVector CloudCollisionScale; // 0x8c(0x0c)
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform CloudPathTM; // 0xa0(0x30)
	struct FSplineCurves CloudPath; // 0xd0(0x70)
	struct UCurveFloat* ScaleCurve; // 0x140(0x08)
	struct UCurveFloat* MoveRateCurve; // 0x148(0x08)
	struct UCurveFloat* DensityCurve; // 0x150(0x08)
	struct UCurveFloat* HeightCurve; // 0x158(0x08)
	struct UCrowCloudDamage* CloudDamageSetting; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
};

// ScriptStruct CrowFPS.CrowCloudInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowCloudInfo {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowCloudScapeMaterialParamName
// Size: 0x28 (Inherited: 0x00)
struct FCrowCloudScapeMaterialParamName {
	struct FName DensityParamName; // 0x00(0x08)
	struct FName TextureParamName; // 0x08(0x08)
	struct FName LocationParamName; // 0x10(0x08)
	struct FName ScaleParamName; // 0x18(0x08)
	struct FName OrientationParamName; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowCloudVisualizeMesh
// Size: 0x40 (Inherited: 0x00)
struct FCrowCloudVisualizeMesh {
	struct UStaticMeshComponent* CloudMesh; // 0x00(0x08)
	struct UStaticMeshComponent* InsideMesh; // 0x08(0x08)
	struct UStaticMeshComponent* OutsideMesh; // 0x10(0x08)
	struct UStaticMeshComponent* FixArtifactsMesh; // 0x18(0x08)
	struct UStaticMeshComponent* CurrentCloudMesh; // 0x20(0x08)
	struct UStaticMeshComponent* CurrentBoundaryMesh; // 0x28(0x08)
	struct TArray<struct UStaticMeshComponent*> Meshes; // 0x30(0x10)
};

// ScriptStruct CrowFPS.CrowCloudVisualizeParticle
// Size: 0x20 (Inherited: 0x00)
struct FCrowCloudVisualizeParticle {
	bool bAlways; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UNiagaraComponent* Particle_NS; // 0x08(0x08)
	struct UParticleSystemComponent* Particle; // 0x10(0x08)
	float LastUpdateTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowColorTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowColorTableRow : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowCompositionCStepInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowCompositionCStepInfo {
	float TimeSec; // 0x00(0x04)
	float Speed; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowConfigTableRow
// Size: 0x40 (Inherited: 0x08)
struct FCrowConfigTableRow : FTableRowBase {
	struct FString Help; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
	struct FSoftObjectPath Object; // 0x28(0x18)
};

// ScriptStruct CrowFPS.CrowConquestAreaInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowConquestAreaInfo {
	bool Initialized; // 0x00(0x01)
	bool EnableConquestRedTeam; // 0x01(0x01)
	bool EnableConquestBlueTeam; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString DisplayName; // 0x08(0x10)
	char ConquestTeam; // 0x18(0x01)
	char GroupConquestTeam; // 0x19(0x01)
	char RequireConquestPoint; // 0x1a(0x01)
	char RedTeamConquestPoint; // 0x1b(0x01)
	char BlueTeamConquestPoint; // 0x1c(0x01)
	enum class ECrowConquestBattleState BattleState; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct CrowFPS.CrowConquestPointInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowConquestPointInfo {
	char RedTeam_ToFriendly_OnePeople; // 0x00(0x01)
	char RedTeam_ToFriendly_TwoPeople; // 0x01(0x01)
	char RedTeam_ToFriendly_ThreePeople; // 0x02(0x01)
	char RedTeam_ToFriendly_MorePeople; // 0x03(0x01)
	char RedTeam_ToNeutral_OnePeople; // 0x04(0x01)
	char RedTeam_ToNeutral_TwoPeople; // 0x05(0x01)
	char RedTeam_ToNeutral_ThreePeople; // 0x06(0x01)
	char RedTeam_ToNeutral_MorePeople; // 0x07(0x01)
	char BlueTeam_ToFriendly_OnePeople; // 0x08(0x01)
	char BlueTeam_ToFriendly_TwoPeople; // 0x09(0x01)
	char BlueTeam_ToFriendly_ThreePeople; // 0x0a(0x01)
	char BlueTeam_ToFriendly_MorePeople; // 0x0b(0x01)
	char BlueTeam_ToNeutral_OnePeople; // 0x0c(0x01)
	char BlueTeam_ToNeutral_TwoPeople; // 0x0d(0x01)
	char BlueTeam_ToNeutral_ThreePeople; // 0x0e(0x01)
	char BlueTeam_ToNeutral_MorePeople; // 0x0f(0x01)
};

// ScriptStruct CrowFPS.CrowSpecialVehicleCondition
// Size: 0x20 (Inherited: 0x00)
struct FCrowSpecialVehicleCondition {
	bool bIsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActiveTime; // 0x04(0x04)
	int32_t ConquestPointGap; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString VehicleTextIndex; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowHeavyBomberInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowHeavyBomberInfo {
	float ActiveTime; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct CrowFPS.CrowConquestLineInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowConquestLineInfo {
	struct UCrowWidgetBase* IconWidgetFrom; // 0x00(0x08)
	struct UCrowWidgetBase* IconWidgetTo; // 0x08(0x08)
	struct ACrowConquestArea* AreaFrom; // 0x10(0x08)
	struct ACrowConquestArea* AreaTo; // 0x18(0x08)
	struct UCrowConquestLineWidget* LineWidget; // 0x20(0x08)
	enum class ECrowConquestLineType LineType; // 0x28(0x04)
	bool FlipHorizontal; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct CrowFPS.CrowConquestIconAreaPair
// Size: 0x10 (Inherited: 0x00)
struct FCrowConquestIconAreaPair {
	struct UCrowWidgetBase* IconWidget; // 0x00(0x08)
	struct ACrowConquestArea* ConquestArea; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowConquestSkillInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowConquestSkillInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct CrowFPS.CrowConquestSkillTableRow
// Size: 0x68 (Inherited: 0x08)
struct FCrowConquestSkillTableRow : FTableRowBase {
	struct FString TextIndex; // 0x08(0x10)
	enum class ECrowConquestSkill Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString GroupKey; // 0x20(0x10)
	struct FText SkillName; // 0x30(0x18)
	struct UPaperSprite* DefaultIcon; // 0x48(0x08)
	int32_t Price; // 0x50(0x04)
	float CoolTime; // 0x54(0x04)
	struct UUserWidget* CursorClass; // 0x58(0x08)
	struct AActor* SkillObjectClass; // 0x60(0x08)
};

// ScriptStruct CrowFPS.CrowSupplySpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowSupplySpawnInfo {
	int32_t SupplyItemIndex; // 0x00(0x04)
	int32_t CurrentSpawendCount; // 0x04(0x04)
	int32_t SpawnCountMAX; // 0x08(0x04)
};

// ScriptStruct CrowFPS.ContaminationAreaExpansionInfo
// Size: 0x0c (Inherited: 0x00)
struct FContaminationAreaExpansionInfo {
	float ExpansionRadius; // 0x00(0x04)
	float ExpansionSpeed; // 0x04(0x04)
	float ExpansionDelayTime; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowCountingLog
// Size: 0x50 (Inherited: 0x00)
struct FCrowCountingLog {
	struct TMap<struct FString, int32_t> CachedCounts; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowCurrencyTableRow
// Size: 0x1b0 (Inherited: 0x168)
struct FCrowCurrencyTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowItemType CurrencyType; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct ACrowItemCurrencyBase* CurrencyClass; // 0x180(0x08)
	struct FSoftObjectPath Mesh3P; // 0x188(0x18)
	struct TArray<struct FCrowCurrencyMeshInfo> MeshArray; // 0x1a0(0x10)
};

// ScriptStruct CrowFPS.CrowCurrencyMeshInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowCurrencyMeshInfo {
	struct ACrowItemMeshActor* MeshClass; // 0x00(0x08)
	int32_t CountMin; // 0x08(0x04)
	int32_t CountMax; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowCustomFxLODRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowCustomFxLODRow : FTableRowBase {
	struct FSoftObjectPath AssetName; // 0x08(0x18)
	struct TArray<float> SizeOfLOD; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowCustomizeEmotionListInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowCustomizeEmotionListInfo {
	enum class ECrowItemGrade ItemGrade; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<uint32_t> EquipedSlotIndexs; // 0x08(0x10)
	struct TArray<struct FCrowEmotionSlotInfo> SlotInfos; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowEmotionSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowEmotionSlotInfo {
	uint32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPaperSprite* Image; // 0x08(0x08)
	enum class ECrowItemGrade ItemGrade; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t ShopIndex; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowAccSlotWidgetInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowAccSlotWidgetInfo {
	enum class ECrowWeaponAccType WeaponAccType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t AccTableIndex; // 0x04(0x04)
	struct UPaperSprite* IconSprite; // 0x08(0x08)
	struct FText AccName; // 0x10(0x18)
	enum class ECrowItemGrade ItemGrade; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CrowFPS.CrowCustomModeInvitation
// Size: 0x20 (Inherited: 0x00)
struct FCrowCustomModeInvitation {
	uint64_t RoomIndex; // 0x00(0x08)
	uint64_t playerId; // 0x08(0x08)
	struct FString NickName; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowCustomRoomSettingInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrowCustomRoomSettingInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString RoomName; // 0x08(0x10)
	struct FString PassWord; // 0x18(0x10)
	enum class ECrowGameMode GameMode; // 0x28(0x04)
	uint32_t MapIndex; // 0x2c(0x04)
	int32_t MaxGamePlayUserCount; // 0x30(0x04)
	int32_t WinPoint; // 0x34(0x04)
	int32_t PlaySec; // 0x38(0x04)
	bool Watch; // 0x3c(0x01)
	bool Intrusion; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct CrowFPS.CrowCustomRoomInfo
// Size: 0xb8 (Inherited: 0x40)
struct FCrowCustomRoomInfo : FCrowCustomRoomSettingInfo {
	uint64_t RoomIndex; // 0x40(0x08)
	enum class ECrowCustomRoomState State; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t MatchingUserCount; // 0x4c(0x04)
	struct FString HostName; // 0x50(0x10)
	uint64_t HostId; // 0x60(0x08)
	struct TMap<uint64_t, struct FCrowCustomUserInfo> UserInfoes; // 0x68(0x50)
};

// ScriptStruct CrowFPS.CrowCustomUserInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowCustomUserInfo {
	uint64_t playerId; // 0x00(0x08)
	struct FString NickName; // 0x08(0x10)
	enum class ECrowCustomTeamType TeamType; // 0x18(0x01)
	char Squard; // 0x19(0x01)
	char Slot; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct CrowFPS.CrowCustomDisplayRoomInfo
// Size: 0x48 (Inherited: 0x00)
struct FCrowCustomDisplayRoomInfo {
	uint64_t RoomIndex; // 0x00(0x08)
	struct FString RoomName; // 0x08(0x10)
	enum class ECrowGameMode GameMode; // 0x18(0x04)
	uint32_t MapIndex; // 0x1c(0x04)
	enum class ECrowCustomRoomState State; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MatchingUserCount; // 0x24(0x04)
	int32_t MaxGamePlayUserCount; // 0x28(0x04)
	bool UsePassWord; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString HostName; // 0x30(0x10)
	int32_t PlaySec; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct CrowFPS.CrowCustomFilterInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowCustomFilterInfo {
	enum class ECrowCustomRoomState RoomState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ECrowGameMode GameMode; // 0x04(0x04)
	enum class ECrowCustomFilterMaxUser MaxUser; // 0x08(0x01)
	enum class ECrowCustomFilterReaminSlot ReaminSlot; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct CrowFPS.CrowDamageCameraShake
// Size: 0x10 (Inherited: 0x00)
struct FCrowDamageCameraShake {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	struct UMatineeCameraShake* CameraShake; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowActorOverlapRef
// Size: 0x10 (Inherited: 0x00)
struct FCrowActorOverlapRef {
	struct ACrowCharacterPawn* TargetCharacter; // 0x00(0x08)
	uint32_t RefCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowDeathZoneOverlapRef
// Size: 0x18 (Inherited: 0x10)
struct FCrowDeathZoneOverlapRef : FCrowActorOverlapRef {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowDeathZoneVolumeActor
// Size: 0x10 (Inherited: 0x00)
struct FCrowDeathZoneVolumeActor {
	struct APawn* EnterPawn; // 0x00(0x08)
	float TimeSecond; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowDecalTypeArray
// Size: 0x10 (Inherited: 0x00)
struct FCrowDecalTypeArray {
	struct TArray<struct UCrowDecalComponent*> Array; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowDialogTableRow
// Size: 0x88 (Inherited: 0x08)
struct FCrowDialogTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FText Message; // 0x10(0x18)
	bool GuideDisplay; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText GuideTitle; // 0x30(0x18)
	struct FSoftObjectPath GuideImage; // 0x48(0x18)
	struct FText GuideDesc; // 0x60(0x18)
	struct UAkAudioEvent* Sound; // 0x78(0x08)
	float DisplayTime; // 0x80(0x04)
	float DelayTime; // 0x84(0x04)
};

// ScriptStruct CrowFPS.CrowDOFSetting
// Size: 0x580 (Inherited: 0x00)
struct FCrowDOFSetting {
	float OriginalScreenPercentage; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FPostProcessSettings OriginalSetting; // 0x10(0x550)
	struct FCrowDOFProperty DOFProperty; // 0x560(0x10)
	struct UCameraComponent* DOFCamera; // 0x570(0x08)
	char pad_578[0x8]; // 0x578(0x08)
};

// ScriptStruct CrowFPS.CrowDOFProperty
// Size: 0x10 (Inherited: 0x00)
struct FCrowDOFProperty {
	enum class ECrowScopeSightRate ScopeSightRate; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Fstop; // 0x04(0x04)
	float FocalDistance; // 0x08(0x04)
	float SensorWidth; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowDotDamageFxInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowDotDamageFxInfo {
	struct UParticleSystem* ParticleFX; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	struct FRotator RotationOffset; // 0x14(0x0c)
	struct FName NameCharacterBone; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowDynamicFoliageWindSetting
// Size: 0x1c (Inherited: 0x00)
struct FCrowDynamicFoliageWindSetting {
	float Intensity; // 0x00(0x04)
	float IntensityMul_Grass; // 0x04(0x04)
	float IntensityMul_Bush; // 0x08(0x04)
	float IntensityMul_Tree; // 0x0c(0x04)
	float Speed; // 0x10(0x04)
	float Weight; // 0x14(0x04)
	float DirectionPower; // 0x18(0x04)
};

// ScriptStruct CrowFPS.CrowDynamicFoliageRenderTarget
// Size: 0x18 (Inherited: 0x00)
struct FCrowDynamicFoliageRenderTarget {
	float CaptureSize; // 0x00(0x04)
	float PixelSizePerMeter; // 0x04(0x04)
	struct UTextureRenderTarget2D* RenderTarget; // 0x08(0x08)
	struct UMaterialParameterCollection* CrowParamCollection; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowFoliageParam
// Size: 0x40 (Inherited: 0x00)
struct FCrowFoliageParam {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MeshHeight; // 0x04(0x04)
	float BendingPower; // 0x08(0x04)
	float MaxRotationAngle; // 0x0c(0x04)
	float AddSine1; // 0x10(0x04)
	float AddSine2; // 0x14(0x04)
	struct TSoftObjectPtr<struct UTexture> DynamicFoliageMask; // 0x18(0x28)
};

// ScriptStruct CrowFPS.CrowFoliageAffectorDrawParam
// Size: 0x38 (Inherited: 0x00)
struct FCrowFoliageAffectorDrawParam {
	char bOwnerWasRecentlyRendered : 1; // 0x00(0x01)
	char bWind : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	enum class ECrowFoliageAffectorAnimState AnimState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DistanceFromCamera; // 0x04(0x04)
	float StartAnimTime; // 0x08(0x04)
	float AffectorAlpha; // 0x0c(0x04)
	float AffectorRotation; // 0x10(0x04)
	struct FVector AffectorScale; // 0x14(0x0c)
	struct FVector AffectorLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x30(0x08)
};

// ScriptStruct CrowFPS.CrowFoliageAffectByDistance
// Size: 0x20 (Inherited: 0x00)
struct FCrowFoliageAffectByDistance {
	bool UseDistance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AffectDistanceMax; // 0x04(0x04)
	float ScaleInterpStartDist; // 0x08(0x04)
	float ScaleMin; // 0x0c(0x04)
	float ScaleMax; // 0x10(0x04)
	float PowerInterpStartDist; // 0x14(0x04)
	float PowerMin; // 0x18(0x04)
	float PowerMax; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowEmotionTableRow
// Size: 0x1a8 (Inherited: 0x168)
struct FCrowEmotionTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct FString NameKey; // 0x178(0x10)
	struct FString DescriptionKey; // 0x188(0x10)
	struct UAnimMontage* AnimMontage; // 0x198(0x08)
	struct UPaperSprite* Icon; // 0x1a0(0x08)
};

// ScriptStruct CrowFPS.CrowEnvOverlapInfo
// Size: 0x90 (Inherited: 0x00)
struct FCrowEnvOverlapInfo {
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x00(0x08)
	struct FDateTime BeginTime; // 0x08(0x08)
	struct FTransform BeginActorTM; // 0x10(0x30)
	struct FVector StartLocation; // 0x40(0x0c)
	struct FVector LastLocation; // 0x4c(0x0c)
	struct FRotator StartRotation; // 0x58(0x0c)
	struct FRotator LastRotation; // 0x64(0x0c)
	float MovingTime; // 0x70(0x04)
	float RotationTime; // 0x74(0x04)
	float ElapsedOverlapTime; // 0x78(0x04)
	float MoveVelocity; // 0x7c(0x04)
	float AngularVelocity; // 0x80(0x04)
	bool bIsMoving; // 0x84(0x01)
	bool bIsRotate; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct UAkComponent* AkComponent; // 0x88(0x08)
};

// ScriptStruct CrowFPS.CrowErrorMessageGame
// Size: 0x01 (Inherited: 0x00)
struct FCrowErrorMessageGame {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowFPS.CrowErrorMessageNetwork
// Size: 0x01 (Inherited: 0x00)
struct FCrowErrorMessageNetwork {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowFPS.CrowEtcTableRow
// Size: 0x188 (Inherited: 0x168)
struct FCrowEtcTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowEtcItemType EtcItemType; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	int64_t DurationTime; // 0x180(0x08)
};

// ScriptStruct CrowFPS.CrowEventPageTableRow
// Size: 0x58 (Inherited: 0x08)
struct FCrowEventPageTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FText HelpText; // 0x10(0x18)
	enum class ECrowShopProductType Page_Link_type; // 0x28(0x01)
	enum class ECrowShopProductSubType Page_LinkSub_Type; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float BannerScrollDelayTime; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Images; // 0x30(0x28)
};

// ScriptStruct CrowFPS.CrowEventParam
// Size: 0x30 (Inherited: 0x00)
struct FCrowEventParam {
	struct UObject* UObjectParam; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct CrowFPS.CrowExceptionalDamageTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowExceptionalDamageTableRow : FTableRowBase {
	uint32_t Index; // 0x08(0x04)
	bool bIsDot; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Term; // 0x10(0x04)
	float Damage; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowEyeColorTableBaseRow
// Size: 0x178 (Inherited: 0x168)
struct FCrowEyeColorTableBaseRow : FCrowItemTableBaseRow {
	struct UMaterialInterface* EyeMaterial; // 0x168(0x08)
	struct UMaterialInterface* EyeMaterial_LOD; // 0x170(0x08)
};

// ScriptStruct CrowFPS.CrowFaceTableBaseRow
// Size: 0xb0 (Inherited: 0x08)
struct FCrowFaceTableBaseRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString TextIndex; // 0x10(0x10)
	struct FText Name; // 0x20(0x18)
	bool bIsHidden; // 0x38(0x01)
	bool bIsMale; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct USkeletalMesh* FaceMesh; // 0x40(0x08)
	struct FCrowSkinMaterial SkinTop; // 0x48(0x18)
	struct FCrowSkinMaterial SkinBottom; // 0x60(0x18)
	struct FCrowSkinMaterial SkinGloves; // 0x78(0x18)
	struct FCrowSkinMaterial SkinShoes; // 0x90(0x18)
	struct UPaperSprite* DefaultIcon; // 0xa8(0x08)
};

// ScriptStruct CrowFPS.CrowSkinMaterial
// Size: 0x18 (Inherited: 0x00)
struct FCrowSkinMaterial {
	struct UMaterialInstance* SkinMaterialIns_1P; // 0x00(0x08)
	struct UMaterialInstance* SkinMaterialIns_3P; // 0x08(0x08)
	struct UMaterialInstance* SkinMaterialIns_3P_LOD; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowFallsDamageTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowFallsDamageTableRow : FTableRowBase {
	enum class EPhysicalSurface SurfaceType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinRange; // 0x0c(0x04)
	float MaxRange; // 0x10(0x04)
	enum class ECrowFallsDamageType DamageType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleFallsDamageTableRow
// Size: 0x28 (Inherited: 0x20)
struct FCrowVehicleFallsDamageTableRow : FCrowFallsDamageTableRow {
	enum class EVehicleIdentity VehicleType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CrowFPS.CrowFixItemTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowFixItemTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct ACrowPickupInventory* PickupInventoryClass; // 0x18(0x08)
	struct TArray<struct FCrowFixItemInfo> ItemArray; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowFixItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowFixItemInfo {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowFixSetTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowFixSetTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct TArray<struct FCrowFixSetWeight> ItemArray; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowFixSetWeight
// Size: 0x08 (Inherited: 0x00)
struct FCrowFixSetWeight {
	uint32_t ItemIndex; // 0x00(0x04)
	float Weight; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowFoliageFXRow
// Size: 0xb0 (Inherited: 0x08)
struct FCrowFoliageFXRow : FTableRowBase {
	struct TSoftObjectPtr<struct UParticleSystem> Particle; // 0x08(0x28)
	struct TSoftObjectPtr<struct UNiagaraSystem> Particle_N; // 0x30(0x28)
	struct UAkAudioEvent* Sound_W; // 0x58(0x08)
	struct FString GroupName; // 0x60(0x10)
	struct FString EnterState; // 0x70(0x10)
	struct FString OverlapState; // 0x80(0x10)
	struct FString ExitState; // 0x90(0x10)
	struct FString VolumeParamName; // 0xa0(0x10)
};

// ScriptStruct CrowFPS.CrowFoliageInteractionRow
// Size: 0x80 (Inherited: 0x08)
struct FCrowFoliageInteractionRow : FTableRowBase {
	bool bAttenuation; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FCrowFoliageInteractionAttenuationWithRay BendingMaskAttenation; // 0x0c(0x14)
	struct FCrowFoliageInteractionAttenuation BendingStrengthAttenation; // 0x20(0x10)
	struct FCrowFoliageInteractionAttenuation BendingSpeedAttenation; // 0x30(0x10)
	struct FCrowFoliageInteractionAttenuation WindMaskScaleAttenation; // 0x40(0x10)
	struct FCrowFoliageInteractionAttenuation WindMaskPlantScaleAttenation; // 0x50(0x10)
	struct FCrowFoliageInteractionAttenuation WindMaskTreeScaleAttenation; // 0x60(0x10)
	struct TArray<struct FCrowFoliageInfluenceInterpSequence> InterpSequence; // 0x70(0x10)
};

// ScriptStruct CrowFPS.CrowFoliageInfluenceInterpSequence
// Size: 0x28 (Inherited: 0x00)
struct FCrowFoliageInfluenceInterpSequence {
	bool bPlaying; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	bool bLoop; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Order; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FCrowFoliageInfluenceSequenceSetting> Sequence; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowFoliageInfluenceSequenceSetting
// Size: 0x48 (Inherited: 0x00)
struct FCrowFoliageInfluenceSequenceSetting {
	struct FCrowFoliageInfluenceRange BendingMaskScale; // 0x00(0x0c)
	struct FCrowFoliageInfluenceRange BendingStrength; // 0x0c(0x0c)
	struct FCrowFoliageInfluenceRange WindMaskScale; // 0x18(0x0c)
	struct FCrowFoliageInfluenceRange WindMaskPlantStrength; // 0x24(0x0c)
	struct FCrowFoliageInfluenceRange WindMaskTreeStrength; // 0x30(0x0c)
	enum class ECrowFoliageBendingInterpType InfluenceInterpType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float InfluenceInterpTime; // 0x40(0x04)
	bool ComponentInactive; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct CrowFPS.CrowFoliageInfluenceRange
// Size: 0x0c (Inherited: 0x00)
struct FCrowFoliageInfluenceRange {
	bool bOverrideStart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Start; // 0x04(0x04)
	float Target; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowFoliageInteractionAttenuation
// Size: 0x10 (Inherited: 0x00)
struct FCrowFoliageInteractionAttenuation {
	bool bInvRatio; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxDistance; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	enum class ECrowFoliageBendingInterpType InterpType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct CrowFPS.CrowFoliageInteractionAttenuationWithRay
// Size: 0x14 (Inherited: 0x10)
struct FCrowFoliageInteractionAttenuationWithRay : FCrowFoliageInteractionAttenuation {
	float RayLength; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowHideWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowHideWidgetInfo {
	struct UWidget* Widget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowFxTypeArrayy
// Size: 0x10 (Inherited: 0x00)
struct FCrowFxTypeArrayy {
	struct TArray<struct UParticleSystemComponent*> Array; // 0x00(0x10)
};

// ScriptStruct CrowFPS.WwiseEventPlayingInfo
// Size: 0x38 (Inherited: 0x00)
struct FWwiseEventPlayingInfo {
	int32_t EventPlayingID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkComponent* AkPlayingComponent; // 0x08(0x08)
	bool bIsCheckViewToggle; // 0x10(0x01)
	bool bIsFirstPlayerOnBoardingFPEvent; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UAkAudioEvent* FPEvent; // 0x18(0x08)
	struct UAkAudioEvent* TPEvent; // 0x20(0x08)
	struct UAkAudioEvent* FPEndEvent; // 0x28(0x08)
	struct UAkAudioEvent* TPEndEvent; // 0x30(0x08)
};

// ScriptStruct CrowFPS.InitializeFxReplicator
// Size: 0x50 (Inherited: 0x00)
struct FInitializeFxReplicator {
	struct USceneComponent* AttachToComponent; // 0x00(0x08)
	struct TArray<struct FName> HideBoneNameList; // 0x08(0x10)
	struct TArray<struct FFxReplicator_FxTemplate> FxTemplateList; // 0x18(0x10)
	struct TArray<struct FFxReplicator_AudioTemplate> AudioTemplateList; // 0x28(0x10)
	struct TArray<struct FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x38(0x10)
	bool bIsFirstPlayerOnBoardingFP; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct CrowFPS.FxReplicator_WwiseAudioTemplate
// Size: 0x30 (Inherited: 0x00)
struct FFxReplicator_WwiseAudioTemplate {
	bool bIsCheckViewToggleEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AttachPointName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAkAudioEvent* FPEvent; // 0x10(0x08)
	struct UAkAudioEvent* TPEvent; // 0x18(0x08)
	struct UAkAudioEvent* FPEndEvent; // 0x20(0x08)
	struct UAkAudioEvent* TPEndEvent; // 0x28(0x08)
};

// ScriptStruct CrowFPS.FxReplicator_AudioTemplate
// Size: 0x10 (Inherited: 0x00)
struct FFxReplicator_AudioTemplate {
	float FadeOutTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundCue* Audio; // 0x08(0x08)
};

// ScriptStruct CrowFPS.FxReplicator_FxTemplate
// Size: 0x28 (Inherited: 0x00)
struct FFxReplicator_FxTemplate {
	struct FName AttachSocketName; // 0x00(0x08)
	struct UParticleSystem* FX; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
};

// ScriptStruct CrowFPS.CrowFxSpawnTesterItem
// Size: 0x14 (Inherited: 0x00)
struct FCrowFxSpawnTesterItem {
	float Duration; // 0x00(0x04)
	float PlayTime; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
};

// ScriptStruct CrowFPS.CrowLootPickupItemData
// Size: 0x28 (Inherited: 0x00)
struct FCrowLootPickupItemData {
	struct FString UserName; // 0x00(0x10)
	struct TArray<struct ACrowItemBase*> ItemList; // 0x10(0x10)
	struct ACrowPickupInventory* PickUpInvenActor; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowGameMessageTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowGameMessageTableRow : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	float DisplayTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAkAudioEvent* SpeechSound; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowSquadRewardInfo
// Size: 0x02 (Inherited: 0x00)
struct FCrowSquadRewardInfo {
	char Index; // 0x00(0x01)
	enum class ECrowSquadRewardState State; // 0x01(0x01)
};

// ScriptStruct CrowFPS.CrowDamageExpInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowDamageExpInfo {
	uint64_t ServerKey; // 0x00(0x08)
	float DamagePercent; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double DamageTime; // 0x10(0x08)
	struct TArray<struct FCrowAssistDamageInfo> AssistDamageInfos; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowAssistDamageInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowAssistDamageInfo {
	float ActualDamage; // 0x00(0x04)
	enum class ECrowDamageCauser DamageCauser; // 0x04(0x01)
	enum class ECrowItemType ItemType; // 0x05(0x01)
	uint16_t ItemIndex; // 0x06(0x02)
	float Percent; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowRespawnTimeInfo
// Size: 0x14 (Inherited: 0x00)
struct FCrowRespawnTimeInfo {
	float BodyDisplay; // 0x00(0x04)
	float KillerSpectating; // 0x04(0x04)
	float MyTeamSpectating; // 0x08(0x04)
	float RespawnWait; // 0x0c(0x04)
	float SkipSpectating; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowSaveGameServerExpInfo
// Size: 0x50 (Inherited: 0x00)
struct FCrowSaveGameServerExpInfo {
	char pad_0[0x8]; // 0x00(0x08)
	uint32_t TakeExpPoint[0xa]; // 0x08(0x28)
	struct TArray<struct FCrowTakeWeaponExpInfo> TakeWeaponExpInfo; // 0x30(0x10)
	struct TArray<struct FCrowMissionInfo> MissionStateInfo; // 0x40(0x10)
};

// ScriptStruct CrowFPS.CrowMissionInfo
// Size: 0x14 (Inherited: 0x00)
struct FCrowMissionInfo {
	char MissionType; // 0x00(0x01)
	char MissionModeType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t EndDate; // 0x04(0x04)
	uint32_t MissionID; // 0x08(0x04)
	uint32_t DoCount; // 0x0c(0x04)
	uint32_t GoalCount; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowTakeWeaponExpInfo
// Size: 0x14 (Inherited: 0x00)
struct FCrowTakeWeaponExpInfo {
	uint32_t ExpShareIndex; // 0x00(0x04)
	uint32_t WaeponExp; // 0x04(0x04)
	uint32_t WaeponBuffExp; // 0x08(0x04)
	uint32_t KillCount; // 0x0c(0x04)
	uint32_t HeadShotCount; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowTakeExpInfo
// Size: 0x88 (Inherited: 0x50)
struct FCrowTakeExpInfo : FCrowSaveGameServerExpInfo {
	uint32_t TakeExpBuffPoint[0xa]; // 0x50(0x28)
	struct TArray<struct FCrowWeaponEventInfo> WeaponEventInfo; // 0x78(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponEventInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowWeaponEventInfo {
	enum class ECrowWeaponEventType EventType; // 0x00(0x01)
	enum class ECrowWeaponPartsType PartsType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t Index; // 0x04(0x04)
	uint32_t WeaponLevel; // 0x08(0x04)
	uint32_t PartsIndex; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowFirstRespawnInfo
// Size: 0x02 (Inherited: 0x00)
struct FCrowFirstRespawnInfo {
	char TeamID; // 0x00(0x01)
	enum class ECrowSquadRole SquadRole; // 0x01(0x01)
};

// ScriptStruct CrowFPS.CrowTestAmmo
// Size: 0x08 (Inherited: 0x00)
struct FCrowTestAmmo {
	enum class ECrowAmmoType AmmoType; // 0x00(0x04)
	uint32_t Count; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowMultiKillInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowMultiKillInfo {
	struct ACrowPlayerStateBase* Attacker; // 0x00(0x08)
	enum class ECrowDamageCauser DamageCauser; // 0x08(0x01)
	enum class ECrowItemType ItemType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	uint32_t WeaponIndex; // 0x0c(0x04)
	char KillCount; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct CrowFPS.CrowKillInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowKillInfo {
	struct ACrowPlayerStateBase* Attacker; // 0x00(0x08)
	struct ACrowPlayerStateBase* Victim; // 0x08(0x08)
	enum class ECrowDamageCauser DamageCauser; // 0x10(0x01)
	enum class ECrowItemType ItemType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	uint32_t WeaponIndex; // 0x14(0x04)
	float ActualDamage; // 0x18(0x04)
	struct FName BoneName; // 0x1c(0x08)
	bool IsFirstKill; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct CrowFPS.CharacterHitInfoClient
// Size: 0x1c (Inherited: 0x00)
struct FCharacterHitInfoClient {
	struct FVector FireLocation; // 0x00(0x0c)
	float ActualDamage; // 0x0c(0x04)
	struct FName BoneName; // 0x10(0x08)
	char AttackerType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct CrowFPS.CharacterHitInfo
// Size: 0x130 (Inherited: 0x00)
struct FCharacterHitInfo {
	float ActualDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	int32_t DamageEventClassID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* DamageCauser; // 0x18(0x08)
	struct FName BoneName; // 0x20(0x08)
	struct AController* DamageController; // 0x28(0x08)
	struct FDamageEvent GeneralDamageEvent; // 0x30(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x40(0xb0)
	struct FRadialDamageEvent RadialDamageEvent; // 0xf0(0x40)
};

// ScriptStruct CrowFPS.CrowSquadBattleInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowSquadBattleInfo {
	float AliveTime; // 0x00(0x04)
	float TotalDamage; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowTeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowTeamInfo {
	char TeamID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString SquadKey; // 0x08(0x10)
	enum class ECrowSquadRole SquadRole; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t SquadPoint; // 0x1c(0x04)
	struct FString SquadName; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowAdjustMapInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowAdjustMapInfo {
	enum class ECrowGameMode GameMode; // 0x00(0x04)
	int32_t MapIndex; // 0x04(0x04)
	bool DefaultMap; // 0x08(0x01)
	bool ModeDefault; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct CrowFPS.CrowLobbyNoticeInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowLobbyNoticeInfo {
	enum class ECrowLobbyNoticeType NoticeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t Key; // 0x08(0x08)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowStartCameraWorkInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowStartCameraWorkInfo {
	struct USplineComponent* Spline; // 0x00(0x08)
	float SplineLength; // 0x08(0x04)
	float TotalTime; // 0x0c(0x04)
	float ElapsedTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowTeamInfoBombMission
// Size: 0x18 (Inherited: 0x00)
struct FCrowTeamInfoBombMission {
	char TeamID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct ACrowPlayerStateBase*> PlayerStateArray; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowPlayerCountInfoBombMission
// Size: 0x08 (Inherited: 0x00)
struct FCrowPlayerCountInfoBombMission {
	char TeamID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Count; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowScoreInfoBombMission
// Size: 0x0c (Inherited: 0x00)
struct FCrowScoreInfoBombMission {
	char TeamID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Score; // 0x04(0x04)
	char PlantCompositionCCount; // 0x08(0x01)
	char DefuseCompositionCCount; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct CrowFPS.CrowConquestMeteorInfo
// Size: 0x50 (Inherited: 0x00)
struct FCrowConquestMeteorInfo {
	bool bIsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActiveTimeMin; // 0x04(0x04)
	float ActiveTimeMax; // 0x08(0x04)
	int32_t ActiveCountMin; // 0x0c(0x04)
	int32_t ActiveCountMax; // 0x10(0x04)
	float NextActiveDelayMin; // 0x14(0x04)
	float NextActiveDelayMax; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FWeaponDamageSettings GasDamage; // 0x20(0x28)
	struct UDamageType* GasDamegeType; // 0x48(0x08)
};

// ScriptStruct CrowFPS.WeaponDamageSettings
// Size: 0x28 (Inherited: 0x00)
struct FWeaponDamageSettings {
	float MinDamege; // 0x00(0x04)
	float MaxDamege; // 0x04(0x04)
	float MinRadius; // 0x08(0x04)
	float MaxRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* DropDistanceCurve; // 0x18(0x08)
	float FriendlyFireDamage; // 0x20(0x04)
	uint32_t DotDamageSeconds; // 0x24(0x04)
};

// ScriptStruct CrowFPS.CrowConquestPointRate
// Size: 0x08 (Inherited: 0x00)
struct FCrowConquestPointRate {
	float ElapsedTime; // 0x00(0x04)
	char PointRate; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CrowFPS.CrowSkyRespawnCondition
// Size: 0x1c (Inherited: 0x00)
struct FCrowSkyRespawnCondition {
	bool bIsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActiveTime; // 0x04(0x04)
	int32_t ActivePoint; // 0x08(0x04)
	int32_t ActivePointGap; // 0x0c(0x04)
	float ActiveCountdownTime; // 0x10(0x04)
	int32_t DeativePointGap; // 0x14(0x04)
	float DeactiveCountdownTime; // 0x18(0x04)
};

// ScriptStruct CrowFPS.CrowFreeConquestCondition
// Size: 0x14 (Inherited: 0x00)
struct FCrowFreeConquestCondition {
	bool bIsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActiveTime; // 0x04(0x04)
	int32_t ActivePoint; // 0x08(0x04)
	int32_t ActivePointGap; // 0x0c(0x04)
	float CountdownTime; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowZombieInfo
// Size: 0x670 (Inherited: 0x00)
struct FCrowZombieInfo {
	float ZombieTransfromWaitingTime; // 0x00(0x04)
	float HP; // 0x04(0x04)
	float HealDelayByDamage; // 0x08(0x04)
	float HealPerSecond; // 0x0c(0x04)
	uint16_t DefaultEnergy; // 0x10(0x02)
	uint16_t MaxEnergy; // 0x12(0x02)
	uint16_t EnergyLossPerSecond; // 0x14(0x02)
	uint16_t GetEnergyByHit; // 0x16(0x02)
	uint16_t GetEnergyByKill; // 0x18(0x02)
	char pad_1A[0x2]; // 0x1a(0x02)
	float GetEnergyRateByQon; // 0x1c(0x04)
	float RunSpeedRate; // 0x20(0x04)
	float JumpSpeedRate; // 0x24(0x04)
	float EnemyScanDistance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FCrowGameIconDisplayInfo DisplayInfo; // 0x30(0x88)
	struct UParticleSystem* AttachEffect; // 0xb8(0x08)
	struct UParticleSystem* ChangeZombieEffect; // 0xc0(0x08)
	struct UParticleSystem* ZombieDeathEffect; // 0xc8(0x08)
	struct TArray<struct FCrowZombieDamgeInfo> DamageRateArray; // 0xd0(0x10)
	struct TArray<struct FCrowZombieHeartBeatInfo> HeartBeatInfoArray; // 0xe0(0x10)
	struct FPostProcessSettings PostProcess; // 0xf0(0x550)
	struct FWeaponDamageSettings ExplosionDamage; // 0x640(0x28)
	struct UDamageType* ExplosionDamegeType; // 0x668(0x08)
};

// ScriptStruct CrowFPS.CrowZombieHeartBeatInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowZombieHeartBeatInfo {
	float Percent; // 0x00(0x04)
	float AniSpeed; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)
	struct FString Dialog; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowZombieDamgeInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowZombieDamgeInfo {
	struct UDamageType* DamageClass; // 0x00(0x08)
	float DamageRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowCharacterPartsInfo
// Size: 0x38 (Inherited: 0x00)
struct FCrowCharacterPartsInfo {
	bool bIsLocalPlayer; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ServerKey; // 0x08(0x08)
	struct FCrowCharacterAppearance ReplicatedAppearance; // 0x10(0x06)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct FCrowClothItemData> DefaultClothesList; // 0x18(0x10)
	struct TArray<uint32_t> DefaultTattooIndexList; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowProcessMineralInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowProcessMineralInfo {
	float Percent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DialogTextIndex; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowTeamInfoTDM
// Size: 0x20 (Inherited: 0x00)
struct FCrowTeamInfoTDM {
	char TeamID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct ACrowPlayerStateBase*> PlayerStateArray; // 0x08(0x10)
	uint32_t PreRank; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowPlayerCountInfoTDM
// Size: 0x08 (Inherited: 0x00)
struct FCrowPlayerCountInfoTDM {
	char TeamID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Count; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowScoreInfoTDM
// Size: 0x08 (Inherited: 0x00)
struct FCrowScoreInfoTDM {
	char TeamID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Score; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowGroupItemTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowGroupItemTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct TArray<struct FCrowGroupItemInfo> ItemArray; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowGroupItemInfo
// Size: 0x0c (Inherited: 0x00)
struct FCrowGroupItemInfo {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowGroupSetTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowGroupSetTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	struct TArray<struct FCrowGroupSetWeight> ItemArray; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowGroupSetWeight
// Size: 0x08 (Inherited: 0x00)
struct FCrowGroupSetWeight {
	uint32_t ItemIndex; // 0x00(0x04)
	float Weight; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowHLODTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowHLODTableRow : FTableRowBase {
	struct FName PackageName; // 0x08(0x08)
	bool Build; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct CrowFPS.CrowIconZOrderTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowIconZOrderTableRow : FTableRowBase {
	enum class ECrowIconType IconType; // 0x08(0x04)
	int32_t MapZOrder; // 0x0c(0x04)
	int32_t IndicatorZOrder; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.ST_BrokenBone
// Size: 0x90 (Inherited: 0x00)
struct FST_BrokenBone {
	bool bIsDetach; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ImpulseDetachPower; // 0x04(0x04)
	bool bIsImmediatelyHide; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UParticleSystem* ImpactParticle; // 0x10(0x08)
	struct FName SocketParticle; // 0x18(0x08)
	struct UAkAudioEvent* ImpactAudioEvent; // 0x20(0x08)
	bool IsDamageDisable; // 0x28(0x01)
	bool IsCanTakeDamageBullet; // 0x29(0x01)
	bool IsNoDamageToBody; // 0x2a(0x01)
	bool bIsSwing1; // 0x2b(0x01)
	bool bIsSwing2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float Swing1Limit; // 0x30(0x04)
	float Swing1Offset; // 0x34(0x04)
	float Swing2Limit; // 0x38(0x04)
	float Swing2Offset; // 0x3c(0x04)
	float Durability_Morph; // 0x40(0x04)
	float Durability_Swing; // 0x44(0x04)
	float Durability; // 0x48(0x04)
	float Durability_MorphMAX; // 0x4c(0x04)
	char pad_50[0x4]; // 0x50(0x04)
	bool bIsDetachedAlready; // 0x54(0x01)
	bool bIsSwingAlready; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct FName> WithTakeDamageBoneNames; // 0x58(0x10)
	struct FST_DamageMaterialSlot DamageMaterialSlot; // 0x68(0x10)
	struct TArray<struct FName> GroupConstraintNames; // 0x78(0x10)
	float LastMorphWeight; // 0x88(0x04)
	float LastMaterialWeight; // 0x8c(0x04)
};

// ScriptStruct CrowFPS.ST_DamageMaterialSlot
// Size: 0x10 (Inherited: 0x00)
struct FST_DamageMaterialSlot {
	struct FName DamageMaterialSlotName; // 0x00(0x08)
	struct FName DamageMaterialParamName; // 0x08(0x08)
};

// ScriptStruct CrowFPS.ST_DamageWheel
// Size: 0x28 (Inherited: 0x00)
struct FST_DamageWheel {
	enum class ETireState TireState; // 0x00(0x01)
	char WheelNumber; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t TireDurability; // 0x04(0x04)
	struct FName TireBoneName; // 0x08(0x08)
	float fDistanceDriven; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* FlatParticle; // 0x18(0x08)
	struct UParticleSystem* DestroyParticle; // 0x20(0x08)
};

// ScriptStruct CrowFPS.ST_DamageMaterial
// Size: 0x50 (Inherited: 0x00)
struct FST_DamageMaterial {
	struct TMap<struct FName, struct FST_DamageMaterialDurability> DamageMaterialParams; // 0x00(0x50)
};

// ScriptStruct CrowFPS.ST_DamageMaterialDurability
// Size: 0x08 (Inherited: 0x00)
struct FST_DamageMaterialDurability {
	float currentDurability; // 0x00(0x04)
	float DurabilityMAX; // 0x04(0x04)
};

// ScriptStruct CrowFPS.ST_PreImpactInfo
// Size: 0x10 (Inherited: 0x00)
struct FST_PreImpactInfo {
	struct FVector LastLocation; // 0x00(0x0c)
	float LastHitTime; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowInputStackInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowInputStackInfo {
	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowInvenBagRow
// Size: 0x198 (Inherited: 0x168)
struct FCrowInvenBagRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct FSoftObjectPath Mesh3P; // 0x178(0x18)
	uint32_t InvenCount; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// ScriptStruct CrowFPS.CrowItemColorTableRowBase
// Size: 0x30 (Inherited: 0x08)
struct FCrowItemColorTableRowBase : FTableRowBase {
	uint32_t Index; // 0x08(0x04)
	struct FLinearColor Color; // 0x0c(0x10)
	struct FLinearColor RootColor; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowItemRankPointTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowItemRankPointTableRow : FTableRowBase {
	uint32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString HelpText; // 0x10(0x10)
	enum class ECrowItemGrade ItemGrade; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t PointValue; // 0x24(0x04)
};

// ScriptStruct CrowFPS.CrowItemAssetElement
// Size: 0x28 (Inherited: 0x00)
struct FCrowItemAssetElement {
	struct USkeletalMesh* SKC; // 0x00(0x08)
	struct UStaticMesh* SMC; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x10(0x10)
	bool IsFP; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CrowFPS.CrowCanEquipParts
// Size: 0x20 (Inherited: 0x00)
struct FCrowCanEquipParts {
	struct FString WeaponTextIndex; // 0x00(0x10)
	struct TArray<enum class ECrowWeaponPartsType> PartsTypeArray; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowItemAssetRowViewer
// Size: 0x70 (Inherited: 0x00)
struct FCrowItemAssetRowViewer {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct CrowFPS.CrowItemAssetRow
// Size: 0x10 (Inherited: 0x00)
struct FCrowItemAssetRow {
	struct TArray<struct FCrowItemAssetElement> Elements; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowBuffData
// Size: 0x88 (Inherited: 0x30)
struct FCrowBuffData : FCrowItemData {
	struct FText Name; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	struct UPaperSprite* BuffIcon; // 0x60(0x08)
	enum class ECrowBuffEventType BuffEventType; // 0x68(0x01)
	enum class ECrowBuffType BuffType; // 0x69(0x01)
	enum class ECrowWeaponUIType WeaponUIType; // 0x6a(0x01)
	enum class ECrowBuffValueType BuffValueType; // 0x6b(0x01)
	uint32_t BuffIntValue; // 0x6c(0x04)
	float BuffFloatValue; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	uint64_t DurationTime; // 0x78(0x08)
	uint64_t EndTime; // 0x80(0x08)
};

// ScriptStruct CrowFPS.CrowShopItemData
// Size: 0x20 (Inherited: 0x00)
struct FCrowShopItemData {
	struct UPaperSprite* ShopItemIcon; // 0x00(0x08)
	struct FName ShopItemName; // 0x08(0x08)
	enum class ECrowShopItemStateType StateType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t Cost; // 0x14(0x04)
	uint32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponStickerInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowWeaponStickerInfo {
	enum class ECrowWeaponPartsType PartsType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SlotIndex; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowActiveSpawnerCount
// Size: 0x24 (Inherited: 0x00)
struct FCrowActiveSpawnerCount {
	int32_t RandomSpawner; // 0x00(0x04)
	int32_t GroupSpawner; // 0x04(0x04)
	int32_t MineralSpawner01; // 0x08(0x04)
	int32_t MineralSpawner02; // 0x0c(0x04)
	int32_t MineralSpawner03; // 0x10(0x04)
	int32_t FixSpawner; // 0x14(0x04)
	int32_t RespawnFixSpawner; // 0x18(0x04)
	float RespawnFixDelayMin; // 0x1c(0x04)
	float RespawnFixDelayMax; // 0x20(0x04)
};

// ScriptStruct CrowFPS.CrowPackedInt64
// Size: 0x08 (Inherited: 0x00)
struct FCrowPackedInt64 {
	uint64_t Value; // 0x00(0x08)
};

// ScriptStruct CrowFPS.CrowPackedInt32
// Size: 0x04 (Inherited: 0x00)
struct FCrowPackedInt32 {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct CrowFPS.CrowKillFeedIconTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowKillFeedIconTableRow : FTableRowBase {
	enum class ECrowDamageCauser DamageCauser; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UPaperSprite* IconSprite; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowLevelLayerTableRow
// Size: 0x10 (Inherited: 0x08)
struct FCrowLevelLayerTableRow : FTableRowBase {
	enum class ECrowLevelLayer LevelLayer; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct CrowFPS.CrowLevelStreamingDistanceTableRow
// Size: 0x10 (Inherited: 0x08)
struct FCrowLevelStreamingDistanceTableRow : FTableRowBase {
	int32_t StreamingDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowBuildingHitTestParam
// Size: 0x18 (Inherited: 0x00)
struct FCrowBuildingHitTestParam {
	struct AActor* SweepActor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct CrowFPS.SkeletalMeshMergeParams
// Size: 0x60 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x40(0x08)
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct CrowFPS.SkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct CrowFPS.SkelMeshMergeUVTransform
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct CrowFPS.SkelMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowTimeInfo
// Size: 0x80 (Inherited: 0x00)
struct FCrowTimeInfo {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct CrowFPS.CrowLinearCurve
// Size: 0x30 (Inherited: 0x00)
struct FCrowLinearCurve {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FCrowLinearCurveKey> KeyArray; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowLinearCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FCrowLinearCurveKey {
	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowSampleWeaponInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowSampleWeaponInfo {
	uint32_t ItemIndex; // 0x00(0x04)
	uint16_t Barrel; // 0x04(0x02)
	uint16_t Magazine; // 0x06(0x02)
	uint16_t Muzzle; // 0x08(0x02)
	uint16_t PistolGrip; // 0x0a(0x02)
	uint16_t PrimarySight; // 0x0c(0x02)
	uint16_t SecondarySight; // 0x0e(0x02)
	uint16_t SideBarrel; // 0x10(0x02)
	uint16_t Stock; // 0x12(0x02)
	uint16_t UnderBarrel; // 0x14(0x02)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct CrowFPS.CrowSampleCharacterInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowSampleCharacterInfo {
	char FaceIndex; // 0x00(0x01)
	char HairIndex; // 0x01(0x01)
	char HairColorIndex; // 0x02(0x01)
	char BeardIndex; // 0x03(0x01)
	char BeardColorIndex; // 0x04(0x01)
	char EyeColorIndex; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct TArray<struct FCrowClothItemData> ClothesList; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowLobbyIdleAnimTableRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowLobbyIdleAnimTableRow : FTableRowBase {
	enum class EAnimLobbyIdle LobbyIdle; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<enum class ECrowWeaponUIType, struct UAnimSequenceBase*> AnimSequenceMap; // 0x10(0x50)
};

// ScriptStruct CrowFPS.CrowLobbyNoiseAnimInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowLobbyNoiseAnimInfo {
	struct TArray<struct UAnimMontage*> NoiseAnimations; // 0x00(0x10)
	int32_t MinSecond; // 0x10(0x04)
	int32_t MaxSecond; // 0x14(0x04)
	struct UAnimMontage* PrePlayNoiseAnimations; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowLobbyProfileMercenaryParams
// Size: 0xb0 (Inherited: 0x00)
struct FCrowLobbyProfileMercenaryParams {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct CrowFPS.CrowLobbyProfileSeasonParams
// Size: 0xa0 (Inherited: 0x00)
struct FCrowLobbyProfileSeasonParams {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct CrowFPS.CrowPickupItemList
// Size: 0x10 (Inherited: 0x00)
struct FCrowPickupItemList {
	struct ACrowItemBase* ItemBase; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowMailInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowMailInfo {
	int64_t MailNo; // 0x00(0x08)
	uint32_t RewardIndex; // 0x08(0x04)
	char RewardFlag; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct CrowFPS.CrowPersonalMailInfo
// Size: 0x20 (Inherited: 0x10)
struct FCrowPersonalMailInfo : FCrowMailInfo {
	struct FString Sender; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowAccountMailInfo
// Size: 0x20 (Inherited: 0x10)
struct FCrowAccountMailInfo : FCrowMailInfo {
	uint32_t TitleIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t RewardEndTime; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowMailRewardTime
// Size: 0x28 (Inherited: 0x08)
struct FCrowMailRewardTime : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	uint64_t TimeSecond; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowMailRewardSentence
// Size: 0x38 (Inherited: 0x08)
struct FCrowMailRewardSentence : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	struct FText RewardSentense; // 0x20(0x18)
};

// ScriptStruct CrowFPS.CrowMailAccountReward
// Size: 0x30 (Inherited: 0x08)
struct FCrowMailAccountReward : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	uint32_t RewardIndex; // 0x20(0x04)
	uint32_t RewardSentenceIndex; // 0x24(0x04)
	uint32_t RewardTimeIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowMainMedalGroupInfo
// Size: 0x14 (Inherited: 0x00)
struct FCrowMainMedalGroupInfo {
	uint32_t Index; // 0x00(0x04)
	uint32_t RewardIndex; // 0x04(0x04)
	enum class ECrowMainMedalUIType UIType; // 0x08(0x01)
	char RewardFlag; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	uint32_t CompleteCount; // 0x0c(0x04)
	uint32_t TotalCompleteCount; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowMainMedalInfos
// Size: 0x10 (Inherited: 0x00)
struct FCrowMainMedalInfos {
	struct TArray<struct FCrowMainMedalInfo> Array; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowMainMedalInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowMainMedalInfo {
	uint32_t Index; // 0x00(0x04)
	uint32_t GroupIndex; // 0x04(0x04)
	uint32_t CompleteCount; // 0x08(0x04)
	uint32_t TotalCompleteCount; // 0x0c(0x04)
	uint32_t Order; // 0x10(0x04)
	enum class ECrowMedalType MedalType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CrowFPS.CrowMainMedalGroupTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowMainMedalGroupTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	enum class ECrowMainMedalUIType UIType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t RewardIndex; // 0x24(0x04)
};

// ScriptStruct CrowFPS.CrowMainMedalTableRow
// Size: 0x50 (Inherited: 0x08)
struct FCrowMainMedalTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	uint32_t GroupIndex; // 0x20(0x04)
	uint32_t Order; // 0x24(0x04)
	enum class ECrowMedalType MedalType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t CompleteCount; // 0x2c(0x04)
	struct FText Name; // 0x30(0x18)
	struct UPaperSprite* Icon; // 0x48(0x08)
};

// ScriptStruct CrowFPS.CrowMedalCountInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrowMedalCountInfo {
	struct FCrowModPointInfo PointInfo; // 0x00(0x38)
	enum class ECrowMedalType MedalType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t Count; // 0x3c(0x04)
};

// ScriptStruct CrowFPS.CrowModPointInfo
// Size: 0x38 (Inherited: 0x00)
struct FCrowModPointInfo {
	enum class ECrowModPointIndex Index; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Exp; // 0x04(0x04)
	uint32_t Money; // 0x08(0x04)
	enum class ECrowMedalShowType MedalShowType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString MedalNameKey; // 0x10(0x10)
	struct UPaperSprite* MedalIconSprite; // 0x20(0x08)
	struct FString MedalSoundName; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowMergedMeshShareData
// Size: 0x20 (Inherited: 0x00)
struct FCrowMergedMeshShareData {
	struct USkeletalMesh* CachedSkeletalMesh; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct ACrowCharacterBase>> Ptrs; // 0x08(0x10)
	bool bCachedComplete; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowFPS.CrowMessageBoxInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowMessageBoxInfo {
	struct FText Message; // 0x00(0x18)
	enum class ECrowMBType MBType; // 0x18(0x01)
	bool IsShowedMouseCursor; // 0x19(0x01)
	char pad_1A[0x16]; // 0x1a(0x16)
};

// ScriptStruct CrowFPS.WorldMeteorObjectInfo
// Size: 0x50 (Inherited: 0x00)
struct FWorldMeteorObjectInfo {
	struct FSoftObjectPath Object; // 0x00(0x18)
	struct ACrowWorldPropActor* PropClass; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct CrowFPS.WorldMeteorEventInfo
// Size: 0x10 (Inherited: 0x00)
struct FWorldMeteorEventInfo {
	enum class ECrowMeteorEventState MeteorState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CurrentLocation; // 0x04(0x0c)
};

// ScriptStruct CrowFPS.CrowMineralItemTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowMineralItemTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	int32_t CountMin_2; // 0x18(0x04)
	int32_t CountMax_2; // 0x1c(0x04)
	int32_t CountMin_3; // 0x20(0x04)
	int32_t CountMax_3; // 0x24(0x04)
	int32_t CountMin_4; // 0x28(0x04)
	int32_t CountMax_4; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowMiningPointInfo
// Size: 0x02 (Inherited: 0x00)
struct FCrowMiningPointInfo {
	enum class ECrowMiningPointState CurrentState; // 0x00(0x01)
	char OwnerTeamID; // 0x01(0x01)
};

// ScriptStruct CrowFPS.CrowMissionTableRow
// Size: 0x68 (Inherited: 0x08)
struct FCrowMissionTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	char MissionType; // 0x18(0x01)
	bool MissionReset; // 0x19(0x01)
	bool MissionUse; // 0x1a(0x01)
	char MissionLevelLimitMin; // 0x1b(0x01)
	char MissionLevelLimitMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t MissionPlayDay; // 0x20(0x04)
	int32_t WeeklyGroupNum; // 0x24(0x04)
	enum class ECrowGameMode MissionModeType; // 0x28(0x04)
	enum class ECrowMissionConditionType MissionConditionType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ParameterType1; // 0x30(0x04)
	int32_t ParameterType2; // 0x34(0x04)
	int32_t MissionCounter; // 0x38(0x04)
	int32_t ExpValue; // 0x3c(0x04)
	struct FString TitleStringKey; // 0x40(0x10)
	struct FString ContentStringKey; // 0x50(0x10)
	int32_t Rating; // 0x60(0x04)
	int32_t RewardIndex; // 0x64(0x04)
};

// ScriptStruct CrowFPS.CrowModCategoryTableRow
// Size: 0x78 (Inherited: 0x08)
struct FCrowModCategoryTableRow : FTableRowBase {
	enum class ECrowGameMode GameMod; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath ModTexture; // 0x10(0x18)
	struct FSoftObjectPath ModTextureSmall; // 0x28(0x18)
	struct FText GameModName; // 0x40(0x18)
	struct FText GameModDescription; // 0x58(0x18)
	uint32_t DefaultMapIndex; // 0x70(0x04)
	bool IsHidden; // 0x74(0x01)
	bool QuickMatchUse; // 0x75(0x01)
	bool LobbyOnlyUse; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// ScriptStruct CrowFPS.CrowModExpTableRow
// Size: 0x678 (Inherited: 0x08)
struct FCrowModExpTableRow : FTableRowBase {
	enum class ECrowGameMode GameMode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FCrowModPointInfo EnemyDyingPoint; // 0x10(0x38)
	struct FCrowModPointInfo KillPoint; // 0x48(0x38)
	struct FCrowModPointInfo KillPointWeapon; // 0x80(0x38)
	struct TMap<struct FString, struct FCrowModPointInfo> MissionPointMap; // 0xb8(0x50)
	struct TMap<enum class ECrowMedalType, struct FCrowModPointInfo> MedalPoint; // 0x108(0x50)
	struct TMap<enum class EVehicleIdentity, struct FCrowModPointInfo> VehicleDestoyPoint; // 0x158(0x50)
	struct FCrowModPointInfo DyingPlayerPoint; // 0x1a8(0x38)
	struct FCrowModPointInfo ReviveMySquad; // 0x1e0(0x38)
	struct FCrowModPointInfo UseSquadRespawn; // 0x218(0x38)
	struct FCrowModPointInfo AssistCharacter; // 0x250(0x38)
	struct FCrowModPointInfo AssistSquadCharacter; // 0x288(0x38)
	struct FCrowModPointInfo AssistCar; // 0x2c0(0x38)
	struct FCrowModPointInfo AssistSquadCar; // 0x2f8(0x38)
	struct FCrowModPointInfo AssistTank; // 0x330(0x38)
	struct FCrowModPointInfo AssistSquadTank; // 0x368(0x38)
	struct FCrowModPointInfo AssistHeli; // 0x3a0(0x38)
	struct FCrowModPointInfo AssistSquadHeli; // 0x3d8(0x38)
	struct FCrowModPointInfo AssistBoat; // 0x410(0x38)
	struct FCrowModPointInfo AssistSquadBoat; // 0x448(0x38)
	struct FCrowModPointInfo ObtainQ_ON_5001; // 0x480(0x38)
	struct FCrowModPointInfo ObtainQ_ON_20001; // 0x4b8(0x38)
	struct FCrowModPointInfo ObtainQ_ON_40001; // 0x4f0(0x38)
	struct FCrowModPointInfo ObtainQ_ON_50001; // 0x528(0x38)
	struct FCrowModPointInfo ObtainQ_ON_80001; // 0x560(0x38)
	struct FCrowModPointInfo ObtainQ_ON_100001; // 0x598(0x38)
	struct FCrowModPointInfo CallHeli; // 0x5d0(0x38)
	struct FCrowModPointInfo EscapeSuccess; // 0x608(0x38)
	struct FCrowModPointInfo Default; // 0x640(0x38)
};

// ScriptStruct CrowFPS.CrowMovementHeliValues
// Size: 0x10 (Inherited: 0x00)
struct FCrowMovementHeliValues {
	float Yaw; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float Roll; // 0x08(0x04)
	float Collective; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowRotorPhysicsParameter
// Size: 0x60 (Inherited: 0x00)
struct FCrowRotorPhysicsParameter {
	float WeightInKg; // 0x00(0x04)
	float LinearDamping; // 0x04(0x04)
	float AngularDamping; // 0x08(0x04)
	float uuPerMeterFactor; // 0x0c(0x04)
	float MaxHoverForce; // 0x10(0x04)
	float MinHoverForce; // 0x14(0x04)
	float MaxPitchDegree; // 0x18(0x04)
	float MaxRollDegree; // 0x1c(0x04)
	float RecoverAxisSpringConstant; // 0x20(0x04)
	float MaxYawTorque; // 0x24(0x04)
	float MaxPitchTorque; // 0x28(0x04)
	float MaxRollTorque; // 0x2c(0x04)
	struct FVector DirectionalDragArea; // 0x30(0x0c)
	struct FVector DirectionalDragCoefficient; // 0x3c(0x0c)
	struct FVector DirectionalIdleDamping; // 0x48(0x0c)
	float MinInputValue; // 0x54(0x04)
	float ForceInterpolation; // 0x58(0x04)
	bool DrawDebugPhysicsLine; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct CrowFPS.ScheduleNoticeInfo
// Size: 0x20 (Inherited: 0x00)
struct FScheduleNoticeInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct CrowFPS.CrowParachuteSkinTableRow
// Size: 0x188 (Inherited: 0x168)
struct FCrowParachuteSkinTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct UMaterialInterface* Skin; // 0x178(0x08)
	struct UMaterialInterface* SkinLod; // 0x180(0x08)
};

// ScriptStruct CrowFPS.PassengerSeat
// Size: 0x18 (Inherited: 0x00)
struct FPassengerSeat {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct APawn* Passenger; // 0x08(0x08)
	bool EnableBoard; // 0x10(0x01)
	enum class EVehicleSeatType SeatType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct CrowFPS.PassengerSeatData
// Size: 0xa8 (Inherited: 0x00)
struct FPassengerSeatData {
	struct FName SeatSoketName; // 0x00(0x08)
	struct FName ExitSocketName; // 0x08(0x08)
	bool HiddenPassenger; // 0x10(0x01)
	bool HiddenPassengerWeapon; // 0x11(0x01)
	bool UseReadyToFire; // 0x12(0x01)
	bool ForcePassenger; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCrowPassengerInput* PassengerInputClass; // 0x18(0x08)
	int32_t InputPriority; // 0x20(0x04)
	bool BlockInput; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UCrowVehiclePreHUDBase* PassengerPreHUDClass; // 0x28(0x08)
	struct UCrowVehicleHUDBase* PassengerHUDClass; // 0x30(0x08)
	struct TArray<int32_t> WeaponItems; // 0x38(0x10)
	int32_t SpecialWeaponItem; // 0x48(0x04)
	char SpringArmId; // 0x4c(0x01)
	bool SyncViewPointSwitch; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FVector2D FPPitchMinMax; // 0x50(0x08)
	struct FVector2D FPYawMinMax; // 0x58(0x08)
	struct FVector2D TPPitchMinMax; // 0x60(0x08)
	struct FVector2D TPYawMinMax; // 0x68(0x08)
	struct FVector2D FPFirePitchMinMax; // 0x70(0x08)
	struct FVector2D FPFireYawMinMax; // 0x78(0x08)
	struct FName CharacterFPArmSocketName; // 0x80(0x08)
	bool IsCanChangeCameraMode; // 0x88(0x01)
	enum class ECrowCameraMode FixedCameraMode; // 0x89(0x01)
	bool EnableBoard; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	struct FPassengerSeatLeanAmount LeanAmountMultiply; // 0x8c(0x0c)
	struct FName BreakBoneWhenAiming; // 0x98(0x08)
	bool bHiddenBackpack; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct CrowFPS.PassengerSeatLeanAmount
// Size: 0x0c (Inherited: 0x00)
struct FPassengerSeatLeanAmount {
	float LeanForward; // 0x00(0x04)
	float LeanBackward; // 0x04(0x04)
	float LeanSide; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowPersonalResultWeaponEvent
// Size: 0x20 (Inherited: 0x00)
struct FCrowPersonalResultWeaponEvent {
	enum class ECrowWeaponEventType EventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Index; // 0x04(0x04)
	uint32_t WeaponLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCrowPersonalResultWeaponPartsEvent> PartsEventArray; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowPersonalResultWeaponPartsEvent
// Size: 0x08 (Inherited: 0x00)
struct FCrowPersonalResultWeaponPartsEvent {
	enum class ECrowWeaponPartsType PartsType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t PartsIndex; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowPersonalResultItem
// Size: 0x20 (Inherited: 0x00)
struct FCrowPersonalResultItem {
	int32_t Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTextBlock* TB_Value; // 0x08(0x08)
	float ProgressTime; // 0x10(0x04)
	float NormalizeTime; // 0x14(0x04)
	float AccumTime; // 0x18(0x04)
	enum class ECrowPersonalResultItemState State; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowPhysicalMatTableRow
// Size: 0x8c8 (Inherited: 0x08)
struct FCrowPhysicalMatTableRow : FTableRowBase {
	struct UPhysicalMaterial* Material; // 0x08(0x08)
	struct FCrowAmmoEffect Walk; // 0x10(0x1c0)
	struct FCrowAmmoEffect Run; // 0x1d0(0x1c0)
	struct FCrowAmmoEffect Sprint; // 0x390(0x1c0)
	struct FCrowAmmoEffect Prone; // 0x550(0x1c0)
	struct TMap<struct FName, struct FCrowAmmoEffect> AmmoEffect; // 0x710(0x50)
	struct TMap<struct FName, struct FCrowSurfaceDataSkidMark> SkidMark; // 0x760(0x50)
	struct FCrowSupplyBoxCollisionInfo SupplyBoxInfo; // 0x7b0(0x30)
	struct FCrowWeaponGroundDustEffect WeaponGroundDustEffect; // 0x7e0(0xb0)
	struct FCrowSwimGroundDustEffect SwimGroundDustEffect; // 0x890(0x28)
	bool IsEnablePenetration; // 0x8b8(0x01)
	char pad_8B9[0x3]; // 0x8b9(0x03)
	float PenetrationResistance; // 0x8bc(0x04)
	bool IsAlwaysPreload; // 0x8c0(0x01)
	char pad_8C1[0x7]; // 0x8c1(0x07)
};

// ScriptStruct CrowFPS.CrowSwimGroundDustEffect
// Size: 0x28 (Inherited: 0x00)
struct FCrowSwimGroundDustEffect {
	struct TSoftObjectPtr<struct UParticleSystem> ImpactParticle; // 0x00(0x28)
};

// ScriptStruct CrowFPS.CrowWeaponGroundDustEffect
// Size: 0xb0 (Inherited: 0x00)
struct FCrowWeaponGroundDustEffect {
	struct TSoftObjectPtr<struct UParticleSystem> ParticleSys; // 0x00(0x28)
	struct TSoftObjectPtr<struct UNiagaraSystem> NiagaraSys; // 0x28(0x28)
	struct TArray<struct FName> AffectParamNames; // 0x50(0x10)
	struct TMap<struct FName, struct FCrowWeaponGroundDustEffectParam> WeaponGroundDustEffectParams; // 0x60(0x50)
};

// ScriptStruct CrowFPS.CrowWeaponGroundDustEffectParam
// Size: 0x0c (Inherited: 0x00)
struct FCrowWeaponGroundDustEffectParam {
	bool bUseMinParamWhenMaxDistance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxDistance; // 0x04(0x04)
	float Scale; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowSupplyBoxCollisionInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowSupplyBoxCollisionInfo {
	struct TSoftObjectPtr<struct UParticleSystem> SupplyBoxParticle; // 0x00(0x28)
	struct UAkAudioEvent* SupplyBoxSound; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowSurfaceDataSkidMark
// Size: 0xe8 (Inherited: 0x00)
struct FCrowSurfaceDataSkidMark {
	struct TSoftObjectPtr<struct UParticleSystem> MarkParticle; // 0x00(0x28)
	float MinSpeed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UParticleSystem> TireSlipParticle; // 0x30(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> TireSlipFlatParticle; // 0x58(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> TireSlipDestroyParticle; // 0x80(0x28)
	float MinSlipForward; // 0xa8(0x04)
	float MinSlipRight; // 0xac(0x04)
	float MinSlipRPM; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TSoftObjectPtr<struct UParticleSystem> TouchDownParticle; // 0xb8(0x28)
	float MinHeightTouchDown; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct CrowFPS.CrowAmmoEffect
// Size: 0x1c0 (Inherited: 0x00)
struct FCrowAmmoEffect {
	struct TSoftObjectPtr<struct UParticleSystem> ImpactParticle; // 0x00(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> PenetrationImpactParticle; // 0x28(0x28)
	struct UAkAudioEvent* ImpactSound_W; // 0x50(0x08)
	struct FCrowDecalInfo ImpactDecalInfo; // 0x58(0x50)
	struct FCrowDecalInfo PenetrationImpactDecalInfo; // 0xa8(0x50)
	struct TSoftObjectPtr<struct UParticleSystem> ExplosionParticle01; // 0xf8(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> ExplosionParticle02; // 0x120(0x28)
	struct UAkAudioEvent* ExplosionSound_W; // 0x148(0x08)
	struct FCrowDecalInfo ExplosionDecalInfo; // 0x150(0x50)
	float DamageMultiply; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct ACrowFoliageAffectorActor* ExplosionFoliageAffector; // 0x1a8(0x08)
	char pad_1B0[0x10]; // 0x1b0(0x10)
};

// ScriptStruct CrowFPS.CrowPingTableRow
// Size: 0x158 (Inherited: 0x08)
struct FCrowPingTableRow : FTableRowBase {
	bool UseSquadColor; // 0x08(0x01)
	enum class ECrowPingType PingType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText Name; // 0x10(0x18)
	struct UPaperSprite* DefaultIcon; // 0x28(0x08)
	struct UPaperSprite* DefaultWorldMapIcon; // 0x30(0x08)
	bool UseIconBG; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FLinearColor PingColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UParticleSystem* PingFX; // 0x50(0x08)
	enum class ECrowIconType IconType; // 0x58(0x04)
	float WorldMapIconScale; // 0x5c(0x04)
	float DisplayMapIconDistance; // 0x60(0x04)
	float IndicatorIconScale; // 0x64(0x04)
	float IndicatorHeightOffset; // 0x68(0x04)
	float DisplaySymbolDistance; // 0x6c(0x04)
	float DisplayNameDistance; // 0x70(0x04)
	float DisplayDistanceDistance; // 0x74(0x04)
	float ScaleMin; // 0x78(0x04)
	float ScaleMax; // 0x7c(0x04)
	float ScaleMinDistance; // 0x80(0x04)
	float ScaleMaxDistance; // 0x84(0x04)
	float IconChangeMinDistance; // 0x88(0x04)
	float AlphaMin; // 0x8c(0x04)
	float AlphaMax; // 0x90(0x04)
	float AlphaMinDistance; // 0x94(0x04)
	float AlphaMaxDistance; // 0x98(0x04)
	bool Visible_WorldMap; // 0x9c(0x01)
	bool Visible_MiniMap; // 0x9d(0x01)
	bool Visible_RespawnMap; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float LifeTime; // 0xa0(0x04)
	char MaxSpawnCount; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FText ChatMessageStringKey; // 0xa8(0x18)
	struct UAkAudioEvent* PingSound; // 0xc0(0x08)
	struct UAkAudioEvent* PingResponseSound; // 0xc8(0x08)
	struct FText ResponseMessage; // 0xd0(0x18)
	struct TMap<enum class EVehicleIdentity, struct FCrowPingVehicleSubInfo> PingVehicleSubInfos; // 0xe8(0x50)
	struct FCrowPingVehicleSubInfo Default; // 0x138(0x20)
};

// ScriptStruct CrowFPS.CrowPingVehicleSubInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowPingVehicleSubInfo {
	struct FText ChatMessageStringKey; // 0x00(0x18)
	struct UAkAudioEvent* PingSound; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowPingData
// Size: 0x60 (Inherited: 0x00)
struct FCrowPingData {
	struct ACrowPlayerStateBase* Owner; // 0x00(0x08)
	enum class ECrowPingType PingType; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	uint16_t PingKey; // 0x0a(0x02)
	struct FVector Location; // 0x0c(0x0c)
	struct AActor* TargetActor; // 0x18(0x08)
	struct FString TargetName; // 0x20(0x10)
	enum class ECrowItemType TargetItemType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t TargetItemIndex; // 0x34(0x04)
	struct AActor* ParentActor; // 0x38(0x08)
	struct FString ParentName; // 0x40(0x10)
	bool bIsIconPing; // 0x50(0x01)
	enum class EVehicleIdentity TargetVehicleIdentity; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FTimerHandle LifeTimer; // 0x58(0x08)
};

// ScriptStruct CrowFPS.AvatarUpdateEvent
// Size: 0x18 (Inherited: 0x00)
struct FAvatarUpdateEvent {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CrowFPS.CrowPlayerConstructionMessage
// Size: 0x50 (Inherited: 0x00)
struct FCrowPlayerConstructionMessage {
	struct FString BuildGuideMessage; // 0x00(0x10)
	struct FString CancelGuideMessage; // 0x10(0x10)
	struct FString CancelBuildGuideMessage; // 0x20(0x10)
	struct FString CannotBuildHereMessage; // 0x30(0x10)
	struct FString TooFarToBuildMessage; // 0x40(0x10)
};

// ScriptStruct CrowFPS.CrowInputSetting
// Size: 0x08 (Inherited: 0x00)
struct FCrowInputSetting {
	int32_t Priority; // 0x00(0x04)
	bool BlockInput; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CrowFPS.ConquestAreaIconInfo
// Size: 0x690 (Inherited: 0x00)
struct FConquestAreaIconInfo {
	char pad_0[0x690]; // 0x00(0x690)
};

// ScriptStruct CrowFPS.CrowPlayerLevelRewardTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowPlayerLevelRewardTableRow : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCrowUnLockItemTable> UnlockItems; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowUnLockItemTable
// Size: 0x18 (Inherited: 0x00)
struct FCrowUnLockItemTable {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> UnlockItemIndexes; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowConquestResultInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowConquestResultInfo {
	char WinnerTeam; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t RedTeamConquestCount; // 0x02(0x02)
	uint16_t BlueTeamConquestCount; // 0x04(0x02)
	uint16_t RedTeamConquestPoint; // 0x06(0x02)
	uint16_t BlueTeamConquestPoint; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FCrowResultTopPlayerInfo> TopSquadPlayerArray; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowResultTopPlayerInfo
// Size: 0x1a8 (Inherited: 0x00)
struct FCrowResultTopPlayerInfo {
	struct FString NickName; // 0x00(0x10)
	char CharacterIndex; // 0x10(0x01)
	char TeamID; // 0x11(0x01)
	char DefaultFaceIndex; // 0x12(0x01)
	char DefaultHairIndex; // 0x13(0x01)
	char DefaultHairColorIndex; // 0x14(0x01)
	char DefaultBeardIndex; // 0x15(0x01)
	char DefaultBeardColorIndex; // 0x16(0x01)
	char DefaultEyeColorIndex; // 0x17(0x01)
	struct TArray<struct FCrowClothItemData> DefaultClothesList; // 0x18(0x10)
	struct TArray<uint32_t> DefaultTattooIndexList; // 0x28(0x10)
	struct FCrowWeaponData DefaultWeaponData; // 0x38(0x168)
	uint32_t VictoryAniIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponData
// Size: 0x168 (Inherited: 0x30)
struct FCrowWeaponData : FCrowItemData {
	uint32_t WeaponKey; // 0x30(0x04)
	enum class ECrowWeaponSubType WeaponSubType; // 0x34(0x01)
	char pad_35[0x1]; // 0x35(0x01)
	uint16_t AmmoCount; // 0x36(0x02)
	uint16_t AmmoInClip; // 0x38(0x02)
	uint16_t MaxAmmoInClip; // 0x3a(0x02)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FCrowWeaponPartsData PartsDatas[0x9]; // 0x40(0x120)
	char pad_160[0x8]; // 0x160(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponPartsData
// Size: 0x20 (Inherited: 0x00)
struct FCrowWeaponPartsData {
	bool IsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Index; // 0x04(0x04)
	bool bNew; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32_t> Stickers; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowSquadMatchResultInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowSquadMatchResultInfo {
	struct TArray<struct ACrowPlayerStateSquadMatch*> PlayerArray; // 0x00(0x10)
	struct TArray<struct FCrowResultTopPlayerInfo> TopSquadPlayerArray; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowBloodPostProcessEffect
// Size: 0x58 (Inherited: 0x00)
struct FCrowBloodPostProcessEffect {
	struct UMaterialInterface* HumanBlood; // 0x00(0x08)
	struct UMaterialInterface* ZombieBlood; // 0x08(0x08)
	struct UMaterialInterface* ZombieBlur; // 0x10(0x08)
	int32_t CachedHumanBloodIdx; // 0x18(0x04)
	int32_t CachedZombieBloodIdx; // 0x1c(0x04)
	int32_t CachedZombieBlurIdx; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString CachedHumanBloodName; // 0x28(0x10)
	struct FString CachedZombieBloodName; // 0x38(0x10)
	struct FString CachedZombieBlurName; // 0x48(0x10)
};

// ScriptStruct CrowFPS.CrowBloodAnim
// Size: 0x18 (Inherited: 0x00)
struct FCrowBloodAnim {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CrowFPS.CrowPostProcessQualitySetting
// Size: 0x60 (Inherited: 0x00)
struct FCrowPostProcessQualitySetting {
	struct TArray<struct UMaterialInterface*> MaterialInterfaces; // 0x00(0x10)
	struct TSet<struct FString> MaterialNames; // 0x10(0x50)
};

// ScriptStruct CrowFPS.CrowProjectileFireData
// Size: 0x1480 (Inherited: 0x00)
struct FCrowProjectileFireData {
	bool IsLocalFire; // 0x00(0x01)
	bool IsAI; // 0x01(0x01)
	bool IsFirstPerson; // 0x02(0x01)
	bool IsPenetration; // 0x03(0x01)
	int16_t PenetrationCount; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct AActor* FireActor; // 0x08(0x08)
	struct ACrowWeaponBase* WeaponBase; // 0x10(0x08)
	struct TArray<struct AActor*> IgnoreActor; // 0x18(0x10)
	enum class ECrowItemType ItemType; // 0x28(0x01)
	char pad_29[0x1]; // 0x29(0x01)
	uint16_t WeaponIndex; // 0x2a(0x02)
	struct FVector StartLocation; // 0x2c(0x0c)
	struct FVector EndLocation; // 0x38(0x0c)
	struct FVector Direction; // 0x44(0x0c)
	struct FVector EffectStartLocation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FCrowAmmoTableRow AmmoTable; // 0x60(0x220)
	struct FCrowWeaponTableRow WeaponTable; // 0x280(0x11e0)
	bool IsRightClickAction; // 0x1460(0x01)
	char pad_1461[0x3]; // 0x1461(0x03)
	float ProjectileDistance; // 0x1464(0x04)
	float PenetrationDistValue; // 0x1468(0x04)
	float PenetrationImpactValue; // 0x146c(0x04)
	char RemainCookingTime; // 0x1470(0x01)
	bool IsCooking; // 0x1471(0x01)
	bool IsLockOn; // 0x1472(0x01)
	char pad_1473[0x5]; // 0x1473(0x05)
	struct AActor* LockOnActor; // 0x1478(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponTableRow
// Size: 0x11e0 (Inherited: 0x168)
struct FCrowWeaponTableRow : FCrowItemTableBaseRow {
	uint32_t GroupIndex; // 0x168(0x04)
	uint32_t ShopIndex; // 0x16c(0x04)
	struct FString HelpText; // 0x170(0x10)
	enum class ECrowWeaponSubType WeaponSubType; // 0x180(0x01)
	enum class ECrowWeaponUIType WeaponUIType; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	struct FCrowWeaponPartsOptions WeaponOptions; // 0x184(0x44)
	int32_t ExpTableIndex; // 0x1c8(0x04)
	uint32_t ExpShareIndex; // 0x1cc(0x04)
	struct UCrowWeaponCrosshairBase* CrosshairFP; // 0x1d0(0x08)
	struct UCrowWeaponCrosshairBase* CrosshairTP; // 0x1d8(0x08)
	struct ACrowWeaponBase* OverrideClass; // 0x1e0(0x08)
	uint32_t OverrideProjectileWeaponIndex; // 0x1e8(0x04)
	bool CanPeekLeft; // 0x1ec(0x01)
	bool CanPeekRight; // 0x1ed(0x01)
	bool Exposed; // 0x1ee(0x01)
	char pad_1EF[0x1]; // 0x1ef(0x01)
	float WeaponModelNoramlFOV; // 0x1f0(0x04)
	float WeaponModelAimFOV; // 0x1f4(0x04)
	enum class ECrowWeaponAimMode AimMode; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float AimFOV; // 0x1fc(0x04)
	float AimTime; // 0x200(0x04)
	float AimZoomTime; // 0x204(0x04)
	struct UCurveFloat* AimCurveX; // 0x208(0x08)
	struct UCurveFloat* AimCurveY; // 0x210(0x08)
	struct UCrowWeaponZoomWidget* ZoomWidgetClass; // 0x218(0x08)
	struct FCLSCharacterAimBobInfo AimmingBob; // 0x220(0x30)
	bool IsUseAimTick; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float HoldBreathLimitTime; // 0x254(0x04)
	float HoldBreathCoolTime; // 0x258(0x04)
	float HoldBreathLimitOverCoolTime; // 0x25c(0x04)
	bool UsePostProcess; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
	struct FPostProcessSettings PostProcessSettings; // 0x270(0x550)
	struct FSoftObjectPath Mesh1P; // 0x7c0(0x18)
	struct ACrowWeaponPartsActor* MeshClass1P; // 0x7d8(0x08)
	struct UAnimInstance* Mesh1PAnim; // 0x7e0(0x08)
	struct FVector ModelScale1P; // 0x7e8(0x0c)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct FSoftObjectPath Mesh3P; // 0x7f8(0x18)
	struct ACrowWeaponPartsActor* MeshClass3P; // 0x810(0x08)
	struct UAnimInstance* Mesh3PAnim; // 0x818(0x08)
	struct FSoftObjectPath Mesh3PAttached; // 0x820(0x18)
	struct FSoftObjectPath OptimizationMesh3P; // 0x838(0x18)
	struct TArray<struct UMaterialInterface*> Materials1P; // 0x850(0x10)
	struct TArray<struct UMaterialInterface*> Materials3P; // 0x860(0x10)
	struct UMaterialInterface* OptimizationMaterial3P; // 0x870(0x08)
	struct FVector ModelScale3P; // 0x878(0x0c)
	struct FVector SubRootOffset; // 0x884(0x0c)
	int32_t PouchPartsIndex; // 0x890(0x04)
	char pad_894[0x4]; // 0x894(0x04)
	struct FWeaponAnimationInfo WeaponAnimation; // 0x898(0x168)
	struct FCLSWeaponAnimation CharacterAnimation; // 0xa00(0x230)
	struct FString BarrelDefaultTextIndex; // 0xc30(0x10)
	struct FString MagazineDefaultTextIndex; // 0xc40(0x10)
	struct FString MuzzleDefaultTextIndex; // 0xc50(0x10)
	struct FString PistolGripDefaultTextIndex; // 0xc60(0x10)
	struct FString PrimarySightDefaultTextIndex; // 0xc70(0x10)
	struct FString SecondarySightDefaultTextIndex; // 0xc80(0x10)
	struct FString SideBarrelDefaultTextIndex; // 0xc90(0x10)
	struct FString StockDefaultTextIndex; // 0xca0(0x10)
	struct FString UnderBarrelDefaultTextIndex; // 0xcb0(0x10)
	struct FSoftObjectPath PrimarySightMount1P; // 0xcc0(0x18)
	struct TArray<struct UMaterialInterface*> PrimarySightMountMaterials1P; // 0xcd8(0x10)
	struct FSoftObjectPath PrimarySightMount3P; // 0xce8(0x18)
	struct TArray<struct UMaterialInterface*> PrimarySightMountMaterials3P; // 0xd00(0x10)
	struct FSoftObjectPath SecondarySightMount1P; // 0xd10(0x18)
	struct TArray<struct UMaterialInterface*> SecondarySightMountMaterials1P; // 0xd28(0x10)
	struct FSoftObjectPath SecondarySightMount3P; // 0xd38(0x18)
	struct TArray<struct UMaterialInterface*> SecondarySightMountMaterials3P; // 0xd50(0x10)
	struct FSoftObjectPath SideBarrelMount1P; // 0xd60(0x18)
	struct TArray<struct UMaterialInterface*> SideBarrelMountMaterials1P; // 0xd78(0x10)
	struct FSoftObjectPath SideBarrelMount3P; // 0xd88(0x18)
	struct TArray<struct UMaterialInterface*> SideBarrelMountMaterials3P; // 0xda0(0x10)
	struct FSoftObjectPath UnderBarrelMount1P; // 0xdb0(0x18)
	struct TArray<struct UMaterialInterface*> UnderBarrelMountMaterials1P; // 0xdc8(0x10)
	struct FSoftObjectPath UnderBarrelMount3P; // 0xdd8(0x18)
	struct TArray<struct UMaterialInterface*> UnderBarrelMountMaterials3P; // 0xdf0(0x10)
	struct UPaperSprite* CombindIcon; // 0xe00(0x08)
	uint32_t DefaultCharmIndex; // 0xe08(0x04)
	bool IsEquipCharm; // 0xe0c(0x01)
	char pad_E0D[0x3]; // 0xe0d(0x03)
	struct TArray<struct FName> StickerSocketNames; // 0xe10(0x10)
	struct TArray<struct FVector> StickerScale; // 0xe20(0x10)
	struct TArray<float> StickerAngle; // 0xe30(0x10)
	int32_t StickerSocketMaxCount; // 0xe40(0x04)
	char pad_E44[0x4]; // 0xe44(0x04)
	struct TArray<int32_t> DefaultSticker; // 0xe48(0x10)
	struct FString AmmoTextIndex; // 0xe58(0x10)
	struct UCurveFloat* AmmoSpeedCurve; // 0xe68(0x08)
	struct UCurveFloat* TrajectoryCurve; // 0xe70(0x08)
	struct FWeaponDefaultAmmoCount GameModeAmmoCount; // 0xe78(0x18)
	int32_t DefaultAmmoInClip; // 0xe90(0x04)
	char pad_E94[0x4]; // 0xe94(0x04)
	struct FWeaponDamageSettings DamageSettings; // 0xe98(0x28)
	float AmmoSpeed; // 0xec0(0x04)
	float AmmoLifeTime; // 0xec4(0x04)
	float AmmoDistance; // 0xec8(0x04)
	float AmmoGravityScale; // 0xecc(0x04)
	float PenetrationPower; // 0xed0(0x04)
	float PenetrationDistance; // 0xed4(0x04)
	float PenetrationDecrease; // 0xed8(0x04)
	bool bIsInfiniteAmmo; // 0xedc(0x01)
	char pad_EDD[0x3]; // 0xedd(0x03)
	float AmmoDamageUIValue; // 0xee0(0x04)
	char pad_EE4[0x4]; // 0xee4(0x04)
	struct FWeaponShellEjectInfo ShellEjectInfo; // 0xee8(0x20)
	struct ACrowProjectileShell* ShellClipClass; // 0xf08(0x08)
	float FireSpeed; // 0xf10(0x04)
	float BurstFireSpeed; // 0xf14(0x04)
	int32_t FireCount; // 0xf18(0x04)
	float FireSpeedUIValue; // 0xf1c(0x04)
	struct UParticleSystem* MuzzleFX_1P; // 0xf20(0x08)
	struct UNiagaraSystem* MuzzleFX_1P_N; // 0xf28(0x08)
	bool Attach_MuzzleFX_1P; // 0xf30(0x01)
	char pad_F31[0x7]; // 0xf31(0x07)
	struct UParticleSystem* MuzzleFX_3P; // 0xf38(0x08)
	struct UNiagaraSystem* MuzzleFX_3P_N; // 0xf40(0x08)
	bool Attach_MuzzleFX_3P; // 0xf48(0x01)
	char pad_F49[0x3]; // 0xf49(0x03)
	uint32_t SpawnSmokeFireCount; // 0xf4c(0x04)
	struct UParticleSystem* MuzzleSmokeFX; // 0xf50(0x08)
	struct UParticleSystem* Backblast_3P; // 0xf58(0x08)
	struct UNiagaraSystem* Backblast_3P_N; // 0xf60(0x08)
	struct ACrowFoliageAffectorActor* FoliageAffector; // 0xf68(0x08)
	float AttackRange; // 0xf70(0x04)
	float TraceRadius; // 0xf74(0x04)
	bool IsEnableSingleShot; // 0xf78(0x01)
	bool IsEnableBurstShot; // 0xf79(0x01)
	bool IsEnableNormalShot; // 0xf7a(0x01)
	char pad_F7B[0x1]; // 0xf7b(0x01)
	int32_t BurstShotCount; // 0xf7c(0x04)
	float BurstShotDelay; // 0xf80(0x04)
	bool IsCanCooking; // 0xf84(0x01)
	char pad_F85[0x3]; // 0xf85(0x03)
	float CookTime; // 0xf88(0x04)
	struct FColor DynamicLightColor; // 0xf8c(0x04)
	float DynamicLightRadiusMin; // 0xf90(0x04)
	float DynamicLightRadiusMax; // 0xf94(0x04)
	float DynamicLightIntensityMin; // 0xf98(0x04)
	float DynamicLightIntensityMax; // 0xf9c(0x04)
	struct UAkAudioEvent* SelectSound_W; // 0xfa0(0x08)
	struct UAkAudioEvent* FireSound_W; // 0xfa8(0x08)
	struct UAkAudioEvent* ContinuousFireSound_1P_W; // 0xfb0(0x08)
	struct UAkAudioEvent* FireEndSound_1P_W; // 0xfb8(0x08)
	struct UAkAudioEvent* FireSound_3P_W; // 0xfc0(0x08)
	struct UAkAudioEvent* ContinuousFireSound_3P_W; // 0xfc8(0x08)
	struct UAkAudioEvent* FireEndSound_3P_W; // 0xfd0(0x08)
	struct UAkAudioEvent* DryFireSound_W; // 0xfd8(0x08)
	struct UAkAudioEvent* AimAnmationSound_W; // 0xfe0(0x08)
	bool IsEnableSpread; // 0xfe8(0x01)
	char pad_FE9[0x3]; // 0xfe9(0x03)
	float SpreadMax; // 0xfec(0x04)
	float SpreadUIValue; // 0xff0(0x04)
	char pad_FF4[0x4]; // 0xff4(0x04)
	struct FWeaponSpreadInfo NormalSpreadInfo; // 0xff8(0xb0)
	struct FWeaponSpreadInfo AimSpreadInfo; // 0x10a8(0xb0)
	bool IsEnableRecoil; // 0x1158(0x01)
	char pad_1159[0x3]; // 0x1159(0x03)
	float RecoilUIValue; // 0x115c(0x04)
	float RecoilDecrease; // 0x1160(0x04)
	char pad_1164[0x4]; // 0x1164(0x04)
	struct FWeaponRecoilInfo NormalRecoilInfo; // 0x1168(0x20)
	struct FWeaponRecoilInfo AimRecoilInfo; // 0x1188(0x20)
	struct FWeaponCameraShakeInfo CameraShakeInfo; // 0x11a8(0x18)
	struct UPaperSprite* WeaponEquipSlotSprite; // 0x11c0(0x08)
	float ReloadUIValue; // 0x11c8(0x04)
	float TrajectoryMaxDistance; // 0x11cc(0x04)
	float TrajectoryLastSlope; // 0x11d0(0x04)
	float DropMaxDistance; // 0x11d4(0x04)
	char pad_11D8[0x8]; // 0x11d8(0x08)
};

// ScriptStruct CrowFPS.WeaponCameraShakeInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponCameraShakeInfo {
	bool IsEnable; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UMatineeCameraShake* CameraShake_FP; // 0x08(0x08)
	struct UMatineeCameraShake* CameraShake_TP; // 0x10(0x08)
};

// ScriptStruct CrowFPS.WeaponRecoilInfo
// Size: 0x20 (Inherited: 0x00)
struct FWeaponRecoilInfo {
	bool IsRandom; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDataTable* RecoilTable; // 0x08(0x08)
	struct UCurveFloat* IncreaseCurve; // 0x10(0x08)
	float IncreaseTime; // 0x18(0x04)
	float BurstModeRate; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.WeaponSpreadInfo
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponSpreadInfo {
	struct UCurveFloat* Curve; // 0x00(0x08)
	struct FWeaponSpreadPoseInfo Stand; // 0x08(0x10)
	struct FWeaponSpreadPoseInfo Crouch; // 0x18(0x10)
	struct FWeaponSpreadPoseInfo CrouchWalk; // 0x28(0x10)
	struct FWeaponSpreadPoseInfo CrouchRun; // 0x38(0x10)
	struct FWeaponSpreadPoseInfo CrouchSprint; // 0x48(0x10)
	struct FWeaponSpreadPoseInfo Prone; // 0x58(0x10)
	struct FWeaponSpreadPoseInfo Jump; // 0x68(0x10)
	struct FWeaponSpreadPoseInfo Walk; // 0x78(0x10)
	struct FWeaponSpreadPoseInfo Run; // 0x88(0x10)
	struct FWeaponSpreadPoseInfo Sprint; // 0x98(0x10)
	float BurstModeRate; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct CrowFPS.WeaponSpreadPoseInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSpreadPoseInfo {
	float Default; // 0x00(0x04)
	float Increase; // 0x04(0x04)
	float IncreaseMax; // 0x08(0x04)
	float Decrease; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.WeaponShellEjectInfo
// Size: 0x20 (Inherited: 0x00)
struct FWeaponShellEjectInfo {
	float EjectingBulletMinSpeed; // 0x00(0x04)
	float EjectingBulletMaxSpeed; // 0x04(0x04)
	float EjectingBulletHorizontalAngle; // 0x08(0x04)
	float EjectingBulletVerticalAngle; // 0x0c(0x04)
	float EjectingBulletSpinMinSpeed; // 0x10(0x04)
	float EjectingBulletSpinMaxSpeed; // 0x14(0x04)
	struct UParticleSystem* EjectingBulletEffect; // 0x18(0x08)
};

// ScriptStruct CrowFPS.WeaponDefaultAmmoCount
// Size: 0x18 (Inherited: 0x00)
struct FWeaponDefaultAmmoCount {
	int32_t Training; // 0x00(0x04)
	int32_t TeamDeathMatch; // 0x04(0x04)
	int32_t BombMission; // 0x08(0x04)
	int32_t Conquest; // 0x0c(0x04)
	int32_t SquadMatch; // 0x10(0x04)
	int32_t BattleRoyal; // 0x14(0x04)
};

// ScriptStruct CrowFPS.WeaponAnimationInfo
// Size: 0x168 (Inherited: 0x00)
struct FWeaponAnimationInfo {
	struct FCrowAnimPoseSet Idle; // 0x00(0x18)
	struct FCrowAnimPoseSet LobbyIdle; // 0x18(0x18)
	struct FCrowAnimPoseSet Select; // 0x30(0x18)
	struct FCrowAnimPoseSet Deselect; // 0x48(0x18)
	struct FCrowAnimPoseSet Reload; // 0x60(0x18)
	struct FCrowAnimPoseSet ReloadShort; // 0x78(0x18)
	struct FCrowAnimPoseSet ReloadStart; // 0x90(0x18)
	struct FCrowAnimPoseSet ReloadLoop; // 0xa8(0x18)
	struct FCrowAnimPoseSet ReloadEnd; // 0xc0(0x18)
	struct FCrowAnimPoseSet PreFire; // 0xd8(0x18)
	struct FCrowAnimPoseSet Fire; // 0xf0(0x18)
	struct FCrowAnimPoseSet PostFire; // 0x108(0x18)
	struct FCrowAnimPoseSet Aim; // 0x120(0x18)
	struct FCrowAnimPoseSet ChangeFireMode; // 0x138(0x18)
	struct FCrowAnimPoseSet ThrowPinOut; // 0x150(0x18)
};

// ScriptStruct CrowFPS.CrowWeaponPartsOptions
// Size: 0x44 (Inherited: 0x00)
struct FCrowWeaponPartsOptions {
	float AimSpreadDefault; // 0x00(0x04)
	float HipFireSpreadDefault; // 0x04(0x04)
	float Recoil; // 0x08(0x04)
	float RecoilHorizontal; // 0x0c(0x04)
	float RecoilVertical; // 0x10(0x04)
	float FireSpeed; // 0x14(0x04)
	float RecoilDecrease; // 0x18(0x04)
	float AmmoVelocity; // 0x1c(0x04)
	float AmmoDamage; // 0x20(0x04)
	float AmmoDamageMin; // 0x24(0x04)
	float AmmoDamageMax; // 0x28(0x04)
	float AmmoDamageDropDistance; // 0x2c(0x04)
	float Reload; // 0x30(0x04)
	float AimShake; // 0x34(0x04)
	float AimTime; // 0x38(0x04)
	float CharacterMoveSpeed; // 0x3c(0x04)
	float AttackRange; // 0x40(0x04)
};

// ScriptStruct CrowFPS.CrowClaymoreMineRep
// Size: 0x18 (Inherited: 0x00)
struct FCrowClaymoreMineRep {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CrowFPS.CrowRandomBoxItemListTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowRandomBoxItemListTableRow : FTableRowBase {
	uint32_t Index; // 0x08(0x04)
	enum class ECrowItemGrade Grade; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t RewardTableIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowRandomBoxTableRow
// Size: 0x1b8 (Inherited: 0x168)
struct FCrowRandomBoxTableRow : FCrowItemTableBaseRow {
	uint32_t GPoint; // 0x168(0x04)
	uint32_t RCPPoint; // 0x16c(0x04)
	uint32_t CardTableIndex; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FSoftObjectPath ModelingInfo; // 0x178(0x18)
	struct UParticleSystem* RandomEffect; // 0x190(0x08)
	bool CountingSwitch; // 0x198(0x01)
	char pad_199[0x1]; // 0x199(0x01)
	uint16_t CompleteCounting; // 0x19a(0x02)
	enum class ECrowItemGrade CompleteCountingGrade; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct TArray<struct FCrowRandomBoxProbability> Probability; // 0x1a0(0x10)
	uint32_t RandomBoxItemListIndex; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct CrowFPS.CrowRandomBoxProbability
// Size: 0x08 (Inherited: 0x00)
struct FCrowRandomBoxProbability {
	enum class ECrowItemGrade ItemGrade; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProbabilityValue; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowRandomItemTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowRandomItemTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	enum class ECrowItemType ItemType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FCrowRandomItemWeight> ItemArray; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowRandomItemWeight
// Size: 0x10 (Inherited: 0x00)
struct FCrowRandomItemWeight {
	uint32_t ItemIndex; // 0x00(0x04)
	int32_t CountMin; // 0x04(0x04)
	int32_t CountMax; // 0x08(0x04)
	float Weight; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowRandomSetTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowRandomSetTableRow : FTableRowBase {
	struct FString HelpText; // 0x08(0x10)
	int32_t CountMin; // 0x18(0x04)
	int32_t CountMax; // 0x1c(0x04)
	struct TArray<struct FCrowRandomSetWeight> ItemArray; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowRandomSetWeight
// Size: 0x08 (Inherited: 0x00)
struct FCrowRandomSetWeight {
	int32_t ItemIndex; // 0x00(0x04)
	float Weight; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowRankingDateInfoTableRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowRankingDateInfoTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	enum class ECrowRankingPeriodType PeriodType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDateTime StartTime; // 0x28(0x08)
	struct FDateTime EndTime; // 0x30(0x08)
	struct FDateTime BaseStartTime; // 0x38(0x08)
	struct FDateTime BaseEndTime; // 0x40(0x08)
	struct FText Description; // 0x48(0x18)
};

// ScriptStruct CrowFPS.CrowRankingScheduleTableRow
// Size: 0x28 (Inherited: 0x08)
struct FCrowRankingScheduleTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	enum class ECrowRankingRecordType RankingRecordType; // 0x20(0x01)
	enum class ECrowRankingPeriodType PeriodType; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32_t RankingDateInfoIndex; // 0x24(0x04)
};

// ScriptStruct CrowFPS.RecoilData
// Size: 0x20 (Inherited: 0x08)
struct FRecoilData : FTableRowBase {
	int32_t Order; // 0x08(0x04)
	int32_t Distance; // 0x0c(0x04)
	struct FVector Direction; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.GuideConfig
// Size: 0x04 (Inherited: 0x00)
struct FGuideConfig {
	bool bActive; // 0x00(0x01)
	bool bVisibleState; // 0x01(0x01)
	bool bImportTrigger; // 0x02(0x01)
	bool bPlayTrigger; // 0x03(0x01)
};

// ScriptStruct CrowFPS.CrowLobbyWeaponRecord
// Size: 0x50 (Inherited: 0x00)
struct FCrowLobbyWeaponRecord {
	int32_t SharedIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t Exp; // 0x08(0x08)
	int32_t WeasponUsedGainExp; // 0x10(0x04)
	int32_t Kill; // 0x14(0x04)
	int32_t Headshot; // 0x18(0x04)
	int32_t Assist; // 0x1c(0x04)
	int32_t Faint; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t Damage; // 0x28(0x08)
	int32_t UsedCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t RecoveryHp; // 0x38(0x08)
	int32_t HpUsedCount; // 0x40(0x04)
	int32_t TankKill; // 0x44(0x04)
	int32_t HelicopterKill; // 0x48(0x04)
	int32_t Vehiclekill; // 0x4c(0x04)
};

// ScriptStruct CrowFPS.CrowLobbyRankRecords
// Size: 0x10 (Inherited: 0x00)
struct FCrowLobbyRankRecords {
	struct TArray<struct FCrowLobbyRankRecord> RankList; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowLobbyRankRecord
// Size: 0x28 (Inherited: 0x00)
struct FCrowLobbyRankRecord {
	int32_t Rank; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	struct FString UserNickName; // 0x08(0x10)
	int64_t Score; // 0x18(0x08)
	int32_t PlayCount; // 0x20(0x04)
	int32_t PlayTimeSec; // 0x24(0x04)
};

// ScriptStruct CrowFPS.CrowLobbyProfileRecord
// Size: 0x98 (Inherited: 0x00)
struct FCrowLobbyProfileRecord {
	struct FString UserNickName; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ClanName; // 0x18(0x10)
	int32_t ClanMarkIndex; // 0x28(0x04)
	int32_t ClanBgIndex; // 0x2c(0x04)
	int32_t UserSeasonLevel; // 0x30(0x04)
	int32_t MercenaryRank; // 0x34(0x04)
	int32_t SeasonRank; // 0x38(0x04)
	int32_t ConquestWinCount; // 0x3c(0x04)
	int32_t ConquestLoseCount; // 0x40(0x04)
	int32_t ConquestDrawCount; // 0x44(0x04)
	int32_t ConquestInvalidityCount; // 0x48(0x04)
	int32_t RecentConquestWinCount; // 0x4c(0x04)
	int32_t RecentConquestLoseCount; // 0x50(0x04)
	int32_t RecentSquadMatchAverageRank; // 0x54(0x04)
	struct FCrowLobbyProfileRankRecord ConquestRank; // 0x58(0x20)
	struct FCrowLobbyProfileRankRecord SquadRank; // 0x78(0x20)
};

// ScriptStruct CrowFPS.CrowLobbyProfileRankRecord
// Size: 0x20 (Inherited: 0x00)
struct FCrowLobbyProfileRankRecord {
	int32_t KillCount; // 0x00(0x04)
	int32_t AssistCount; // 0x04(0x04)
	int32_t DeathCount; // 0x08(0x04)
	int32_t InjuredCount; // 0x0c(0x04)
	int64_t Score; // 0x10(0x08)
	int32_t PlayCount; // 0x18(0x04)
	int32_t PlayTimeSec; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowIngameRecordBase
// Size: 0x58 (Inherited: 0x00)
struct FCrowIngameRecordBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FString, struct FCrowIngameRecordIntValue> IntValuePropertys; // 0x08(0x50)
};

// ScriptStruct CrowFPS.CrowIngameRecordIntValue
// Size: 0x08 (Inherited: 0x00)
struct FCrowIngameRecordIntValue {
	uint32_t Value; // 0x00(0x04)
	uint32_t IncValue; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowModeRecord
// Size: 0x58 (Inherited: 0x58)
struct FCrowModeRecord : FCrowIngameRecordBase {
};

// ScriptStruct CrowFPS.CrowIngameMedalRecord
// Size: 0x60 (Inherited: 0x58)
struct FCrowIngameMedalRecord : FCrowIngameRecordBase {
	enum class ECrowMedalType MedalType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct CrowFPS.CrowIngameTimeRecord
// Size: 0x68 (Inherited: 0x58)
struct FCrowIngameTimeRecord : FCrowIngameRecordBase {
	struct FDateTime BattleDateTime; // 0x58(0x08)
	struct FDateTime AliveDateTime; // 0x60(0x08)
};

// ScriptStruct CrowFPS.CrowIngameSkillRecord
// Size: 0x60 (Inherited: 0x58)
struct FCrowIngameSkillRecord : FCrowIngameRecordBase {
	enum class ECrowConquestSkill ConquestSkill; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct CrowFPS.CrowIngameVehicleRecord
// Size: 0x58 (Inherited: 0x58)
struct FCrowIngameVehicleRecord : FCrowIngameRecordBase {
};

// ScriptStruct CrowFPS.CrowIngameItemRecord
// Size: 0x60 (Inherited: 0x58)
struct FCrowIngameItemRecord : FCrowIngameRecordBase {
	uint16_t Index; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct CrowFPS.CrowIngameWeaponRecord
// Size: 0x68 (Inherited: 0x60)
struct FCrowIngameWeaponRecord : FCrowIngameItemRecord {
	uint32_t ExpShareIndex; // 0x60(0x04)
	char WeaponSubType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct CrowFPS.CrowIngameWeaponVehicleRecord
// Size: 0x68 (Inherited: 0x68)
struct FCrowIngameWeaponVehicleRecord : FCrowIngameWeaponRecord {
};

// ScriptStruct CrowFPS.CrowIngameWeaponCharacterRecord
// Size: 0x68 (Inherited: 0x68)
struct FCrowIngameWeaponCharacterRecord : FCrowIngameWeaponRecord {
};

// ScriptStruct CrowFPS.CrowIngameBattleRecord
// Size: 0x58 (Inherited: 0x58)
struct FCrowIngameBattleRecord : FCrowIngameRecordBase {
};

// ScriptStruct CrowFPS.CrowIngameReplicatedRecord
// Size: 0x0c (Inherited: 0x00)
struct FCrowIngameReplicatedRecord {
	uint32_t KillCount; // 0x00(0x04)
	uint32_t DeathCount; // 0x04(0x04)
	uint32_t ComboKillCount; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowRecordWeapnoInfoSlotParams
// Size: 0x28 (Inherited: 0x00)
struct FCrowRecordWeapnoInfoSlotParams {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct CrowFPS.CrowRecordWeaponInfoParams
// Size: 0x28 (Inherited: 0x00)
struct FCrowRecordWeaponInfoParams {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct CrowFPS.CrowRepGraphSettings
// Size: 0x60 (Inherited: 0x00)
struct FCrowRepGraphSettings {
	struct FString Description; // 0x00(0x10)
	struct FCrowClassRouteAndReplicationInfo ClassRouteAndReplication; // 0x10(0x20)
	struct FCrowPawnReplicationInfo PawnReplication; // 0x30(0x20)
	struct FCrowGridReplicationInfo GridReplication; // 0x50(0x08)
	struct FCrowPlayerStateReplicationInfo PlayerStateReplication; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct CrowFPS.CrowPlayerStateReplicationInfo
// Size: 0x04 (Inherited: 0x00)
struct FCrowPlayerStateReplicationInfo {
	uint32_t ReplicationNumPerFrame; // 0x00(0x04)
};

// ScriptStruct CrowFPS.CrowGridReplicationInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowGridReplicationInfo {
	float CellSize; // 0x00(0x04)
	uint32_t NumBuckets; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowPawnReplicationInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowPawnReplicationInfo {
	bool UseGridReplication; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t CellSize; // 0x04(0x04)
	uint32_t NumBuckets; // 0x08(0x04)
	float ReplicationLevelPerDistance; // 0x0c(0x04)
	struct TArray<struct FCrowReplicationPerFrames> ReplicationLevelList; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowReplicationPerFrames
// Size: 0x04 (Inherited: 0x00)
struct FCrowReplicationPerFrames {
	uint32_t ReplicationPerFrames; // 0x00(0x04)
};

// ScriptStruct CrowFPS.CrowClassRouteAndReplicationInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowClassRouteAndReplicationInfo {
	struct TArray<struct FCrowClassRouteInfo> ClassRouteInfoList; // 0x00(0x10)
	struct TArray<struct FCrowClassReplicationInfo> ClassReplicationInfoList; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowClassReplicationInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowClassReplicationInfo {
	struct FString Description; // 0x00(0x10)
	struct AActor* Class; // 0x10(0x08)
	float CullDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowClassRouteInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowClassRouteInfo {
	struct FString Description; // 0x00(0x10)
	struct AActor* Class; // 0x10(0x08)
	enum class EClassRepNodeMapping RouteType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowReplicationRPCPolicyInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowReplicationRPCPolicyInfo {
	struct AActor* Class; // 0x00(0x08)
	struct FName FunctionName; // 0x08(0x08)
	bool ForceSend; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct CrowFPS.CrowResultMVPTableRow
// Size: 0x1c8 (Inherited: 0x168)
struct FCrowResultMVPTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	struct FText NameKey; // 0x178(0x18)
	struct FText DescriptionKey; // 0x190(0x18)
	struct UPaperSprite* Icon; // 0x1a8(0x08)
	struct UAnimMontage* AnimMontage; // 0x1b0(0x08)
	struct TArray<struct FCrowResultMVPObjectInfo> Objects; // 0x1b8(0x10)
};

// ScriptStruct CrowFPS.CrowResultMVPObjectInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowResultMVPObjectInfo {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct UAnimationAsset* AnimAsset; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowResultScenePlayer
// Size: 0x10 (Inherited: 0x00)
struct FCrowResultScenePlayer {
	struct AActor* PlayerTransform; // 0x00(0x08)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowRewardParams
// Size: 0x10 (Inherited: 0x00)
struct FCrowRewardParams {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowRewardTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCrowRewardTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString HelpText; // 0x10(0x10)
	struct TArray<struct FCrowRewardItem> Items; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowRewardItem
// Size: 0x30 (Inherited: 0x00)
struct FCrowRewardItem {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemCount; // 0x04(0x04)
	uint32_t ItemIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TitleLocalStringKey; // 0x10(0x10)
	struct FString DescLocalStringKey; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowRotorAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FCrowRotorAnimInstanceProxy : FAnimInstanceProxy {
	struct TArray<struct FRotorProxyData> RotorProxyDatas; // 0x760(0x10)
};

// ScriptStruct CrowFPS.RotorProxyData
// Size: 0x20 (Inherited: 0x00)
struct FRotorProxyData {
	struct FName RotorBoneName; // 0x00(0x08)
	struct FRotator RotorAxis; // 0x08(0x0c)
	struct FRotator RotorRotation; // 0x14(0x0c)
};

// ScriptStruct CrowFPS.CrowRotorGroundFx
// Size: 0x18 (Inherited: 0x08)
struct FCrowRotorGroundFx : FTableRowBase {
	enum class EPhysicalSurface PhysicalSurface; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UParticleSystem* GroundFx; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowRotorSpinSetup
// Size: 0x30 (Inherited: 0x00)
struct FCrowRotorSpinSetup {
	float EngineStartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveFloat* EngineStartRotorCurve; // 0x08(0x08)
	float ShutDownTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* ShutDownRotorCurve; // 0x18(0x08)
	struct TArray<struct FCrowRotorSpinInfo> RotorSpinInfoList; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowRotorSpinInfo
// Size: 0x160 (Inherited: 0x00)
struct FCrowRotorSpinInfo {
	struct FName RotorBoneName; // 0x00(0x08)
	float RotorSpinPerSec; // 0x08(0x04)
	struct FVector RotorAxis; // 0x0c(0x0c)
	struct TArray<struct FName> HideRotorBoneNames; // 0x18(0x10)
	struct FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x28(0x68)
	struct FCrowVehicleFxTemplate ReadyFxTemplate; // 0x90(0x68)
	struct FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xf8(0x68)
};

// ScriptStruct CrowFPS.CrowVehicleFxTemplate
// Size: 0x68 (Inherited: 0x00)
struct FCrowVehicleFxTemplate {
	struct FFxReplicator_FxTemplate FxTemplate; // 0x00(0x28)
	struct FFxReplicator_AudioTemplate AudioTemplate; // 0x28(0x10)
	struct FFxReplicator_WwiseAudioTemplate WwiseAudioTemplate; // 0x38(0x30)
};

// ScriptStruct CrowFPS.CrowRotorHitCaculationInfo
// Size: 0xc0 (Inherited: 0x00)
struct FCrowRotorHitCaculationInfo {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct CrowFPS.CrowWaitUserInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowWaitUserInfo {
	struct FCrowAuthorizeUserInfo AuthorizeUserInfo; // 0x00(0x18)
	struct ACrowPlayerControllerBase* Controller; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowAuthorizeUserInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowAuthorizeUserInfo {
	uint64_t ServerKey; // 0x00(0x08)
	struct FString AuthToken; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowSceneTableRow
// Size: 0x6d0 (Inherited: 0x08)
struct FCrowSceneTableRow : FTableRowBase {
	enum class ECrowSceneType Type; // 0x08(0x04)
	uint32_t ReplicationSettingsIndex; // 0x0c(0x04)
	struct FSoftObjectPath Map; // 0x10(0x18)
	struct FSoftObjectPath ResultLevel; // 0x28(0x18)
	struct FSoftObjectPath AtmosphereLevel; // 0x40(0x18)
	struct FSoftObjectPath ModMapSprite; // 0x58(0x18)
	struct FSoftObjectPath WorldMapSprite; // 0x70(0x18)
	struct FSoftObjectPath RedWorldMapSprite; // 0x88(0x18)
	struct FSoftObjectPath BlueWorldMapSprite; // 0xa0(0x18)
	struct FSoftObjectPath RespawnImpossibleWorldMapSprite; // 0xb8(0x18)
	struct FSoftObjectPath LevelSequenceRed; // 0xd0(0x18)
	struct FSoftObjectPath LevelSequenceBlue; // 0xe8(0x18)
	struct FSoftObjectPath LevelSequenceStartPlay; // 0x100(0x18)
	struct FSoftObjectPath EndLevelSequenceRed; // 0x118(0x18)
	struct FSoftObjectPath EndLevelSequenceBlue; // 0x130(0x18)
	float EndLevelSequencePlayTime; // 0x148(0x04)
	enum class ECrowGameMode GameMode; // 0x14c(0x04)
	struct FSoftObjectPath TransitionGameMode; // 0x150(0x18)
	struct ACrowSceneBase* SceneClass; // 0x168(0x08)
	struct FText Name; // 0x170(0x18)
	struct FText SubName; // 0x188(0x18)
	struct FText Description; // 0x1a0(0x18)
	struct UTexture2D* DefaultIcon; // 0x1b8(0x08)
	struct UPaperSprite* DefaultIconSprite; // 0x1c0(0x08)
	bool IsDefault; // 0x1c8(0x01)
	bool IsBGMRandomPlay; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	struct UAkAudioEvent* BGMStartEvent; // 0x1d0(0x08)
	struct UAkAudioEvent* BGMEndEvent; // 0x1d8(0x08)
	struct FCrowModeWeapon EnableWeaponType; // 0x1e0(0x06)
	char pad_1E6[0x2]; // 0x1e6(0x02)
	struct TArray<float> ArrayWorldMapZoomMultiply; // 0x1e8(0x10)
	struct TArray<float> ArrayMinimapZoomMultiply; // 0x1f8(0x10)
	float EnemyFireDist; // 0x208(0x04)
	float EnemyFireCompassDist; // 0x20c(0x04)
	float MaxHealth; // 0x210(0x04)
	float DyingHealth; // 0x214(0x04)
	bool IsLock; // 0x218(0x01)
	bool IsHidden; // 0x219(0x01)
	char pad_21A[0x2]; // 0x21a(0x02)
	uint32_t LoadSceneIndex; // 0x21c(0x04)
	struct FCrowGameIconDisplayInfo CharacterIconAlive_Squad; // 0x220(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconDying_Squad; // 0x2a8(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconDeath_Squad; // 0x330(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconAlive_Team; // 0x3b8(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconDying_Team; // 0x440(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconDeath_Team; // 0x4c8(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconDisplayInfoEnemy; // 0x550(0x88)
	struct FCrowGameIconDisplayInfo CharacterIconObserver; // 0x5d8(0x88)
	float ReadyToSpreadParachuteHeight; // 0x660(0x04)
	float ParachuteSpreadLimitZ; // 0x664(0x04)
	struct FCrowLoadingInfo SceneLoadingInfo; // 0x668(0x60)
	char pad_6C8[0x8]; // 0x6c8(0x08)
};

// ScriptStruct CrowFPS.CrowLoadingInfo
// Size: 0x60 (Inherited: 0x00)
struct FCrowLoadingInfo {
	struct FText ModeName; // 0x00(0x18)
	struct FText MapName; // 0x18(0x18)
	struct TArray<struct FText> ModeDescriptionList; // 0x30(0x10)
	struct TArray<struct FText> ModeTipTextList; // 0x40(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> LoadingImageList; // 0x50(0x10)
};

// ScriptStruct CrowFPS.CrowModeWeapon
// Size: 0x06 (Inherited: 0x00)
struct FCrowModeWeapon {
	bool Primary01; // 0x00(0x01)
	bool Primary02; // 0x01(0x01)
	bool Melee; // 0x02(0x01)
	bool Throw; // 0x03(0x01)
	bool Kit; // 0x04(0x01)
	bool Heal; // 0x05(0x01)
};

// ScriptStruct CrowFPS.CrowScopeEffect
// Size: 0x70 (Inherited: 0x00)
struct FCrowScopeEffect {
	struct UWorld* World; // 0x00(0x08)
	struct ACrowGameStateBase* GameState; // 0x08(0x08)
	struct TWeakObjectPtr<struct ACrowPlayerControllerBase> PlayerController; // 0x10(0x08)
	struct TWeakObjectPtr<struct ACrowPlayerStateBase> PlayerState; // 0x18(0x08)
	struct TMap<struct ACrowCharacterPawn*, struct FCrowScopeEffectInfo> EffectInfoMap; // 0x20(0x50)
};

// ScriptStruct CrowFPS.CrowScopeEffectInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowScopeEffectInfo {
	struct UParticleSystemComponent* Effect; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowScoreInfoConquestSQItemData
// Size: 0x50 (Inherited: 0x00)
struct FCrowScoreInfoConquestSQItemData {
	char Rank; // 0x00(0x01)
	bool bIsLocalSquad; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString SquadKey; // 0x08(0x10)
	struct FText SquadName; // 0x18(0x18)
	uint32_t Score; // 0x30(0x04)
	int32_t KillCount; // 0x34(0x04)
	int32_t DeathCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FCrowScoreInfoConquestUSItemData> SquadMemberArray; // 0x40(0x10)
};

// ScriptStruct CrowFPS.CrowScoreInfoConquestUSItemData
// Size: 0x30 (Inherited: 0x00)
struct FCrowScoreInfoConquestUSItemData {
	struct FString NickName; // 0x00(0x10)
	enum class ECrowSquadRole SquadRole; // 0x10(0x01)
	bool bIsLocalPlayer; // 0x11(0x01)
	char Level; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	uint32_t Score; // 0x14(0x04)
	char EnemyDyingCount; // 0x18(0x01)
	char KillCount; // 0x19(0x01)
	char DeathCount; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	uint32_t Latency; // 0x1c(0x04)
	struct ACrowPlayerStateBase* PlayerStateBase; // 0x20(0x08)
	bool bIsLocalPlayerSameSquad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CrowFPS.CrowScoreListItemData
// Size: 0x18 (Inherited: 0x00)
struct FCrowScoreListItemData {
	struct FString PlayerNickName; // 0x00(0x10)
	enum class ECrowSquadRole SquadRole; // 0x10(0x01)
	bool bIsLocalPlayer; // 0x11(0x01)
	bool bIsDeath; // 0x12(0x01)
	char KillCount; // 0x13(0x01)
	char DeathCount; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CrowFPS.CrowLobbyScoreWeapon
// Size: 0x50 (Inherited: 0x00)
struct FCrowLobbyScoreWeapon {
	int32_t ExpShareIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t Exp; // 0x08(0x08)
	int32_t WeasponUsedGainExp; // 0x10(0x04)
	int32_t Kill; // 0x14(0x04)
	int32_t Headshot; // 0x18(0x04)
	int32_t Assist; // 0x1c(0x04)
	int32_t Faint; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t Damage; // 0x28(0x08)
	int32_t UsedCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t RecoveryHp; // 0x38(0x08)
	int32_t HpUsedCount; // 0x40(0x04)
	int32_t TankKill; // 0x44(0x04)
	int32_t HelicopterKill; // 0x48(0x04)
	int32_t Vehiclekill; // 0x4c(0x04)
};

// ScriptStruct CrowFPS.CrowLobbyScoreRankSet
// Size: 0x10 (Inherited: 0x00)
struct FCrowLobbyScoreRankSet {
	struct TArray<struct FCrowLobbyScoreRank> RankList; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowLobbyScoreRank
// Size: 0x60 (Inherited: 0x00)
struct FCrowLobbyScoreRank {
	uint32_t playerId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t RankNo; // 0x08(0x08)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t Score; // 0x18(0x08)
	struct FString UserNickName; // 0x20(0x10)
	int64_t ClanNo; // 0x30(0x08)
	struct FString ClanName; // 0x38(0x10)
	int32_t ClanMark; // 0x48(0x04)
	int32_t ClanBackground; // 0x4c(0x04)
	int64_t PlayTimeSec; // 0x50(0x08)
	int32_t PlayCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct CrowFPS.CrowLobbyScoreInfoSet
// Size: 0x10 (Inherited: 0x00)
struct FCrowLobbyScoreInfoSet {
	struct TArray<struct FCrowLobbyScoreProfileInfo> Infos; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowLobbyScoreProfileInfo
// Size: 0x88 (Inherited: 0x00)
struct FCrowLobbyScoreProfileInfo {
	struct FString UserNickName; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ClanName; // 0x18(0x10)
	int32_t ClanMarkIndex; // 0x28(0x04)
	int32_t ClanBgIndex; // 0x2c(0x04)
	int32_t UserSeasonLevel; // 0x30(0x04)
	int32_t MercenaryRank; // 0x34(0x04)
	int32_t SeasonRank; // 0x38(0x04)
	int32_t RecentConquestWinCount; // 0x3c(0x04)
	int32_t RecentConquestLoseCount; // 0x40(0x04)
	int32_t RecentSquadMatchAverageRank; // 0x44(0x04)
	struct FCrowLobbyScoreProfileRankInfo ConquestRankInfo; // 0x48(0x20)
	struct FCrowLobbyScoreProfileRankInfo SquadRankInfo; // 0x68(0x20)
};

// ScriptStruct CrowFPS.CrowLobbyScoreProfileRankInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowLobbyScoreProfileRankInfo {
	int32_t KillCount; // 0x00(0x04)
	int32_t AssistCount; // 0x04(0x04)
	int32_t DeathCount; // 0x08(0x04)
	int32_t InjuredCount; // 0x0c(0x04)
	int64_t Score; // 0x10(0x08)
	int32_t PlayCount; // 0x18(0x04)
	int32_t PlayTimeSec; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowLobbyScoreMyInfo
// Size: 0x80 (Inherited: 0x00)
struct FCrowLobbyScoreMyInfo {
	int32_t SeasonRank; // 0x00(0x04)
	int32_t SeasonLevel; // 0x04(0x04)
	int32_t FavoriteWeaponIndex; // 0x08(0x04)
	int32_t FavoriteWeaponUseCount; // 0x0c(0x04)
	struct FCrowLobbyScoreInfo MercenaryInfo; // 0x10(0x38)
	struct FCrowLobbyScoreInfo SeasonoInfo; // 0x48(0x38)
};

// ScriptStruct CrowFPS.CrowLobbyScoreInfo
// Size: 0x38 (Inherited: 0x00)
struct FCrowLobbyScoreInfo {
	int32_t Rank; // 0x00(0x04)
	int32_t Level; // 0x04(0x04)
	struct FString UserNickName; // 0x08(0x10)
	int64_t Score; // 0x18(0x08)
	int32_t AverageScore; // 0x20(0x04)
	int32_t PlayCount; // 0x24(0x04)
	int32_t PlayTimeSec; // 0x28(0x04)
	int32_t WinCount; // 0x2c(0x04)
	int32_t LoseCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CrowFPS.CrowIngameScoreBase
// Size: 0x58 (Inherited: 0x00)
struct FCrowIngameScoreBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FString, struct FCrowIngameScoreIntValue> IntValuePropertys; // 0x08(0x50)
};

// ScriptStruct CrowFPS.CrowIngameScoreIntValue
// Size: 0x08 (Inherited: 0x00)
struct FCrowIngameScoreIntValue {
	uint32_t Value; // 0x00(0x04)
	uint32_t IncValue; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowModeScore
// Size: 0x58 (Inherited: 0x58)
struct FCrowModeScore : FCrowIngameScoreBase {
};

// ScriptStruct CrowFPS.CrowIngameSkillScore
// Size: 0x58 (Inherited: 0x58)
struct FCrowIngameSkillScore : FCrowIngameScoreBase {
};

// ScriptStruct CrowFPS.CrowIngameVehicleScore
// Size: 0x58 (Inherited: 0x58)
struct FCrowIngameVehicleScore : FCrowIngameScoreBase {
};

// ScriptStruct CrowFPS.CrowIngameItemScore
// Size: 0x60 (Inherited: 0x58)
struct FCrowIngameItemScore : FCrowIngameScoreBase {
	uint16_t Index; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// ScriptStruct CrowFPS.CrowIngameWeaponScore
// Size: 0x68 (Inherited: 0x60)
struct FCrowIngameWeaponScore : FCrowIngameItemScore {
	char WeaponSubType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct CrowFPS.CrowIngameWeaponVehicleScore
// Size: 0x68 (Inherited: 0x68)
struct FCrowIngameWeaponVehicleScore : FCrowIngameWeaponScore {
};

// ScriptStruct CrowFPS.CrowIngameWeaponCharacterScore
// Size: 0x68 (Inherited: 0x68)
struct FCrowIngameWeaponCharacterScore : FCrowIngameWeaponScore {
};

// ScriptStruct CrowFPS.CrowIngameBattleScore
// Size: 0x58 (Inherited: 0x58)
struct FCrowIngameBattleScore : FCrowIngameScoreBase {
};

// ScriptStruct CrowFPS.CrowIngameReplicatedScore
// Size: 0x0c (Inherited: 0x00)
struct FCrowIngameReplicatedScore {
	uint32_t KillCount; // 0x00(0x04)
	uint32_t DeathCount; // 0x04(0x04)
	uint32_t ComboKillCount; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowServerOnlyCharacterInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowServerOnlyCharacterInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct CrowFPS.OptionExplanation
// Size: 0x28 (Inherited: 0x00)
struct FOptionExplanation {
	struct FString UniqueOrActionAxisName; // 0x00(0x10)
	struct UTexture2D* Image; // 0x10(0x08)
	struct FString LocalKey; // 0x18(0x10)
};

// ScriptStruct CrowFPS.KeyToTexture
// Size: 0x28 (Inherited: 0x00)
struct FKeyToTexture {
	struct FKey Key; // 0x00(0x18)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct UPaperSprite* Sprite; // 0x20(0x08)
};

// ScriptStruct CrowFPS.AxisNameToBehaviourName
// Size: 0x14 (Inherited: 0x00)
struct FAxisNameToBehaviourName {
	struct FName AxisName; // 0x00(0x08)
	struct FName BehaviourName; // 0x08(0x08)
	bool bIsIfMinusScale; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CrowFPS.SettingUserConfigItem
// Size: 0x18 (Inherited: 0x00)
struct FSettingUserConfigItem {
	struct FString Setting; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.SettingItem
// Size: 0xa0 (Inherited: 0x00)
struct FSettingItem {
	struct FString ItemTextLocalKey; // 0x00(0x10)
	struct FString ItemUniqueName; // 0x10(0x10)
	enum class ESettingCategoryType ItemCategory; // 0x20(0x01)
	enum class ESettingsSlotType ItemSlotType; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FString CosoleCommand; // 0x28(0x10)
	bool bValueParameter; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	uint32_t Index; // 0x3c(0x04)
	float Value; // 0x40(0x04)
	float MinValue; // 0x44(0x04)
	float MaxValue; // 0x48(0x04)
	float StepValue; // 0x4c(0x04)
	enum class ESettingsSlotIndexedValueFillType IndexedValueFillType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FString> IndexedValueLocalKeys; // 0x58(0x10)
	struct TArray<struct FString> SubItemUniqueNames; // 0x68(0x10)
	struct TArray<struct FStringArray> ActivationSubItemUniqueNames; // 0x78(0x10)
	struct TArray<struct FString> DeActivationItemUniqueNames; // 0x88(0x10)
	bool ActivationApply; // 0x98(0x01)
	bool ImmediatelyApply; // 0x99(0x01)
	bool AskMaintainApply; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
};

// ScriptStruct CrowFPS.StringArray
// Size: 0x10 (Inherited: 0x00)
struct FStringArray {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct CrowFPS.IndexArray
// Size: 0x10 (Inherited: 0x00)
struct FIndexArray {
	struct TArray<int32_t> Indexes; // 0x00(0x10)
};

// ScriptStruct CrowFPS.SettingBehaviourToDisplayText
// Size: 0x38 (Inherited: 0x00)
struct FSettingBehaviourToDisplayText {
	struct FName BehaviourName; // 0x00(0x08)
	struct FText DisplayText; // 0x08(0x18)
	struct FText LocalizationKey; // 0x20(0x18)
};

// ScriptStruct CrowFPS.KeySlotSimpleJsonData
// Size: 0x10 (Inherited: 0x00)
struct FKeySlotSimpleJsonData {
	struct TArray<struct FKeySlotSimpleJsonNode> Datas; // 0x00(0x10)
};

// ScriptStruct CrowFPS.KeySlotSimpleJsonNode
// Size: 0x30 (Inherited: 0x00)
struct FKeySlotSimpleJsonNode {
	int32_t S; // 0x00(0x04)
	char I : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString A; // 0x08(0x10)
	struct FString K; // 0x18(0x10)
	char L : 1; // 0x28(0x01)
	char C : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct CrowFPS.AxisKeySlot
// Size: 0x30 (Inherited: 0x00)
struct FAxisKeySlot {
	enum class ESettingKeySlotType SlotType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInputAxisKeyMapping AxisMapping; // 0x08(0x28)
};

// ScriptStruct CrowFPS.ActionKeySlot
// Size: 0x30 (Inherited: 0x00)
struct FActionKeySlot {
	enum class ESettingKeySlotType SlotType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInputActionKeyMapping ActionMapping; // 0x08(0x28)
};

// ScriptStruct CrowFPS.KeySlotCategoryInfo
// Size: 0x18 (Inherited: 0x00)
struct FKeySlotCategoryInfo {
	enum class ESettingKeySlotCategory KeySlotCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ActionOrAxisNames; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowShopTableRow
// Size: 0x78 (Inherited: 0x08)
struct FCrowShopTableRow : FTableRowBase {
	uint32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString HelpText; // 0x10(0x10)
	int32_t Reward_ID; // 0x20(0x04)
	int32_t AddReward_ID; // 0x24(0x04)
	enum class ECrowItemType BuyMoneyType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t BuyMoneyPrice; // 0x2c(0x04)
	enum class ECrowShopProductType ProductType; // 0x30(0x01)
	enum class ECrowShopProductSubType ProductSubType; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t StartTime; // 0x34(0x04)
	uint32_t EndTime; // 0x38(0x04)
	int32_t ItemProductLimit; // 0x3c(0x04)
	int32_t ProductCount; // 0x40(0x04)
	int32_t ProductBuffID; // 0x44(0x04)
	struct FString ProductTileKeyString; // 0x48(0x10)
	struct FString ProductDescKeyString; // 0x58(0x10)
	struct UPaperSprite* ProductIcon; // 0x68(0x08)
	enum class ECrowItemGrade ItemGrade; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct CrowFPS.CrowSkeletalMeshMergeMaterials
// Size: 0x10 (Inherited: 0x00)
struct FCrowSkeletalMeshMergeMaterials {
	struct TArray<struct UMaterialInterface*> Materials; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowRefPoseOverride
// Size: 0x18 (Inherited: 0x00)
struct FCrowRefPoseOverride {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowSkydivingSettingss
// Size: 0x98 (Inherited: 0x00)
struct FCrowSkydivingSettingss {
	float ForwardRate; // 0x00(0x04)
	float RightRate; // 0x04(0x04)
	float DownRate; // 0x08(0x04)
	float DefaultMinScaleValue; // 0x0c(0x04)
	float DefaultIdleScaleValue; // 0x10(0x04)
	float ForwardMaxScaleValue; // 0x14(0x04)
	float InputYawScale; // 0x18(0x04)
	float InputPitchScale; // 0x1c(0x04)
	float InputRollScale; // 0x20(0x04)
	float AnimationAxisForwardValueScale; // 0x24(0x04)
	float AnimationAxisRightValueScale; // 0x28(0x04)
	float MaxFlySpeed; // 0x2c(0x04)
	float BrakingDecelerationFlying; // 0x30(0x04)
	struct FVector2D ViewPitchMinMax; // 0x34(0x08)
	struct FVector2D ViewRollMinMax; // 0x3c(0x08)
	struct FVector CameraSocketOffset; // 0x44(0x0c)
	struct FRotator CameraRotation; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FCrowSkydivingCameraDirections CameraDirection; // 0x60(0x30)
	bool bInheritYaw; // 0x90(0x01)
	bool bInheritPitch; // 0x91(0x01)
	bool bInheritRoll; // 0x92(0x01)
	bool bUseControllerRotationYaw; // 0x93(0x01)
	bool bUseControllerRotationPitch; // 0x94(0x01)
	bool bUseControllerRotationRoll; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct CrowFPS.CrowSkydivingCameraDirections
// Size: 0x30 (Inherited: 0x00)
struct FCrowSkydivingCameraDirections {
	float ResetCameraForwardTime; // 0x00(0x04)
	enum class EEasingFunc ResetEasingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FRotator ResetCameraForwardDestination; // 0x08(0x0c)
	float CameraForwardTime; // 0x14(0x04)
	enum class EEasingFunc EasingType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FRotator CameraForwardDestination; // 0x1c(0x0c)
	struct UCurveFloat* CameraDistanceCurve; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowSlangFilterInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowSlangFilterInfo {
	int32_t slangStartPos; // 0x00(0x04)
	int32_t betweenSymbolCnt; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowModeEnableChatTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowModeEnableChatTableRow : FTableRowBase {
	enum class ECrowGameMode GameMode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class ECrowChatType> EnableChatTypes; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowSlangTableRow
// Size: 0x18 (Inherited: 0x08)
struct FCrowSlangTableRow : FTableRowBase {
	struct FString SlangWord; // 0x08(0x10)
};

// ScriptStruct CrowFPS.SoundStateInfo
// Size: 0x14 (Inherited: 0x00)
struct FSoundStateInfo {
	enum class ECrowSoundStateType SoundStateType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName StateGroup; // 0x04(0x08)
	struct FName StateName; // 0x0c(0x08)
};

// ScriptStruct CrowFPS.CrowSprayTableRow
// Size: 0x260 (Inherited: 0x168)
struct FCrowSprayTableRow : FCrowItemTableBaseRow {
	int32_t SprayIndex; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FText HelpText; // 0x170(0x18)
	struct FText NameKey; // 0x188(0x18)
	struct FText DescKey; // 0x1a0(0x18)
	struct TSoftObjectPtr<struct UPaperSprite> IconImage; // 0x1b8(0x28)
	struct TSoftObjectPtr<struct UTexture> DecalImage; // 0x1e0(0x28)
	enum class ESprayType SprayType; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FCrowDecalInfo DecalInfo; // 0x210(0x50)
};

// ScriptStruct CrowFPS.CrowSquadPlayer
// Size: 0x20 (Inherited: 0x00)
struct FCrowSquadPlayer {
	struct ACrowPlayerStateBase* PlayerState; // 0x00(0x08)
	enum class ECrowSquadRole SquadRole; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	uint64_t SquadOrder; // 0x10(0x08)
	uint32_t FirstRespawnAreaID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowSquadMatchRespawnInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrowSquadMatchRespawnInfo {
	struct USizeBox* Root; // 0x00(0x08)
	struct UTextBlock* TB_SquadNum; // 0x08(0x08)
	struct UImage* IMG_SquadBack; // 0x10(0x08)
	struct UTextBlock* TB_NickName; // 0x18(0x08)
	struct UTextBlock* TB_CoolTime; // 0x20(0x08)
	struct UCrowButton* WB_Buttom; // 0x28(0x08)
	struct ACrowPlayerStateSquadMatch* PlayerState; // 0x30(0x08)
	float EnableRespawnDelayAfterDead; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct CrowFPS.CrowSquadMatchRewardTableRow
// Size: 0x110 (Inherited: 0x08)
struct FCrowSquadMatchRewardTableRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FString TextIndex; // 0x10(0x10)
	enum class ECrowSquadMatchReward Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FText RewardName; // 0x28(0x18)
	struct UPaperSprite* DefaultIcon; // 0x40(0x08)
	uint32_t ObjectivePoint; // 0x48(0x04)
	float SpawnHeight; // 0x4c(0x04)
	struct AActor* RewardObjectClass; // 0x50(0x08)
	struct FString RewardObjectIndex; // 0x58(0x10)
	struct ACrowSquadRewardPreviewActor* PreviewActorClass; // 0x68(0x08)
	struct UParticleSystem* SmokeEffect; // 0x70(0x08)
	struct FCrowGameIconDisplayInfo IconInfo; // 0x78(0x88)
	struct FString DialogKey; // 0x100(0x10)
};

// ScriptStruct CrowFPS.CrowSquadMemberKillInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowSquadMemberKillInfo {
	int32_t Level; // 0x00(0x04)
	enum class ECrowSquadRole SquadRole; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString NickName; // 0x08(0x10)
	int32_t DropCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowSquadWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowSquadWidgetInfo {
	int32_t SquadRole; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UGridSlot* GridSlot; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowSubTitleDataRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowSubTitleDataRow : FTableRowBase {
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCrowSubTitleInfo> ArraySubTitle; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowSubTitleInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowSubTitleInfo {
	struct FTimespan StartTime; // 0x00(0x08)
	struct FTimespan EndTime; // 0x08(0x08)
	struct FText Description; // 0x10(0x18)
};

// ScriptStruct CrowFPS.CrowSupplyAmmoInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowSupplyAmmoInfo {
	struct FString AmmoTextIndex; // 0x00(0x10)
	bool IsPercent; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float IncreaseValue; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowSupplyBaseDataRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowSupplyBaseDataRow : FTableRowBase {
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCrowSupplyItemInfo> ArraySupplyItems; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowSupplyItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowSupplyItemInfo {
	int32_t SupplyItemTableIndex; // 0x00(0x04)
	int32_t MaxSpawnCount; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowSupplyBoxRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowSupplyBoxRow : FTableRowBase {
	enum class ECrowSupplyBoxType SupplyBoxType; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	uint16_t CoolTimeSeconds; // 0x0a(0x02)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString HelpText; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowTattooTableRow
// Size: 0x1d8 (Inherited: 0x168)
struct FCrowTattooTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowTattooType Type; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct FString NameKey; // 0x180(0x10)
	struct FString DescriptionKey; // 0x190(0x10)
	struct UPaperSprite* Icon; // 0x1a0(0x08)
	struct FCrowTattooInfo Tattoo; // 0x1a8(0x18)
	struct FCrowTattooInfo TattooSub; // 0x1c0(0x18)
};

// ScriptStruct CrowFPS.CrowTattooInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowTattooInfo {
	float PosU; // 0x00(0x04)
	float PosV; // 0x04(0x04)
	float ScaleX; // 0x08(0x04)
	float ScaleY; // 0x0c(0x04)
	struct UTexture2D* Image; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowTeleportationTargetInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowTeleportationTargetInfo {
	struct ACrowCharacterPawn* Target; // 0x00(0x08)
	float StartedTimeSeconds; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.TriggerInput
// Size: 0x18 (Inherited: 0x00)
struct FTriggerInput {
	struct FName KeyName; // 0x00(0x08)
	struct FName KeyName02; // 0x08(0x08)
	float PressTime; // 0x10(0x04)
	float PressTime02; // 0x14(0x04)
};

// ScriptStruct CrowFPS.TriggerCheckMouseOver
// Size: 0x10 (Inherited: 0x00)
struct FTriggerCheckMouseOver {
	struct TArray<struct FTriggerCollisionInfo> Targets; // 0x00(0x10)
};

// ScriptStruct CrowFPS.TriggerCollisionInfo
// Size: 0x18 (Inherited: 0x00)
struct FTriggerCollisionInfo {
	struct FName ID; // 0x00(0x08)
	struct FName TargetCollisionName; // 0x08(0x08)
	struct UPrimitiveComponent* TargetCollision; // 0x10(0x08)
};

// ScriptStruct CrowFPS.TriggerCheckDistance
// Size: 0x28 (Inherited: 0x00)
struct FTriggerCheckDistance {
	bool UseCustom; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UShapeComponent* NearColiision; // 0x08(0x08)
	struct UShapeComponent* FarColiision; // 0x10(0x08)
	struct TArray<struct FTriggerCollisionInfo> CustomCollisions; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowBuildingTriggerConfig
// Size: 0x08 (Inherited: 0x00)
struct FCrowBuildingTriggerConfig {
	float ActivateDistance; // 0x00(0x04)
	float ActivatePitchMax; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowTriggerTutorialHUD
// Size: 0x18 (Inherited: 0x00)
struct FCrowTriggerTutorialHUD {
	struct FName Text; // 0x00(0x08)
	struct UMaterialInstance* Icon; // 0x08(0x08)
	float Duration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.HelpDescriptionData
// Size: 0x20 (Inherited: 0x00)
struct FHelpDescriptionData {
	enum class EMouseButtonType ButtonType; // 0x00(0x01)
	enum class EKeyInputType KeyInputType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString DescriptionText; // 0x08(0x10)
	bool IsFrontKey; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowFPS.WeaponAnimSet
// Size: 0x48 (Inherited: 0x00)
struct FWeaponAnimSet {
	struct FWeaponActorAnim Stand; // 0x00(0x18)
	struct FWeaponActorAnim Crouch; // 0x18(0x18)
	struct FWeaponActorAnim Prostrate; // 0x30(0x18)
};

// ScriptStruct CrowFPS.WeaponActorAnim
// Size: 0x18 (Inherited: 0x00)
struct FWeaponActorAnim {
	struct FName FCharacterAnimRowKey; // 0x00(0x08)
	struct UAnimMontage* Pawn1P; // 0x08(0x08)
	struct UAnimMontage* Pawn3P; // 0x10(0x08)
};

// ScriptStruct CrowFPS.WeaponAnimSequenceSet
// Size: 0x30 (Inherited: 0x00)
struct FWeaponAnimSequenceSet {
	struct FWeaponAnimSequence Stand; // 0x00(0x10)
	struct FWeaponAnimSequence Crouch; // 0x10(0x10)
	struct FWeaponAnimSequence Prostrate; // 0x20(0x10)
};

// ScriptStruct CrowFPS.WeaponAnimSequence
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAnimSequence {
	struct UAnimSequence* Pawn1P; // 0x00(0x08)
	struct UAnimSequence* Pawn3P; // 0x08(0x08)
};

// ScriptStruct CrowFPS.TakeHitInfo
// Size: 0x130 (Inherited: 0x00)
struct FTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct ACharacter> PawnInstigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x08)
	int32_t DamageEventClassID; // 0x20(0x04)
	char bKilled : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	char EnsureReplicationByte; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDamageEvent GeneralDamageEvent; // 0x30(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x40(0xb0)
	struct FRadialDamageEvent RadialDamageEvent; // 0xf0(0x40)
};

// ScriptStruct CrowFPS.DecalData
// Size: 0x10 (Inherited: 0x00)
struct FDecalData {
	struct UMaterial* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float LifeSpan; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowUserExpTableRow
// Size: 0x58 (Inherited: 0x08)
struct FCrowUserExpTableRow : FTableRowBase {
	int32_t Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t Exp; // 0x10(0x08)
	struct FText ClassName; // 0x18(0x18)
	struct FText ClassRankName; // 0x30(0x18)
	struct UPaperSprite* ClassIcon; // 0x48(0x08)
	struct UPaperSprite* ClassIconSmall; // 0x50(0x08)
};

// ScriptStruct CrowFPS.CrowUserInfoBase
// Size: 0x7c8 (Inherited: 0x00)
struct FCrowUserInfoBase {
	uint64_t ServerKey; // 0x00(0x08)
	struct FString AuthToken; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	uint32_t Level; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	uint64_t Exp; // 0x30(0x08)
	uint64_t BattlePassExp; // 0x38(0x08)
	uint64_t CharacterInvenNo; // 0x40(0x08)
	char Team; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FCrowItemData> InvenItemArray; // 0x50(0x10)
	struct TArray<struct FCrowWeaponLevel> WeaponLevelArray; // 0x60(0x10)
	struct TArray<struct FCrowWeaponData> UnlockedWeaponArray; // 0x70(0x10)
	struct TArray<int32_t> UnlockedEyeColorArray; // 0x80(0x10)
	struct TArray<struct FCrowWeaponAccData> UnlockWeaponEquipAccArray; // 0x90(0x10)
	struct TArray<struct FCrowItemData> ItemEquipmentArray; // 0xa0(0x10)
	struct TArray<struct FCrowSquadWeapon> ProvidedSquadWeaponArray; // 0xb0(0x10)
	struct FCrowUserCharacterInfo CharacterInfo; // 0xc0(0x38)
	struct FString SquadKey; // 0xf8(0x10)
	uint64_t SquadOrder; // 0x108(0x08)
	uint64_t Coin; // 0x110(0x08)
	struct FString SavaedUserOptions; // 0x118(0x10)
	struct TArray<uint32_t> UnlockedWeaponSkinArray; // 0x128(0x10)
	struct TArray<uint32_t> UnlockesWeaponStickerArray; // 0x138(0x10)
	struct TArray<int32_t> UnlockesSprayArray; // 0x148(0x10)
	struct TArray<int32_t> UnlockedTattooArray; // 0x158(0x10)
	struct TMap<int32_t, int32_t> SpraySlotArray; // 0x168(0x50)
	struct TMap<int32_t, struct FCrowWeaponLoadoutPreset> WeaponLoadoutPresetMap; // 0x1b8(0x50)
	struct TMap<uint32_t, uint32_t> WeaponSkinApplyInfo; // 0x208(0x50)
	struct TMap<char, struct FCrowOutfitPreset> CharacterOutfitPresetMap; // 0x258(0x50)
	struct TArray<uint32_t> EmotionIndexs; // 0x2a8(0x10)
	struct TArray<uint32_t> EmotionIndexsInSlot; // 0x2b8(0x10)
	struct TArray<uint32_t> ResultMVPIndexs; // 0x2c8(0x10)
	uint32_t ResultMVPIndex; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FCrowWeaponLoadoutPreset SquadWeaponLoadoutPreset; // 0x2e0(0x78)
	int32_t SelectedLoadoutPreset; // 0x358(0x04)
	char SelectedOutfitPreset; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	uint64_t RCPPoint; // 0x360(0x08)
	uint64_t GPoint; // 0x368(0x08)
	struct TArray<struct FCrowNewItem> NewItemArray; // 0x370(0x10)
	struct TArray<struct FCrowNewItem> NewItemShopInven; // 0x380(0x10)
	struct TArray<uint32_t> VehicleSkinArray; // 0x390(0x10)
	struct TMap<uint32_t, uint32_t> VehicleSkinEquipMap; // 0x3a0(0x50)
	struct TArray<struct FCrowBuffData> ActivatedBuffArray; // 0x3f0(0x10)
	struct TMap<char, char> RandomBoxBuyCount; // 0x400(0x50)
	struct TArray<uint32_t> UnlockedParachuteSkinArray; // 0x450(0x10)
	uint32_t ParachuteSkinIndex; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct TMap<uint64_t, struct FCrowPartyInvitation> SendInvatePartyUserMap; // 0x468(0x50)
	struct TMap<uint64_t, struct FCrowPartyInvitation> ReceivedInvatePartyUserMap; // 0x4b8(0x50)
	struct TMap<uint64_t, struct FCrowGameFriendInfo> FollowFriendInfoMap; // 0x508(0x50)
	struct TMap<uint64_t, struct FCrowGameFriendInfo> FriendInfoMap; // 0x558(0x50)
	struct TMap<uint64_t, struct FCrowGameFriendInfo> RequestFriendInfoMap; // 0x5a8(0x50)
	struct TMap<uint64_t, struct FCrowGameFriendInfo> SentFriendInfoMap; // 0x5f8(0x50)
	struct TMap<uint64_t, struct FCrowRecentGamePlayUserInfo> RecentGamePlayUserInfoMap; // 0x648(0x50)
	struct TMap<uint64_t, struct FCrowGameFriendInfo> SearchFriendInfoMap; // 0x698(0x50)
	struct TMap<uint64_t, struct FCrowPartyMember> PartyMemberMap; // 0x6e8(0x50)
	enum class ECrowCommunityFollowOption AllowFollow; // 0x738(0x01)
	enum class ECrowCommunityPartyOption AllowParty; // 0x739(0x01)
	char EnterParty; // 0x73a(0x01)
	char pad_73B[0x5]; // 0x73b(0x05)
	struct FCrowParty Party; // 0x740(0x38)
	bool MatchExist; // 0x778(0x01)
	char pad_779[0x7]; // 0x779(0x07)
	struct FString IP; // 0x780(0x10)
	uint32_t Port; // 0x790(0x04)
	enum class ECrowGameMode MapMode; // 0x794(0x04)
	uint32_t MapIndex; // 0x798(0x04)
	int32_t DailyMissionEndDate; // 0x79c(0x04)
	int32_t WeeklyMissionEndDate; // 0x7a0(0x04)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct TArray<struct FCrowMissionInfo> MissionArray; // 0x7a8(0x10)
	struct TArray<struct FCrowItemData> ShopInventoryItems; // 0x7b8(0x10)
};

// ScriptStruct CrowFPS.CrowParty
// Size: 0x38 (Inherited: 0x00)
struct FCrowParty {
	struct FString UniqueId; // 0x00(0x10)
	uint64_t LeaderServerKey; // 0x10(0x08)
	int32_t MatchingElapsedTime; // 0x18(0x04)
	int32_t MatchingUserCount; // 0x1c(0x04)
	int32_t MaxGamePlayUserCount; // 0x20(0x04)
	enum class ECrowGameMode MatchingType; // 0x24(0x04)
	struct TArray<struct FCrowMatchInfo> GameModeInfoArray; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowMatchInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowMatchInfo {
	enum class ECrowGameMode GameMode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<uint32_t> GameMapIndexArray; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowPartyMember
// Size: 0x128 (Inherited: 0x00)
struct FCrowPartyMember {
	uint64_t CharacterInvenNo; // 0x00(0x08)
	uint64_t ServerKey; // 0x08(0x08)
	uint64_t SteamId; // 0x10(0x08)
	uint64_t OrderNo; // 0x18(0x08)
	uint32_t Level; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString NickName; // 0x28(0x10)
	enum class ECrowLobbyPartyUserScene Scene; // 0x38(0x01)
	enum class ECrowLobbyPartyUserState State; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FCrowItemData> InvenItemArray; // 0x40(0x10)
	struct TMap<int32_t, struct FCrowWeaponData> WeaponEquipmentMap; // 0x50(0x50)
	struct TMap<int32_t, struct FCrowWeaponAccData> WeaponAccMap; // 0xa0(0x50)
	struct FCrowUserCharacterInfo CharacterInfo; // 0xf0(0x38)
};

// ScriptStruct CrowFPS.CrowUserCharacterInfo
// Size: 0x38 (Inherited: 0x00)
struct FCrowUserCharacterInfo {
	uint32_t Index; // 0x00(0x04)
	char FaceIndex; // 0x04(0x01)
	char HairIndex; // 0x05(0x01)
	char HairColorIndex; // 0x06(0x01)
	char BeardIndex; // 0x07(0x01)
	char BeardColorIndex; // 0x08(0x01)
	char EyeColorIndex; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	uint64_t InvenNo; // 0x10(0x08)
	struct TArray<struct FCrowClothItemData> ClothesList; // 0x18(0x10)
	struct TArray<uint32_t> TattooIndexList; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponAccData
// Size: 0xb0 (Inherited: 0x00)
struct FCrowWeaponAccData {
	uint32_t ItemIndex; // 0x00(0x04)
	uint32_t SkinIndex; // 0x04(0x04)
	uint32_t CharmIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> StickerList; // 0x10(0x10)
	struct FCrowWeaponPartsStickerData PartsDatas[0x9]; // 0x20(0x90)
};

// ScriptStruct CrowFPS.CrowWeaponPartsStickerData
// Size: 0x10 (Inherited: 0x00)
struct FCrowWeaponPartsStickerData {
	struct TArray<int32_t> Stickers; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowGameFriendInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowGameFriendInfo {
	uint64_t ServerKey; // 0x00(0x08)
	uint64_t SteamId; // 0x08(0x08)
	uint32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString NickName; // 0x18(0x10)
	enum class ECrowLobbyFriendState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	enum class ECrowGameMode GameMode; // 0x2c(0x04)
};

// ScriptStruct CrowFPS.CrowRecentGamePlayUserInfo
// Size: 0x40 (Inherited: 0x30)
struct FCrowRecentGamePlayUserInfo : FCrowGameFriendInfo {
	int64_t LastGamePlayTime; // 0x30(0x08)
	int8_t SquadMember; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct CrowFPS.CrowPartyInvitation
// Size: 0x18 (Inherited: 0x00)
struct FCrowPartyInvitation {
	uint64_t ServerKey; // 0x00(0x08)
	struct FString NickName; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowNewItem
// Size: 0x0c (Inherited: 0x00)
struct FCrowNewItem {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	uint32_t WeaponPartsIndex; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponLoadoutPreset
// Size: 0x78 (Inherited: 0x00)
struct FCrowWeaponLoadoutPreset {
	char LoadoutType; // 0x00(0x01)
	char PresetIndex; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString LoadoutName; // 0x08(0x10)
	int64_t Expiration; // 0x18(0x08)
	bool Loacked; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TMap<char, struct FCrowWeaponSlot> WeaponEquipmentMap; // 0x28(0x50)
};

// ScriptStruct CrowFPS.CrowWeaponSlot
// Size: 0x30 (Inherited: 0x00)
struct FCrowWeaponSlot {
	char Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	uint32_t SkinIndex; // 0x08(0x04)
	uint32_t CharmIndex; // 0x0c(0x04)
	struct TArray<int32_t> Stickers; // 0x10(0x10)
	struct TArray<struct FCrowWeaponPartsSlot> WearParts; // 0x20(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartsSlot
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponPartsSlot {
	char PartsSlot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ItemIndex; // 0x04(0x04)
	struct TArray<int32_t> Stickers; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowOutfitPreset
// Size: 0x38 (Inherited: 0x00)
struct FCrowOutfitPreset {
	uint64_t InvenNo; // 0x00(0x08)
	char OutfitIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString OutfitName; // 0x10(0x10)
	int64_t Expiration; // 0x20(0x08)
	struct TArray<struct FCrowClothItemData> ClothesList; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowSquadWeapon
// Size: 0x0c (Inherited: 0x00)
struct FCrowSquadWeapon {
	char WeaponSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t WeaponIndex; // 0x04(0x04)
	uint32_t Count; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponLevel
// Size: 0x0c (Inherited: 0x00)
struct FCrowWeaponLevel {
	uint32_t SharedIndex; // 0x00(0x04)
	uint32_t Level; // 0x04(0x04)
	uint32_t Exp; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowPartyInvitationUserInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowPartyInvitationUserInfo {
	uint64_t ServerKey; // 0x00(0x08)
	struct FString NickName; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowGamePlayUserPopupInfo
// Size: 0x38 (Inherited: 0x30)
struct FCrowGamePlayUserPopupInfo : FCrowGameFriendInfo {
	enum class ECrowLobbyPartyUserState PartyState; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct CrowFPS.CrowExtraParts
// Size: 0x18 (Inherited: 0x00)
struct FCrowExtraParts {
	char PartsType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<uint32_t> PartsIndex; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowGameModeInfo
// Size: 0x38 (Inherited: 0x00)
struct FCrowGameModeInfo {
	enum class ECrowGameMode SelectedGameMode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCrowMatchInfo> GameModeInfoArray; // 0x08(0x10)
	struct TArray<struct FCrowMatchInfo> QuickMatchInfoArray; // 0x18(0x10)
	struct TArray<struct FCrowCustomMatchInfo> CustomMatchInfoArray; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowCustomMatchInfo
// Size: 0x08 (Inherited: 0x00)
struct FCrowCustomMatchInfo {
	enum class ECrowGameMode GameMode; // 0x00(0x04)
	uint32_t MapIndex; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleBoatFxSetup
// Size: 0x208 (Inherited: 0x00)
struct FCrowVehicleBoatFxSetup {
	struct FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x00(0x68)
	struct FCrowVehicleFxTemplate ReadyFxTemplate; // 0x68(0x68)
	struct FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xd0(0x68)
	struct FCrowVehicleFxTemplate HornFxTemplate; // 0x138(0x68)
	struct FCrowVehicleFxTemplate HornOffFxTemplate; // 0x1a0(0x68)
};

// ScriptStruct CrowFPS.CrowLerpTranslationInfo
// Size: 0x2c (Inherited: 0x00)
struct FCrowLerpTranslationInfo {
	struct FVector2D NewTranslation; // 0x00(0x08)
	struct FVector2D StartTranslation; // 0x08(0x08)
	struct FVector2D EndTranslation; // 0x10(0x08)
	struct FVector2D CurrentTranslation; // 0x18(0x08)
	float Alpha; // 0x20(0x04)
	float IncAlpha; // 0x24(0x04)
	float Speed; // 0x28(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleDamageSetup
// Size: 0xa0 (Inherited: 0x00)
struct FCrowVehicleDamageSetup {
	struct AActor* DestroyedActorTemplate; // 0x00(0x08)
	float MaxHP; // 0x08(0x04)
	float SevereHP; // 0x0c(0x04)
	float BurningDotDamage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCrowDamageType* DamageType; // 0x18(0x08)
	struct FWeaponDamageSettings DamageSettings; // 0x20(0x28)
	struct TArray<struct FCrowVehicleDamageEffect> DamageEffectList; // 0x48(0x10)
	struct FCrowVehicleEnginePowerDrop EnginePowerDrop; // 0x58(0x48)
};

// ScriptStruct CrowFPS.CrowVehicleEnginePowerDrop
// Size: 0x48 (Inherited: 0x00)
struct FCrowVehicleEnginePowerDrop {
	float ActivateDamagePercent; // 0x00(0x04)
	float DropRate; // 0x04(0x04)
	float DurationTimeSecond; // 0x08(0x04)
	float RecoverTimeSecond; // 0x0c(0x04)
	struct TArray<struct FFxReplicator_FxTemplate> FxTemplateList; // 0x10(0x10)
	struct TArray<struct FFxReplicator_AudioTemplate> AudioTemplateList; // 0x20(0x10)
	struct TArray<struct FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x30(0x10)
	struct UCrowFxReplicatorComponent* FxReplicator; // 0x40(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleDamageEffect
// Size: 0x40 (Inherited: 0x00)
struct FCrowVehicleDamageEffect {
	float ActivateHP; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVehicleDamageParameter> DamageParameterList; // 0x08(0x10)
	struct TArray<struct FFxReplicator_FxTemplate> FxTemplateList; // 0x18(0x10)
	struct TArray<struct FFxReplicator_AudioTemplate> AudioTemplateList; // 0x28(0x10)
	struct UCrowFxReplicatorComponent* FxReplicator; // 0x38(0x08)
};

// ScriptStruct CrowFPS.VehicleDamageParameter
// Size: 0x0c (Inherited: 0x00)
struct FVehicleDamageParameter {
	enum class EVehicleDamageParameterType Type; // 0x00(0x04)
	float Parameter; // 0x04(0x04)
	bool ClearParameter; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct CrowFPS.VehicleDustInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleDustInfo {
	struct UParticleSystem* FX; // 0x00(0x08)
	float MinSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.VehicleEventSetup
// Size: 0x30 (Inherited: 0x00)
struct FVehicleEventSetup {
	struct FVehicleEventParameterFactor EventParameterFactor; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVehicleEvent> EventList; // 0x10(0x10)
	struct TArray<struct FVehicleEvent> SubEventList; // 0x20(0x10)
};

// ScriptStruct CrowFPS.VehicleEvent
// Size: 0x78 (Inherited: 0x00)
struct FVehicleEvent {
	enum class EVehicleEvent StartEventID; // 0x00(0x04)
	bool IsEndWithAnyEvent; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<enum class EVehicleEvent> EndEventList; // 0x08(0x10)
	struct TArray<enum class EVehicleEvent> IgnoreEndEventList; // 0x18(0x10)
	struct TArray<struct FName> HideBoneNameList; // 0x28(0x10)
	struct TArray<struct FFxReplicator_FxTemplate> FxTemplateList; // 0x38(0x10)
	struct TArray<struct FFxReplicator_AudioTemplate> AudioTemplateList; // 0x48(0x10)
	struct TArray<struct FFxReplicator_WwiseAudioTemplate> WwiseAudioTemplateList; // 0x58(0x10)
	enum class EVehicleEvent PassOverWwiseAudioEventID; // 0x68(0x04)
	bool IsStartEvent; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct UCrowFxReplicatorComponent* FxReplicator; // 0x70(0x08)
};

// ScriptStruct CrowFPS.VehicleEventParameterFactor
// Size: 0x0c (Inherited: 0x00)
struct FVehicleEventParameterFactor {
	float MaxSpeed; // 0x00(0x04)
	float MaxRPM; // 0x04(0x04)
	float MaxWheelSpin; // 0x08(0x04)
};

// ScriptStruct CrowFPS.VehicleEventSync
// Size: 0x10 (Inherited: 0x00)
struct FVehicleEventSync {
	bool IsStartEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCrowFxReplicatorComponent* FxReplicator; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleImpactDamageTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowVehicleImpactDamageTableRow : FTableRowBase {
	enum class EVehicleIdentity VehicleType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FCrowVehicleImpactDamageData> ImpactDataArray; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowVehicleImpactDamageData
// Size: 0x0c (Inherited: 0x00)
struct FCrowVehicleImpactDamageData {
	float VelocitySizeMin; // 0x00(0x04)
	float VelocitySizeMax; // 0x04(0x04)
	float Damage; // 0x08(0x04)
};

// ScriptStruct CrowFPS.VehicleEffectSetup
// Size: 0x04 (Inherited: 0x00)
struct FVehicleEffectSetup {
	float BodySpeedMax; // 0x00(0x04)
};

// ScriptStruct CrowFPS.VehicleSetup
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSetup {
	struct USkeletalMeshComponent* Mesh; // 0x00(0x08)
	struct USceneComponent* CameraRoot; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleDeltaVelocity
// Size: 0x0c (Inherited: 0x00)
struct FCrowVehicleDeltaVelocity {
	float Forward; // 0x00(0x04)
	float Right; // 0x04(0x04)
	float Duration; // 0x08(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleCachedRepMovement
// Size: 0x40 (Inherited: 0x00)
struct FCrowVehicleCachedRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector Location; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Rotation; // 0x20(0x10)
	float TimeSeconds; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct CrowFPS.RepMovementTolerance
// Size: 0x10 (Inherited: 0x00)
struct FRepMovementTolerance {
	float position; // 0x00(0x04)
	float LinearVelocity; // 0x04(0x04)
	float Rotation; // 0x08(0x04)
	float AngularVelocity; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleSpawnWeight
// Size: 0x18 (Inherited: 0x00)
struct FCrowVehicleSpawnWeight {
	struct FString TextIndex; // 0x00(0x10)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleSeatInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowVehicleSeatInfo {
	struct FString PlayerNickName; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowInputLerp
// Size: 0x10 (Inherited: 0x00)
struct FCrowInputLerp {
	float MaxInputValue; // 0x00(0x04)
	float LerpAmount; // 0x04(0x04)
	float MovedValuePerSecond; // 0x08(0x04)
	float CurrentAddedInputAlpha; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowBarrelInfo
// Size: 0x2c (Inherited: 0x00)
struct FCrowBarrelInfo {
	bool UseDirectForward; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRotator BarrelForward; // 0x04(0x0c)
	struct FRotator RootForward; // 0x10(0x0c)
	struct FRotator LerpAddedInputRotation; // 0x1c(0x0c)
	float OffsetForwardPitch; // 0x28(0x04)
};

// ScriptStruct CrowFPS.CrowVehicleSightInfo
// Size: 0x30 (Inherited: 0x00)
struct FCrowVehicleSightInfo {
	struct UCrowSpringArmComponent* ActivatedSpringArm; // 0x00(0x08)
	struct UCrowSpringArmComponent* SpringArmFP; // 0x08(0x08)
	struct UCrowSpringArmComponent* SpringArmTP; // 0x10(0x08)
	struct FVector DefaultFPSocketOffset; // 0x18(0x0c)
	struct FVector DefaultTPSocketOffset; // 0x24(0x0c)
};

// ScriptStruct CrowFPS.CrowVehicleSkinLeftButtonInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehicleSkinLeftButtonInfo {
	struct FText LabelText; // 0x00(0x18)
	struct FString UserData; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowVehicleSkinTableRow
// Size: 0x1b8 (Inherited: 0x168)
struct FCrowVehicleSkinTableRow : FCrowItemTableBaseRow {
	struct FString HelpText; // 0x168(0x10)
	enum class ECrowVehicleType VehicleType; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FString VehicleTextIndex; // 0x180(0x10)
	struct TArray<struct FString> SkinShareVehicleArray; // 0x190(0x10)
	struct TArray<struct UMaterialInterface*> SkinArray; // 0x1a0(0x10)
	bool bDisplayChangeSkin; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
};

// ScriptStruct CrowFPS.CrowVehicleGroup
// Size: 0x28 (Inherited: 0x00)
struct FCrowVehicleGroup {
	uint32_t MaxSpawnCount; // 0x00(0x04)
	float SpawnDelay; // 0x04(0x04)
	uint32_t SpawnLimit; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct ACrowVehicleRandomSpawner*> SpawnerArray; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleStateParameter
// Size: 0x02 (Inherited: 0x00)
struct FCrowVehicleStateParameter {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct CrowFPS.CrowVehicleTableRow
// Size: 0x1a8 (Inherited: 0x168)
struct FCrowVehicleTableRow : FCrowItemTableBaseRow {
	enum class ECrowVehicleType VehicleType; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct ACrowVehiclePawn* VehicleTarget; // 0x170(0x08)
	struct ACrowVehicleParachuteActor* ParachuteActor; // 0x178(0x08)
	struct UAnimMontage* ParachuteAnimMontage; // 0x180(0x08)
	struct TArray<struct FCrowPhysMatEffectPair> ParachuteOnGroundEffect; // 0x188(0x10)
	enum class ECrowShopProductSubType ShopProductSubType; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	struct FName SkidMarkIndex; // 0x19c(0x08)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct CrowFPS.CrowPhysMatEffectPair
// Size: 0x30 (Inherited: 0x00)
struct FCrowPhysMatEffectPair {
	struct FSoftObjectPath PhysicalMaterial; // 0x00(0x18)
	struct FSoftObjectPath Particle; // 0x18(0x18)
};

// ScriptStruct CrowFPS.CrowVehicleSeatWeaponData
// Size: 0x10 (Inherited: 0x00)
struct FCrowVehicleSeatWeaponData {
	struct TArray<struct ACrowWeaponVehicle*> WeaponArray; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowWheelEffectBlur
// Size: 0x38 (Inherited: 0x00)
struct FCrowWheelEffectBlur {
	struct UParticleSystem* FxAsset; // 0x00(0x08)
	struct FName AttachSocketName; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct TArray<struct FName> HideBoneNames; // 0x28(0x10)
};

// ScriptStruct CrowFPS.CrowWheelEffectDissolve
// Size: 0x08 (Inherited: 0x00)
struct FCrowWheelEffectDissolve {
	struct UParticleSystemComponent* ParticleSystem; // 0x00(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleWidgetSeatIcon
// Size: 0x10 (Inherited: 0x00)
struct FCrowVehicleWidgetSeatIcon {
	struct FName SeatImageName; // 0x00(0x08)
	struct FName SeatSquadWidgetName; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleSeatCell
// Size: 0x20 (Inherited: 0x00)
struct FCrowVehicleSeatCell {
	char pad_0[0x10]; // 0x00(0x10)
	struct ACrowPlayerStateBase* PlayerState; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowVehicleWarning
// Size: 0x20 (Inherited: 0x00)
struct FCrowVehicleWarning {
	struct UCanvasPanel* Root; // 0x00(0x08)
	bool IsActivate; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CurrentStep; // 0x0c(0x04)
	float OnOffInterval; // 0x10(0x04)
	float OnOffTime; // 0x14(0x04)
	struct UAudioComponent* WarningAudio; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowVictoryPoseTableRow
// Size: 0x198 (Inherited: 0x168)
struct FCrowVictoryPoseTableRow : FCrowItemTableBaseRow {
	char pad_168[0x8]; // 0x168(0x08)
	struct FSoftObjectPath Animation; // 0x170(0x18)
	struct TArray<struct FString> WeaponArray; // 0x188(0x10)
};

// ScriptStruct CrowFPS.CrowVirtualISMCInstance
// Size: 0x40 (Inherited: 0x00)
struct FCrowVirtualISMCInstance {
	int32_t RealIndex; // 0x00(0x04)
	char IsValid : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowVoiceChatChannelTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowVoiceChatChannelTableRow : FTableRowBase {
	enum class ECrowVoiceChannel VoiceChannel; // 0x08(0x01)
	enum class ECrowVoiceChannelType ChatType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t AudibleDistance; // 0x0c(0x04)
	int32_t ConversationalDistance; // 0x10(0x04)
	float AudioFadeIntensityByDistance; // 0x14(0x04)
	enum class ECrowVoiceAudioFadeModel AudioFadeModel; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowFPS.CrowVoluemetricCloudSetting
// Size: 0x08 (Inherited: 0x00)
struct FCrowVoluemetricCloudSetting {
	struct UCrowCloudScapeDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct CrowFPS.CrowVloumetricCloudMaterialDynamic
// Size: 0x10 (Inherited: 0x00)
struct FCrowVloumetricCloudMaterialDynamic {
	int32_t MaxCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowVloumetricCloudMaterial
// Size: 0x10 (Inherited: 0x00)
struct FCrowVloumetricCloudMaterial {
	int32_t MaxCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* VolumeMaterial; // 0x08(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponStickerTableRow
// Size: 0x1c8 (Inherited: 0x168)
struct FCrowWeaponStickerTableRow : FCrowItemTableBaseRow {
	struct FCrowDecalInfo DecalInfo; // 0x168(0x50)
	int32_t Grade; // 0x1b8(0x04)
	enum class ECrowStickerType Type; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	struct UTexture* DecalImage; // 0x1c0(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponCharmTableRow
// Size: 0x1f8 (Inherited: 0x168)
struct FCrowWeaponCharmTableRow : FCrowItemTableBaseRow {
	int32_t Grade; // 0x168(0x04)
	float Weight; // 0x16c(0x04)
	struct FCrowPartModelInfo ModelInfo; // 0x170(0x88)
};

// ScriptStruct CrowFPS.CrowPartModelInfo
// Size: 0x88 (Inherited: 0x00)
struct FCrowPartModelInfo {
	struct FSoftObjectPath Mesh1P; // 0x00(0x18)
	struct ACrowWeaponPartsActor* MeshClass1P; // 0x18(0x08)
	struct UAnimInstance* AnimClass1P; // 0x20(0x08)
	struct TArray<struct UMaterialInterface*> Materials1P; // 0x28(0x10)
	struct FSoftObjectPath Mesh3P; // 0x38(0x18)
	struct ACrowWeaponPartsActor* MeshClass3P; // 0x50(0x08)
	struct UAnimInstance* AnimClass3P; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> Materials3P; // 0x60(0x10)
	struct FSoftObjectPath SimpleMesh3P; // 0x70(0x18)
};

// ScriptStruct CrowFPS.CrowWeaponAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FCrowWeaponAnimInstanceProxy : FAnimInstanceProxy {
	char pad_760[0x10]; // 0x760(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponAnimData
// Size: 0x0c (Inherited: 0x00)
struct FCrowWeaponAnimData {
	struct FName SrpingArmID; // 0x00(0x08)
	char SpringArmId; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct CrowFPS.CrowOptimizationPartsInfo
// Size: 0x20 (Inherited: 0x00)
struct FCrowOptimizationPartsInfo {
	float OptimizationScreenSize; // 0x00(0x04)
	int32_t MinLOD; // 0x04(0x04)
	int32_t OptimizaeMeshMinLOD; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCrowWeaponPartsBase* Parts; // 0x10(0x08)
	struct USceneComponent* PartsParent; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CharacterWeaponTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterWeaponTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponExpTableRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowWeaponExpTableRow : FTableRowBase {
	int32_t ExpIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int64_t> WeaponExps; // 0x10(0x50)
};

// ScriptStruct CrowFPS.CrowWeaponPartsTableRow
// Size: 0x2f8 (Inherited: 0x168)
struct FCrowWeaponPartsTableRow : FCrowItemTableBaseRow {
	struct TMap<struct FString, struct FCrowPartModelInfo> Models; // 0x168(0x50)
	struct TArray<struct FString> WeaponArray; // 0x1b8(0x10)
	struct FCrowWeaponPartsOptions Options; // 0x1c8(0x44)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct UPaperSprite* CombindIcon; // 0x210(0x08)
	struct TArray<struct UPaperSprite*> CombindIcons; // 0x218(0x10)
	struct TArray<struct FName> StickerSocketNames; // 0x228(0x10)
	int32_t StickerSocketMaxCount; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct FVector> StickerScale; // 0x240(0x10)
	struct TArray<float> StickerAngle; // 0x250(0x10)
	struct TArray<int32_t> DefaultSticker; // 0x260(0x10)
	struct FCrowPartModelInfo DummyInfo; // 0x270(0x88)
};

// ScriptStruct CrowFPS.CrowWeaponPartsPrimarySightTableRow
// Size: 0xb30 (Inherited: 0x2f8)
struct FCrowWeaponPartsPrimarySightTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
	float WeaponModelAimFOV; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct UCrowWeaponZoomWidget* ZoomWidgetClass; // 0x310(0x08)
	enum class ECrowScopeSightRate ScopeSightRate; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float AimFOV; // 0x31c(0x04)
	float AimTime; // 0x320(0x04)
	float AimZoomTime; // 0x324(0x04)
	struct UCurveFloat* AimCurveX; // 0x328(0x08)
	struct UCurveFloat* AimCurveY; // 0x330(0x08)
	struct UAkAudioEvent* AimSound_W; // 0x338(0x08)
	float AimModelChangeDelay; // 0x340(0x04)
	bool HideBarrelWhenAim; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct FCrowScopeEffectTableData ScopeEffect; // 0x348(0x30)
	bool UsePostProcess; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FPostProcessSettings PostProcessSettings; // 0x380(0x550)
	bool UseDOF; // 0x8d0(0x01)
	char pad_8D1[0x7]; // 0x8d1(0x07)
	struct TMap<struct FString, struct FCrowPartScopeModelInfo> ScopeModels; // 0x8d8(0x50)
	struct TMap<struct FString, struct FCrowPartAimScopeModelInfo> ScopeAimModels; // 0x928(0x50)
	bool UseZeroing; // 0x978(0x01)
	char pad_979[0x7]; // 0x979(0x07)
	struct FCrowPartModelInfo TempResultInfo; // 0x980(0x88)
	struct FCrowPartScopeModelInfo DummyPartsInfo; // 0xa08(0xe0)
	struct FCrowPartAimScopeModelInfo DummyAimPartsInfo; // 0xae8(0x40)
	char pad_B28[0x8]; // 0xb28(0x08)
};

// ScriptStruct CrowFPS.CrowPartAimScopeModelInfo
// Size: 0x40 (Inherited: 0x00)
struct FCrowPartAimScopeModelInfo {
	struct FSoftObjectPath AimChangeMesh; // 0x00(0x18)
	struct TArray<struct UMaterialInterface*> MaterialsAimMesh; // 0x18(0x10)
	struct FSoftObjectPath AimLensMesh; // 0x28(0x18)
};

// ScriptStruct CrowFPS.CrowPartScopeModelInfo
// Size: 0xe0 (Inherited: 0x00)
struct FCrowPartScopeModelInfo {
	struct FSoftObjectPath Mesh1P; // 0x00(0x18)
	struct ACrowWeaponPartsActor* MeshClass1P; // 0x18(0x08)
	struct UAnimInstance* AnimClass1P; // 0x20(0x08)
	struct TArray<struct UMaterialInterface*> Materials1P; // 0x28(0x10)
	struct FSoftObjectPath Mesh1P_Front; // 0x38(0x18)
	struct ACrowWeaponPartsActor* MeshClass1P_Front; // 0x50(0x08)
	struct UAnimInstance* AnimClass1P_Front; // 0x58(0x08)
	struct TArray<struct UMaterialInterface*> Materials1P_Front; // 0x60(0x10)
	struct FSoftObjectPath Mesh3P; // 0x70(0x18)
	struct ACrowWeaponPartsActor* MeshClass3P; // 0x88(0x08)
	struct UAnimInstance* AnimClass3P; // 0x90(0x08)
	struct TArray<struct UMaterialInterface*> Materials3P; // 0x98(0x10)
	struct FSoftObjectPath Mesh3P_Front; // 0xa8(0x18)
	struct ACrowWeaponPartsActor* MeshClass3P_Front; // 0xc0(0x08)
	struct UAnimInstance* AnimClass3P_Front; // 0xc8(0x08)
	struct TArray<struct UMaterialInterface*> Materials3P_Front; // 0xd0(0x10)
};

// ScriptStruct CrowFPS.CrowScopeEffectTableData
// Size: 0x30 (Inherited: 0x00)
struct FCrowScopeEffectTableData {
	float MaxDistance; // 0x00(0x04)
	float MaxAngle; // 0x04(0x04)
	float MaxCharacterScale; // 0x08(0x04)
	float SizeMin; // 0x0c(0x04)
	float SizeMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftObjectPath Effect; // 0x18(0x18)
};

// ScriptStruct CrowFPS.CrowWeaponPartsSecondarySightTableRow
// Size: 0xb30 (Inherited: 0xb30)
struct FCrowWeaponPartsSecondarySightTableRow : FCrowWeaponPartsPrimarySightTableRow {
};

// ScriptStruct CrowFPS.CrowWeaponPartsBarrelTableRow
// Size: 0x308 (Inherited: 0x2f8)
struct FCrowWeaponPartsBarrelTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
};

// ScriptStruct CrowFPS.CrowPartsMeshInfo
// Size: 0x60 (Inherited: 0x00)
struct FCrowPartsMeshInfo {
	struct UMeshComponent* MeshComponent; // 0x00(0x08)
	struct USceneComponent* AttachParentComponent; // 0x08(0x08)
	struct FName AttachSocketName; // 0x10(0x08)
	char pad_18[0x48]; // 0x18(0x48)
};

// ScriptStruct CrowFPS.CrowWeaponPartsMagazineTableRow
// Size: 0x450 (Inherited: 0x2f8)
struct FCrowWeaponPartsMagazineTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
	uint32_t AmmoInClip; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FCLSMagazineAnimation MagazineAnim; // 0x310(0xa0)
	struct FCLSMagazineAnimation ProneMagazineAnim; // 0x3b0(0xa0)
};

// ScriptStruct CrowFPS.CrowWeaponPartsMuzzleTableRow
// Size: 0x370 (Inherited: 0x2f8)
struct FCrowWeaponPartsMuzzleTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
	struct UAkAudioEvent* ContinuousFireSound_1P_W; // 0x308(0x08)
	struct UAkAudioEvent* FireSound_W; // 0x310(0x08)
	struct UAkAudioEvent* FireEndSound_1P_W; // 0x318(0x08)
	struct UAkAudioEvent* ContinuousFireSound_3P_W; // 0x320(0x08)
	struct UAkAudioEvent* FireSound_3P_W; // 0x328(0x08)
	struct UAkAudioEvent* FireEndSound_3P_W; // 0x330(0x08)
	bool HideMuzzleFX; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UParticleSystem* MuzzleFX_1P; // 0x340(0x08)
	struct UNiagaraSystem* MuzzleFX_1P_N; // 0x348(0x08)
	bool Attach_MuzzleFX_1P; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UParticleSystem* MuzzleFX_3P; // 0x358(0x08)
	struct UNiagaraSystem* MuzzleFX_3P_N; // 0x360(0x08)
	bool Attach_MuzzleFX_3P; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
};

// ScriptStruct CrowFPS.CrowWeaponPartsPistolGripTableRow
// Size: 0x308 (Inherited: 0x2f8)
struct FCrowWeaponPartsPistolGripTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartsSideBarrelTableRow
// Size: 0x308 (Inherited: 0x2f8)
struct FCrowWeaponPartsSideBarrelTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartsStockTableRow
// Size: 0x308 (Inherited: 0x2f8)
struct FCrowWeaponPartsStockTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartsUnderBarrelTableRow
// Size: 0x308 (Inherited: 0x2f8)
struct FCrowWeaponPartsUnderBarrelTableRow : FCrowWeaponPartsTableRow {
	struct FString HelpText; // 0x2f8(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartsUnlockTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowWeaponPartsUnlockTableRow : FTableRowBase {
	int32_t WeaponIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCrowUnLockWeaponPartListTable> UnlockWeaponParts; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowUnLockWeaponPartListTable
// Size: 0x18 (Inherited: 0x00)
struct FCrowUnLockWeaponPartListTable {
	enum class ECrowItemType WeaponPartsType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCrowUnLockWeaponPartTable> UnlockWeaponPartsIndexes; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowUnLockWeaponPartTable
// Size: 0x08 (Inherited: 0x00)
struct FCrowUnLockWeaponPartTable {
	int32_t UnlockWeaponPartsIndex; // 0x00(0x04)
	int32_t UnlockLevel; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponSkinTableData
// Size: 0x40 (Inherited: 0x00)
struct FCrowWeaponSkinTableData {
	uint32_t SkinIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText SkinName; // 0x08(0x18)
	struct UPaperSprite* SkinIcon; // 0x20(0x08)
	enum class ECrowItemGrade ItemGrade; // 0x28(0x01)
	bool NotUse; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct FCrowWeaponSkinInfoTableData> WeaponSkinInfos; // 0x30(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponSkinInfoTableData
// Size: 0xc8 (Inherited: 0x00)
struct FCrowWeaponSkinInfoTableData {
	int32_t WeaponIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString HelpText; // 0x08(0x10)
	struct TMap<struct FName, struct UMaterialInterface*> MainBodySkins_1P; // 0x18(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> MainBodySkins_3P; // 0x68(0x50)
	struct TArray<struct FCrowWeaponPartSkinListTable> WeaponPartsSkinList; // 0xb8(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartSkinListTable
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponPartSkinListTable {
	enum class ECrowItemType WeaponPartsType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCrowWeaponPartSkinTable> WeaponPartsSkins; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponPartSkinTable
// Size: 0x158 (Inherited: 0x00)
struct FCrowWeaponPartSkinTable {
	int32_t WeaponPartsIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString HelpText; // 0x08(0x10)
	struct TMap<struct FName, struct UMaterialInterface*> WeaponPartsSkin_1P; // 0x18(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> WeaponPartsSkinFront_1P; // 0x68(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> WeaponPartsSkin_3P; // 0xb8(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> WeaponPartsSkinFront_3P; // 0x108(0x50)
};

// ScriptStruct CrowFPS.CrowWeaponSkinTableRow
// Size: 0x258 (Inherited: 0x168)
struct FCrowWeaponSkinTableRow : FCrowItemTableBaseRow {
	uint32_t SkinIndex; // 0x168(0x04)
	int32_t WeaponIndex; // 0x16c(0x04)
	struct FText SkinName; // 0x170(0x18)
	struct UPaperSprite* SkinIcon; // 0x188(0x08)
	bool NotUse; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FCrowWeaponSkinInfoTable WeaponSkinInfo; // 0x198(0xc0)
};

// ScriptStruct CrowFPS.CrowWeaponSkinInfoTable
// Size: 0xc0 (Inherited: 0x00)
struct FCrowWeaponSkinInfoTable {
	struct FString HelpText; // 0x00(0x10)
	struct TMap<struct FName, struct UMaterialInterface*> MainBodySkins_1P; // 0x10(0x50)
	struct TMap<struct FName, struct UMaterialInterface*> MainBodySkins_3P; // 0x60(0x50)
	struct TArray<struct FCrowWeaponPartSkinListTable> WeaponPartsSkinList; // 0xb0(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponVehicleTableRow
// Size: 0x12d0 (Inherited: 0x11e0)
struct FCrowWeaponVehicleTableRow : FCrowWeaponTableRow {
	struct FString VehicleHelpText; // 0x11d8(0x10)
	struct FName MuzzleSocketName; // 0x11e8(0x08)
	struct FName BackblastSocketName; // 0x11f0(0x08)
	struct FName MuzzleSocketNameDualWiedling; // 0x11f8(0x08)
	struct FName BackblastSocketNameDualWiedling; // 0x1200(0x08)
	bool SimultaneousFire; // 0x1208(0x01)
	struct FName DaulWiedlingViewPointSocketName; // 0x120c(0x08)
	float DaulWiedlingViewPointMinDistance; // 0x1214(0x04)
	float ReboundForce; // 0x1218(0x04)
	bool UseAimingBarrel; // 0x121c(0x01)
	float FPBarrelSpeed; // 0x1220(0x04)
	float FPBarrelLerpSecond; // 0x1224(0x04)
	float TPBarrelSpeed; // 0x1228(0x04)
	float TPBarrelLerpSpeed; // 0x122c(0x04)
	struct UCurveFloat* BarrelPitchMinCurve; // 0x1230(0x08)
	struct USoundBase* BarrelMoveSound; // 0x1238(0x08)
	struct UAkAudioEvent* BarrelMoveSound_W; // 0x1240(0x08)
	struct UCurveFloat* BarrelMoveLerpSoundCurve; // 0x1248(0x08)
	struct UCurveFloat* BarrelMoveSoundCurve; // 0x1250(0x08)
	struct FName RootBoneName; // 0x1258(0x08)
	struct FName AttachedBoneName; // 0x1260(0x08)
	float PreHeating; // 0x1268(0x04)
	float OverHeating; // 0x126c(0x04)
	float Cooling; // 0x1270(0x04)
	float ApproachOverHeating; // 0x1274(0x04)
	struct UAkAudioEvent* PreHeatingSoundStart_W; // 0x1278(0x08)
	struct UAkAudioEvent* PreHeatingSoundEnd_W; // 0x1280(0x08)
	struct FCrowAnimPoseSet CharacterFire; // 0x1288(0x18)
	struct UCurveVector* AimSocketOffsetCurve; // 0x12a0(0x08)
	struct UAkAudioEvent* OverHeatingSoundStart_W; // 0x12a8(0x08)
	struct UAkAudioEvent* OverHeatingSoundEnd_W; // 0x12b0(0x08)
	struct UAkAudioEvent* CoolingSoundStart_W; // 0x12b8(0x08)
	struct UAkAudioEvent* CoolingSoundEnd_W; // 0x12c0(0x08)
	char pad_12CA[0x6]; // 0x12ca(0x06)
};

// ScriptStruct CrowFPS.CrowWeaponMuzzleFX
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponMuzzleFX {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UNiagaraSystem* NiagaraSystem; // 0x08(0x08)
	bool AttachFX; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct CrowFPS.CrowWeaponFireSound
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponFireSound {
	struct UAkAudioEvent* FireSound; // 0x00(0x08)
	struct UAkAudioEvent* ContinuousFireSound; // 0x08(0x08)
	struct UAkAudioEvent* FireEndSound; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowWeaponAniStateInfo
// Size: 0x05 (Inherited: 0x00)
struct FCrowWeaponAniStateInfo {
	enum class ECrowWeaponState WeaponState; // 0x00(0x01)
	enum class ECrowWeaponFireState FireState; // 0x01(0x01)
	bool bIsFiring; // 0x02(0x01)
	bool bIsReloadShort; // 0x03(0x01)
	bool bIsLoopFireAni; // 0x04(0x01)
};

// ScriptStruct CrowFPS.CrowTakePointDamage
// Size: 0xb8 (Inherited: 0x00)
struct FCrowTakePointDamage {
	enum class ECrowItemType ItemType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t WeaponIndex; // 0x02(0x02)
	uint16_t AmmoIndex; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
	struct FPointDamageEvent DamageEvent; // 0x08(0xb0)
};

// ScriptStruct CrowFPS.CrowWeaponHitInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowWeaponHitInfo {
	struct TArray<struct FHitResult> HitResultArray; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponFire
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponFire {
	uint16_t WeaponIndex; // 0x00(0x02)
	bool IsHitScan; // 0x02(0x01)
	bool IsCooking; // 0x03(0x01)
	bool IsUseMuzzleLocation3P; // 0x04(0x01)
	char RemainCookingTime; // 0x05(0x01)
	enum class ECrowAmmoFireType AmmoFireType; // 0x06(0x01)
	enum class ECrowWeaponFireMode FireMode; // 0x07(0x01)
	struct TArray<struct FCrowWeaponFireLocation> LocationArray; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowWeaponFireLocation
// Size: 0x18 (Inherited: 0x00)
struct FCrowWeaponFireLocation {
	struct FVector FireLocation; // 0x00(0x0c)
	struct FVector EndLocation; // 0x0c(0x0c)
};

// ScriptStruct CrowFPS.CrowItemDropDataServer
// Size: 0x18 (Inherited: 0x00)
struct FCrowItemDropDataServer {
	bool IsEquipment; // 0x00(0x01)
	char SlotIndex; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FRotator Rotation; // 0x04(0x0c)
	int32_t ItemCount; // 0x10(0x04)
	float Distance; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponPartsDropDataServer
// Size: 0x14 (Inherited: 0x00)
struct FCrowWeaponPartsDropDataServer {
	struct FRotator Rotation; // 0x00(0x0c)
	uint16_t WeaponKey; // 0x0c(0x02)
	enum class ECrowWeaponPartsType PartsType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	uint32_t PartsIndex; // 0x10(0x04)
};

// ScriptStruct CrowFPS.CrowWeaponPartsTypeDataServer
// Size: 0x04 (Inherited: 0x00)
struct FCrowWeaponPartsTypeDataServer {
	uint16_t WeaponKey; // 0x00(0x02)
	enum class ECrowWeaponPartsType PartsType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct CrowFPS.CrowWeaponPartsDataServer
// Size: 0x06 (Inherited: 0x00)
struct FCrowWeaponPartsDataServer {
	uint16_t WeaponKey; // 0x00(0x02)
	enum class ECrowWeaponPartsType PartsType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	uint16_t PartsIndex; // 0x04(0x02)
};

// ScriptStruct CrowFPS.CrowWheeledFxSetup
// Size: 0x270 (Inherited: 0x00)
struct FCrowWheeledFxSetup {
	struct FCrowVehicleFxTemplate StartEngineFxTemplate; // 0x00(0x68)
	struct FCrowVehicleFxTemplate ReadyFxTemplate; // 0x68(0x68)
	struct FCrowVehicleFxTemplate ShutDownFxTemplate; // 0xd0(0x68)
	struct FCrowVehicleFxTemplate HornFxTemplate; // 0x138(0x68)
	struct FCrowVehicleFxTemplate HornOffFxTemplate; // 0x1a0(0x68)
	struct FCrowVehicleFxTemplate ImmergeFxTemplate; // 0x208(0x68)
};

// ScriptStruct CrowFPS.CrowWorldCollectUtil
// Size: 0x01 (Inherited: 0x00)
struct FCrowWorldCollectUtil {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowFPS.CrowWorldAmmoTypeDamageSetting
// Size: 0x04 (Inherited: 0x00)
struct FCrowWorldAmmoTypeDamageSetting {
	float DamageMultiply; // 0x00(0x04)
};

// ScriptStruct CrowFPS.CrowBuildingEditorLODInfo
// Size: 0x2c (Inherited: 0x00)
struct FCrowBuildingEditorLODInfo {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct CrowFPS.CrowWorldEventWidgetInfo
// Size: 0x48 (Inherited: 0x00)
struct FCrowWorldEventWidgetInfo {
	enum class ECrowWorldEventWidgetType Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Titile; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct UObject* Image; // 0x38(0x08)
	struct ACrowWorldEventBase* EventBase; // 0x40(0x08)
};

// ScriptStruct CrowFPS.WorldEventInfo
// Size: 0x08 (Inherited: 0x00)
struct FWorldEventInfo {
	float RemainTime; // 0x00(0x04)
	enum class ECrowWorldEventState EventState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CrowFPS.CrowMeteorInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowMeteorInfo {
	struct ACrowMeteorEventActor* MeteorActor; // 0x00(0x08)
	float MeteorActiveDelay; // 0x08(0x04)
	float MeteorSpawnDelay; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowSafeBoxAreaInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowSafeBoxAreaInfo {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowWorldEventModeInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldEventModeInfo {
	int32_t ActivationEventLimit; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCrowWorldEventGroupInfo> Groups; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowWorldEventGroupInfo
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldEventGroupInfo {
	float ActivationTimeMin; // 0x00(0x04)
	float ActivationTimeMax; // 0x04(0x04)
	float ReactivationTimeMin; // 0x08(0x04)
	float ReactivationTimeMax; // 0x0c(0x04)
	enum class ECrowWorldEventActivationType ActivationType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct ACrowWorldEventBase*> EventList; // 0x18(0x10)
};

// ScriptStruct CrowFPS.CrowWorldGridZ
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldGridZ {
	struct FVector WorldOrigin; // 0x00(0x0c)
	uint16_t HASH_CELL_BITS; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	int32_t CellSize; // 0x10(0x04)
	int32_t CellHalfSize; // 0x14(0x04)
};

// ScriptStruct CrowFPS.CrowWorldHLODUtil
// Size: 0x01 (Inherited: 0x00)
struct FCrowWorldHLODUtil {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CrowFPS.CrowWorldPropSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldPropSetting {
	struct UStaticMesh* TargetMesh; // 0x00(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x08(0x08)
	float ImpactMin; // 0x10(0x04)
	float ImpactMax; // 0x14(0x04)
	bool IsPointDamage; // 0x18(0x01)
	bool IsRadialDamage; // 0x19(0x01)
	bool IsVehicleCollision; // 0x1a(0x01)
	bool bSimulatePhysics; // 0x1b(0x01)
	bool bWallTypeBlock; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct CrowFPS.CrowDOFPropertyScope
// Size: 0x10 (Inherited: 0x00)
struct FCrowDOFPropertyScope {
	struct TArray<struct FCrowDOFProperty> Properties; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowWorldPropertyVehicle
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldPropertyVehicle {
	float WorldOceanZ; // 0x00(0x04)
	float WorldAltitudeLimitZ; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowWorldPropLocatorItem
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldPropLocatorItem {
	struct ACrowWorldPropActor* PropActor; // 0x00(0x08)
	float RadiusFactor; // 0x08(0x04)
	float DirectionAngle; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowWorldPropLocatorSetting
// Size: 0x1c (Inherited: 0x00)
struct FCrowWorldPropLocatorSetting {
	bool UseRandomYaw; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomYawRange; // 0x04(0x04)
	bool UseRandomPitch; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float RandomPitchRange; // 0x0c(0x04)
	bool UseRandomRoll; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RandomRollRange; // 0x14(0x04)
	int32_t RotationRandomSeed; // 0x18(0x04)
};

// ScriptStruct CrowFPS.CrowWorldSplinePointSettingEdit
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldSplinePointSettingEdit {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCrowWorldSplinePointSetting Setting; // 0x08(0x20)
};

// ScriptStruct CrowFPS.CrowWorldSplinePointSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSplinePointSetting {
	bool bDefault; // 0x00(0x01)
	bool bStartOrEndMesh; // 0x01(0x01)
	bool bOverride; // 0x02(0x01)
	enum class ECrowWorldSplineMeshAxis Axis; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	bool bAlwaysFit; // 0x10(0x01)
	bool bRestrictMeshNum; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t MaxMeshNum; // 0x14(0x04)
	bool bCastShadow; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowFPS.CrowWorldSplineDeformTableRow
// Size: 0x20 (Inherited: 0x08)
struct FCrowWorldSplineDeformTableRow : FTableRowBase {
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	float DeformWidth; // 0x10(0x04)
	float SideFalloffWidth; // 0x14(0x04)
	float OnesideFalloffWidth; // 0x18(0x04)
	float HeightOffset; // 0x1c(0x04)
};

// ScriptStruct CrowFPS.CrowWorldSplineSegmentPropInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldSplineSegmentPropInfo {
	struct TArray<struct TWeakObjectPtr<struct ACrowWorldPropActor>> PropActors; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSplineSegmentMeshInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldSplineSegmentMeshInfo {
	struct TArray<struct UCrowWorldSplineMeshComponent*> MeshComponents; // 0x00(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSplineLinkedPoint
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldSplineLinkedPoint {
	struct TMap<struct FName, struct FCrowWorldSplineLinkedMeta> MetaDatas; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowWorldSplineLinkedMeta
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldSplineLinkedMeta {
	struct FCrowWorldSplineUID OwnerSplineUID; // 0x00(0x10)
	int32_t OwnerPointIndex; // 0x10(0x04)
	struct FName OwnerSocketName; // 0x14(0x08)
	struct FCrowWorldSplineUID LinkedSplineUID; // 0x1c(0x10)
	int32_t LinkedPointIndex; // 0x2c(0x04)
	struct FName LinkedSocketName; // 0x30(0x08)
	struct FDateTime LastUpdated; // 0x38(0x08)
};

// ScriptStruct CrowFPS.CrowWorldSplineUID
// Size: 0x10 (Inherited: 0x00)
struct FCrowWorldSplineUID {
	int32_t SplineUID; // 0x00(0x04)
	struct FVector SplineLocation; // 0x04(0x0c)
};

// ScriptStruct CrowFPS.CrowMeshPaintParameters
// Size: 0x20 (Inherited: 0x00)
struct FCrowMeshPaintParameters {
	float BrushRadius; // 0x00(0x04)
	float BrushFalloffAmount; // 0x04(0x04)
	float BrushStrength; // 0x08(0x04)
	struct FLinearColor BrushColor; // 0x0c(0x10)
	bool bWriteRed; // 0x1c(0x01)
	bool bWriteGreen; // 0x1d(0x01)
	bool bWriteBlue; // 0x1e(0x01)
	bool bWriteAlpha; // 0x1f(0x01)
};

// ScriptStruct CrowFPS.CrowWorldSplinePointifyParam
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldSplinePointifyParam {
	struct UCrowWorldSplineComponent* SplineComponent; // 0x00(0x08)
	int32_t StartIndex; // 0x08(0x04)
	int32_t EndIndex; // 0x0c(0x04)
	float DeformWidth; // 0x10(0x04)
	float SideFalloffWidth; // 0x14(0x04)
	float OnesideFalloffWidth; // 0x18(0x04)
	float HeightOffset; // 0x1c(0x04)
	float SubDivisionLength; // 0x20(0x04)
	bool UseLeftSideDeform; // 0x24(0x01)
	bool UseRightSideDeform; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct CrowFPS.CrowWorldSplinePoleConnectionInfo
// Size: 0x50 (Inherited: 0x00)
struct FCrowWorldSplinePoleConnectionInfo {
	struct TMap<struct FName, struct FName> CorrespondingSocket; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowWorldSplinePropSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSplinePropSetting {
	bool bUserStartProp; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ACrowWorldPropActor* StartProp; // 0x08(0x08)
	bool bUseEndProp; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct ACrowWorldPropActor* EndProp; // 0x18(0x08)
};

// ScriptStruct CrowFPS.CrowWorldSplineAddMeshSetting
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldSplineAddMeshSetting {
	bool bUseStartMesh; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UStaticMesh* StartMesh; // 0x08(0x08)
	enum class ECrowWorldSplineMeshAxis StartMeshAxis; // 0x10(0x01)
	bool bUseEndMesh; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UStaticMesh* EndMesh; // 0x18(0x08)
	enum class ECrowWorldSplineMeshAxis EndMeshAxis; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct CrowFPS.CrowWoldSplineDeformData
// Size: 0x50 (Inherited: 0x00)
struct FCrowWoldSplineDeformData {
	struct TMap<struct UStaticMesh*, struct FCrowWoldSplineDeformSetting> Setting; // 0x00(0x50)
};

// ScriptStruct CrowFPS.CrowWoldSplineDeformSetting
// Size: 0x08 (Inherited: 0x00)
struct FCrowWoldSplineDeformSetting {
	float DeformWidth; // 0x00(0x04)
	float SideFalloffWidth; // 0x04(0x04)
};

// ScriptStruct CrowFPS.CrowLandscapeSplineInterpPoint
// Size: 0x88 (Inherited: 0x00)
struct FCrowLandscapeSplineInterpPoint {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector FalloffLeft; // 0x24(0x0c)
	struct FVector FalloffRight; // 0x30(0x0c)
	struct FVector EdgeLeft; // 0x3c(0x0c)
	struct FVector EdgeRight; // 0x48(0x0c)
	float StartEndFalloff; // 0x54(0x04)
	struct FCrowWorldSplinePointData SplinePointData; // 0x58(0x30)
};

// ScriptStruct CrowFPS.CrowWorldSplinePointData
// Size: 0x30 (Inherited: 0x00)
struct FCrowWorldSplinePointData {
	struct FVector position; // 0x00(0x0c)
	struct FVector Tangent; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Binormal; // 0x24(0x0c)
};

// ScriptStruct CrowFPS.CrowLandscapeBounds
// Size: 0x10 (Inherited: 0x00)
struct FCrowLandscapeBounds {
	int32_t MinX; // 0x00(0x04)
	int32_t MinY; // 0x04(0x04)
	int32_t MaxX; // 0x08(0x04)
	int32_t MaxY; // 0x0c(0x04)
};

// ScriptStruct CrowFPS.CrowWorldSplineTraceData
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldSplineTraceData {
	struct ACrowWorldSpline* SplineActor; // 0x00(0x08)
	struct FVector position; // 0x08(0x0c)
	float Distance; // 0x14(0x04)
	uint16_t LandscapeScaledHeight; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct CrowFPS.CrowWorldSyncGrid
// Size: 0x0c (Inherited: 0x00)
struct FCrowWorldSyncGrid {
	float GridSize; // 0x00(0x04)
	struct FVector2D WorldOrigin2D; // 0x04(0x08)
};

// ScriptStruct CrowFPS.CrowWorldSyncCameraInfo
// Size: 0x70 (Inherited: 0x00)
struct FCrowWorldSyncCameraInfo {
	struct FVector CameraRebasedLocation; // 0x00(0x0c)
	struct FVector CameraLocation; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FMatrix CameraMatrix; // 0x20(0x40)
	bool IsAiming; // 0x60(0x01)
	bool IsLookingTablet; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct CrowFPS.CrowWorldGenerateHLODSetting
// Size: 0x20 (Inherited: 0x00)
struct FCrowWorldGenerateHLODSetting {
	bool PersistentLevelHLOD; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LODBuildBatchCount; // 0x04(0x04)
	struct TArray<float> MaxSizeForEachLOD; // 0x08(0x10)
	bool StopAtBuildFail; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrowFPS.CrowWorldGenerateSubLevelSetting
// Size: 0x68 (Inherited: 0x00)
struct FCrowWorldGenerateSubLevelSetting {
	struct FString MapAssetName; // 0x00(0x10)
	struct FString GeneratedSubLevelFolder; // 0x10(0x10)
	struct TArray<struct FString> EditorSubLevelKeywords; // 0x20(0x10)
	struct TArray<struct FString> EditorSubLevelExceptions; // 0x30(0x10)
	struct TArray<struct FString> AtmosphereKeywords; // 0x40(0x10)
	struct UHierarchicalLODSetup* HLODSetupActorLevel; // 0x50(0x08)
	struct UHierarchicalLODSetup* HLODSetupFarLevel; // 0x58(0x08)
	struct UHierarchicalLODSetup* HLODSetupFlgLevel; // 0x60(0x08)
};

// ScriptStruct CrowFPS.CrowWorldSyncDataSetting
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldSyncDataSetting {
	struct UDataTable* SyncDataTable; // 0x00(0x08)
	float SyncAreaSize; // 0x08(0x04)
	float SyncNodeSize; // 0x0c(0x04)
	struct FVector2D WorldOrigin2D; // 0x10(0x08)
};

// ScriptStruct CrowFPS.CrowWorldSyncHubWorldRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowWorldSyncHubWorldRow : FTableRowBase {
	uint32_t ActorInstanceCount; // 0x08(0x04)
	uint32_t WorldActorClassNum; // 0x0c(0x04)
	uint32_t StaticMeshTypeNum; // 0x10(0x04)
	uint32_t MaterialTypeNum; // 0x14(0x04)
	uint32_t TextureTypeNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<SoftClassProperty> WorldActors; // 0x20(0x10)
	struct TArray<SoftClassProperty> StaticMeshes; // 0x30(0x10)
	struct TArray<SoftClassProperty> Materials; // 0x40(0x10)
	struct TArray<SoftClassProperty> Textures; // 0x50(0x10)
};

// ScriptStruct CrowFPS.CrowWorldUsedObjectPathInfo
// Size: 0x190 (Inherited: 0x00)
struct FCrowWorldUsedObjectPathInfo {
	struct TMap<struct FString, uint32_t> ClassPaths; // 0x00(0x50)
	struct TSet<struct FString> StaticMeshPaths; // 0x50(0x50)
	struct TSet<struct FString> MaterialPaths; // 0xa0(0x50)
	struct TSet<struct FString> TexturePaths; // 0xf0(0x50)
	struct TMap<struct FString, struct FCrowWorldStaticMeshVariationInfo> SMVariationInfo; // 0x140(0x50)
};

// ScriptStruct CrowFPS.CrowWorldStaticMeshVariationInfo
// Size: 0x60 (Inherited: 0x08)
struct FCrowWorldStaticMeshVariationInfo : FTableRowBase {
	struct TMap<int32_t, struct FCrowWorldStaticMeshMaterialSet> MapMaterialSet; // 0x08(0x50)
	uint32_t TextureNum; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct CrowFPS.CrowWorldStaticMeshMaterialSet
// Size: 0x58 (Inherited: 0x08)
struct FCrowWorldStaticMeshMaterialSet : FTableRowBase {
	uint32_t HashKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	SoftClassProperty ParentWorldActorClass; // 0x10(0x28)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> MaterialPaths; // 0x38(0x10)
	struct TArray<uint32_t> TextureNums; // 0x48(0x10)
};

// ScriptStruct CrowFPS.CrowWorldStaticMeshVariationRow
// Size: 0x50 (Inherited: 0x08)
struct FCrowWorldStaticMeshVariationRow : FTableRowBase {
	int32_t ActorInstanceCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	SoftClassProperty StaticMesh; // 0x10(0x28)
	int32_t MaterialSetNum; // 0x38(0x04)
	int32_t TextureNum; // 0x3c(0x04)
	struct TArray<struct FCrowWorldStaticMeshMaterialSet> MaterialSetInfo; // 0x40(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncHubNodeInfoRow
// Size: 0x60 (Inherited: 0x08)
struct FCrowWorldSyncHubNodeInfoRow : FTableRowBase {
	int32_t SyncAreaIndex; // 0x08(0x04)
	int32_t SyncNodeIndex; // 0x0c(0x04)
	int32_t ActorNum; // 0x10(0x04)
	uint32_t StaticMeshCount; // 0x14(0x04)
	float TextureRuntimeMemory; // 0x18(0x04)
	uint32_t LOD0_Tris; // 0x1c(0x04)
	uint32_t LOD1_Tris; // 0x20(0x04)
	uint32_t LOD2_Tris; // 0x24(0x04)
	uint32_t LOD3_Tris; // 0x28(0x04)
	uint32_t LOD0_Drawcalls; // 0x2c(0x04)
	uint32_t LOD1_Drawcalls; // 0x30(0x04)
	uint32_t LOD2_Drawcalls; // 0x34(0x04)
	uint32_t LOD3_Drawcalls; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<uint32_t> LODTris; // 0x40(0x10)
	struct TArray<uint32_t> LODMaterialNums; // 0x50(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncHubActorInfoRow
// Size: 0x88 (Inherited: 0x08)
struct FCrowWorldSyncHubActorInfoRow : FTableRowBase {
	SoftClassProperty WorldActorClass; // 0x08(0x28)
	struct TArray<struct TSoftObjectPtr<struct AActor>> RefWorldActors; // 0x30(0x10)
	struct TArray<struct FCrowWorldSyncHubStaticMeshInfoRow> StaticMeshInfos; // 0x40(0x10)
	uint32_t UsageCount; // 0x50(0x04)
	uint32_t StaticMeshCount; // 0x54(0x04)
	uint32_t Tris; // 0x58(0x04)
	int16_t TextureNum; // 0x5c(0x02)
	char pad_5E[0x2]; // 0x5e(0x02)
	float TextureRuntimeMemory; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<uint32_t> LODTris; // 0x68(0x10)
	struct TArray<uint32_t> LODMaterialNums; // 0x78(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncHubStaticMeshInfoRow
// Size: 0x68 (Inherited: 0x08)
struct FCrowWorldSyncHubStaticMeshInfoRow : FTableRowBase {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x08(0x28)
	uint32_t Tris; // 0x30(0x04)
	char LODNum; // 0x34(0x01)
	char MaterialNum; // 0x35(0x01)
	char OverrideMaterialNum; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	int16_t TextureNum; // 0x38(0x02)
	char pad_3A[0x2]; // 0x3a(0x02)
	float TextureRuntimeMemory; // 0x3c(0x04)
	struct TArray<uint32_t> LODTris; // 0x40(0x10)
	struct TArray<uint32_t> LODMaterialNums; // 0x50(0x10)
	uint32_t LastLODMaterialNum; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct CrowFPS.CrowBuildingPartsPropertyCache
// Size: 0xf0 (Inherited: 0x00)
struct FCrowBuildingPartsPropertyCache {
	struct TMap<struct UStaticMesh*, int32_t> StaticMeshCountMap; // 0x00(0x50)
	struct TMap<struct UStaticMesh*, char> StaticMeshCaches; // 0x50(0x50)
	struct TMap<struct UObject*, char> PartsActorCaches; // 0xa0(0x50)
};

// ScriptStruct CrowFPS.CrowBuildingPropertyPerClass
// Size: 0x20 (Inherited: 0x00)
struct FCrowBuildingPropertyPerClass {
	struct TArray<struct FBitArrayUint32> LODShowFlags; // 0x00(0x10)
	struct TArray<char> PartsProperties; // 0x10(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncNodeData
// Size: 0x30 (Inherited: 0x00)
struct FCrowWorldSyncNodeData {
	int32_t SyncNodeIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCrowWorldSyncBuildingData> BuildingDatas; // 0x08(0x10)
	struct FCrowWorldSyncDestructible WorldPropsDestroyed; // 0x18(0x18)
};

// ScriptStruct CrowFPS.CrowWorldSyncDestructible
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldSyncDestructible {
	uint16_t Count; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct FBitArrayUint32 DestroyedFlags; // 0x08(0x10)
};

// ScriptStruct CrowFPS.CrowWorldSyncBuildingData
// Size: 0x60 (Inherited: 0x00)
struct FCrowWorldSyncBuildingData {
	int32_t BuildingIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCrowWorldSyncDestructible LayoutDestroyed; // 0x08(0x18)
	struct FCrowWorldSyncDynamicState LayoutDynamicStates; // 0x20(0x28)
	struct FCrowWorldSyncDestructible BuildingPropsDestroyed; // 0x48(0x18)
};

// ScriptStruct CrowFPS.CrowWorldSyncDynamicState
// Size: 0x28 (Inherited: 0x00)
struct FCrowWorldSyncDynamicState {
	uint16_t Count; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct FMultiBitArrayUint32 DynamicStates; // 0x08(0x20)
};

// ScriptStruct CrowFPS.CrowWorldSyncAreaData
// Size: 0x38 (Inherited: 0x00)
struct FCrowWorldSyncAreaData {
	int32_t SyncAreaIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCrowWorldSyncDestructible BuildingDestroyed; // 0x08(0x18)
	struct FCrowWorldSyncDestructible WorldPropsDestroyed; // 0x20(0x18)
};

// ScriptStruct CrowFPS.CrowWorldSyncDestroyAreaData
// Size: 0x18 (Inherited: 0x00)
struct FCrowWorldSyncDestroyAreaData {
	struct FCrowWorldSyncDestructible AreaDestroyed; // 0x00(0x18)
};

// ScriptStruct CrowFPS.CrowWorldSyncDestroyArea
// Size: 0x14 (Inherited: 0x00)
struct FCrowWorldSyncDestroyArea {
	int32_t BitFlagIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector Center; // 0x08(0x0c)
};

// ScriptStruct CrowFPS.CrowWorldSyncBuildingItemSpawnerLink
// Size: 0x40 (Inherited: 0x00)
struct FCrowWorldSyncBuildingItemSpawnerLink {
	int32_t BuildingItemSpawnerIndex; // 0x00(0x04)
	int32_t BuildingItemSpawnerClassIndex; // 0x04(0x04)
	int32_t ParentBuildingIndex; // 0x08(0x04)
	int32_t LocalIndexInBuilding; // 0x0c(0x04)
	struct FTransform InitialTransform; // 0x10(0x30)
};

// ScriptStruct CrowFPS.CrowWorldSyncActor
// Size: 0x08 (Inherited: 0x00)
struct FCrowWorldSyncActor {
	int32_t SyncActorIndex; // 0x00(0x04)
	enum class ECrowWorldSyncActorType SyncActorType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct CrowFPS.ZeroingInfo
// Size: 0x0c (Inherited: 0x00)
struct FZeroingInfo {
	int32_t Level; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
};

