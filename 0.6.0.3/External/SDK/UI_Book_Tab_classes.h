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

// WidgetBlueprintGeneratedClass UI_Book_Tab.UI_Book_Tab_C
// 0x0149 (FullSize[0x03A9] - InheritedSize[0x0260])
class UUI_Book_Tab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     btn_Tab;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_TabNotification;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Tab;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       TabName;                                                   // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                                 ButtonNormal;                                              // 0x0298(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ButtonHovered;                                             // 0x0320(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsActive;                                                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Book_Tab.UI_Book_Tab_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void MakeActive();
	void MakeUnactive();
	void SetTabNotificationVisibility(bool ShouldBeVisible);
	void BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Book_Tab(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
