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

// UserDefinedStruct ST_Challange.ST_Challange
// 0x0105
struct FST_Challange
{
	struct FText                                       Name_6_F44998A346B5C7770CE0C8B28EB005A2;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_8_CC4C1A0A47DF662149D943B27E6270A2;            // 0x0018(0x0018) (Edit, BlueprintVisible)
	int                                                MaxDuration_54_F4A042C847D277D4B42EFF8159839957;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X0YF[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Challenge_MasterType                    TaskType_53_960CB61542A52EFBDF8407B29DAA7194;              // 0x0038(0x00A0) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Challenge_Reward                        Reward_58_FC34065545A3B681A81856BFC7D9517D;                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8EYB[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Challenge_Punishment>            Punishment_60_1ADBF49349697F18A61328841F469AB7;            // 0x00E0(0x0010) (Edit, BlueprintVisible)
	bool                                               CheckEverySeason_36_1F5685234B3CF4DF7DDA998075CF568F;      // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XB5U[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_39_BA7F728F4A22F6E2C18E32A07885F495;                  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SeasonsPassed_57_EC0180A2440BE8E90ED541BC3DE2A4CD;         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_QuestState_E_QuestState>             State_47_102020B0471B15D55BFEA69EA61FE5CF;                 // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
