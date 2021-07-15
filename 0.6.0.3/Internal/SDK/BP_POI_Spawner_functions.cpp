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

// Function BP_POI_Spawner.BP_POI_Spawner_C.RollNumberOfSeasons
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::RollNumberOfSeasons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.RollNumberOfSeasons");

	ABP_POI_Spawner_C_RollNumberOfSeasons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCustom
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnCustom(class AActor* Actor, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCustom");

	ABP_POI_Spawner_C_SpawnCustom_Params params;
	params.Actor = Actor;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFromSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_Helper_Spawner_Indices> Spawns                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<int, struct FST_InventoryItemsArray> Container                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FST_SAVE_Spawner_Animal> Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_SAVE_Spawner_Item> Item                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_POI_Spawner_C::SpawnFromSave(class ABP_SystemsManager_C** SystemsManagerReference, TArray<struct FST_Helper_Spawner_Indices>* Spawns, TMap<int, struct FST_InventoryItemsArray> Container, TArray<struct FST_SAVE_Spawner_Animal>* Animal, TArray<struct FST_SAVE_Spawner_Item>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFromSave");

	ABP_POI_Spawner_C_SpawnFromSave_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;
	if (Spawns != nullptr)
		*Spawns = params.Spawns;
	if (Animal != nullptr)
		*Animal = params.Animal;
	if (Item != nullptr)
		*Item = params.Item;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Init");

	ABP_POI_Spawner_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FST_ItemResource> V_ChestItems                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                  TypeOfContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnChestWithItems(const struct FTransform& Place, TArray<struct FST_ItemResource>* V_ChestItems, class UClass* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems");

	ABP_POI_Spawner_C_SpawnChestWithItems_Params params;
	params.Place = Place;
	params.TypeOfContainer = TypeOfContainer;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (V_ChestItems != nullptr)
		*V_ChestItems = params.V_ChestItems;
	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.CheckForBuildings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Available                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_POI_Spawner_C::CheckForBuildings(bool Debug, bool* Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.CheckForBuildings");

	ABP_POI_Spawner_C_CheckForBuildings_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMeshes
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::SpawnMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMeshes");

	ABP_POI_Spawner_C_SpawnMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddMesh");

	ABP_POI_Spawner_C_AddMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddFurniture
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddFurniture");

	ABP_POI_Spawner_C_AddFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddContainer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddContainer");

	ABP_POI_Spawner_C_AddContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayPreview
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::DisplayPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayPreview");

	ABP_POI_Spawner_C_DisplayPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayArrows
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::DisplayArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayArrows");

	ABP_POI_Spawner_C_DisplayArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddItem
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddItem");

	ABP_POI_Spawner_C_AddItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimal
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddAnimal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimal");

	ABP_POI_Spawner_C_AddAnimal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.AddNPC
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::AddNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.AddNPC");

	ABP_POI_Spawner_C_AddNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.Spawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::Spawn(class ABP_SystemsManager_C** SystemsManagerReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Spawn");

	ABP_POI_Spawner_C_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnMesh(class UStaticMesh* Mesh, const struct FTransform& Place, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMesh");

	ABP_POI_Spawner_C_SpawnMesh_Params params;
	params.Mesh = Mesh;
	params.Place = Place;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFurniture
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Furniture                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Ownership_E_Ownership> Ownership                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnFurniture(class UClass* Furniture, TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFurniture");

	ABP_POI_Spawner_C_SpawnFurniture_Params params;
	params.Furniture = Furniture;
	params.Ownership = Ownership;
	params.Place = Place;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnItem
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     What                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int                            HowMuch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Physics                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_POI_Spawner_C::SpawnItem(const struct FDataTableRowHandle& What, int HowMuch, const struct FTransform& Place, int Index, float Condition, bool Physics)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnItem");

	ABP_POI_Spawner_C_SpawnItem_Params params;
	params.What = What;
	params.HowMuch = HowMuch;
	params.Place = Place;
	params.Index = Index;
	params.Condition = Condition;
	params.Physics = Physics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleNPC           Who                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int                            HowMany                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnNPC(const struct FST_SimpleNPC& Who, int HowMany, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC");

	ABP_POI_Spawner_C_SpawnNPC_Params params;
	params.Who = Who;
	params.HowMany = HowMany;
	params.Place = Place;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimal
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     What                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int                            HowMany                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Place                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ABP_SystemsManager_C*    SystemsManagerReference        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::SpawnAnimal(const struct FDataTableRowHandle& What, int HowMany, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index, float HP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimal");

	ABP_POI_Spawner_C_SpawnAnimal_Params params;
	params.What = What;
	params.HowMany = HowMany;
	params.Place = Place;
	params.Index = Index;
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemsManagerReference != nullptr)
		*SystemsManagerReference = params.SystemsManagerReference;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::ClearSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawns");

	ABP_POI_Spawner_C_ClearSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript");

	ABP_POI_Spawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawnerSettings
// (BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::ClearSpawnerSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawnerSettings");

	ABP_POI_Spawner_C_ClearSpawnerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.Preview
// (BlueprintCallable, BlueprintEvent)
void ABP_POI_Spawner_C::Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.Preview");

	ABP_POI_Spawner_C_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_POI_Spawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ReceiveBeginPlay");

	ABP_POI_Spawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_POI_Spawner_C::ExecuteUbergraph_BP_POI_Spawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner");

	ABP_POI_Spawner_C_ExecuteUbergraph_BP_POI_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
