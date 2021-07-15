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

// UserDefinedStruct ST_Goal_SendPeopleToKing.ST_Goal_SendPeopleToKing
// 0x0020
struct FST_Goal_SendPeopleToKing
{
	int                                                MinNumberOfPeople_8_5C2F70FA410CEE1F29DC5FB75B8412A2;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumberOfPeople_9_7E1977084E211AA43A2A499F0593A717;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfPeopleToSend_10_3AAC7BDE422AC41617B401A186BFCA88;  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfPeopleSent_11_E127F62C41575A9C11DD6B9FC6A20303;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             SentNPCsIDs_17_9D704801467B03C793C4F69131EE56D8;           // 0x0010(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
