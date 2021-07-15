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

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.SubstractNumberOfAnimalsToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::SubstractNumberOfAnimalsToSpawn(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.SubstractNumberOfAnimalsToSpawn");

	ABP_SpawnPointWildAnimal_C_SubstractNumberOfAnimalsToSpawn_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.FindAnimalTypeInSpawner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::FindAnimalTypeInSpawner(const struct FDataTableRowHandle& DataTableRowHandle, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.FindAnimalTypeInSpawner");

	ABP_SpawnPointWildAnimal_C_FindAnimalTypeInSpawner_Params params;
	params.DataTableRowHandle = DataTableRowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.InitAfterLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_AnimalSpawners Data                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::InitAfterLoad(const struct FST_SAVE_AnimalSpawners& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.InitAfterLoad");

	ABP_SpawnPointWildAnimal_C_InitAfterLoad_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDataToSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_AnimalSpawners Data                           (Parm, OutParm, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::GetDataToSave(struct FST_SAVE_AnimalSpawners* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDataToSave");

	ABP_SpawnPointWildAnimal_C_GetDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.CheckAvailability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SpawnPointWildAnimal_C::CheckAvailability(bool Debug, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.CheckAvailability");

	ABP_SpawnPointWildAnimal_C_CheckAvailability_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.RemoveAnimal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GroundAnimalBase_C*  Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::RemoveAnimal(class ABP_GroundAnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.RemoveAnimal");

	ABP_SpawnPointWildAnimal_C_RemoveAnimal_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnPointWildAnimal_C::GetDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDistance");

	ABP_SpawnPointWildAnimal_C_GetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_SpawnPointWildAnimal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.UserConstructionScript");

	ABP_SpawnPointWildAnimal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SpawnPointWildAnimal_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpawnVolume, UBoxComponent);
	READ_PTR_FULL(SpawnerIcon, UBillboardComponent);
	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
	READ_PTR_FULL(Icon, UTexture2D);
}

void ABP_SpawnPointWildAnimal_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpawnVolume);
	DELE_PTR_FULL(SpawnerIcon);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(TextRender);
	DELE_PTR_FULL(Icon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
