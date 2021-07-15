// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPI_MountInterface.BPI_MountInterface_C.GetMountCameraRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_MountInterface_C::GetMountCameraRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.GetMountCameraRotation");

	UBPI_MountInterface_C_GetMountCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function BPI_MountInterface.BPI_MountInterface_C.LookAtOnMount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_MountInterface_C::LookAtOnMount(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.LookAtOnMount");

	UBPI_MountInterface_C_LookAtOnMount_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.GetSprintKeyDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprintKeyDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_MountInterface_C::GetSprintKeyDown(bool* IsSprintKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.GetSprintKeyDown");

	UBPI_MountInterface_C_GetSprintKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSprintKeyDown != nullptr)
		*IsSprintKeyDown = params.IsSprintKeyDown;

}


// Function BPI_MountInterface.BPI_MountInterface_C.SetShouldSprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_MountInterface_C::SetShouldSprint(bool ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.SetShouldSprint");

	UBPI_MountInterface_C_SetShouldSprint_Params params;
	params.ShouldSprint = ShouldSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.GetShouldSprint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_MountInterface_C::GetShouldSprint(bool* ShouldSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.GetShouldSprint");

	UBPI_MountInterface_C_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSprint != nullptr)
		*ShouldSprint = params.ShouldSprint;

}


// Function BPI_MountInterface.BPI_MountInterface_C.WalkReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::WalkReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.WalkReleased");

	UBPI_MountInterface_C_WalkReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.WalkPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::WalkPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.WalkPressed");

	UBPI_MountInterface_C_WalkPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.MountStop
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_MountInterface_C::MountStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.MountStop");

	UBPI_MountInterface_C_MountStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.DismountReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::DismountReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.DismountReleased");

	UBPI_MountInterface_C_DismountReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.DismountPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::DismountPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.DismountPressed");

	UBPI_MountInterface_C_DismountPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.Down_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MountInterface_C::Down_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.Down_Axis");

	UBPI_MountInterface_C_Down_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.Right_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MountInterface_C::Right_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.Right_Axis");

	UBPI_MountInterface_C_Right_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.SprintReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::SprintReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.SprintReleased");

	UBPI_MountInterface_C_SprintReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.SprintPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::SprintPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.SprintPressed");

	UBPI_MountInterface_C_SprintPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.MountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_MountInterface_C::MountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.MountSpecial");

	UBPI_MountInterface_C_MountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.JumpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::JumpReleased(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.JumpReleased");

	UBPI_MountInterface_C_JumpReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.JumpPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_MountInterface_C::JumpPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.JumpPressed");

	UBPI_MountInterface_C_JumpPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.Left_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MountInterface_C::Left_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.Left_Axis");

	UBPI_MountInterface_C_Left_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.Backwards_Axis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MountInterface_C::Backwards_Axis(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.Backwards_Axis");

	UBPI_MountInterface_C_Backwards_Axis_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_MountInterface.BPI_MountInterface_C.UpdateMountCameraFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_MountInterface_C::UpdateMountCameraFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MountInterface.BPI_MountInterface_C.UpdateMountCameraFoV");

	UBPI_MountInterface_C_UpdateMountCameraFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBPI_MountInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_MountInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
