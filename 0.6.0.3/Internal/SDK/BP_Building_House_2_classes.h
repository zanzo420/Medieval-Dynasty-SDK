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

// BlueprintGeneratedClass BP_Building_House_2.BP_Building_House_1_C
// 0x0018 (FullSize[0x0770] - InheritedSize[0x0758])
class ABP_Building_House_1_C : public ABP_MasterBuilding_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             CauldronSecket;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             CampfireSecket;                                            // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Building_House_2.BP_Building_House_1_C");
		return ptr;
	}



	void FoodDemand(float* Demand);
	void TeleportPeople(bool PlayerIncluded);
	void RemovePeople(class ABP_BaseCharacter_C* Person);
	void AddPeople(class ABP_BaseCharacter_C* Person);
	void AutoAssigningPeople();
	void GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData);
	void GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData);
	void CreateFurnitures();
	void ExecuteUbergraph_BP_Building_House_2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
