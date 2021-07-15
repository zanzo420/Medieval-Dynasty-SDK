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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_GeneratedQuestRestrictions_Ownership.ST_GeneratedQuestRestrictions_Ownership
// 0x0018
struct FST_GeneratedQuestRestrictions_Ownership
{
	bool                                               UseRestriction_11_43195C634EB646D88910038D4A406497;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseSameAsQuestGiver_4_2966256641739D52C779AF9930ED95B0;    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseOtherThanQuestGiver_5_03DF300F4E5977FC1B5313919B42F56B; // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PG4U[0x5];                                     // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Ownership_E_Ownership>>       OwnershipToPickFrom_14_75D0B79C4FFA98284DCF5DA291BEF755;   // 0x0008(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
