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

// BlueprintGeneratedClass DC_AnswerVendor.DC_AnswerVendor_C
// 0x0001 (FullSize[0x0029] - InheritedSize[0x0028])
class UDC_AnswerVendor_C : public UDialogueConditions
{
public:
	TEnumAsByte<E_Vendor_E_Vendor>                     VendorType;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DC_AnswerVendor.DC_AnswerVendor_C");
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
