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

// Function DE_ChangeAffection.DE_ChangeAffection_C.Functionality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UDE_ChangeAffection_C::Functionality()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeAffection.DE_ChangeAffection_C.Functionality");

	UDE_ChangeAffection_C_Functionality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChangeAffection.DE_ChangeAffection_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeAffection_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeAffection.DE_ChangeAffection_C.RecieveEventTriggered");

	UDE_ChangeAffection_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChangeAffection.DE_ChangeAffection_C.ExecuteUbergraph_DE_ChangeAffection
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChangeAffection_C::ExecuteUbergraph_DE_ChangeAffection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChangeAffection.DE_ChangeAffection_C.ExecuteUbergraph_DE_ChangeAffection");

	UDE_ChangeAffection_C_ExecuteUbergraph_DE_ChangeAffection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
