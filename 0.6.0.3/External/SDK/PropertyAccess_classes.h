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

// Class PropertyAccess.PropertyAccess
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPropertyAccess : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PropertyAccess.PropertyAccess");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PropertyAccess.PropertyEventBroadcaster
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPropertyEventBroadcaster : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PropertyAccess.PropertyEventBroadcaster");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PropertyAccess.PropertyEventSubscriber
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPropertyEventSubscriber : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PropertyAccess.PropertyEventSubscriber");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
