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

// BlueprintGeneratedClass DC_RequiredProfession.DC_RequiredProfession_C
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDC_RequiredProfession_C : public UDialogueConditions
{
public:
	TArray<TEnumAsByte<E_Profession_E_Profession>>     AcceptedProfessions;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_RequiredProfession.DC_RequiredProfession_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
