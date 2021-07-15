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

// UserDefinedStruct ST_NPCMeshes.ST_NPCMeshes
// 0x0080
struct FST_NPCMeshes
{
	TArray<class USkeletalMesh*>                       Head_20_614D1C9D441DB8539183C6A49DBF1DCF;                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Torso_21_783C617F46B7EB93397847AA2399B215;                 // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Hands_22_169FDBCA44D5F4BF6CEB3691FED9E903;                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Legs_23_BC69DF5B483AB74D3B1BA8966BA8C6E2;                  // 0x0030(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Feet_30_BEC05C5544EE8BDDF6BEA18BD10BD290;                  // 0x0040(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Hat_24_A3034E7D4C0CF0BEA9505CBBE886AF62;                   // 0x0050(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Neck_25_7C73DEC04524214A3D01CA9513569443;                  // 0x0060(0x0010) (Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                       Hair_26_E2D4F49B4BB49F22F3A9FBA813E1BD06;                  // 0x0070(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
