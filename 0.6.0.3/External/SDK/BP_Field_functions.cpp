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

// Function BP_Field.BP_Field_C.GetMeshComponentForStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::GetMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.GetMeshComponentForStage");

	ABP_Field_C_GetMeshComponentForStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;

}


// Function BP_Field.BP_Field_C.GetInteractName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_Field_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.GetInteractName");

	ABP_Field_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_Field.BP_Field_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.GetInteractTool_UI");

	ABP_Field_C_GetInteractTool_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;
	if (BagMode != nullptr)
		*BagMode = params.BagMode;
	if (BuildingMode != nullptr)
		*BuildingMode = params.BuildingMode;

}


// Function BP_Field.BP_Field_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Field_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.IsToolNeeded");

	ABP_Field_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Field.BP_Field_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Field_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.IsToolInteractable_UI");

	ABP_Field_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_Field.BP_Field_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.GetInteractTool");

	ABP_Field_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_Field.BP_Field_C.IsToolInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Field_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.IsToolInteractable");

	ABP_Field_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_Field.BP_Field_C.IsInteractable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowPressUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowTimerUI                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowOnlyName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.IsInteractable");

	ABP_Field_C_IsInteractable_Params params;
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


// Function BP_Field.BP_Field_C.GenerateDestruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::GenerateDestruction(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.GenerateDestruction");

	ABP_Field_C_GenerateDestruction_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Field.BP_Field_C.PlantSlotInteraction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CheckRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SkilledFarmerBoost             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemResourceOwner> Items                          (Parm, OutParm)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::PlantSlotInteraction(float CheckRadius, const struct FVector& Location, float SkilledFarmerBoost, TArray<struct FST_ItemResourceOwner>* Items, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.PlantSlotInteraction");

	ABP_Field_C_PlantSlotInteraction_Params params;
	params.CheckRadius = CheckRadius;
	params.Location = Location;
	params.SkilledFarmerBoost = SkilledFarmerBoost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Count != nullptr)
		*Count = params.Count;

}


// Function BP_Field.BP_Field_C.ToolInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_Field_C::ToolInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.ToolInteraction");

	ABP_Field_C_ToolInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Field.BP_Field_C.ChunkInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Field_C::ChunkInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool Timer, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.ChunkInteraction");

	ABP_Field_C_ChunkInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Timer = Timer;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Field.BP_Field_C.InitInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Field_C::InitInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.InitInstances");

	ABP_Field_C_InitInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Field.BP_Field_C.SeasonalUpdateChunk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Field_C::SeasonalUpdateChunk(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Field.BP_Field_C.SeasonalUpdateChunk");

	ABP_Field_C_SeasonalUpdateChunk_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Field_C::AfterRead()
{
	ABP_MasterField_C::AfterRead();

	READ_PTR_FULL(Mesh_Poppy, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Poppy_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Carrot_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Cabbage_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Onion_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Beetroot_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Flax_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Oat_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Rye_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh__Wheat_Harvested, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Carrot_Winter, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Carrot_Spring, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Cabbage_Summer, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Cabbage_Spring, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Onion, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Beetroot, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Flax, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Oat, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Rye, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Wheat_Autumn, UHierarchicalInstancedStaticMeshComponent);
	READ_PTR_FULL(Mesh_Wheat_Spring, UHierarchicalInstancedStaticMeshComponent);
}

void ABP_Field_C::BeforeDelete()
{
	ABP_MasterField_C::BeforeDelete();

	DELE_PTR_FULL(Mesh_Poppy);
	DELE_PTR_FULL(Mesh_Poppy_Harvested);
	DELE_PTR_FULL(Mesh_Carrot_Harvested);
	DELE_PTR_FULL(Mesh_Cabbage_Harvested);
	DELE_PTR_FULL(Mesh_Onion_Harvested);
	DELE_PTR_FULL(Mesh_Beetroot_Harvested);
	DELE_PTR_FULL(Mesh_Flax_Harvested);
	DELE_PTR_FULL(Mesh_Oat_Harvested);
	DELE_PTR_FULL(Mesh_Rye_Harvested);
	DELE_PTR_FULL(Mesh__Wheat_Harvested);
	DELE_PTR_FULL(Mesh_Carrot_Winter);
	DELE_PTR_FULL(Mesh_Carrot_Spring);
	DELE_PTR_FULL(Mesh_Cabbage_Summer);
	DELE_PTR_FULL(Mesh_Cabbage_Spring);
	DELE_PTR_FULL(Mesh_Onion);
	DELE_PTR_FULL(Mesh_Beetroot);
	DELE_PTR_FULL(Mesh_Flax);
	DELE_PTR_FULL(Mesh_Oat);
	DELE_PTR_FULL(Mesh_Rye);
	DELE_PTR_FULL(Mesh_Wheat_Autumn);
	DELE_PTR_FULL(Mesh_Wheat_Spring);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
