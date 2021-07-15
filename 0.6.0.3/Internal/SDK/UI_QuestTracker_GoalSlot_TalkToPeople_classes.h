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

// WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_TalkToPeople.UI_QuestTracker_GoalSlot_TalkToPeople_C
// 0x0070 (FullSize[0x02F8] - InheritedSize[0x0288])
class UUI_QuestTracker_GoalSlot_TalkToPeople_C : public UUI_QuestTracker_MasterGoalSlot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            RemoveAnimation;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              TimeBox;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_GoalText;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                      // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<E_GoalState_E_GoalState>               Completed;                                                 // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K6RN[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Goal_TalkToPeople                       Goal;                                                      // 0x02C8(0x0030) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestTracker_GoalSlot_TalkToPeople.UI_QuestTracker_GoalSlot_TalkToPeople_C");
		return ptr;
	}



	void Remove();
	void Construct();
	void ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkToPeople(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
