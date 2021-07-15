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

// Function BP_Orchard.BP_Orchard_C.CanBeDestroyed?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanBeDestroyed_                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Orchard_C::CanBeDestroyed_(bool* CanBeDestroyed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.CanBeDestroyed?");

	ABP_Orchard_C_CanBeDestroyed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBeDestroyed_ != nullptr)
		*CanBeDestroyed_ = params.CanBeDestroyed_;

}


// Function BP_Orchard.BP_Orchard_C.GenerateDestruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::GenerateDestruction(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GenerateDestruction");

	ABP_Orchard_C_GenerateDestruction_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.ChunkInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Orchard_C::ChunkInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool Timer, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.ChunkInteraction");

	ABP_Orchard_C_ChunkInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Timer = Timer;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.GetAdditionalMeshComponentForStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::GetAdditionalMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GetAdditionalMeshComponentForStage");

	ABP_Orchard_C_GetAdditionalMeshComponentForStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;

}


// Function BP_Orchard.BP_Orchard_C.UpdateChunkGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::UpdateChunkGround(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.UpdateChunkGround");

	ABP_Orchard_C_UpdateChunkGround_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.ToolInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseChunkData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Chunks              ChunkData                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_Orchard_C::ToolInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool UseChunkData, const struct FST_Chunks& ChunkData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.ToolInteraction");

	ABP_Orchard_C_ToolInteraction_Params params;
	params.BaseCharacter = BaseCharacter;
	params.UseChunkData = UseChunkData;
	params.ChunkData = ChunkData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.GetInteractName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   InteractName                   (Parm, OutParm)
void ABP_Orchard_C::GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GetInteractName");

	ABP_Orchard_C_GetInteractName_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractName != nullptr)
		*InteractName = params.InteractName;

}


// Function BP_Orchard.BP_Orchard_C.GetInteractTool_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BagMode_E_BagMode> BagMode                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GetInteractTool_UI");

	ABP_Orchard_C_GetInteractTool_UI_Params params;
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


// Function BP_Orchard.BP_Orchard_C.IsToolNeeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheckTools                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Orchard_C::IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.IsToolNeeded");

	ABP_Orchard_C_IsToolNeeded_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckTools != nullptr)
		*CheckTools = params.CheckTools;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_Orchard.BP_Orchard_C.IsToolInteractable_UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Orchard_C::IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.IsToolInteractable_UI");

	ABP_Orchard_C_IsToolInteractable_UI_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_Orchard.BP_Orchard_C.GetInteractTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   Tool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GetInteractTool");

	ABP_Orchard_C_GetInteractTool_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tool != nullptr)
		*Tool = params.Tool;

}


// Function BP_Orchard.BP_Orchard_C.IsInteractable
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
void ABP_Orchard_C::IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.IsInteractable");

	ABP_Orchard_C_IsInteractable_Params params;
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


// Function BP_Orchard.BP_Orchard_C.IsToolInteractable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Interactable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Possibility                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Orchard_C::IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.IsToolInteractable");

	ABP_Orchard_C_IsToolInteractable_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interactable != nullptr)
		*Interactable = params.Interactable;
	if (Possibility != nullptr)
		*Possibility = params.Possibility;

}


// Function BP_Orchard.BP_Orchard_C.SeasonalUpdateChunk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChunkId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::SeasonalUpdateChunk(int ChunkId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.SeasonalUpdateChunk");

	ABP_Orchard_C_SeasonalUpdateChunk_Params params;
	params.ChunkId = ChunkId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.UpdateMeshes
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Orchard_C::UpdateMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.UpdateMeshes");

	ABP_Orchard_C_UpdateMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.GetMeshComponentForStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::GetMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.GetMeshComponentForStage");

	ABP_Orchard_C_GetMeshComponentForStage_Params params;
	params.PlantStage = PlantStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshComponent != nullptr)
		*StaticMeshComponent = params.StaticMeshComponent;

}


