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

// Function Bow_AnimBP.Bow_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.AnimGraph");

	UBow_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Bow_AnimBP.Bow_AnimBP_C.Set Anim Bow Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stretch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::Set_Anim_Bow_Stretch(float Stretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.Set Anim Bow Stretch");

	UBow_AnimBP_C_Set_Anim_Bow_Stretch_Params params;
	params.Stretch = Stretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.OnNotifyEnd_BB6ABE8A479AA62B453B6589F78DE181
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::OnNotifyEnd_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.OnNotifyEnd_BB6ABE8A479AA62B453B6589F78DE181");

	UBow_AnimBP_C_OnNotifyEnd_BB6ABE8A479AA62B453B6589F78DE181_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.OnNotifyBegin_BB6ABE8A479AA62B453B6589F78DE181
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::OnNotifyBegin_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.OnNotifyBegin_BB6ABE8A479AA62B453B6589F78DE181");

	UBow_AnimBP_C_OnNotifyBegin_BB6ABE8A479AA62B453B6589F78DE181_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.OnInterrupted_BB6ABE8A479AA62B453B6589F78DE181
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::OnInterrupted_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.OnInterrupted_BB6ABE8A479AA62B453B6589F78DE181");

	UBow_AnimBP_C_OnInterrupted_BB6ABE8A479AA62B453B6589F78DE181_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.OnBlendOut_BB6ABE8A479AA62B453B6589F78DE181
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::OnBlendOut_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.OnBlendOut_BB6ABE8A479AA62B453B6589F78DE181");

	UBow_AnimBP_C_OnBlendOut_BB6ABE8A479AA62B453B6589F78DE181_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.OnCompleted_BB6ABE8A479AA62B453B6589F78DE181
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::OnCompleted_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.OnCompleted_BB6ABE8A479AA62B453B6589F78DE181");

	UBow_AnimBP_C_OnCompleted_BB6ABE8A479AA62B453B6589F78DE181_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.PlayReloadMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UBow_AnimBP_C::PlayReloadMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.PlayReloadMontage");

	UBow_AnimBP_C_PlayReloadMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UBow_AnimBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.BlueprintBeginPlay");

	UBow_AnimBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.AnimNotify_StartAiming
// (BlueprintCallable, BlueprintEvent)
void UBow_AnimBP_C::AnimNotify_StartAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.AnimNotify_StartAiming");

	UBow_AnimBP_C_AnimNotify_StartAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.AnimNotify_ChangeStance
// (BlueprintCallable, BlueprintEvent)
void UBow_AnimBP_C::AnimNotify_ChangeStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.AnimNotify_ChangeStance");

	UBow_AnimBP_C_AnimNotify_ChangeStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.StopReload
// (Public, BlueprintCallable, BlueprintEvent)
void UBow_AnimBP_C::StopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.StopReload");

	UBow_AnimBP_C_StopReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.SetAnimBowStretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stretch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::SetAnimBowStretch(float Stretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.SetAnimBowStretch");

	UBow_AnimBP_C_SetAnimBowStretch_Params params;
	params.Stretch = Stretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.PlayShootMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UBow_AnimBP_C::PlayShootMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.PlayShootMontage");

	UBow_AnimBP_C_PlayShootMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bow_AnimBP.Bow_AnimBP_C.ExecuteUbergraph_Bow_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBow_AnimBP_C::ExecuteUbergraph_Bow_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bow_AnimBP.Bow_AnimBP_C.ExecuteUbergraph_Bow_AnimBP");

	UBow_AnimBP_C_ExecuteUbergraph_Bow_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
