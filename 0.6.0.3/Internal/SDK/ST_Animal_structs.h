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

// UserDefinedStruct ST_Animal.ST_Animal
// 0x0094
struct FST_Animal
{
	struct FText                                       Name_38_CF7C8DA14CA6E9E39E9089B601436295;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Sex_E_Sex>                           Sex_84_734678FD4AEEB4FE2C75CD981662D2F6;                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KQPT[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Health_6_7125F67A472163BAD9AFBC8820677668;                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage_44_290D8E91444D71CA19B5F1B656D3DBEF;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FarmAnimal_88_F65B5FF341FDDF0D4FB16782284A3AE8;            // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType_91_A4C1FAAD4EFCF5A3FFEA0892A42BC165;            // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MT3K[0x2];                                     // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Class_30_D0C4B42B4F295B36146D578A6C14A960;                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    ResourcesDead_46_6DB59E4C4E57E332FF91D09599B41F9E;         // 0x0030(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemResource>                    ResourcesLife_49_A978A334429ABD62529CAC941929B8FA;         // 0x0040(0x0010) (Edit, BlueprintVisible)
	float                                              MatureAge_103_22ADDBB048121B51B89875B07D4A071E;            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge_104_9B540A48414016A3F6F22ABE91966A00;           // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>     AgeStage_70_2D2AAB0C44680A90D317418BA713941B;              // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JOC2[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 MatureAnimal_95_A7DDF3FB48AD10B9B60622BB505989DE;          // 0x0060(0x0010) (Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 Children_65_CB1E1F6544F61AEE3901A99095548617;              // 0x0070(0x0010) (Edit, BlueprintVisible)
	float                                              ChanceForBabyBirth_76_F7588B3E485237E996B294B1E0452FAF;    // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumberOfChildren_81_FEB26F36402E571AA13FB4949F5A4A34;   // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Price_100_E47237E640B1B93B9EBE8891A2FFC7F7;                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfVariation_113_098C9C1E40D476EEA23CDDBEFC38BD5A;    // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food_118_185B38F843011B78F24EE09B165E7ED7;                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
