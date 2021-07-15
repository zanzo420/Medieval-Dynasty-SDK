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

// BlueprintGeneratedClass DC_CheckQuestNPCSex.DC_CheckQuestNPCSex_C
// 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
class UDC_CheckQuestNPCSex_C : public UDialogueConditions
{
public:
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int                                                ObjectiveNumber;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                TaskNumber;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_CheckQuestNPCSex.DC_CheckQuestNPCSex_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
