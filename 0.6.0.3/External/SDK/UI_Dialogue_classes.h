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

// WidgetBlueprintGeneratedClass UI_Dialogue.UI_Dialogue_C
// 0x01F8 (FullSize[0x0460] - InheritedSize[0x0268])
class UUI_Dialogue_C : public UDialogueUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            NewNPCDialogueAnimation;                                   // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                              AffectionBox;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_SelectionIcon_2;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_Speed;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     NextButton;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    NextButtonContainer;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NPCText;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Number;                                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  PlayerResponseBox;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SelectedReplyBackground;                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_3;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SpeakerName;                                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock;                                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Affection;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Age;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Mood;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Personality;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogue*                                   InDialogue;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDialogueNode                               CurrentNode;                                               // 0x0300(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                                PlayerReplyTimer;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDialogueNode                               CurrentPlayerNode;                                         // 0x0390(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                currentlySelectedReply;                                    // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1P1Y[0x4];                                     // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             Sound2D;                                                   // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                DialogNumericOptions;                                      // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APC_Player_C*                                OwningPlayer;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NPCDialogueLinesStatesID;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RR3J[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  tmp_IconForDialogue;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     tmp_TextForDialogue;                                       // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Dialogue.UI_Dialogue_C");
		return ptr;
	}



	void IsAnythingHovered(bool* Return);
	void Get_King_Age(struct FString* KingAge);
	void Get_Approval_Required(struct FString* taxAmount);
	void Get_King_Name(struct FString* taxAmount);
	void Get_GENDER_FEMALE(struct FString* taxAmount);
	void Get_GENDER_MALE(struct FString* taxAmount);
	void Get_FEMALE_TO_FEMALE(struct FString* taxAmount);
	void Get_FEMALE_TO_MALE(struct FString* taxAmount);
	void Get_MALE_TO_FEMALE(struct FString* taxAmount);
	void Get_MALE_TO_MALE(struct FString* taxAmount);
	void Get_debtAmount(struct FString* taxAmount);
	void Get_Reputation_To_Join(struct FString* Reputation_To_Join);
	void Get_Proposal_Chance(struct FString* Proposal_Chance);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Get_CHARACTER_NAME(struct FString* taxAmount);
	void Get_taxAmount(struct FString* taxAmount);
	struct FText ReplaceVarStrings(const struct FText& InText);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ToNpcReply(const struct FDialogueNode& PlayerReply, bool FireEvents);
	void DoEvents(const struct FDialogueNode& Node);
	void CheckConditions(const struct FDialogueNode& Node, bool* Ok);
	struct FSlateColor GetContinueColorAndOpacity();
	void Construct();
	void DisplayNpcNode(const struct FDialogueNode& NpcNode);
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature();
	void DisplayReplies(TArray<struct FDialogueNode> Replies);
	void GamepadReply(int Index, bool Click);
	void SimulateNextClicked();
	void SimulateNextHovered();
	void Destruct();
	void PlayPlayerReply(const struct FDialogueNode& PlayerNode);
	void GoToNpcReplyTimer();
	void HighlightSelectedReply();
	void MouseSelectReply(class UUI_Reply_C* WidgetThatWantsSelection);
	void PlayDialogueSound(class USoundBase* Sound);
	void StopDialogueSound();
	void UpdateNPCParameters();
	void Reconstruct(class UDialogue* InDialogue);
	void ExecuteUbergraph_UI_Dialogue(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
