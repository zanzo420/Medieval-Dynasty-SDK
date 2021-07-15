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

// UserDefinedStruct BP_Struct_GroundAnimal_Debug.BP_Struct_GroundAnimal_Debug
// 0x0004
struct FBP_Struct_GroundAnimal_Debug
{
	bool                                               RoamBehavior_1_61F8DE8E47B6A492CFBFCA9531840752;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EngagedTarget_4_7DD1F4A648077F0545BB3B82D26008DD;          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MeleeRange_5_79B648DF4456A4C1A690DB883C92E10D;             // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlayerProximityCheck_9_8020961A4CA9E98B6E37D0903F2F42CD;   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
