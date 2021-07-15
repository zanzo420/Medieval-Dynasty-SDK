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

// BlueprintGeneratedClass BP_Building_Mine.BP_Building_Mine_C
// 0x0010 (FullSize[0x0768] - InheritedSize[0x0758])
class ABP_Building_Mine_C : public ABP_MasterBuilding_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             ChestSocket;                                               // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Building_Mine.BP_Building_Mine_C");
		return ptr;
	}



	void RemovePeople(class ABP_BaseCharacter_C* Person);
	void GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData);
	void GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData);
	void CreateFurnitures();
	void DestroyBuilding();
	void ExecuteFinishLogic(bool Load);
	void ExecuteUbergraph_BP_Building_Mine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
