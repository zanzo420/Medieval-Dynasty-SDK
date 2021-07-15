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

// UserDefinedStruct ST_SAVE_SplineStructures.ST_SAVE_SplineStructures
// 0x0040
struct FST_SAVE_SplineStructures
{
	struct FVector                                     Location1_25_990568DD45349711A716929CB42C10FA;             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location2_28_2D282C164562BC16BA3E8C99512DECC9;             // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation_5_93C840744BFF0C121C759AA4A29CC549;               // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Name_8_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;                   // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Ownership_18_174624724B82B7BE7A711994AE5EB330;             // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YULX[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_SplineModules>              Modules_32_815FBBD2459C7DFBA4ED238D17C77ACA;               // 0x0030(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
