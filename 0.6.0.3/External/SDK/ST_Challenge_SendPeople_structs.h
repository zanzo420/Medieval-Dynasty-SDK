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

// UserDefinedStruct ST_Challenge_SendPeople.ST_Challenge_SendPeople
// 0x0028
struct FST_Challenge_SendPeople
{
	TArray<int>                                        MaxNeededPeople_8_2A69E084429D992E40C188A28238AFB4;        // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<int>                                        MinNeededPeople_9_4DEDAE6E44F5BFADAA0BBCBC2A6ED78C;        // 0x0010(0x0010) (Edit, BlueprintVisible)
	int                                                NeededPeople_11_FAB5FA704E53CD8EDD3FDDA00A5057B6;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SentPeople_14_3443478B48494C0BA72F6A84371836E9;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
