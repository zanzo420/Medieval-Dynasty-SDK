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

// UserDefinedStruct ST_SAVE_NPCDialogue.ST_SAVE_NPCDialogue
// 0x0022
struct FST_SAVE_NPCDialogue
{
	TArray<struct FName>                               DialAffection_33_DB10AC9C4A412CA25D78E0928533F559;         // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               UsedAffection_7_FB7A5AFB43BE2B48112ED6A51A529FDA;          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasSpokenTo_12_DA1C41134E864A4E190CF6881E82509C;           // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1XDD[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TalkChAffection_18_7CEA0971432E68CD6C3443B773D8E925;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GiftGiven_27_315BF31C4FDC3D1B61AD83B7D63F8C10;             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EZPQ[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DecRelation_28_2BDF9C55442572B708C9FFBD22FD7514;           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Smalltalk_29_854C713A4A93EC9D970833B13B5880EE;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WifeDayText_35_92F181D142948433357D5E811023EEB8;           // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
