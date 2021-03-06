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

// Function UI_MasterChallange.UI_MasterChallange_C.InitChallange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Challange           Challange                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Show_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterChallange_C::InitChallange(const struct FST_Challange& Challange, bool Show_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.InitChallange");

	UUI_MasterChallange_C_InitChallange_Params params;
	params.Challange = Challange;
	params.Show_ = Show_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterChallange.UI_MasterChallange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterChallange_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.Construct");

	UUI_MasterChallange_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterChallange.UI_MasterChallange_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterChallange_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.Accept");

	UUI_MasterChallange_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterChallange.UI_MasterChallange_C.ShowChallange
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterChallange_C::ShowChallange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.ShowChallange");

	UUI_MasterChallange_C_ShowChallange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterChallange.UI_MasterChallange_C.Decline
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterChallange_C::Decline()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.Decline");

	UUI_MasterChallange_C_Decline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterChallange.UI_MasterChallange_C.ExecuteUbergraph_UI_MasterChallange
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterChallange_C::ExecuteUbergraph_UI_MasterChallange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterChallange.UI_MasterChallange_C.ExecuteUbergraph_UI_MasterChallange");

	UUI_MasterChallange_C_ExecuteUbergraph_UI_MasterChallange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
