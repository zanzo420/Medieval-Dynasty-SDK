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

// BlueprintGeneratedClass DC_IsItemInPlayerInventory.DC_IsItemInPlayerInventory_C
// 0x0016 (FullSize[0x003E] - InheritedSize[0x0028])
class UDC_IsItemInPlayerInventory_C : public UDialogueConditions
{
public:
	struct FDataTableRowHandle                         Item;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int                                                Count;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WantMore;                                                  // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               WantLess;                                                  // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_IsItemInPlayerInventory.DC_IsItemInPlayerInventory_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
