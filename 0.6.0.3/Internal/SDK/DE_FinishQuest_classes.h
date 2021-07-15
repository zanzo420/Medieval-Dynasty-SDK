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

// BlueprintGeneratedClass DE_FinishQuest.DE_FinishQuest_C
// 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
class UDE_FinishQuest_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                               PositiveOutcome;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_FinishQuest.DE_FinishQuest_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_FinishQuest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
