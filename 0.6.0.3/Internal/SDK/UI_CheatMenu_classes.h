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

// WidgetBlueprintGeneratedClass UI_CheatMenu.UI_CheatMenu_C
// 0x02D0 (FullSize[0x0530] - InheritedSize[0x0260])
class UUI_CheatMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UComboBoxString*                             AddAnimal_AnimalType;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            AgeCountBox;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            AnimalCountTextBox;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   AnimalsSpawnersCheckbox;                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Box_ItemsPresets;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_AddAnimal;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_AddItem;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ArmorItems;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Autosave;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_BuildingItems;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_BuildPermission;                                       // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ChangeTime;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ChangeWeather;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_CheckAnimalSpawners;                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_CheckPOISpawners;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ChromaEffect;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_DeadMode;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_DemoItems;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FieldItems;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FillWithAnimals;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FillWithAnimals_2;                                     // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FillWithFamilies;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FinishAllBuildings;                                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_FreeCamera;                                            // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetChallenge;                                          // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetChapter;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetCheckQuest;                                         // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetEvent;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetGenericQuest;                                       // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetStory_Clear;                                        // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GetStory_Replace;                                      // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_GodMode;                                               // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_IncreaseAge;                                           // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_IncreaseReputation;                                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_IncreaseSkillPoints;                                   // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_InfiniteStamina;                                       // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_KingdomCheat;                                          // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_LockFreeCamera;                                        // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_NewGeneratorQuest;                                     // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_OwnershipVisibility;                                   // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_PlayWedding;                                           // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Quicksave;                                             // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_RerollPOIs;                                            // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_RerollTaxQuest;                                        // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_SchemeUnlock;                                          // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_SkipSeason;                                            // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_SpawnGhost;                                            // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_SpawnNPC;                                              // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_StopTimeFlow;                                          // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Technology;                                            // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Technology_Max;                                        // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_TeleportToLocation;                                    // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Time_;                                                 // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_Time_2;                                                // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ToggleAnimalsSpawners;                                 // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     btn_ToggleInfiniteWeight;                                  // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_409;                                                // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_45;                                               // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   CheckBox_FreeCamera;                                       // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ChromaEffectChoicer;                                       // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBox_GenerateChallenge;                                // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBox_GeneratedQuests;                                  // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBox_GenerateEvent;                                    // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBoxString;                                            // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBoxString_2;                                          // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ComboBoxString_260;                                        // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            EditableTextBox;                                           // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            EditableTextBox_207;                                       // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             FurnituresComboString;                                     // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            FurnituresFind;                                            // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            HourBox;                                                   // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            KingAgeCountTextBox;                                       // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            KingReputationCountTextBox;                                // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            MinuteBox;                                                 // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   NewKingCheckbox;                                           // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             NPCTypeComboBox;                                           // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   OwnershipCheckbox;                                         // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   PauseBrainCheckbox;                                        // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            ReputationBox;                                             // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            SecondBox;                                                 // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            SkillXPBox;                                                // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                                   SpawnDeadCheckbox;                                         // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StopTimeText;                                              // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            TechnologyCountBox;                                        // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             TeleportLocationBox;                                       // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             Weatherlist;                                               // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FST_Quest_PickedItemsFromGenerator>  BuildingItems;                                             // 0x0518(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AnimalsDamageMultiplier;                                   // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalsHPMultiplier;                                       // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CheatMenu.UI_CheatMenu_C");
		return ptr;
	}



	void FillWithAnimals();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__btn_AddItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_DemoItems_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FieldItems_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_408_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__btn_Technology_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Technology_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_BuildPermission_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_BuildingItems_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Technology_50_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FinishAllBuildings_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_AddItem_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_AddAnimal_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_SpawnNPC_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_SkipSeason_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_InfiniteWeight_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_IncreaseSkillPoints_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_InfiniteStamina_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_ArmorItems_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_ChangeWeather_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FreeCamera_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Quicksave_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_OwnershipVisibility_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_SchemeUnlock_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FillWithAnimals_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_IncreaseAge_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GetStory_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_IncreaseReputation_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_ToggleAnimalsSpawners_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_TeleportToLocation_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FillWithFamilies_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void OnTextChanged_Event_1(const struct FText& Text);
	void BndEvt__btn_Autosave_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GetGenericQuest_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_SpawnGhost_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
	void OnTextChanged_Event_2(const struct FText& Text);
	void BndEvt__btn_RerollTaxQuest_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GetEvent_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GetChallenge_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_KingdomCheat_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_GetCheckQuest_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Die_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_FillWithAnimals_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Time__K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btn_Time__K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_StopTimeFlow_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_RerollPOIs_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_NewGeneratorQuest_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_GetStory_Replace_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_ChromaEffect_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_PlayWedding_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_ToggleAnimalsSpawners_1_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_CheatMenu_btn_ToggleAnimalsSpawners_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CheatMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
