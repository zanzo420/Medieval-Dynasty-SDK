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
// Parameters
//---------------------------------------------------------------------------

// Function BPI_MountInterface.BPI_MountInterface_C.GetMountCameraRotation
struct UBPI_MountInterface_C_GetMountCameraRotation_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_MountInterface.BPI_MountInterface_C.LookAtOnMount
struct UBPI_MountInterface_C_LookAtOnMount_Params
{
	struct FRotator                                    Rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_MountInterface.BPI_MountInterface_C.GetSprintKeyDown
struct UBPI_MountInterface_C_GetSprintKeyDown_Params
{
	bool                                               IsSprintKeyDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_MountInterface.BPI_MountInterface_C.SetShouldSprint
struct UBPI_MountInterface_C_SetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_MountInterface.BPI_MountInterface_C.GetShouldSprint
struct UBPI_MountInterface_C_GetShouldSprint_Params
{
	bool                                               ShouldSprint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_MountInterface.BPI_MountInterface_C.WalkReleased
struct UBPI_MountInterface_C_WalkReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.WalkPressed
struct UBPI_MountInterface_C_WalkPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.MountStop
struct UBPI_MountInterface_C_MountStop_Params
{
};

// Function BPI_MountInterface.BPI_MountInterface_C.DismountReleased
struct UBPI_MountInterface_C_DismountReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.DismountPressed
struct UBPI_MountInterface_C_DismountPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.Down_Axis
struct UBPI_MountInterface_C_Down_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.Right_Axis
struct UBPI_MountInterface_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.SprintReleased
struct UBPI_MountInterface_C_SprintReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.SprintPressed
struct UBPI_MountInterface_C_SprintPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.MountSpecial
struct UBPI_MountInterface_C_MountSpecial_Params
{
};

// Function BPI_MountInterface.BPI_MountInterface_C.JumpReleased
struct UBPI_MountInterface_C_JumpReleased_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.JumpPressed
struct UBPI_MountInterface_C_JumpPressed_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.Left_Axis
struct UBPI_MountInterface_C_Left_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.Backwards_Axis
struct UBPI_MountInterface_C_Backwards_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_MountInterface.BPI_MountInterface_C.UpdateMountCameraFoV
struct UBPI_MountInterface_C_UpdateMountCameraFoV_Params
{
	float                                              FieldOfView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
