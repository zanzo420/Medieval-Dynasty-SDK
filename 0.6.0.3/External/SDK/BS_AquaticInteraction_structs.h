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

// UserDefinedStruct BS_AquaticInteraction.BS_AquaticInteraction
// 0x0058
struct FBS_AquaticInteraction
{
	class UBP_AquaticInteraction_C*                    Owner_25_3A6C815B42EBA54B541ACB86F6EEFB72;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location_3_71138D054985852AB5FB0FB5A877456B;               // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation_32_8ECAA5CB4DEA3542181A9E8834A54D71;              // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxSurfaceDistance_52_A442A3D24A828819A5737489D1942C23;    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToEnd_22_BB29A2AD4316564D628DDF8B4A4F7B82;             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AquaticSurface_C*                        Surface_41_47A741AB49BD9C26C2B535A8C3CCC99C;               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_AquaticInteractionData                  Data_21_A16BE8584186AE436372DA9C1708BC4C;                  // 0x0030(0x0028) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
