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

// BlueprintGeneratedClass DC_CustomTextSexSpecyfic.DC_CustomTextSexSpecyfic_C
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UDC_CustomTextSexSpecyfic_C : public UDialogueConditions
{
public:
	struct FText                                       MaleText;                                                  // 0x0028(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FemaleText;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_CustomTextSexSpecyfic.DC_CustomTextSexSpecyfic_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
