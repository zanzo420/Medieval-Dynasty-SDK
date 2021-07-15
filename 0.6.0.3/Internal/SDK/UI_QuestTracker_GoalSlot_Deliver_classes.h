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

// WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_Deliver.UI_QuestTracker_GoalSlot_Deliver_C
// 0x0079 (FullSize[0x0301] - InheritedSize[0x0288])
class UUI_QuestTracker_GoalSlot_Deliver_C : public UUI_QuestTracker_MasterGoalSlot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            RemoveAnimation;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_295;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              TimeBox;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_GoalText;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_InEquipment;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ItemName;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       GoalText;                                                  // 0x02C0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                InEquipment;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ToDeliver;                                                 // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                      // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventoryComponent_C*                       PlayerInventoryComponent;                                  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       ItemIDName;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_GoalState_E_GoalState>               Completed;                                                 // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_Deliver.UI_QuestTracker_GoalSlot_Deliver_C");
		return ptr;
	}



	void Remove();
	void Construct();
	void ExecuteUbergraph_UI_QuestTracker_GoalSlot_Deliver(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
