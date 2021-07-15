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

// WidgetBlueprintGeneratedClass UI_MasterEvent.UI_MasterEvent_C
// 0x013A (FullSize[0x039A] - InheritedSize[0x0260])
class UUI_MasterEvent_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                ConsequencesVerticalBox;                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_11;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_13;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_14;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_161;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_230;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_366;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_EventIcon;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputConfirm;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           ItemList;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           ListOfButtons;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_EventDescription;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_EventName;                                             // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_SeasonEvent                             Event;                                                     // 0x02D0(0x0060) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Event_ButtonConsequences_C*>      EventItemsForList;                                         // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               ReadyToClose;                                              // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M9GH[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         NextEvent;                                                 // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FST_ItemsToRemove>                   ItemFoundIn;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUI_EventButton_C*>                   EventButtons;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                SelectedEventButtonIndex;                                  // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NM5J[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_EventDetails_C*                          UIEventDetails;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EventName;                                                 // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasChoiceLimitedByItems;                                   // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Cheat_Event;                                               // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MasterEvent.UI_MasterEvent_C");
		return ptr;
	}



	void CheckIfHadItemRestriction(TArray<struct FST_EventButtons>* Buttons, int ButtonNumber);
	void AddEventToHistory();
	void AddChildToListOfConsequences(class UUI_Event_ButtonConsequences_C* Consequence);
	void UI_AdditionalInteraction();
	void UI_Cancel();
	void UI_Up();
	void UI_Down();
	void UI_Left();
	void UI_Right();
	void MakeButtonActive(int SelectedEventButtonIndex);
	void MakeButtonsUnactive();
	void ChangeSelectedEventButton(int SelectedEventButtonIndex);
	void RemoveRosourcesFromRestrictions();
	void AddEventEffectOtherInfo(TEnumAsByte<E_EventEffect_VillageType_E_EventEffect_VillageType> OtherEffectType, float Value, TArray<class ABP_MasterBuilding_C*>* BuildingsReference, TArray<class ABP_MasterField_C*>* FieldsReference, TArray<struct FST_ItemRestriction>* RemovedResources);
	void ItemRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable);
	void VillageRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable);
	void SkillRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable);
	void AddEventEffectNPCInfo(TEnumAsByte<E_EventEffect_NPCType_E_EventEffect_NPCType> NPCEffectType, float Value, TEnumAsByte<E_Skills_E_Skills> SkillType, class ABP_NPC_C* NPCReference, bool AffectsEveryone);
	void AddEventEffectPlayerInfo(TEnumAsByte<E_EventEffect_PlayerType_E_EventEffect_PlayerType> PlayerEffectType, int Value, TEnumAsByte<E_Skills_E_Skills> SkillType, const struct FST_ItemRestriction& Item);
	void CheckButtonRestrictions(const struct FST_EventButtons& EventButtonReference, bool* IsOptionAvailable);
	void InitEvent(const struct FST_SeasonEvent& Event, bool Show_, bool IsTutorialEvent_, const struct FName& EventName, bool CheatEvent);
	void EventContinue1();
	void Construct();
	void ShowEvent();
	void EventContinue2();
	void EventContinue3();
	void EventContinue4();
	void ConfirmSelection();
	void AdditionalInfo();
	void CloseWindow();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void ExecuteUbergraph_UI_MasterEvent(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
