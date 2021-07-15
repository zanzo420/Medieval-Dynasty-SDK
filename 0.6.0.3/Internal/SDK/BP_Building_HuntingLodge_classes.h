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

// BlueprintGeneratedClass BP_Building_HuntingLodge.BP_Building_HuntingLodge_C
// 0x0030 (FullSize[0x0788] - InheritedSize[0x0758])
class ABP_Building_HuntingLodge_C : public ABP_MasterBuilding_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                             BarrelSocket;                                              // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        S_Building_Stairs_A;                                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             DryingRackSocket;                                          // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             ChestSocket;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             WorkbenchSocket;                                           // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Building_HuntingLodge.BP_Building_HuntingLodge_C");
		return ptr;
	}



	void GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData);
	void GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData);
	void SetStairs();
	void CreateFurnitures();
	void ExecuteFinishLogic(bool Load);
	void ExecuteUbergraph_BP_Building_HuntingLodge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
