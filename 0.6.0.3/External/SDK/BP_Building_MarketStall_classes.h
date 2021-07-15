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

// BlueprintGeneratedClass BP_Building_MarketStall.BP_Building_MarketStall_C
// 0x0028 (FullSize[0x0780] - InheritedSize[0x0758])
class ABP_Building_MarketStall_C : public ABP_MasterBuilding_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        InteriorMesh;                                              // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        S_Building_Stairs_A;                                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      Interiors[0x10];                                           // 0x0770(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Building_MarketStall.BP_Building_MarketStall_C");
		return ptr;
	}



	void HasResouces(bool* Resources);
	void SetShopType(TEnumAsByte<E_ShopType_E_ShopType> Type, bool InitTradingData);
	void GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData);
	void GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData);
	void SetStairs();
	void OnLoaded_F5F1394A4A8EDADA74AE009B2066C208(class UObject* Loaded);
	void CreateFurnitures();
	void SetInteriorMesh();
	void ExecuteUbergraph_BP_Building_MarketStall(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
