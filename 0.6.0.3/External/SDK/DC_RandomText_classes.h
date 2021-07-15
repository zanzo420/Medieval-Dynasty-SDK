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

// BlueprintGeneratedClass DC_RandomText.DC_RandomText_C
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UDC_RandomText_C : public UDialogueConditions
{
public:
	TArray<struct FText>                               TextsMale;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TextsFemale;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_RandomText.DC_RandomText_C");
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
