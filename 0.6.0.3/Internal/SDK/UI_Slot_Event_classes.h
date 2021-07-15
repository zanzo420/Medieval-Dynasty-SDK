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

// WidgetBlueprintGeneratedClass UI_Slot_Event.UI_Slot_Event_C
// 0x01FD (FullSize[0x045D] - InheritedSize[0x0260])
class UUI_Slot_Event_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_KnowledgeSlot;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Name;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Quest_C*                            UI_Journal_Reference;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                                 ButtonNormal;                                              // 0x0288(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ButtonSelected;                                            // 0x0310(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ButtonHovered;                                             // 0x0398(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_EventHistory_Main                       Event;                                                     // 0x0420(0x0038) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                SlotID;                                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsActive;                                                  // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Slot_Event.UI_Slot_Event_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void MakeActive();
	void MakeUnactive();
	void BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Slot_Event(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
