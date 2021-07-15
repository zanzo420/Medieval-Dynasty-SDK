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

// WidgetBlueprintGeneratedClass UI_Technology_SchemeSlot.UI_Technology_SchemeSlot_C
// 0x00DA (FullSize[0x033A] - InheritedSize[0x0260])
class UUI_Technology_SchemeSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_Scheme;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_91;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      icn_Scheme;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_181;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_BottomSelection;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_SchemeBought;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_TopSelection;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher_Cost;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Cost;                                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Purchased;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_SchemeName;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                         RecipeType;                                                // 0x02C0(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FurnitureType;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FenceType;                                                 // 0x02E0(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FST_OtherTechnologySchemes                  OtherSchemeType;                                           // 0x02F0(0x0038) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                TechnologyVillageManagerID;                                // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NH9F[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_Book_Technology_C*                       ParentWidget;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Locked_;                                                   // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SufficientTechnology_;                                     // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Technology_SchemeSlot.UI_Technology_SchemeSlot_C");
		return ptr;
	}



	void UpdateSlotState();
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void MakeActive();
	void MakeUnactive();
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BuyScheme();
	void Hover();
	void Unhover();
	void ExecuteUbergraph_UI_Technology_SchemeSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
