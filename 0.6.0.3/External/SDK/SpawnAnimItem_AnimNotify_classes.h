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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnAnimItem_AnimNotify.SpawnAnimItem_AnimNotify_C
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class USpawnAnimItem_AnimNotify_C : public UAnimNotify
{
public:
	TArray<class UClass*>                              ItemClass;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible)
	bool                                               IsOffHand;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Randomize;                                                 // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_862D[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Index;                                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnAnimItem_AnimNotify.SpawnAnimItem_AnimNotify_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
