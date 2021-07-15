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

// UserDefinedStruct ST_Goal_Acquire.ST_Goal_Acquire
// 0x0048
struct FST_Goal_Acquire
{
	struct FText                                       GoalText_9_C9E052124BEC72172A667288EADC600C;               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WhoWhereTodeliver_27_24156E8643798A293504C9A9BA91DFAA;     // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         WhatToDeliver_32_4FC7677A45A0705A63979AA4797C2DE6;         // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                AmountToDeliver_33_F807F46E423205055B50429661EC4C43;       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmountDelivered_39_C3BAD91F43F9B4D4C0D41EB9FC1323C0;       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
