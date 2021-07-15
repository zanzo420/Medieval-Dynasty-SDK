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

// BlueprintGeneratedClass BP_MasterFurniture_Container.BP_MasterFurniture_Container_C
// 0x003C (FullSize[0x0484] - InheritedSize[0x0448])
class ABP_MasterFurniture_Container_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UInventoryComponent_C*                       InventoryComponent;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 AcceptableObjects;                                         // 0x0458(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnFreeContainer;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                ItemCount;                                                 // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CreateAllItems;                                            // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4WDJ[0x3];                                     // 0x047D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxWeight;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFurniture_Container.BP_MasterFurniture_Container_C");
		return ptr;
	}



	void LoadContainerData(const struct FST_SAVE_Containers& FurnitureData, const struct FString& SaveGameVersion);
	void GetContainerDataToSave(struct FST_SAVE_Containers* FurnitureData);
	void UserConstructionScript();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ExecuteUbergraph_BP_MasterFurniture_Container(int EntryPoint);
	void OnFreeContainer__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
