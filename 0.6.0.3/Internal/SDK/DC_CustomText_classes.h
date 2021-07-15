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

// BlueprintGeneratedClass DC_CustomText.DC_CustomText_C
// 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
class UDC_CustomText_C : public UDialogueConditions
{
public:
	struct FText                                       Text;                                                      // 0x0028(0x0018) (Edit, BlueprintVisible)
	bool                                               Reset;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_CustomText.DC_CustomText_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
