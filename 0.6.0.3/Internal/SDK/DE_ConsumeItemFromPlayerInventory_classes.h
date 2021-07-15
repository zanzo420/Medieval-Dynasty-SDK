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

// BlueprintGeneratedClass DE_ConsumeItemFromPlayerInventory.DE_ConsumeItemFromPlayerInventory_C
// 0x001C (FullSize[0x0044] - InheritedSize[0x0028])
class UDE_ConsumeItemFromPlayerInventory_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         Item;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int                                                Count;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_ConsumeItemFromPlayerInventory.DE_ConsumeItemFromPlayerInventory_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_ConsumeItemFromPlayerInventory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
