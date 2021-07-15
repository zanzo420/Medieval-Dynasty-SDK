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

void FAnimNode_DragonControlBase::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_DragonControlBase::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FDragonData_FingerData::AfterRead()
{
}

void FDragonData_FingerData::BeforeDelete()
{
}

void FDragonData_FootData::AfterRead()
{
}

void FDragonData_FootData::BeforeDelete()
{
}

void FDragonData_MultiInput::AfterRead()
{
}

void FDragonData_MultiInput::BeforeDelete()
{
}

void FDragonData_SingleArmElement::AfterRead()
{
}

void FDragonData_SingleArmElement::BeforeDelete()
{
}

void FDragonData_Overrided_Location_Data::AfterRead()
{
}

void FDragonData_Overrided_Location_Data::BeforeDelete()
{
}

void FDragonData_ArmsData::AfterRead()
{
}

void FDragonData_ArmsData::BeforeDelete()
{
}

void FAnimNode_DragonAimSolver::AfterRead()
{
	FAnimNode_DragonControlBase::AfterRead();

}

void FAnimNode_DragonAimSolver::BeforeDelete()
{
	FAnimNode_DragonControlBase::BeforeDelete();

}

void FSocketDragonReference::AfterRead()
{
}

void FSocketDragonReference::BeforeDelete()
{
}

void FBoneDragonSocketTarget::AfterRead()
{
}

void FBoneDragonSocketTarget::BeforeDelete()
{
}

void FAnimNode_DragonFabrikSolver::AfterRead()
{
	FAnimNode_DragonControlBase::AfterRead();

}

void FAnimNode_DragonFabrikSolver::BeforeDelete()
{
	FAnimNode_DragonControlBase::BeforeDelete();

}

void FAnimNode_DragonFeetSolver::AfterRead()
{
	FAnimNode_DragonControlBase::AfterRead();

}

void FAnimNode_DragonFeetSolver::BeforeDelete()
{
	FAnimNode_DragonControlBase::BeforeDelete();

}

void FAnimNode_DragonSpineSolver::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_DragonSpineSolver::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FDragonData_WarpLimbsData::AfterRead()
{
}

void FDragonData_WarpLimbsData::BeforeDelete()
{
}

void FAnimNode_DragonWarpSolver::AfterRead()
{
	FAnimNode_DragonControlBase::AfterRead();

}

void FAnimNode_DragonWarpSolver::BeforeDelete()
{
	FAnimNode_DragonControlBase::BeforeDelete();

}

void FCCDIK_Modified_ChainLink::AfterRead()
{
}

void FCCDIK_Modified_ChainLink::BeforeDelete()
{
}

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


void UDragonIK_Library::AfterRead()
{
	UObject::AfterRead();

}

void UDragonIK_Library::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
