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

// Class MediaIOCore.MediaCapture
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UMediaCapture : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5GI[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaOutput*                                MediaOutput;                                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AR9O[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      CapturingRenderTarget;                                     // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ANRR[0x88];                                    // 0x0080(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.MediaCapture");
		return ptr;
	}



	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	MediaIOCore_EMediaCaptureState GetState();
	struct FIntPoint GetDesiredSize();
	TEnumAsByte<CoreUObject_EPixelFormat> GetDesiredPixelFormat();
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
	void AfterRead();
	void BeforeDelete();

};

// Class MediaIOCore.FileMediaCapture
// 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
class UFileMediaCapture : public UMediaCapture
{
public:
	unsigned char                                      UnknownData_CP2F[0x68];                                    // 0x0108(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.FileMediaCapture");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MediaIOCore.MediaOutput
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMediaOutput : public UObject
{
public:
	int                                                NumberOfTextureBuffers;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X7JX[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.MediaOutput");
		return ptr;
	}



	bool Validate(struct FString* OutFailureReason);
	class UMediaCapture* CreateMediaCapture();
	void AfterRead();
	void BeforeDelete();

};

// Class MediaIOCore.FileMediaOutput
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UFileMediaOutput : public UMediaOutput
{
public:
	struct FImageWriteOptions                          WriteOptions;                                              // 0x0030(0x0060) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              FilePath;                                                  // 0x0090(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     BaseFileName;                                              // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDesiredSize;                                      // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTXI[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   DesiredSize;                                               // 0x00B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverridePixelFormat;                                      // 0x00BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNV7[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MediaIOCore_EFileMediaOutputPixelFormat            DesiredPixelFormat;                                        // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AID[0x3];                                     // 0x00BD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_KTRZ[0xC];                                     // 0x00C4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaIOCore.FileMediaOutput");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
