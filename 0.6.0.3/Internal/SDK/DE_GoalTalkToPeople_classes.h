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

// BlueprintGeneratedClass DE_GoalTalkToPeople.DE_GoalTalkToPeople_C
// 0x0031 (FullSize[0x0059] - InheritedSize[0x0028])
class UDE_GoalTalkToPeople_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ProgressObjective;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_58D3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SpeakerID;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                               ProgressAndRemove;                                         // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_GoalTalkToPeople.DE_GoalTalkToPeople_C");
		return ptr;
	}



	void Execute(class UObject* NPC);
	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_GoalTalkToPeople(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
