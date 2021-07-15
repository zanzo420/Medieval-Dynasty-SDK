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

// BlueprintGeneratedClass DE_AddItemToPlayersInventory.DE_AddItemToPlayersInventory_C
// 0x0024 (FullSize[0x004C] - InheritedSize[0x0028])
class UDE_AddItemToPlayersInventory_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FDataTableRowHandle                         Item;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int                                                Count;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ItemsConditionInPercent;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Delay;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_AddItemToPlayersInventory.DE_AddItemToPlayersInventory_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_AddItemToPlayersInventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
