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

// UserDefinedStruct ST_Goal_ConvincePeople.ST_Goal_ConvincePeople
// 0x0020
struct FST_Goal_ConvincePeople
{
	int                                                MinNumberOfPeople_4_768F224E4653D3D8CFD209A09D5901EA;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumberOfPeople_5_D962586440764EE4E8F758AED29E42F9;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfPeopleToConvince_7_F202A7EC4C72E785A7A634AE635A34C7; // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfPeopleConvinced_9_0D6964BA45CD3D24366B6DA353AB344C; // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ConvincedNPCsIDs_13_64C64C844655C5BBADB30FBF3BEAE943;      // 0x0010(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
