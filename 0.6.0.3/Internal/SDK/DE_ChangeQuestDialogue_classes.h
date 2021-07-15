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

// BlueprintGeneratedClass DE_ChangeQuestDialogue.DE_ChangeQuestDialogue_C
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UDE_ChangeQuestDialogue_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class UDialogue*                                   Dialogue;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ObjectiveNumber;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                TaskNumber;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_ChangeQuestDialogue.DE_ChangeQuestDialogue_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_ChangeQuestDialogue(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
