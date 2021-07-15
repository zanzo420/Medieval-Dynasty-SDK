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

// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.GetInteractTool");

	ABP_MasterFurniture_Workbench_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_56AD28B14D7A14720F31828ACDDD5135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyEnd_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_56AD28B14D7A14720F31828ACDDD5135");

	ABP_MasterFurniture_Workbench_C_OnNotifyEnd_56AD28B14D7A14720F31828ACDDD5135_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_56AD28B14D7A14720F31828ACDDD5135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyBegin_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_56AD28B14D7A14720F31828ACDDD5135");

	ABP_MasterFurniture_Workbench_C_OnNotifyBegin_56AD28B14D7A14720F31828ACDDD5135_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_56AD28B14D7A14720F31828ACDDD5135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnInterrupted_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_56AD28B14D7A14720F31828ACDDD5135");

	ABP_MasterFurniture_Workbench_C_OnInterrupted_56AD28B14D7A14720F31828ACDDD5135_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_56AD28B14D7A14720F31828ACDDD5135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnBlendOut_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_56AD28B14D7A14720F31828ACDDD5135");

	ABP_MasterFurniture_Workbench_C_OnBlendOut_56AD28B14D7A14720F31828ACDDD5135_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_56AD28B14D7A14720F31828ACDDD5135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnCompleted_56AD28B14D7A14720F31828ACDDD5135(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_56AD28B14D7A14720F31828ACDDD5135");

	ABP_MasterFurniture_Workbench_C_OnCompleted_56AD28B14D7A14720F31828ACDDD5135_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_5F381E474CA8D7C2B22BAF95AEB88F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyEnd_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_5F381E474CA8D7C2B22BAF95AEB88F5D");

	ABP_MasterFurniture_Workbench_C_OnNotifyEnd_5F381E474CA8D7C2B22BAF95AEB88F5D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_5F381E474CA8D7C2B22BAF95AEB88F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyBegin_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_5F381E474CA8D7C2B22BAF95AEB88F5D");

	ABP_MasterFurniture_Workbench_C_OnNotifyBegin_5F381E474CA8D7C2B22BAF95AEB88F5D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_5F381E474CA8D7C2B22BAF95AEB88F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnInterrupted_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_5F381E474CA8D7C2B22BAF95AEB88F5D");

	ABP_MasterFurniture_Workbench_C_OnInterrupted_5F381E474CA8D7C2B22BAF95AEB88F5D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_5F381E474CA8D7C2B22BAF95AEB88F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnBlendOut_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_5F381E474CA8D7C2B22BAF95AEB88F5D");

	ABP_MasterFurniture_Workbench_C_OnBlendOut_5F381E474CA8D7C2B22BAF95AEB88F5D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_5F381E474CA8D7C2B22BAF95AEB88F5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnCompleted_5F381E474CA8D7C2B22BAF95AEB88F5D(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_5F381E474CA8D7C2B22BAF95AEB88F5D");

	ABP_MasterFurniture_Workbench_C_OnCompleted_5F381E474CA8D7C2B22BAF95AEB88F5D_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_EB965E1E4E9307AACC0B61B0A9593AAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyEnd_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_EB965E1E4E9307AACC0B61B0A9593AAA");

	ABP_MasterFurniture_Workbench_C_OnNotifyEnd_EB965E1E4E9307AACC0B61B0A9593AAA_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_EB965E1E4E9307AACC0B61B0A9593AAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyBegin_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_EB965E1E4E9307AACC0B61B0A9593AAA");

	ABP_MasterFurniture_Workbench_C_OnNotifyBegin_EB965E1E4E9307AACC0B61B0A9593AAA_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_EB965E1E4E9307AACC0B61B0A9593AAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnInterrupted_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_EB965E1E4E9307AACC0B61B0A9593AAA");

	ABP_MasterFurniture_Workbench_C_OnInterrupted_EB965E1E4E9307AACC0B61B0A9593AAA_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_EB965E1E4E9307AACC0B61B0A9593AAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnBlendOut_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_EB965E1E4E9307AACC0B61B0A9593AAA");

	ABP_MasterFurniture_Workbench_C_OnBlendOut_EB965E1E4E9307AACC0B61B0A9593AAA_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_EB965E1E4E9307AACC0B61B0A9593AAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnCompleted_EB965E1E4E9307AACC0B61B0A9593AAA(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_EB965E1E4E9307AACC0B61B0A9593AAA");

	ABP_MasterFurniture_Workbench_C_OnCompleted_EB965E1E4E9307AACC0B61B0A9593AAA_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_1E6810864DC2571256C8D3824D27C259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyEnd_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyEnd_1E6810864DC2571256C8D3824D27C259");

	ABP_MasterFurniture_Workbench_C_OnNotifyEnd_1E6810864DC2571256C8D3824D27C259_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_1E6810864DC2571256C8D3824D27C259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnNotifyBegin_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnNotifyBegin_1E6810864DC2571256C8D3824D27C259");

	ABP_MasterFurniture_Workbench_C_OnNotifyBegin_1E6810864DC2571256C8D3824D27C259_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_1E6810864DC2571256C8D3824D27C259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnInterrupted_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnInterrupted_1E6810864DC2571256C8D3824D27C259");

	ABP_MasterFurniture_Workbench_C_OnInterrupted_1E6810864DC2571256C8D3824D27C259_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_1E6810864DC2571256C8D3824D27C259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnBlendOut_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnBlendOut_1E6810864DC2571256C8D3824D27C259");

	ABP_MasterFurniture_Workbench_C_OnBlendOut_1E6810864DC2571256C8D3824D27C259_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_1E6810864DC2571256C8D3824D27C259
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::OnCompleted_1E6810864DC2571256C8D3824D27C259(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.OnCompleted_1E6810864DC2571256C8D3824D27C259");

	ABP_MasterFurniture_Workbench_C_OnCompleted_1E6810864DC2571256C8D3824D27C259_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Workbench_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.Interact");

	ABP_MasterFurniture_Workbench_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStarted
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStarted");

	ABP_MasterFurniture_Workbench_C_CraftingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingEnded
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingEnded");

	ABP_MasterFurniture_Workbench_C_CraftingEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.PlayWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::PlayWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.PlayWorkbenchAnim");

	ABP_MasterFurniture_Workbench_C_PlayWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StopWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::StopWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StopWorkbenchAnim");

	ABP_MasterFurniture_Workbench_C_StopWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStopping
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingStopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStopping");

	ABP_MasterFurniture_Workbench_C_CraftingStopping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.InteractCancel");

	ABP_MasterFurniture_Workbench_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.WaitWorkbenchAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Base_Character                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::WaitWorkbenchAnim(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* MontageToPlay, class ABP_BaseCharacter_C* Base_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.WaitWorkbenchAnim");

	ABP_MasterFurniture_Workbench_C_WaitWorkbenchAnim_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MontageToPlay = MontageToPlay;
	params.Base_Character = Base_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StopFurnitureAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Base_Character_Ref             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StopFurnitureAnim");

	ABP_MasterFurniture_Workbench_C_StopFurnitureAnim_Params params;
	params.Base_Character_Ref = Base_Character_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.WaitCrafting
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::WaitCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.WaitCrafting");

	ABP_MasterFurniture_Workbench_C_WaitCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.BlendOutCrafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::BlendOutCrafting(class USkeletalMeshComponent* SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.BlendOutCrafting");

	ABP_MasterFurniture_Workbench_C_BlendOutCrafting_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingAnimEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingAnimEnd");

	ABP_MasterFurniture_Workbench_C_CraftingAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StartWorkbench
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::StartWorkbench()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.StartWorkbench");

	ABP_MasterFurniture_Workbench_C_StartWorkbench_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.SynchronizeWorkbenchAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::SynchronizeWorkbenchAnim(float StartingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.SynchronizeWorkbenchAnim");

	ABP_MasterFurniture_Workbench_C_SynchronizeWorkbenchAnim_Params params;
	params.StartingPosition = StartingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStarted_NPC
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingStarted_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingStarted_NPC");

	ABP_MasterFurniture_Workbench_C_CraftingStarted_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingEnded_NPC
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Workbench_C::CraftingEnded_NPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.CraftingEnded_NPC");

	ABP_MasterFurniture_Workbench_C_CraftingEnded_NPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.ExecuteUbergraph_BP_MasterFurniture_Workbench
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Workbench_C::ExecuteUbergraph_BP_MasterFurniture_Workbench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Workbench.BP_MasterFurniture_Workbench_C.ExecuteUbergraph_BP_MasterFurniture_Workbench");

	ABP_MasterFurniture_Workbench_C_ExecuteUbergraph_BP_MasterFurniture_Workbench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterFurniture_Workbench_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(InteractPoint, UArrowComponent);
	READ_PTR_FULL(InteractedCharacter, ABP_BaseCharacter_C);
	READ_PTR_FULL(PC_Player, APC_Player_C);
	READ_PTR_FULL(MontageSkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(PlayerMontage, UAnimMontage);
	READ_PTR_FULL(NPCMontage, UAnimMontage);
}

void ABP_MasterFurniture_Workbench_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(InteractPoint);
	DELE_PTR_FULL(InteractedCharacter);
	DELE_PTR_FULL(PC_Player);
	DELE_PTR_FULL(MontageSkeletalMesh);
	DELE_PTR_FULL(PlayerMontage);
	DELE_PTR_FULL(NPCMontage);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
