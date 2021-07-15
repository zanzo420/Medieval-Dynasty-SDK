#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum DragonIKPlugin.EIK_Type_Plugin
enum class DragonIKPlugin_EIK_Type_Plugin : uint8_t
{
	EIK_Type_Plugin__ENUM_Two_Bone_Ik = 0,
	EIK_Type_Plugin__ENUM_Single_Bone_Ik = 1,
	EIK_Type_Plugin__ENUM_MAX      = 2,

};

// Enum DragonIKPlugin.ESolverComplexityPluginEnum
enum class DragonIKPlugin_ESolverComplexityPluginEnum : uint8_t
{
	ESolverComplexityPluginEnum__VE_Simple = 0,
	ESolverComplexityPluginEnum__VE_Complex = 1,
	ESolverComplexityPluginEnum__VE_MAX = 2,

};

// Enum DragonIKPlugin.ERefPosePluginEnum
enum class DragonIKPlugin_ERefPosePluginEnum : uint8_t
{
	ERefPosePluginEnum__VE_Animated = 0,
	ERefPosePluginEnum__VE_Rest    = 1,
	ERefPosePluginEnum__VE_MAX     = 2,

};

// Enum DragonIKPlugin.EInterpoRotation_Type_Plugin
enum class DragonIKPlugin_EInterpoRotation_Type_Plugin : uint8_t
{
	EInterpoRotation_Type_Plugin__ENUM_DivisiveRot_Interp = 0,
	EInterpoRotation_Type_Plugin__ENUM_LegacyRot_Interp = 1,
	EInterpoRotation_Type_Plugin__ENUM_MAX = 2,

};

// Enum DragonIKPlugin.EInterpoLocation_Type_Plugin
enum class DragonIKPlugin_EInterpoLocation_Type_Plugin : uint8_t
{
	EInterpoLocation_Type_Plugin__ENUM_DivisiveLoc_Interp = 0,
	EInterpoLocation_Type_Plugin__ENUM_LegacyLoc_Interp = 1,
	EInterpoLocation_Type_Plugin__ENUM_MAX = 2,

};

// Enum DragonIKPlugin.EIKTrace_Type_Plugin
enum class DragonIKPlugin_EIKTrace_Type_Plugin : uint8_t
{
	EIKTrace_Type_Plugin__ENUM_LineTrace_Type = 0,
	EIKTrace_Type_Plugin__ENUM_SphereTrace_Type = 1,
	EIKTrace_Type_Plugin__ENUM_BoxTrace_Type = 2,
	EIKTrace_Type_Plugin__ENUM_MAX = 3,

};

// Enum DragonIKPlugin.EPole_System_DragonIK
enum class DragonIKPlugin_EPole_System_DragonIK : uint8_t
{
	EPole_System_DragonIK__ENUM_SinglePoleSystem = 0,
	EPole_System_DragonIK__ENUM_NSEWPoleSystem = 1,
	EPole_System_DragonIK__ENUM_MAX = 2,

};

