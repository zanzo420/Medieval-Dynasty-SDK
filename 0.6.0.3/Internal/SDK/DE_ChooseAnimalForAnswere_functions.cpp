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

// Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.Change Response
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Dialogue_C*          UIDialogueReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChooseAnimalForAnswere_C::Change_Response(class UUI_Dialogue_C* UIDialogueReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.Change Response");

	UDE_ChooseAnimalForAnswere_C_Change_Response_Params params;
	params.UIDialogueReference = UIDialogueReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChooseAnimalForAnswere_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.RecieveEventTriggered");

	UDE_ChooseAnimalForAnswere_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.ExecuteUbergraph_DE_ChooseAnimalForAnswere
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_ChooseAnimalForAnswere_C::ExecuteUbergraph_DE_ChooseAnimalForAnswere(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_ChooseAnimalForAnswere.DE_ChooseAnimalForAnswere_C.ExecuteUbergraph_DE_ChooseAnimalForAnswere");

	UDE_ChooseAnimalForAnswere_C_ExecuteUbergraph_DE_ChooseAnimalForAnswere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
