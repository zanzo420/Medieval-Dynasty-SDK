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

// BlueprintGeneratedClass DC_Flirt.DC_Flirt_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDC_Flirt_C : public UDialogueConditions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_Flirt.DC_Flirt_C");
		return ptr;
	}



	void Change_NPCReply(const struct FST_AffectionDialogue& Dialogue, TArray<class UDialogueConditions*>* Conditions, TArray<class UDialogueEvents*>* Events, class ABP_NPC_C* NPC);
	void ChangePlayerDialogue(TArray<class UDialogueConditions*>* Conditions, const struct FST_AffectionDialogue& Diaogue);
	void RareDialogues(TArray<struct FName>* Dialogues);
	void Remove_Unavilable_Dialogues(TArray<struct FName>* DialogueHandlers, class ABP_NPC_C* NPC);
	void DrawPlayerDialogue(class ABP_NPC_C* NPC, struct FST_AffectionDialogue* D1, struct FST_AffectionDialogue* D2, struct FST_AffectionDialogue* D3);
	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
