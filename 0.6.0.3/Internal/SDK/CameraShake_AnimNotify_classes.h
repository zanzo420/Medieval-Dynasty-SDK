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

// BlueprintGeneratedClass CameraShake_AnimNotify.CameraShake_AnimNotify_C
// 0x000C (FullSize[0x0044] - InheritedSize[0x0038])
class UCameraShake_AnimNotify_C : public UAnimNotify
{
public:
	class UClass*                                      ShakeClass;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraShake_AnimNotify.CameraShake_AnimNotify_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
