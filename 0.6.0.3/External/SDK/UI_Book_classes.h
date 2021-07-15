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

// WidgetBlueprintGeneratedClass UI_Book.UI_Book_C
// 0x01E0 (FullSize[0x0440] - InheritedSize[0x0260])
class UUI_Book_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                                CanvasPanel_189;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainBookCanvas;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBox_69;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TabSlot;                                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TutorialSlot;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_AssignToQuickSlotNotification_C*         UI_AssignToQuickSlotNotification;                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_MainTabs_C*                         UI_Book_MainTabs;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_C*                                   UI_HUD;                                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               BookVisibility;                                            // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KSTS[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SelectedMainTabID;                                         // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Book_Tab_C*>                      MainTabsButtons;                                           // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> SelectedMainTab;                                           // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ITC9[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SelectedMagazineItemName;                                  // 0x02D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UI_NextLabelPressed;                                       // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_PreviousLabelPressed;                                   // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MQHT[0x2];                                     // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGM_MedievalDynasty_C*                       GameModeReference;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelectedItemChange;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSelectedQuestChange;                                     // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               LeftMouseButtonPressed;                                    // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X1OQ[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MapMaterialInstance;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       TabsWithNotifications;                                     // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_ItemInventorys                          tmpItemToTransferReference;                                // 0x0328(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TmpTransferItemName;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Skills_C*                           SkillsTabReference;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Quest_C*                            QuestTabReference;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Map_C*                              MapTabReference;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Management_C*                       ManagementTabReference;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Inventory_C*                        InventoryTabReference;                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Technology_C*                       TechnologyTabReference;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HusbandryAI_C*                           HusbandryAnimalToAssignReference;                          // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MapFilters_E_MapFilters>             SelectedMapFilter;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DH5W[0x3];                                     // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SelectedTabCategoryID;                                     // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OpenedBuildingsLists[0x50];                                // 0x03A0(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      OpenedAnimalsLists[0x50];                                  // 0x03F0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Book.UI_Book_C");
		return ptr;
	}



	void UI_Confirm_Held();
	void UI_Confirm_Released();
	void UI_Confirm_Pressed(bool* HoldingExecutesEvent);
	void UI_Drop_Held();
	void UI_Drop_Released();
	void UI_Drop_Pressed(bool* HoldingExecutesEvent);
	void CreateUITutorialIfNeeded();
	void SetTabNotification(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> Tab, bool Value);
	void CheckSkillsAvailability();
	void DestroyTabs();
	void StartPledgeTaskFromDialogue(class ABP_NPC_C* NPCReference);
	void SortArrayInt(TArray<int>* InputArray1, bool Descending_, TArray<int>* Output_Array);
	void SetMainTab(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab);
	void IncreaseMainTabID();
	void DecreaseMainTabID();
	void MakeMainTabsUnactive();
	void MakeMainTabActive(int SelectedMainTabID);
	void CheckIsPopUpDisabled(bool* NewParam);
	void ChangeVisibilityOnSectionChange(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab);
	void Construct();
	void UI_Up();
	void UI_Down();
	void UI_NextLabel();
	void UI_PreviousLabel();
	void UI_NextSection();
	void UI_PreviousSection();
	void UI_AdditionalInteraction();
	void UI_Exit();
	void InitInventory();
	void OpenHusbandryAnimalAssignment(class ABP_HusbandryAI_C* AnimalReference);
	void UI_SpecialAction();
	void ExecuteUbergraph_UI_Book(int EntryPoint);
	void OnSelectedQuestChange__DelegateSignature(class UUI_Slot_Quest_C* QuestReference);
	void OnSelectedItemChange__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
