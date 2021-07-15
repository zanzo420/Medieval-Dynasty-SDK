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

// WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C
// 0x01B0 (FullSize[0x0438] - InheritedSize[0x0288])
class UUI_QuestTracker_GoalSlot_TalkTo_C : public UUI_QuestTracker_MasterGoalSlot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            RemoveAnimation;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ItemsBox;                                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              TimeBox;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_GoalText;                                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<E_GoalState_E_GoalState>               Completed;                                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AANS[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Goal_Talks                              Goal;                                                      // 0x02C0(0x0178) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C");
		return ptr;
	}



	void CreateItemsWidgets(const struct FST_GenerateItemsForQuest& ST_GenerateItemsForQuest, bool MustDeliverAllAtOnce);
	void Remove();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkTo(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
