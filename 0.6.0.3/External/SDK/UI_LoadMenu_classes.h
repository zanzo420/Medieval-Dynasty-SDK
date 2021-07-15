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

// WidgetBlueprintGeneratedClass UI_LoadMenu.UI_LoadMenu_C
// 0x0128 (FullSize[0x0388] - InheritedSize[0x0260])
class UUI_LoadMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_ConfirmationPanelSlot;                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_DeleteSave;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_LoadGame;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_OptionsBack;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              DecisionInfo;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_110;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  SB_SaveSlots;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Back;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ConfirmLetter;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_DeleteSave;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_DropLetter;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_LoadGame;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveGameSlot_Labels_C*                   UI_SaveGameSlot_Labels;                                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                SelectedSaveSlot;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6YLO[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        tmp_Saves_NameIndexes;                                     // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Time>                            tmp_Saves_GameTimes;                                       // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TMP_WasSorted_;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FV9D[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_MenuButton_C*                            MenuButtonReference;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDateTime>                           TmpSaveComputerTimes;                                      // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_MainMenu_C*                              MainMenuReference;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmp_QuicksaveIndex;                                        // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmp_AutosaveIndex;                                         // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             tmp_SaveGameVersions;                                      // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             tmp_UserSaveNames;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoadMenu.UI_LoadMenu_C");
		return ptr;
	}



	void DropAction();
	void ConfirmSelection();
	void MakeSaveSlotActive(int SelectedSaveSlot);
	void MakeSaveSlotsUnactive();
	void IncreaseSelectedSaveSlotIndex();
	void DecreaseSelectedSaveSlotIndex();
	void LoadSavedGames();
	void DeleteSavedGameSlot(bool Accepted_);
	void LoadGameFromSlot();
	void SortAndReSpawnSaveSlots();
	void BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void MakeActive(class UTextBlock* txt, class UButton* btn);
	void MakeUnactive(class UTextBlock* txt, class UButton* btn);
	void BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void CancelAction();
	void BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void ExecuteUbergraph_UI_LoadMenu(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
