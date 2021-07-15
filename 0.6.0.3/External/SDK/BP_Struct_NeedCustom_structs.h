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

// UserDefinedStruct BP_Struct_NeedCustom.BP_Struct_NeedCustom
// 0x0028
struct FBP_Struct_NeedCustom
{
	TEnumAsByte<BP_Enum_CustomNeedModes_EBP_Enum_CustomNeedModes> NeedMode_15_8CE7261B40DE6B4613CA1284AAC0853D;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_52Q2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimetoTriggerNeed_19_81C4ACE24D46D0B3F743C9864DF07CA5;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NeedThreshold_17_C65ABC3B4BAC268314F731BD6F721DFC;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeatlocation_18_4EC39F72488CDAE5E1939880D1C57CE6;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DiefromCustomNeed__16_F0B9A98E4594AB614FBAE79878298564;    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9R1R[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SingleActorSingleActorMode_22_5FEB8A28493E0B45B9E78DA7CA660DEB; // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActorClassClosestActorfromClassMode_26_2C13B2004A02A450A9BDC0A4B04D90EF; // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