// Function BP_Orchard.BP_Orchard_C.InitInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Orchard_C::InitInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.InitInstances");

	ABP_Orchard_C_InitInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E");

	ABP_Orchard_C_OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F");

	ABP_Orchard_C_OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4");

	ABP_Orchard_C_OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_51C49ED744F870B3EB3DD98D89604DB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_51C49ED744F870B3EB3DD98D89604DB6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_51C49ED744F870B3EB3DD98D89604DB6");

	ABP_Orchard_C_OnLoaded_51C49ED744F870B3EB3DD98D89604DB6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_222D89C1496B5C445688F388BA2043F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_222D89C1496B5C445688F388BA2043F7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_222D89C1496B5C445688F388BA2043F7");

	ABP_Orchard_C_OnLoaded_222D89C1496B5C445688F388BA2043F7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_9785A01D42DB795A38CB589DED83761E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_9785A01D42DB795A38CB589DED83761E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_9785A01D42DB795A38CB589DED83761E");

	ABP_Orchard_C_OnLoaded_9785A01D42DB795A38CB589DED83761E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073");

	ABP_Orchard_C_OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_12C8322D44974212EF81D8974382BD7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_12C8322D44974212EF81D8974382BD7A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_12C8322D44974212EF81D8974382BD7A");

	ABP_Orchard_C_OnLoaded_12C8322D44974212EF81D8974382BD7A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_5457B7784E13A01A8812188E76A8F8FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_5457B7784E13A01A8812188E76A8F8FB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_5457B7784E13A01A8812188E76A8F8FB");

	ABP_Orchard_C_OnLoaded_5457B7784E13A01A8812188E76A8F8FB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8");

	ABP_Orchard_C_OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7");

	ABP_Orchard_C_OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_7E49F5824B888C9B1FD19DA2EE501163
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_7E49F5824B888C9B1FD19DA2EE501163(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_7E49F5824B888C9B1FD19DA2EE501163");

	ABP_Orchard_C_OnLoaded_7E49F5824B888C9B1FD19DA2EE501163_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33");

	ABP_Orchard_C_OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_FC4A34B94C818928FE536889C67E50EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_FC4A34B94C818928FE536889C67E50EA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_FC4A34B94C818928FE536889C67E50EA");

	ABP_Orchard_C_OnLoaded_FC4A34B94C818928FE536889C67E50EA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F");

	ABP_Orchard_C_OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_3E069F4745B8B84D15236FB32E03DFE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_3E069F4745B8B84D15236FB32E03DFE6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_3E069F4745B8B84D15236FB32E03DFE6");

	ABP_Orchard_C_OnLoaded_3E069F4745B8B84D15236FB32E03DFE6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_444579C246696AC34CFDBDA68FAA90BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_444579C246696AC34CFDBDA68FAA90BF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_444579C246696AC34CFDBDA68FAA90BF");

	ABP_Orchard_C_OnLoaded_444579C246696AC34CFDBDA68FAA90BF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4");

	ABP_Orchard_C_OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_FAA0540D4C51080925409598469E5FE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_FAA0540D4C51080925409598469E5FE9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_FAA0540D4C51080925409598469E5FE9");

	ABP_Orchard_C_OnLoaded_FAA0540D4C51080925409598469E5FE9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_31AC4F5748F82636BD5BF6918986A652
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_31AC4F5748F82636BD5BF6918986A652(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_31AC4F5748F82636BD5BF6918986A652");

	ABP_Orchard_C_OnLoaded_31AC4F5748F82636BD5BF6918986A652_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D");

	ABP_Orchard_C_OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_142EA7314D0B2667D3AD5B9FB8589681
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_142EA7314D0B2667D3AD5B9FB8589681(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_142EA7314D0B2667D3AD5B9FB8589681");

	ABP_Orchard_C_OnLoaded_142EA7314D0B2667D3AD5B9FB8589681_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_23A3D7214CFA255F51B3CAB112D869BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_23A3D7214CFA255F51B3CAB112D869BD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_23A3D7214CFA255F51B3CAB112D869BD");

	ABP_Orchard_C_OnLoaded_23A3D7214CFA255F51B3CAB112D869BD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06");

	ABP_Orchard_C_OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_291A46F240F9782F181121B58DE33847
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_291A46F240F9782F181121B58DE33847(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_291A46F240F9782F181121B58DE33847");

	ABP_Orchard_C_OnLoaded_291A46F240F9782F181121B58DE33847_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB");

	ABP_Orchard_C_OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_684D9F5B4DCE0173B9E831844F207701
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_684D9F5B4DCE0173B9E831844F207701(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_684D9F5B4DCE0173B9E831844F207701");

	ABP_Orchard_C_OnLoaded_684D9F5B4DCE0173B9E831844F207701_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_EE82731845CCBCFDCD303998CAE67BAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_EE82731845CCBCFDCD303998CAE67BAA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_EE82731845CCBCFDCD303998CAE67BAA");

	ABP_Orchard_C_OnLoaded_EE82731845CCBCFDCD303998CAE67BAA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E");

	ABP_Orchard_C_OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.InitMeshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Orchard_C::InitMeshes(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.InitMeshes");

	ABP_Orchard_C_InitMeshes_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Orchard.BP_Orchard_C.ExecuteUbergraph_BP_Orchard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Orchard_C::ExecuteUbergraph_BP_Orchard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Orchard.BP_Orchard_C.ExecuteUbergraph_BP_Orchard");

	ABP_Orchard_C_ExecuteUbergraph_BP_Orchard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
