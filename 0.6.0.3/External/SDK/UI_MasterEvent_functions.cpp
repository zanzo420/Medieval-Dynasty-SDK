// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_MasterEvent.UI_MasterEvent_C.CheckIfHadItemRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_EventButtons> Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ButtonNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::CheckIfHadItemRestriction(TArray<struct FST_EventButtons>* Buttons, int ButtonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.CheckIfHadItemRestriction");

	UUI_MasterEvent_C_CheckIfHadItemRestriction_Params params;
	params.ButtonNumber = ButtonNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AddEventToHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::AddEventToHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AddEventToHistory");

	UUI_MasterEvent_C_AddEventToHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AddChildToListOfConsequences
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Event_ButtonConsequences_C* Consequence                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::AddChildToListOfConsequences(class UUI_Event_ButtonConsequences_C* Consequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AddChildToListOfConsequences");

	UUI_MasterEvent_C_AddChildToListOfConsequences_Params params;
	params.Consequence = Consequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_AdditionalInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_AdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_AdditionalInteraction");

	UUI_MasterEvent_C_UI_AdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_Cancel
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_Cancel");

	UUI_MasterEvent_C_UI_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_Up
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_Up");

	UUI_MasterEvent_C_UI_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_Down
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_Down");

	UUI_MasterEvent_C_UI_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_Left
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_Left");

	UUI_MasterEvent_C_UI_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.UI_Right
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::UI_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.UI_Right");

	UUI_MasterEvent_C_UI_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedEventButtonIndex       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::MakeButtonActive(int SelectedEventButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonActive");

	UUI_MasterEvent_C_MakeButtonActive_Params params;
	params.SelectedEventButtonIndex = SelectedEventButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::MakeButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonsUnactive");

	UUI_MasterEvent_C_MakeButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ChangeSelectedEventButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedEventButtonIndex       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::ChangeSelectedEventButton(int SelectedEventButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ChangeSelectedEventButton");

	UUI_MasterEvent_C_ChangeSelectedEventButton_Params params;
	params.SelectedEventButtonIndex = SelectedEventButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.RemoveRosourcesFromRestrictions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::RemoveRosourcesFromRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.RemoveRosourcesFromRestrictions");

	UUI_MasterEvent_C_RemoveRosourcesFromRestrictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectOtherInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EventEffect_VillageType_E_EventEffect_VillageType> OtherEffectType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MasterBuilding_C*> BuildingsReference             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABP_MasterField_C*> FieldsReference                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_ItemRestriction> RemovedResources               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_MasterEvent_C::AddEventEffectOtherInfo(TEnumAsByte<E_EventEffect_VillageType_E_EventEffect_VillageType> OtherEffectType, float Value, TArray<class ABP_MasterBuilding_C*>* BuildingsReference, TArray<class ABP_MasterField_C*>* FieldsReference, TArray<struct FST_ItemRestriction>* RemovedResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectOtherInfo");

	UUI_MasterEvent_C_AddEventEffectOtherInfo_Params params;
	params.OtherEffectType = OtherEffectType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingsReference != nullptr)
		*BuildingsReference = params.BuildingsReference;
	if (FieldsReference != nullptr)
		*FieldsReference = params.FieldsReference;
	if (RemovedResources != nullptr)
		*RemovedResources = params.RemovedResources;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ItemRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Avilable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::ItemRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ItemRestriction");

	UUI_MasterEvent_C_ItemRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Avilable != nullptr)
		*Avilable = params.Avilable;

}


// Function UI_MasterEvent.UI_MasterEvent_C.VillageRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Avilable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::VillageRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.VillageRestriction");

	UUI_MasterEvent_C_VillageRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Avilable != nullptr)
		*Avilable = params.Avilable;

}


