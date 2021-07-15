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

// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnOwnershipSwap");

	ABP_FurnitureContainer_Chest_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::GetInventoryComponent(class UInventoryComponent_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.GetInventoryComponent");

	ABP_FurnitureContainer_Chest_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureContainer_Chest_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.CheckObstruction");

	ABP_FurnitureContainer_Chest_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.EnableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureContainer_Chest_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.EnableGhost");

	ABP_FurnitureContainer_Chest_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureContainer_Chest_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.DisableGhost");

	ABP_FurnitureContainer_Chest_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureContainer_Chest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.UserConstructionScript");

	ABP_FurnitureContainer_Chest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F");

	ABP_FurnitureContainer_Chest_C_OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F");

	ABP_FurnitureContainer_Chest_C_OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F");

	ABP_FurnitureContainer_Chest_C_OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F");

	ABP_FurnitureContainer_Chest_C_OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_876C1DCF45B4A4910CC227B6B520C84F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnCompleted_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_876C1DCF45B4A4910CC227B6B520C84F");

	ABP_FurnitureContainer_Chest_C_OnCompleted_876C1DCF45B4A4910CC227B6B520C84F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_9B9214DD42E006008441C9B673B90767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnNotifyEnd_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyEnd_9B9214DD42E006008441C9B673B90767");

	ABP_FurnitureContainer_Chest_C_OnNotifyEnd_9B9214DD42E006008441C9B673B90767_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_9B9214DD42E006008441C9B673B90767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnNotifyBegin_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnNotifyBegin_9B9214DD42E006008441C9B673B90767");

	ABP_FurnitureContainer_Chest_C_OnNotifyBegin_9B9214DD42E006008441C9B673B90767_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_9B9214DD42E006008441C9B673B90767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnInterrupted_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnInterrupted_9B9214DD42E006008441C9B673B90767");

	ABP_FurnitureContainer_Chest_C_OnInterrupted_9B9214DD42E006008441C9B673B90767_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_9B9214DD42E006008441C9B673B90767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnBlendOut_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnBlendOut_9B9214DD42E006008441C9B673B90767");

	ABP_FurnitureContainer_Chest_C_OnBlendOut_9B9214DD42E006008441C9B673B90767_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_9B9214DD42E006008441C9B673B90767
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::OnCompleted_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.OnCompleted_9B9214DD42E006008441C9B673B90767");

	ABP_FurnitureContainer_Chest_C_OnCompleted_9B9214DD42E006008441C9B673B90767_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureContainer_Chest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ReceiveBeginPlay");

	ABP_FurnitureContainer_Chest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.InteractCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::InteractCancel(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.InteractCancel");

	ABP_FurnitureContainer_Chest_C_InteractCancel_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureContainer_Chest_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.Interact");

	ABP_FurnitureContainer_Chest_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ExecuteUbergraph_BP_FurnitureContainer_Chest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Chest_C::ExecuteUbergraph_BP_FurnitureContainer_Chest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C.ExecuteUbergraph_BP_FurnitureContainer_Chest");

	ABP_FurnitureContainer_Chest_C_ExecuteUbergraph_BP_FurnitureContainer_Chest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureContainer_Chest_C::AfterRead()
{
	ABP_MasterFurniture_Container_C::AfterRead();

	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
	READ_PTR_FULL(Mesh, USkeletalMeshComponent);
}

void ABP_FurnitureContainer_Chest_C::BeforeDelete()
{
	ABP_MasterFurniture_Container_C::BeforeDelete();

	DELE_PTR_FULL(ObstructionMesh);
	DELE_PTR_FULL(Mesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
