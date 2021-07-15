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

// Function EQS_Context_GetEngageActor.EQS_Context_GetEngageActor_C.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  QuerierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEQS_Context_GetEngageActor_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function EQS_Context_GetEngageActor.EQS_Context_GetEngageActor_C.ProvideSingleActor");

	UEQS_Context_GetEngageActor_C_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
