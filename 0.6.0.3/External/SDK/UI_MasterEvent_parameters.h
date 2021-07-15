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
// Parameters
//---------------------------------------------------------------------------

// Function UI_MasterEvent.UI_MasterEvent_C.CheckIfHadItemRestriction
struct UUI_MasterEvent_C_CheckIfHadItemRestriction_Params
{
	TArray<struct FST_EventButtons>                    Buttons;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ButtonNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterEvent.UI_MasterEvent_C.AddEventToHistory
struct UUI_MasterEvent_C_AddEventToHistory_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.AddChildToListOfConsequences
struct UUI_MasterEvent_C_AddChildToListOfConsequences_Params
{
	class UUI_Event_ButtonConsequences_C*              Consequence;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_AdditionalInteraction
struct UUI_MasterEvent_C_UI_AdditionalInteraction_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_Cancel
struct UUI_MasterEvent_C_UI_Cancel_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_Up
struct UUI_MasterEvent_C_UI_Up_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_Down
struct UUI_MasterEvent_C_UI_Down_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_Left
struct UUI_MasterEvent_C_UI_Left_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.UI_Right
struct UUI_MasterEvent_C_UI_Right_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonActive
struct UUI_MasterEvent_C_MakeButtonActive_Params
{
	int                                                SelectedEventButtonIndex;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterEvent.UI_MasterEvent_C.MakeButtonsUnactive
struct UUI_MasterEvent_C_MakeButtonsUnactive_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.ChangeSelectedEventButton
struct UUI_MasterEvent_C_ChangeSelectedEventButton_Params
{
	int                                                SelectedEventButtonIndex;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterEvent.UI_MasterEvent_C.RemoveRosourcesFromRestrictions
struct UUI_MasterEvent_C_RemoveRosourcesFromRestrictions_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectOtherInfo
struct UUI_MasterEvent_C_AddEventEffectOtherInfo_Params
{
	TEnumAsByte<E_EventEffect_VillageType_E_EventEffect_VillageType> OtherEffectType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MasterBuilding_C*>                BuildingsReference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABP_MasterField_C*>                   FieldsReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_ItemRestriction>                 RemovedResources;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MasterEvent.UI_MasterEvent_C.ItemRestriction
struct UUI_MasterEvent_C_ItemRestriction_Params
{
	struct FST_EventButtonRestrictions                 Restrictions;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Avilable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.VillageRestriction
struct UUI_MasterEvent_C_VillageRestriction_Params
{
	struct FST_EventButtonRestrictions                 Restrictions;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Avilable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.SkillRestriction
struct UUI_MasterEvent_C_SkillRestriction_Params
{
	struct FST_EventButtonRestrictions                 Restrictions;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Avilable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectNPCInfo
struct UUI_MasterEvent_C_AddEventEffectNPCInfo_Params
{
	TEnumAsByte<E_EventEffect_NPCType_E_EventEffect_NPCType> NPCEffectType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     SkillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectsEveryone;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.AddEventEffectPlayerInfo
struct UUI_MasterEvent_C_AddEventEffectPlayerInfo_Params
{
	TEnumAsByte<E_EventEffect_PlayerType_E_EventEffect_PlayerType> PlayerEffectType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     SkillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemRestriction                         Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MasterEvent.UI_MasterEvent_C.CheckButtonRestrictions
struct UUI_MasterEvent_C_CheckButtonRestrictions_Params
{
	struct FST_EventButtons                            EventButtonReference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsOptionAvailable;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.InitEvent
struct UUI_MasterEvent_C_InitEvent_Params
{
	struct FST_SeasonEvent                             Event;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               Show_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTutorialEvent_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       EventName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheatEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue1
struct UUI_MasterEvent_C_EventContinue1_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.Construct
struct UUI_MasterEvent_C_Construct_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.ShowEvent
struct UUI_MasterEvent_C_ShowEvent_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue2
struct UUI_MasterEvent_C_EventContinue2_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue3
struct UUI_MasterEvent_C_EventContinue3_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.EventContinue4
struct UUI_MasterEvent_C_EventContinue4_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.ConfirmSelection
struct UUI_MasterEvent_C_ConfirmSelection_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.AdditionalInfo
struct UUI_MasterEvent_C_AdditionalInfo_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.CloseWindow
struct UUI_MasterEvent_C_CloseWindow_Params
{
};

// Function UI_MasterEvent.UI_MasterEvent_C.ChangeSteeringType_Event_1
struct UUI_MasterEvent_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MasterEvent.UI_MasterEvent_C.ExecuteUbergraph_UI_MasterEvent
struct UUI_MasterEvent_C_ExecuteUbergraph_UI_MasterEvent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
