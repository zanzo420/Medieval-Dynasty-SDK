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

// Function P_Spectator.P_Spectator_C.UpdateFoV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FieldOfView                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::UpdateFoV(float FieldOfView)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.UpdateFoV");

	AP_Spectator_C_UpdateFoV_Params params;
	params.FieldOfView = FieldOfView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.UserConstructionScript");

	AP_Spectator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.PressedInput_Q
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::PressedInput_Q()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.PressedInput_Q");

	AP_Spectator_C_PressedInput_Q_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.ReleasedInput_Q
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::ReleasedInput_Q()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.ReleasedInput_Q");

	AP_Spectator_C_ReleasedInput_Q_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.PressedInput_E
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::PressedInput_E()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.PressedInput_E");

	AP_Spectator_C_PressedInput_E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.ReleasedInput_E
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::ReleasedInput_E()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.ReleasedInput_E");

	AP_Spectator_C_ReleasedInput_E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.PressedInput_Sprint
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::PressedInput_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.PressedInput_Sprint");

	AP_Spectator_C_PressedInput_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.ReleasedInput_Sprint
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::ReleasedInput_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.ReleasedInput_Sprint");

	AP_Spectator_C_ReleasedInput_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.Backwards_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::Backwards_Axis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.Backwards_Axis");

	AP_Spectator_C_Backwards_Axis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.Left_Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::Left_Axis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.Left_Axis");

	AP_Spectator_C_Left_Axis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.MouseWheelAxisChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::MouseWheelAxisChange(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.MouseWheelAxisChange");

	AP_Spectator_C_MouseWheelAxisChange_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.GoUp
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::GoUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.GoUp");

	AP_Spectator_C_GoUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.GoDown
// (BlueprintCallable, BlueprintEvent)
void AP_Spectator_C::GoDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.GoDown");

	AP_Spectator_C_GoDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AP_Spectator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.ReceiveBeginPlay");

	AP_Spectator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::Down(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.Down");

	AP_Spectator_C_Down_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::Right(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.Right");

	AP_Spectator_C_Right_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function P_Spectator.P_Spectator_C.ExecuteUbergraph_P_Spectator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_Spectator_C::ExecuteUbergraph_P_Spectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Spectator.P_Spectator_C.ExecuteUbergraph_P_Spectator");

	AP_Spectator_C_ExecuteUbergraph_P_Spectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AP_Spectator_C::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(FloatingPawnMovement, UFloatingPawnMovement);
	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(FP_Camera, UCameraComponent);
}

void AP_Spectator_C::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(FloatingPawnMovement);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(FP_Camera);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
