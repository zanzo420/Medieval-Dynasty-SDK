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

// Class AnimationCore.AnimationDataSourceRegistry
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<struct FName, TWeakObjectPtr<class UObject>>  DataSources;                                               // 0x0028(0x0050) (Transient, UObjectWrapper, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
