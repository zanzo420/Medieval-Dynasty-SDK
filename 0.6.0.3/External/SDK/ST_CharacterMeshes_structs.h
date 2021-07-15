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

// UserDefinedStruct ST_CharacterMeshes.ST_CharacterMeshes
// 0x0058
struct FST_CharacterMeshes
{
	class USkeletalMesh*                               Head_9_B96C57684D1071FF63793AB253E4EB39;                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Torso_12_83BBA2A8439E089B2DFE898BA0B7FC2D;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Hands_13_1996B0C44D8EA03152FAA6A4DC6C4CFC;                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Legs_19_467CD28247D8CDD0787CF8AF534105F6;                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Feet_20_D34C39694903FE29291541BF00A6CDAB;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HatSM_21_3F2EC5194792FC6B6B95AD8E30EBE60D;                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HatSKM_22_4A38AC584212C30A9901BEBA151A9B31;                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Hood_23_8F3E955E40250BE8A38AFB9C0A1CBD34;                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimClass_27_D2BB5D624FFD019379D9D3BF11184B1B;             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_MeshDynamicMaterials>            DynamicMaterials_34_AD424FA64700961A04F6BC833E48CE1F;      // 0x0048(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
