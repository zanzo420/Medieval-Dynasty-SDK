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

// BlueprintGeneratedClass BP_AquaticInteraction.BP_AquaticInteraction_C
// 0x0035 (FullSize[0x022D] - InheritedSize[0x01F8])
class UBP_AquaticInteraction_C : public USceneComponent
{
public:
	unsigned char                                      UnknownData_WOEE[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	struct FST_AquaticInteractionData                  Data;                                                      // 0x0200(0x0028) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSurfaceDistance;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AquaticInteraction.BP_AquaticInteraction_C");
		return ptr;
	}



	void GetTransform(class ABP_AquaticSurface_C* Surface, struct FVector* Location, struct FRotator* Rotation, float* fade);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
