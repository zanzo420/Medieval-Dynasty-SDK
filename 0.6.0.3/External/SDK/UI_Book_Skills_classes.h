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

// WidgetBlueprintGeneratedClass UI_Book_Skills.UI_Book_Skills_C
// 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
class UUI_Book_Skills_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                              ActionDescriptionButtonsRight_2;                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_70;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_217;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeCategory;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeSelection;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeTab;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputConfirm;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputReturn;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                SkillsTab;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  TalentsScrollList;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TalentsVerticalBox;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_SkillPointsCount;                                      // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_SkillPointsText;                                       // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Skills_TalentDescription_C*              UI_Skills_TalentDescription;                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SkillsLabels_C*                          UI_SkillsLabels;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TalentsLabels_C*                         UI_TalentsLabels;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TalentTree_C*                            UI_TalentTree;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                SelectedTalentID;                                          // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedSkillID;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UUI_Talent_ListButton_C*>             Talents;                                                   // 0x0300(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_Book_C*                                  BookReference;                                             // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_LabelButton_C*>                   SkillLabels;                                               // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<bool>                                       TiersUnlocked;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUI_Book_InputButton_C*>              InputWidgets;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_SkillSpendAcceptation_C*                 SkillSpendAcceptation;                                     // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Book_Skills.UI_Book_Skills_C");
		return ptr;
	}



	void SkillsCancel(bool* InputHandled);
	void SkillsRight();
	void SkillsLeft();
	void SkillsDown();
	void SkillsUp();
	void SkillsConfirm();
	void UpdateTalentsOnIncrease();
	void IncreaseTalentLevel();
	void UpdateTalentsAvailability();
	void MakeSkillLabelActive(int Index_);
	void MakeSkillLabelsUnactive();
	void DecreaseSkillIndex();
	void IncreaseSkillIndex();
	void ChangeSelectedSkill();
	void MakeTalentSlotActive(int Index_);
	void MakeTalentSlotsUnactive();
	void ChangeSelectedTalent(int SelectedTalent);
	void DecreaseTalentIndex();
	void IncreaseTalentIndex();
	void InitSkills();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void Construct();
	void Btn_Confirm();
	void Btn_Up();
	void Btn_Down();
	void Btn_Left();
	void Btn_Right();
	void Btn_Previous();
	void Btn_Next();
	void btn_Return();
	void ExecuteUbergraph_UI_Book_Skills(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
