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

// WidgetBlueprintGeneratedClass UI_Slot_Management_Profession.UI_Slot_Management_Profession_C
// 0x0079 (FullSize[0x02D9] - InheritedSize[0x0260])
class UUI_Slot_Management_Profession_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_ItemSelection;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button;                                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ImageSkill;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      img_Icon;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Name;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Skills;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHoveredDispatcher;                                       // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                Index;                                                     // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OMZL[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Profession                              ProfessionData;                                            // 0x02B0(0x0020) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_MasterAssignment_C*                      UI_Assignment;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsActive;                                                  // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Slot_Management_Profession.UI_Slot_Management_Profession_C");
		return ptr;
	}



	void MakeActive();
	void MakeUnactive();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Slot_Management_Profession(int EntryPoint);
	void OnHoveredDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