// Enum DragonIKPlugin.ETwist_Type_DragonIK
enum class DragonIKPlugin_ETwist_Type_DragonIK : uint8_t
{
	ETwist_Type_DragonIK__ENUM_PoseAxisTwist = 0,
	ETwist_Type_DragonIK__ENUM_UpAxisTwist = 1,
	ETwist_Type_DragonIK__ENUM_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_DragonControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimAlphaInputType                         AlphaInputType;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XX00[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                            // 0x0038(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                       // 0x0088(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLGN[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.DragonData_FingerData
// 0x0020
struct FDragonData_FingerData
{
	struct FName                                       Finger_Bone_Name;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Trace_Scale;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Trace_Offset;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Finger_Backward;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZQ9[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.DragonData_FootData
// 0x0080
struct FDragonData_FootData
{
	struct FName                                       Feet_Bone_Name;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Knee_Bone_Name;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Thigh_Bone_Name;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Feet_Rotation_Offset;                                      // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Fixed_Pole;                                                // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1OL[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Knee_Direction_Offset;                                     // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Feet_Trace_Offset;                                         // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Front_Trace_Point_Spacing;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Side_Traces_Spacing;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feet_Rotation_Limit;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Fixed_Foot_Height;                                         // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZR4[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Feet_Heights;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feet_Alpha;                                                // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min_Feet_Extension;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max_Feet_Extension;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feet_Slope_Offset_Multiplier;                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max_Feet_Lift;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Overrided_Trace_Radius;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7D81[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDragonData_FingerData>              Finger_Array;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.DragonData_MultiInput
// 0x0020
struct FDragonData_MultiInput
{
	struct FName                                       Start_Spine;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Pelvis;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_FootData>                FeetBones;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
// 0x0040
struct FDragonData_SingleArmElement
{
	struct FTransform                                  Overrided_Arm_Transform;                                   // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Arm_Alpha;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QTM3[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
// 0x0010
struct FDragonData_Overrided_Location_Data
{
	TArray<struct FDragonData_SingleArmElement>        Arm_TargetLocation_Overrides;                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.DragonData_ArmsData
// 0x0114
struct FDragonData_ArmsData
{
	struct FBoneReference                              Clavicle_Bone;                                             // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Shoulder_Bone_Name;                                        // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Elbow_Bone_Name;                                           // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Hand_Bone_Name;                                            // 0x0030(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               is_this_right_hand;                                        // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               invert_lower_twist;                                        // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               invert_upper_twist;                                        // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B332[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Local_Direction_Axis;                                      // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Arm_Aiming_Offset;                                         // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               accurate_hand_rotation;                                    // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               relative_axis;                                             // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K902[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Maximum_Extension;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum_Extension;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Elbow_Pole_Offset;                                         // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     North_Pole_Offset;                                         // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     South_Pole_Offset;                                         // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     West_Pole_Offset;                                          // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     East_Pole_Offset;                                          // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               override_limits;                                           // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UREV[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Max_Arm_H_Angle;                                           // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Max_Arm_V_Angle;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Inner_Clavicle_Side_Limit;                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Inner_Clavicle_Vertical_Limit;                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Outer_Clavicle_Side_Limit;                                 // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Outer_Clavicle_Vertical_Limit;                             // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Shoulder_Inner_Clamp;                                      // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Shoulder_Outer_Clamp;                                      // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ForeArm_Angle_Limit;                                       // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Twist_Offset_Reverse;                                      // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_05J5[0x20];                                    // 0x00F4(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
// 0x08C8 (0x0990 - 0x00C8)
struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
	struct FBoneReference                              EndSplineBone;                                             // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              StartSplineBone;                                           // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3EV[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LookAtLocation;                                            // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDragonData_MultiInput                      dragon_input_data;                                         // 0x0120(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CZR[0x88];                                    // 0x0140(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDragonData_ArmsData>                Aiming_Hand_Limbs;                                         // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TBJ[0x10];                                    // 0x01D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDragonData_Overrided_Location_Data         Arm_TargetLocation_Overrides;                              // 0x01E8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               Use_Separate_Targets;                                      // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Override_Hand_Rotation;                                    // 0x01F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               reach_instead;                                             // 0x01FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Aggregate_Hand_Body;                                       // 0x01FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Let_Arm_Twist_With_Hand;                                   // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_EPole_System_DragonIK               pole_system_input;                                         // 0x01FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_ETwist_Type_DragonIK                arm_twist_axis;                                            // 0x01FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Override_Head_Rotation;                                    // 0x01FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable_Hand_Interpolation;                                 // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LT6B[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Hand_Interpolation_Speed;                                  // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G6IQ[0x4];                                     // 0x0208(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Main_Arm_Index;                                            // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2P7M[0x90];                                    // 0x0210(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Lookat_Radius;                                             // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Inner_Body_Clamp;                                          // 0x02A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Lookat_Clamp;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Limbs_Clamp;                                               // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Downward_Dip_Multiplier;                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Inverted_Dip_Multiplier;                                   // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Vertical_Dip_Treshold;                                     // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Side_Move_Multiplier;                                      // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Side_Down_Multiplier;                                      // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Up_Rot_Clamp;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Verticle_Range_Angles;                                     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Horizontal_Range_Angles;                                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          Look_Bending_Curve;                                        // 0x02E0(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          Look_Multiplier_Curve;                                     // 0x0368(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               Lock_Legs;                                                 // 0x03F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignore_elbow_modification;                                 // 0x03F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignore_separate_hand_solving;                              // 0x03F2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Natural_Method;                                        // 0x03F3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Head_Use_Separate_Clamp;                                   // 0x03F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Is_Head_Accurate;                                          // 0x03F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               automatic_leg_make;                                        // 0x03F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITND[0x1];                                     // 0x03F7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               enable_solver;                                             // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Work_Outside_PIE;                                          // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Adaptive_Terrain_Tail;                                     // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                Trace_Channel;                                             // 0x03FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Trace_Up_Height;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Trace_Down_Height;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53N3[0x90];                                    // 0x0404(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DragonIKPlugin_EInterpoLocation_Type_Plugin        loc_interp_type;                                           // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNW5[0x1];                                     // 0x0495(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Enable_Interpolation;                                      // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OBDS[0x1];                                     // 0x0497(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Interpolation_Speed;                                       // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Toggle_Interpolation_Speed;                                // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBL6[0x58];                                    // 0x04A0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LookAt_Axis;                                               // 0x04F8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Upward_Axis;                                               // 0x0504(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetOffset;                                              // 0x0510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Reference_Forward_Axis;                                // 0x051C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_51HL[0x3];                                     // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Reference_Constant_Forward_Axis;                           // 0x0520(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8DE[0xE4];                                    // 0x052C(0x00E4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Debug_LookAtLocation;                                      // 0x0610(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Debug_Hand_Locations;                                      // 0x0640(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PL9A[0x340];                                   // 0x0650(0x0340) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.SocketDragonReference
// 0x0040
struct FSocketDragonReference
{
	unsigned char                                      UnknownData_M7N2[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9IP[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
// 0x0060
struct FBoneDragonSocketTarget
{
	bool                                               bUseSocket;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTIH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoneReference;                                             // 0x0004(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEBE[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSocketDragonReference                      SocketReference;                                           // 0x0020(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
// 0x0098 (0x0160 - 0x00C8)
struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
	struct FBoneReference                              StartSplineBone;                                           // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              EndSplineBone;                                             // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxIterations;                                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Target_Transform;                                          // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8WR[0x40];                                    // 0x0120(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
// 0x0648 (0x0710 - 0x00C8)
struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
	struct FDragonData_MultiInput                      dragon_input_data;                                         // 0x00C8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EWWT[0x78];                                    // 0x00E8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DragonIKPlugin_EIK_Type_Plugin                     ik_type;                                                   // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_EIKTrace_Type_Plugin                trace_type;                                                // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EC1B[0x2];                                     // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Trace_Radius;                                              // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Trace_Complex;                                             // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Override_Curve_Velocity;                                   // 0x0169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4M2[0x2];                                     // 0x016A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              custom_velocity;                                           // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_EInterpoLocation_Type_Plugin        loc_interp_type;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YJH[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DragonIKPlugin_EInterpoRotation_Type_Plugin        rot_interp_type;                                           // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SKP[0x3];                                     // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              virtual_scale;                                             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               automatic_leg_make;                                        // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_OptionalRef_Feet_As_Ref;                               // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               enable_solver;                                             // 0x0182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Work_Outside_PIE;                                          // 0x0183(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YV7I[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FComponentSpacePoseLink                     OptionalRefPose;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               interpolate_only_z;                                        // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRD3[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              shift_speed;                                               // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FX0F[0x8];                                     // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Location_Lerp_Speed;                                       // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              feet_rotation_speed;                                       // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignore_shift_speed;                                        // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ignore_Lerping;                                            // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ignore_Location_Lerping;                                   // 0x01B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2TXJ[0x5];                                     // 0x01B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Interpolation_Velocity_Curve;                              // 0x01B8(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               Enable_Complex_Rotation_Method;                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KK9[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          ComplexSimpleFoot_Velocity_Curve;                          // 0x0248(0x0088) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IALE[0x40];                                    // 0x02D0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETraceTypeQuery>                Trace_Channel;                                             // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                Anti_Trace_Channel;                                        // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PGM1[0x2];                                     // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FPS_Lerp_Treshold;                                         // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0G2[0x16C];                                   // 0x0318(0x016C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              line_trace_upper_height;                                   // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              line_trace_down_height;                                    // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A68Z[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Trace_Down_Multiplier_Curve;                               // 0x0490(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               Use_Anti_Channel;                                          // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Should_Rotate_Feet;                                        // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7E5[0x1];                                     // 0x051A(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               show_trace_in_game;                                        // 0x051B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8I7[0x1C];                                    // 0x051C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Enable_Pitch;                                              // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable_Roll;                                               // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RK1N[0x2];                                     // 0x053A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     character_direction_vector_CS;                             // 0x053C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     character_forward_direction_vector_CS;                     // 0x0548(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     poles_forward_direction_vector_CS;                         // 0x0554(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Four_Point_Feets;                                      // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable_Foot_Lift_Limit;                                    // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Affect_Toes_Always;                                        // 0x0562(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YYF[0x5];                                     // 0x0563(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Finger_Alpha_Velocity_Curve;                               // 0x0568(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              Max_Limb_Radius;                                           // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1E0A[0x10C];                                   // 0x05F4(0x010C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Foot_01_Height_Offset;                                     // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Foot_02_Height_Offset;                                     // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Foot_03_Height_Offset;                                     // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Foot_04_Height_Offset;                                     // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
// 0x0850 (0x0860 - 0x0010)
struct FAnimNode_DragonSpineSolver : public FAnimNode_Base
{
	struct FDragonData_MultiInput                      dragon_input_data;                                         // 0x0010(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTAX[0x70];                                    // 0x0030(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Precision;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumPitch;                                              // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumPitch;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumRoll;                                               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumRoll;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x00B8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0J5X[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              shift_speed;                                               // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3O92[0x8];                                     // 0x00D4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETraceTypeQuery>                Trace_Channel;                                             // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                Anti_Trace_Channel;                                        // 0x00DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_EIKTrace_Type_Plugin                trace_type;                                                // 0x00DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTCO[0x1];                                     // 0x00DF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Trace_Radius;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Trace_Complex;                                             // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Override_Curve_Velocity;                                   // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECGP[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              custom_velocity;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rotate_Around_Translate;                                   // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DragonIKPlugin_ESolverComplexityPluginEnum         complexity_type;                                           // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ignore_Lerping;                                            // 0x00F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGEA[0x9];                                     // 0x00F3(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActualAlpha;                                               // 0x00FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJQA[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              virtual_scale;                                             // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              line_trace_downward_height;                                // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              line_trace_upper_height;                                   // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Anti_Channel;                                          // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0I2[0x13];                                    // 0x0115(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               stabilize_pelvis_legs;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NEVG[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pelvis_UpSlopeStabilization_Alpha;                         // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pelvis_DownSlopeStabilization_Alpha;                       // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               stabilize_chest_legs;                                      // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L9N7[0x3];                                     // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Chest_UpSlopeStabilization_Alpha;                          // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_DownslopeStabilization_Alpha;                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              Stabilization_Head_Bone;                                   // 0x0140(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Stabilization_Tail_Bone;                                   // 0x0150(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Slanted_Height_Up_Offset;                                  // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VH0B[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Slanted_Height_Down_Offset;                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              dip_multiplier;                                            // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pelvis_adaptive_gravity;                                   // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               reverse_fabrik;                                            // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NKJK[0x7];                                     // 0x0175(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Calculation_To_RefPose;                                    // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITUQ[0x3];                                     // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Chest_Slanted_Height_Up_Offset;                            // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_Slanted_Height_Down_Offset;                          // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chest_side_dip_multiplier;                                 // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chest_adaptive_gravity;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_Base_Offset;                                         // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pelvis_Base_Offset;                                        // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              virtual_leg_width;                                         // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Maximum_Dip_Height;                                        // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QT28[0x8];                                     // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Pelvis_Height_Multiplier_Curve;                            // 0x01A8(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              Maximum_Dip_Height_Chest;                                  // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8F8S[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Chest_Height_Multiplier_Curve;                             // 0x0238(0x0088) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7SG[0xC];                                     // 0x02C0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              rotation_power_between;                                    // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Automatic_Fabrik_Selection;                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REHJ[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Trace_Lerp_Speed;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Location_Lerp_Speed;                                       // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_78EJ[0x10];                                    // 0x02DC(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rotation_Lerp_Speed;                                       // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LF7O[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Interpolation_Multiplier_Curve;                            // 0x02F8(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              Chest_Influence_Alpha;                                     // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pelvis_ForwardRotation_Intensity;                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pelvis_UpwardForwardRotation_Intensity;                    // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Body_Rotation_Intensity;                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pelvis_Rotation_Offset;                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_ForwardRotation_Intensity;                           // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_UpwardForwardRotation_Intensity;                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_SidewardRotation_Intensity;                          // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chest_Rotation_Offset;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PCXG[0x3C];                                    // 0x03A4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Full_Extended_Spine;                                       // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF21[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              max_extension_ratio;                                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              min_extension_ratio;                                       // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              extension_switch_speed;                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F2L4[0x4];                                     // 0x03F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               enable_solver;                                             // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Work_Outside_PIE;                                          // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Fake_Chest_Rotations;                                  // 0x03F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Use_Fake_Pelvis_Rotations;                                 // 0x03F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXIG[0x4];                                     // 0x03F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Force_Activation;                                          // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               accurate_feet_placement;                                   // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A4ZY[0x2];                                     // 0x03FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Accurate_Foot_Curve;                                       // 0x0400(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               use_crosshair_trace_also_for_fail_distance;                // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Only_Root_Solve;                                           // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ignore_Chest_Solve;                                        // 0x048A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YUUJ[0x9];                                     // 0x048B(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Overall_PostSolved_Offset;                                 // 0x0494(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     character_direction_vector_CS;                             // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Forward_Direction_Vector;                                  // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               flip_forward_and_right;                                    // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLEK[0xF];                                     // 0x04B9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DragonIKPlugin_ERefPosePluginEnum                  SolverReferencePose;                                       // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Spine_Feet_Connect;                                        // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VOT5[0x30A];                                   // 0x04CA(0x030A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Snake_Joint_Speed;                                         // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable_Snake_Interpolation;                                // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               is_snake;                                                  // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Ignore_End_Points;                                         // 0x07DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0AY[0x1];                                     // 0x07DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Maximum_Feet_Distance;                                     // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Minimum_Feet_Distance;                                     // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisplayLineTrace;                                          // 0x07E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2M8K[0x7B];                                    // 0x07E5(0x007B) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
// 0x002C
struct FDragonData_WarpLimbsData
{
	struct FName                                       Foot_Bone_Name;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Knee_Bone_Name;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Thigh_Bone_Name;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Warp_Lift_Reference_Location;                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Warp_Param_Adder;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Min_Max_Warp;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              max_extra_compression_height;                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
// 0x0498 (0x0560 - 0x00C8)
struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
	TArray<struct FDragonData_WarpLimbsData>           dragon_limb_input;                                         // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       Hip_Bone_Name;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ESZ[0x44];                                    // 0x00E0(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               enable_solver;                                             // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XQ7[0x11F];                                   // 0x0125(0x011F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     character_direction_vector_CS;                             // 0x0244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     forward_vector_CS;                                         // 0x0250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              speed_warping_const;                                       // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               enable_slope_warp;                                         // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSUJ[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              automatic_speed_warping_const;                             // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              slope_detection_tolerance;                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Warp_Slope_Interpolation;                                  // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5QC[0x30];                                    // 0x0270(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ETraceTypeQuery>                Trace_Channel;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S61N[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              line_trace_downward_height;                                // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              line_trace_upper_height;                                   // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              virtual_leg_width;                                         // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              virtual_scale;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7H2[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               DisplayLineTrace;                                          // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PN6[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Limb_Compression_Intensity;                                // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          Limb_Lifting_Curve;                                        // 0x02C0(0x0088) (Edit, NativeAccessSpecifierPublic)
	float                                              Hip_Change_Intensity;                                      // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3LFH[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          Hip_Lifting_Curve;                                         // 0x0350(0x0088) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQJ2[0x188];                                   // 0x03D8(0x0188) MISSED OFFSET (PADDING)

};

// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
// 0x0070
struct FCCDIK_Modified_ChainLink
{
	unsigned char                                      UnknownData_609N[0x70];                                    // 0x0000(0x0070) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
