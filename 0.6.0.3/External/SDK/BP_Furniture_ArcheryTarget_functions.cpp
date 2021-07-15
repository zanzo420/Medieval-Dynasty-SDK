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

// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.IsInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_ArcheryTarget_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.IsInteractable");

	ABP_Furniture_ArcheryTarget_C_IsInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;
	if (ShowPressUI != nullptr)
		*ShowPressUI = params.ShowPressUI;
	if (ShowTimerUI != nullptr)
		*ShowTimerUI = params.ShowTimerUI;
	if (ShowOnlyName != nullptr)
		*ShowOnlyName = params.ShowOnlyName;
	if (Time != nullptr)
		*Time = params.Time;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_ArcheryTarget_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.OnOwnershipSwap");

	ABP_Furniture_ArcheryTarget_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.CalculatePoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_ArcheryTarget_C::CalculatePoints(const struct FVector& InitialLocation, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.CalculatePoints");

	ABP_Furniture_ArcheryTarget_C_CalculatePoints_Params params;
	params.InitialLocation = InitialLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_ArcheryTarget_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.CheckObstruction");

	ABP_Furniture_ArcheryTarget_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Furniture_ArcheryTarget_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.DisableGhost");

	ABP_Furniture_ArcheryTarget_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Furniture_ArcheryTarget_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.EnableGhost");

	ABP_Furniture_ArcheryTarget_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_ArcheryTarget_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.ReceiveAnyDamage");

	ABP_Furniture_ArcheryTarget_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.ExecuteUbergraph_BP_Furniture_ArcheryTarget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_ArcheryTarget_C::ExecuteUbergraph_BP_Furniture_ArcheryTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C.ExecuteUbergraph_BP_Furniture_ArcheryTarget");

	ABP_Furniture_ArcheryTarget_C_ExecuteUbergraph_BP_Furniture_ArcheryTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Furniture_ArcheryTarget_C::AfterRead()
{
	ABP_MasterFurniture_C::AfterRead();

	READ_PTR_FULL(TargetCenter, UStaticMeshComponent);
	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
}

void ABP_Furniture_ArcheryTarget_C::BeforeDelete()
{
	ABP_MasterFurniture_C::BeforeDelete();

	DELE_PTR_FULL(TargetCenter);
	DELE_PTR_FULL(ObstructionMesh);
	DELE_PTR_FULL(Mesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
