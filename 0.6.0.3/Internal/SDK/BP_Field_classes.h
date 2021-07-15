#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Field.BP_Field_C
// 0x00AE (FullSize[0x0538] - InheritedSize[0x048A])
class ABP_Field_C : public ABP_MasterField_C
{
public:
	unsigned char                                      UnknownData_RZ0W[0x6];                                     // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Poppy;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Poppy_Harvested;                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Harvested;                                     // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Harvested;                                    // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Onion_Harvested;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Beetroot_Harvested;                                   // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Flax_Harvested;                                       // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Oat_Harvested;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Rye_Harvested;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh__Wheat_Harvested;                                     // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Winter;                                        // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Spring;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Summer;                                       // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Spring;                                       // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Onion;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Beetroot;                                             // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Flax;                                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Oat;                                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Rye;                                                  // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Wheat_Autumn;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Wheat_Spring;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Field.BP_Field_C");
		return ptr;
	}



	void GetMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GenerateDestruction(float Intensity);
	void PlantSlotInteraction(float CheckRadius, const struct FVector& Location, float SkilledFarmerBoost, TArray<struct FST_ItemResourceOwner>* Items, int* Count);
	void ToolInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ChunkInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool Timer, const struct FHitResult& Hit);
	void InitInstances();
	void SeasonalUpdateChunk(int ChunkId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
