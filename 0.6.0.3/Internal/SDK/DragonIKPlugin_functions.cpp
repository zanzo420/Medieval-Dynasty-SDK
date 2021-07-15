// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              LookAtFromTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 LookAtTarget                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UDragonIK_Library::STATIC_QuatLookXatLocation(const struct FTransform& LookAtFromTransform, const struct FVector& LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation");

	UDragonIK_Library_QuatLookXatLocation_Params params;
	params.LookAtFromTransform = LookAtFromTransform;
	params.LookAtTarget = LookAtTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Source_Location                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 lookAt                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 upDirection                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UDragonIK_Library::STATIC_LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& lookAt, const struct FVector& upDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2");

	UDragonIK_Library_LookAtVector_V2_Params params;
	params.Source_Location = Source_Location;
	params.lookAt = lookAt;
	params.upDirection = upDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 upvector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UDragonIK_Library::STATIC_LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& upvector)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3");

	UDragonIK_Library_LookAtRotation_V3_Params params;
	params.Source = Source;
	params.Target = Target;
	params.upvector = upvector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DragonIKPlugin.DragonIK_Library.CustomLookRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 lookAt                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 upDirection                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UDragonIK_Library::STATIC_CustomLookRotation(const struct FVector& lookAt, const struct FVector& upDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonIKPlugin.DragonIK_Library.CustomLookRotation");

	UDragonIK_Library_CustomLookRotation_Params params;
	params.lookAt = lookAt;
	params.upDirection = upDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
