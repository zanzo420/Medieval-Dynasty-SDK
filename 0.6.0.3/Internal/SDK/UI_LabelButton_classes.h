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

// WidgetBlueprintGeneratedClass UI_LabelButton.UI_LabelButton_C
// 0x0229 (FullSize[0x0489] - InheritedSize[0x0260])
class UUI_LabelButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     Button;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_LabelIcon;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_LabelIconBackground;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_LabelName;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0288(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                                 ButtonNormal;                                              // 0x02A0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ButtonSelected;                                            // 0x0328(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnHoveredDispatcher;                                       // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateBrush                                 ButtonHovered;                                             // 0x03C0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseIcon_;                                                  // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_ZAXH[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconToUse;                                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                                IconColorNormal;                                           // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                IconColorActive;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                IconColorHovered;                                          // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsActive;                                                  // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LabelButton.UI_LabelButton_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void MakeActive();
	void MakeUnactive();
	void UpdateIcon(class UTexture2D* IconToUse);
	void BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Unhover();
	void ExecuteUbergraph_UI_LabelButton(int EntryPoint);
	void OnHoveredDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
