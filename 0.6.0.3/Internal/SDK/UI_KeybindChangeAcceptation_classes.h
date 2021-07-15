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

// WidgetBlueprintGeneratedClass UI_KeybindChangeAcceptation.UI_KeybindChangeAcceptation_C
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
class UUI_KeybindChangeAcceptation_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     btn_Cancel_2;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_12;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_399;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Cancel;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       InputName;                                                 // 0x02A0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UUI_OptionsVerticalMenu_C*                   OptionsMenuReference;                                      // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeybindChangeAcceptation.UI_KeybindChangeAcceptation_C");
		return ptr;
	}



	void BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Cancel();
	void MakeActive(class UTextBlock* txt, class UButton* btn);
	void MakeUnactive(class UTextBlock* txt, class UButton* btn);
	void BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void ShowTaken();
	void ExecuteUbergraph_UI_KeybindChangeAcceptation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
