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

// UserDefinedStruct BP_Struct_GroundAnimal_Animations.BP_Struct_GroundAnimal_Animations
// 0x0011
struct FBP_Struct_GroundAnimal_Animations
{
	TArray<struct FBP_Struct_GroundAnimal_AnimationDetails> AnimationsList_3_67DF174743F15082EC8828BE0DF33B28;         // 0x0000(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<BP_Enum_AnimPlayMode_EBP_Enum_AnimPlayMode> PlayMode_7_602DA3D6456040BA4039CB9C2F9DCCF5;               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
