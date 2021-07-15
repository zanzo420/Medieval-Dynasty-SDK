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

// BlueprintGeneratedClass DC_DialogueItemsInInventory.DC_DialogueItemsInInventory_C
// 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
class UDC_DialogueItemsInInventory_C : public UDialogueConditions
{
public:
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int                                                ObjectiveID;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalID;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DeliverAllItemsAtOnce_;                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_DialogueItemsInInventory.DC_DialogueItemsInInventory_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
