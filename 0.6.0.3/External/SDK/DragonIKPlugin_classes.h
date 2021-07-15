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

// Class DragonIKPlugin.DragonIK_Library
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDragonIK_Library : public UObject
{
public:
	unsigned char                                      UnknownData_3DZ3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DragonIKPlugin.DragonIK_Library");
		return ptr;
	}



	struct FTransform STATIC_QuatLookXatLocation(const struct FTransform& LookAtFromTransform, const struct FVector& LookAtTarget);
	struct FRotator STATIC_LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& lookAt, const struct FVector& upDirection);
	struct FRotator STATIC_LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& upvector);
	struct FRotator STATIC_CustomLookRotation(const struct FVector& lookAt, const struct FVector& upDirection);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
