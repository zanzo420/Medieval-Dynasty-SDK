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

// WidgetBlueprintGeneratedClass UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C
// 0x01C0 (FullSize[0x0420] - InheritedSize[0x0260])
class UUI_NewGameConfigurationMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUI_HorizontalOptionButton_Slider_C*         AnimalsDamageMultiplier;                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         AnimalsHPMultiplier;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_SettingsAcceptation;                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MenuButton_C*                            btn_Customize;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_OptionsBack;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_OptionsDefaultSettings;                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_OptionsSelect;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MenuButton_C*                            btn_StartGame;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         BuildingsLimitMultiplier;                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         DaysPerSeason;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DecisionButtons;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableEvents;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnablePoisoning;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableSpoilingFood;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableTemperature;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableUnlimitedFood;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableUnlimitedHP;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableUnlimitedStamina;                                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableUnlimitedWater;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Checkbox_C*       EnableUnlimitedWeight;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                GamePanel;                                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  GameSettingsPanel;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_6;                                                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_10;                                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_110;                                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Main;                                                      // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         NPCNeeds_FoodMultiplier;                                   // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         NPCNeeds_WoodMultiplier;                                   // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HorizontalOptionButton_Slider_C*         TaxMultiplier;                                             // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Accept_2;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Back;                                                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ConfirmLetter;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_DropLetter;                                            // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Select;                                                // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                          // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_5;                                          // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ParentVerticalBox;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGI_MedievalDynasty_C*                       GameInstanceReference;                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorOnHover;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColorNormal;                                           // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_MenuButton_C*>                    MainButtons;                                               // 0x03D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                MainButtonIndex;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OldMousePosition;                                          // 0x03EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SettingsDuringChange;                                      // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasAcceptationOpened;                                      // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YYF2[0x2];                                     // 0x03F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWidget*>                             GameSettingsOptions;                                       // 0x03F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GameplaySettingsIndex;                                     // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5RS6[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_MainMenu_C*                              MainMenuReference;                                         // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C");
		return ptr;
	}



	void DropAction();
	void AdditionalAction();
	void OptionsCancel();
	void ConfirmMainSelection();
	void DecreaseIndex();
	void IncreaseIndex();
	void MakeMainButtonsUnactive();
	void MakeMainButtonActive(int Index);
	void SetCurrentTabButtonID(int ID);
	void IncreaseHorizontalID(int* Target, int Max, int Min);
	void DecreaseHorizontalID(int* Target, int Max, int Min);
	void Construct();
	void BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SettingsLeftArrow();
	void SettingsRightArrow();
	void BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Back();
	void MakeActive(class UTextBlock* txt, class UButton* btn);
	void MakeUnactive(class UTextBlock* txt, class UButton* btn);
	void BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void SetActivityOnHovered();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AcceptSettings();
	void RejectSettings();
	void CancelSettings();
	void GameSettings();
	void SetActivityOnHovered_Game();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void StartGame();
	void ExecuteUbergraph_UI_NewGameConfigurationMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
