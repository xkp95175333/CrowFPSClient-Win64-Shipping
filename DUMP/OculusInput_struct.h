// Enum OculusInput.ESystemGestureBehavior
enum class ESystemGestureBehavior : uint8 {
	None,
	SwapMaterial,
	ESystemGestureBehavior_MAX,
};

// Enum OculusInput.EConfidenceBehavior
enum class EConfidenceBehavior : uint8 {
	None,
	HideActor,
	EConfidenceBehavior_MAX,
};

// Enum OculusInput.EBone
enum class EBone : uint8 {
	Wrist_Root,
	Hand_Start,
	Forearm_Stub,
	Thumb_1,
	Thumb_2,
	Thumb_3,
	Thumb_4,
	Index_2,
	Index_3,
	Index_4,
	Middle_2,
	Middle_3,
	Middle_4,
	Ring_2,
	Ring_3,
	Ring_4,
	Pinky_1,
	Pinky_2,
	Pinky_3,
	Pinky_4,
	Thumb_Tip,
	Max_Skinnable,
	Index_Tip,
	Middle_Tip,
	Ring_Tip,
	Pinky_Tip,
	Hand_End,
	Bone_Max,
	Invalid,
	EBone_MAX,
};

// Enum OculusInput.ETrackingConfidence
enum class ETrackingConfidence : uint8 {
	Low,
	High,
	ETrackingConfidence_MAX,
};

// Enum OculusInput.EOculusHandType
enum class EOculusHandType : uint8 {
	None,
	HandLeft,
	HandRight,
	EOculusHandType_MAX,
};

// ScriptStruct OculusInput.OculusCapsuleCollider
// Size: 0x10 (Inherited: 0x00)
struct FOculusCapsuleCollider {
	struct UCapsuleComponent* Capsule; // 0x00(0x08)
	enum class EBone BoneId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