// Function UI_MasterEvent.UI_MasterEvent_C.SkillRestriction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Avilable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::SkillRestriction(const struct FST_EventButtonRestrictions& Restrictions, bool* Avilable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.SkillRestriction");

	UUI_MasterEvent_C_SkillRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Avilable != nullptr)
		*Avilable = params.Avilable;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectNPCInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EventEffect_NPCType_E_EventEffect_NPCType> NPCEffectType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Skills_E_Skills> SkillType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectsEveryone                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::AddEventEffectNPCInfo(TEnumAsByte<E_EventEffect_NPCType_E_EventEffect_NPCType> NPCEffectType, float Value, TEnumAsByte<E_Skills_E_Skills> SkillType, class ABP_NPC_C* NPCReference, bool AffectsEveryone)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectNPCInfo");

	UUI_MasterEvent_C_AddEventEffectNPCInfo_Params params;
	params.NPCEffectType = NPCEffectType;
	params.Value = Value;
	params.SkillType = SkillType;
	params.NPCReference = NPCReference;
	params.AffectsEveryone = AffectsEveryone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectPlayerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_EventEffect_PlayerType_E_EventEffect_PlayerType> PlayerEffectType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Skills_E_Skills> SkillType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemRestriction     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::AddEventEffectPlayerInfo(TEnumAsByte<E_EventEffect_PlayerType_E_EventEffect_PlayerType> PlayerEffectType, int Value, TEnumAsByte<E_Skills_E_Skills> SkillType, const struct FST_ItemRestriction& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectPlayerInfo");

	UUI_MasterEvent_C_AddEventEffectPlayerInfo_Params params;
	params.PlayerEffectType = PlayerEffectType;
	params.Value = Value;
	params.SkillType = SkillType;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.CheckButtonRestrictions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventButtons        EventButtonReference           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsOptionAvailable              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::CheckButtonRestrictions(const struct FST_EventButtons& EventButtonReference, bool* IsOptionAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.CheckButtonRestrictions");

	UUI_MasterEvent_C_CheckButtonRestrictions_Params params;
	params.EventButtonReference = EventButtonReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOptionAvailable != nullptr)
		*IsOptionAvailable = params.IsOptionAvailable;

}


// Function UI_MasterEvent.UI_MasterEvent_C.InitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SeasonEvent         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           Show_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsTutorialEvent_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CheatEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::InitEvent(const struct FST_SeasonEvent& Event, bool Show_, bool IsTutorialEvent_, const struct FName& EventName, bool CheatEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.InitEvent");

	UUI_MasterEvent_C_InitEvent_Params params;
	params.Event = Event;
	params.Show_ = Show_;
	params.IsTutorialEvent_ = IsTutorialEvent_;
	params.EventName = EventName;
	params.CheatEvent = CheatEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue1
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::EventContinue1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.EventContinue1");

	UUI_MasterEvent_C_EventContinue1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterEvent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.Construct");

	UUI_MasterEvent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ShowEvent
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::ShowEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ShowEvent");

	UUI_MasterEvent_C_ShowEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue2
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::EventContinue2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.EventContinue2");

	UUI_MasterEvent_C_EventContinue2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue3
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::EventContinue3()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.EventContinue3");

	UUI_MasterEvent_C_EventContinue3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue4
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::EventContinue4()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.EventContinue4");

	UUI_MasterEvent_C_EventContinue4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ConfirmSelection
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ConfirmSelection");

	UUI_MasterEvent_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.AdditionalInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::AdditionalInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.AdditionalInfo");

	UUI_MasterEvent_C_AdditionalInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.CloseWindow
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterEvent_C::CloseWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.CloseWindow");

	UUI_MasterEvent_C_CloseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterEvent_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ChangeSteeringType_Event_1");

	UUI_MasterEvent_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterEvent.UI_MasterEvent_C.ExecuteUbergraph_UI_MasterEvent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterEvent_C::ExecuteUbergraph_UI_MasterEvent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterEvent.UI_MasterEvent_C.ExecuteUbergraph_UI_MasterEvent");

	UUI_MasterEvent_C_ExecuteUbergraph_UI_MasterEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterEvent_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ConsequencesVerticalBox, UVerticalBox);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_161, UImage);
	READ_PTR_FULL(Image_230, UImage);
	READ_PTR_FULL(Image_366, UImage);
	READ_PTR_FULL(Img_EventIcon, UImage);
	READ_PTR_FULL(InputConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(ItemList, UUniformGridPanel);
	READ_PTR_FULL(ListOfButtons, UUniformGridPanel);
	READ_PTR_FULL(txt_EventDescription, UTextBlock);
	READ_PTR_FULL(txt_EventName, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(UIEventDetails, UUI_EventDetails_C);
}

void UUI_MasterEvent_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ConsequencesVerticalBox);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_161);
	DELE_PTR_FULL(Image_230);
	DELE_PTR_FULL(Image_366);
	DELE_PTR_FULL(Img_EventIcon);
	DELE_PTR_FULL(InputConfirm);
	DELE_PTR_FULL(ItemList);
	DELE_PTR_FULL(ListOfButtons);
	DELE_PTR_FULL(txt_EventDescription);
	DELE_PTR_FULL(txt_EventName);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(UIEventDetails);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
