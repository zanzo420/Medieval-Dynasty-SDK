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

// WidgetBlueprintGeneratedClass UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C
// 0x004A (FullSize[0x02AA] - InheritedSize[0x0260])
class UUI_QuestTracker_GoalTalk_ItemSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                                  txt_AmountToDeliver;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ItemsInInventory;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_Quest_PickedItemsFromGenerator          Item;                                                      // 0x0278(0x0018) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       AmountInInventory;                                         // 0x0290(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               MustDeliverAllAtOnce;                                      // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsCompleted;                                               // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_QuestTracker_GoalTalk_ItemSlot(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
