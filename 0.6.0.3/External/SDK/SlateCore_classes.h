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

// Class SlateCore.FontBulkData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData_ZDMW[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.FontFaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontFaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.FontProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFontProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.SlateTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                               // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData_ZPOS[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateWidgetStyleContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
