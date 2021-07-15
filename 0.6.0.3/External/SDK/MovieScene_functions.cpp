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

void FMovieSceneSectionEvalOptions::AfterRead()
{
}

void FMovieSceneSectionEvalOptions::BeforeDelete()
{
}

void FMovieSceneEasingSettings::AfterRead()
{
}

void FMovieSceneEasingSettings::BeforeDelete()
{
}

void FMovieSceneFrameRange::AfterRead()
{
}

void FMovieSceneFrameRange::BeforeDelete()
{
}

void FOptionalMovieSceneBlendType::AfterRead()
{
}

void FOptionalMovieSceneBlendType::BeforeDelete()
{
}

void FMovieSceneTrackEvalOptions::AfterRead()
{
}

void FMovieSceneTrackEvalOptions::BeforeDelete()
{
}

void FMovieSceneTrackEvaluationFieldEntry::AfterRead()
{
	READ_PTR_FULL(Section, UMovieSceneSection);
}

void FMovieSceneTrackEvaluationFieldEntry::BeforeDelete()
{
	DELE_PTR_FULL(Section);
}

void FMovieSceneTrackEvaluationField::AfterRead()
{
}

void FMovieSceneTrackEvaluationField::BeforeDelete()
{
}

void FMovieSceneSequenceLoopCount::AfterRead()
{
}

void FMovieSceneSequenceLoopCount::BeforeDelete()
{
}

void FMovieSceneSequenceID::AfterRead()
{
}

void FMovieSceneSequenceID::BeforeDelete()
{
}

void FMovieSceneSequenceReplProperties::AfterRead()
{
}

void FMovieSceneSequenceReplProperties::BeforeDelete()
{
}

void FMovieSceneRootEvaluationTemplateInstance::AfterRead()
{
	READ_PTR_FULL(CompiledDataManager, UMovieSceneCompiledDataManager);
	READ_PTR_FULL(EntitySystemLinker, UMovieSceneEntitySystemLinker);
}

void FMovieSceneRootEvaluationTemplateInstance::BeforeDelete()
{
	DELE_PTR_FULL(CompiledDataManager);
	DELE_PTR_FULL(EntitySystemLinker);
}

void FMovieSceneMarkedFrame::AfterRead()
{
}

void FMovieSceneMarkedFrame::BeforeDelete()
{
}

void FMovieSceneObjectBindingID::AfterRead()
{
}

void FMovieSceneObjectBindingID::BeforeDelete()
{
}

void FMovieSceneBindingOverrideData::AfterRead()
{
}

void FMovieSceneBindingOverrideData::BeforeDelete()
{
}

void FMovieSceneChannel::AfterRead()
{
}

void FMovieSceneChannel::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldEntityKey::AfterRead()
{
}

void FMovieSceneEvaluationFieldEntityKey::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldEntity::AfterRead()
{
}

void FMovieSceneEvaluationFieldEntity::BeforeDelete()
{
}

void FMovieSceneSequencePlaybackSettings::AfterRead()
{
}

void FMovieSceneSequencePlaybackSettings::BeforeDelete()
{
}

void FMovieSceneSectionParameters::AfterRead()
{
}

void FMovieSceneSectionParameters::BeforeDelete()
{
}

void FMovieSceneSpawnable::AfterRead()
{
	READ_PTR_FULL(ObjectTemplate, UObject);
}

void FMovieSceneSpawnable::BeforeDelete()
{
	DELE_PTR_FULL(ObjectTemplate);
}

void FMovieSceneObjectBindingIDs::AfterRead()
{
}

void FMovieSceneObjectBindingIDs::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldSharedEntityMetaData::AfterRead()
{
}

void FMovieSceneEvaluationFieldSharedEntityMetaData::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldEntityTree::AfterRead()
{
}

void FMovieSceneEvaluationFieldEntityTree::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldEntityMetaData::AfterRead()
{
}

void FMovieSceneEvaluationFieldEntityMetaData::BeforeDelete()
{
}

void FMovieSceneEntityComponentField::AfterRead()
{
}

void FMovieSceneEntityComponentField::BeforeDelete()
{
}

void FMovieSceneBinding::AfterRead()
{
}

void FMovieSceneBinding::BeforeDelete()
{
}

void FMovieScenePossessable::AfterRead()
{
	READ_PTR_FULL(PossessedObjectClass, UClass);
}

void FMovieScenePossessable::BeforeDelete()
{
	DELE_PTR_FULL(PossessedObjectClass);
}

void FMovieSceneTimeTransform::AfterRead()
{
}

void FMovieSceneTimeTransform::BeforeDelete()
{
}

void FMovieSceneBoolChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneBoolChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneTrackIdentifier::AfterRead()
{
}

void FMovieSceneTrackIdentifier::BeforeDelete()
{
}

void FMovieSceneEvalTemplatePtr::AfterRead()
{
}

void FMovieSceneEvalTemplatePtr::BeforeDelete()
{
}

void FMovieSceneTrackImplementationPtr::AfterRead()
{
}

void FMovieSceneTrackImplementationPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplateSerialNumber::AfterRead()
{
}

void FMovieSceneEvaluationTemplateSerialNumber::BeforeDelete()
{
}

void FMovieSceneSubSequenceTree::AfterRead()
{
}

void FMovieSceneSubSequenceTree::BeforeDelete()
{
}

void FMovieSceneSequenceInstanceDataPtr::AfterRead()
{
}

void FMovieSceneSequenceInstanceDataPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationGroupLUTIndex::AfterRead()
{
}

void FMovieSceneEvaluationGroupLUTIndex::BeforeDelete()
{
}

void FMovieSceneSequenceCompilerMaskStruct::AfterRead()
{
}

void FMovieSceneSequenceCompilerMaskStruct::BeforeDelete()
{
}

void FMovieSceneEvaluationKey::AfterRead()
{
}

void FMovieSceneEvaluationKey::BeforeDelete()
{
}

void FMovieSceneOrderedEvaluationKey::AfterRead()
{
}

void FMovieSceneOrderedEvaluationKey::BeforeDelete()
{
}

void FMovieSceneEvaluationMetaData::AfterRead()
{
}

void FMovieSceneEvaluationMetaData::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldTrackPtr::AfterRead()
{
}

void FMovieSceneEvaluationFieldTrackPtr::BeforeDelete()
{
}

void FMovieSceneFieldEntry_EvaluationTrack::AfterRead()
{
}

void FMovieSceneFieldEntry_EvaluationTrack::BeforeDelete()
{
}

void FMovieSceneFieldEntry_ChildTemplate::AfterRead()
{
}

void FMovieSceneFieldEntry_ChildTemplate::BeforeDelete()
{
}

void FMovieSceneEvaluationGroup::AfterRead()
{
}

void FMovieSceneEvaluationGroup::BeforeDelete()
{
}

void FMovieSceneEvaluationField::AfterRead()
{
}

void FMovieSceneEvaluationField::BeforeDelete()
{
}

void FMovieSceneEntitySystemGraphNodes::AfterRead()
{
}

void FMovieSceneEntitySystemGraphNodes::BeforeDelete()
{
}

void FMovieSceneEntitySystemGraph::AfterRead()
{
}

void FMovieSceneEntitySystemGraph::BeforeDelete()
{
}

void FMovieSceneTemplateGenerationLedger::AfterRead()
{
}

void FMovieSceneTemplateGenerationLedger::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchyNode::AfterRead()
{
}

void FMovieSceneSequenceHierarchyNode::BeforeDelete()
{
}

void FMovieSceneEvaluationTrack::AfterRead()
{
}

void FMovieSceneEvaluationTrack::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplate::AfterRead()
{
}

void FMovieSceneEvaluationTemplate::BeforeDelete()
{
}

void FMovieSceneTimeWarping::AfterRead()
{
}

void FMovieSceneTimeWarping::BeforeDelete()
{
}

void FMovieSceneNestedSequenceTransform::AfterRead()
{
}

void FMovieSceneNestedSequenceTransform::BeforeDelete()
{
}

void FMovieSceneSequenceTransform::AfterRead()
{
}

void FMovieSceneSequenceTransform::BeforeDelete()
{
}

void FMovieSceneSubSequenceData::AfterRead()
{
}

void FMovieSceneSubSequenceData::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchy::AfterRead()
{
}

void FMovieSceneSequenceHierarchy::BeforeDelete()
{
}

void FMovieSceneTrackInstanceInput::AfterRead()
{
	READ_PTR_FULL(Section, UMovieSceneSection);
}

void FMovieSceneTrackInstanceInput::BeforeDelete()
{
	DELE_PTR_FULL(Section);
}

void FMovieSceneEvalTemplateBase::AfterRead()
{
}

void FMovieSceneEvalTemplateBase::BeforeDelete()
{
}

void FMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneTangentData::AfterRead()
{
}

void FMovieSceneTangentData::BeforeDelete()
{
}

void FMovieSceneKeyHandleMap::AfterRead()
{
	FKeyHandleLookupTable::AfterRead();

}

void FMovieSceneKeyHandleMap::BeforeDelete()
{
	FKeyHandleLookupTable::BeforeDelete();

}

void FMovieSceneFloatValue::AfterRead()
{
}

void FMovieSceneFloatValue::BeforeDelete()
{
}

void FMovieSceneFloatChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneFloatChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneIntegerChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneIntegerChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneTrackImplementation::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneTrackImplementation::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FTrackInstanceInputComponent::AfterRead()
{
	READ_PTR_FULL(Section, UMovieSceneSection);
}

void FTrackInstanceInputComponent::BeforeDelete()
{
	DELE_PTR_FULL(Section);
}

void FMovieSceneTrackInstanceComponent::AfterRead()
{
	READ_PTR_FULL(Owner, UMovieSceneSection);
	READ_PTR_FULL(TrackInstanceClass, UClass);
}

void FMovieSceneTrackInstanceComponent::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
	DELE_PTR_FULL(TrackInstanceClass);
}

void FEasingComponentData::AfterRead()
{
	READ_PTR_FULL(Section, UMovieSceneSection);
}

void FEasingComponentData::BeforeDelete()
{
	DELE_PTR_FULL(Section);
}

void FMovieScenePropertyBinding::AfterRead()
{
}

void FMovieScenePropertyBinding::BeforeDelete()
{
}

void FMovieSceneSectionGroup::AfterRead()
{
}

void FMovieSceneSectionGroup::BeforeDelete()
{
}

void FMovieSceneTrackLabels::AfterRead()
{
}

void FMovieSceneTrackLabels::BeforeDelete()
{
}

void FMovieSceneExpansionState::AfterRead()
{
}

void FMovieSceneExpansionState::BeforeDelete()
{
}

void FMovieSceneEditorData::AfterRead()
{
}

void FMovieSceneEditorData::BeforeDelete()
{
}

void FMovieSceneTimecodeSource::AfterRead()
{
}

void FMovieSceneTimecodeSource::BeforeDelete()
{
}

void FMovieSceneByteChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void FMovieSceneByteChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void FMovieSceneEntitySystemGraphNode::AfterRead()
{
	READ_PTR_FULL(System, UMovieSceneEntitySystem);
}

void FMovieSceneEntitySystemGraphNode::BeforeDelete()
{
	DELE_PTR_FULL(System);
}

void FMovieSceneEmptyStruct::AfterRead()
{
}

void FMovieSceneEmptyStruct::BeforeDelete()
{
}

void FMovieSceneSegmentIdentifier::AfterRead()
{
}

void FMovieSceneSegmentIdentifier::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldSegmentPtr::AfterRead()
{
	FMovieSceneEvaluationFieldTrackPtr::AfterRead();

}

void FMovieSceneEvaluationFieldSegmentPtr::BeforeDelete()
{
	FMovieSceneEvaluationFieldTrackPtr::BeforeDelete();

}

void FMovieSceneEvaluationOperand::AfterRead()
{
}

void FMovieSceneEvaluationOperand::BeforeDelete()
{
}

void FMovieSceneSubSectionData::AfterRead()
{
}

void FMovieSceneSubSectionData::BeforeDelete()
{
}

void FMovieSceneKeyStruct::AfterRead()
{
}

void FMovieSceneKeyStruct::BeforeDelete()
{
}

void FMovieSceneKeyTimeStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneKeyTimeStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FGeneratedMovieSceneKeyStruct::AfterRead()
{
}

void FGeneratedMovieSceneKeyStruct::BeforeDelete()
{
}

void FMovieSceneObjectPathChannelKeyValue::AfterRead()
{
	READ_PTR_FULL(HardPtr, UObject);
}

void FMovieSceneObjectPathChannelKeyValue::BeforeDelete()
{
	DELE_PTR_FULL(HardPtr);
}

void FMovieSceneObjectPathChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

	READ_PTR_FULL(PropertyClass, UClass);
}

void FMovieSceneObjectPathChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

	DELE_PTR_FULL(PropertyClass);
}

void FMovieScenePropertySectionData::AfterRead()
{
}

void FMovieScenePropertySectionData::BeforeDelete()
{
}

void FMovieScenePropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScenePropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSegment::AfterRead()
{
}

void FMovieSceneSegment::BeforeDelete()
{
}

void FSectionEvaluationData::AfterRead()
{
}

void FSectionEvaluationData::BeforeDelete()
{
}

void FMovieSceneSubSequenceTreeEntry::AfterRead()
{
}

void FMovieSceneSubSequenceTreeEntry::BeforeDelete()
{
}

void FMovieSceneSequenceInstanceData::AfterRead()
{
}

void FMovieSceneSequenceInstanceData::BeforeDelete()
{
}

void FMovieSceneSequencePlaybackParams::AfterRead()
{
}

void FMovieSceneSequencePlaybackParams::BeforeDelete()
{
}

void FMovieSceneWarpCounter::AfterRead()
{
}

void FMovieSceneWarpCounter::BeforeDelete()
{
}

void FTestMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FTestMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneTrackDisplayOptions::AfterRead()
{
}

void FMovieSceneTrackDisplayOptions::BeforeDelete()
{
}

void FMovieSceneTrackInstanceEntry::AfterRead()
{
	READ_PTR_FULL(BoundObject, UObject);
	READ_PTR_FULL(TrackInstance, UMovieSceneTrackInstance);
}

void FMovieSceneTrackInstanceEntry::BeforeDelete()
{
	DELE_PTR_FULL(BoundObject);
	DELE_PTR_FULL(TrackInstance);
}

void UMovieSceneSignedObject::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneSignedObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MovieScene.MovieSceneSection.SetRowIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewRowIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetRowIndex(int NewRowIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	UMovieSceneSection_SetRowIndex_Params params;
	params.NewRowIndex = NewRowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetPreRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPreRollFrames                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPreRollFrames(int InPreRollFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	UMovieSceneSection_SetPreRollFrames_Params params;
	params.InPreRollFrames = InPreRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetPostRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPostRollFrames               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPostRollFrames(int InPostRollFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	UMovieSceneSection_SetPostRollFrames_Params params;
	params.InPostRollFrames = InPostRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetOverlapPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetOverlapPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	UMovieSceneSection_SetOverlapPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsLocked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	UMovieSceneSection_SetIsLocked_Params params;
	params.bInIsLocked = bInIsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	UMovieSceneSection_SetIsActive_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetCompletionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// MovieScene_EMovieSceneCompletionMode InCompletionMode               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetCompletionMode(MovieScene_EMovieSceneCompletionMode InCompletionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	UMovieSceneSection_SetCompletionMode_Params params;
	params.InCompletionMode = InCompletionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.SetBlendType
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// MovieScene_EMovieSceneBlendType InBlendType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetBlendType(MovieScene_EMovieSceneBlendType InBlendType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	UMovieSceneSection_SetBlendType_Params params;
	params.InBlendType = InBlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSection.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	UMovieSceneSection_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	UMovieSceneSection_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetRowIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetRowIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	UMovieSceneSection_GetRowIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetPreRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPreRollFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	UMovieSceneSection_GetPreRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetPostRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPostRollFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	UMovieSceneSection_GetPostRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetOverlapPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetOverlapPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	UMovieSceneSection_GetOverlapPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetCompletionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// MovieScene_EMovieSceneCompletionMode ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieScene_EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	UMovieSceneSection_GetCompletionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSection.GetBlendType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOptionalMovieSceneBlendType ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	UMovieSceneSection_GetBlendType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneSection::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSection::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneTrack::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneTrack::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneNameableTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneNameableTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InBindingName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(const struct FName& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	UMovieSceneSequence_FindBindingsByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequence.FindBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InBindingName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(const struct FName& InBindingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	UMovieSceneSequence_FindBindingByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneSequence::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

	READ_PTR_FULL(CompiledData, UMovieSceneCompiledData);
}

void UMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

	DELE_PTR_FULL(CompiledData);
}

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	UMovieSceneSequencePlayer_StopAtCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	UMovieSceneSequencePlayer_SetTimeRange_Params params;
	params.StartTime = StartTime;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParams PlaybackParams                 (Parm, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.PlaybackParams = PlaybackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameRate              FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	UMovieSceneSequencePlayer_SetFrameRate_Params params;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            StartFrame                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SubFrames                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration, float SubFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	UMovieSceneSequencePlayer_SetFrameRange_Params params;
	params.StartFrame = StartFrame;
	params.Duration = Duration;
	params.SubFrames = SubFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInDisableCameraCuts           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	UMovieSceneSequencePlayer_SetDisableCameraCuts_Params params;
	params.bInDisableCameraCuts = bInDisableCameraCuts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	UMovieSceneSequencePlayer_ScrubToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	UMovieSceneSequencePlayer_ScrubToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Scrub()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	UMovieSceneSequencePlayer_Scrub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime              StoppedTime                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	UMovieSceneSequencePlayer_RPC_OnStopEvent_Params params;
	params.StoppedTime = StoppedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// MovieScene_EUpdatePositionMethod Method                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              RelevantTime                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params;
	params.Method = Method;
	params.RelevantTime = RelevantTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	UMovieSceneSequencePlayer_PlayToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	UMovieSceneSequencePlayer_PlayToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	UMovieSceneSequencePlayer_PlayToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParams PlaybackParams                 (Parm, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayTo");

	UMovieSceneSequencePlayer_PlayTo_Params params;
	params.PlaybackParams = PlaybackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	UMovieSceneSequencePlayer_JumpToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InLabel                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const struct FString& InLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	UMovieSceneSequencePlayer_JumpToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	UMovieSceneSequencePlayer_JumpToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	UMovieSceneSequencePlayer_IsReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	UMovieSceneSequencePlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	UMovieSceneSequencePlayer_GoToEndAndStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	UMovieSceneSequencePlayer_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	UMovieSceneSequencePlayer_GetObjectBindings_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameRate              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	UMovieSceneSequencePlayer_GetFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSequencePlayer::GetFrameDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	UMovieSceneSequencePlayer_GetFrameDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	UMovieSceneSequencePlayer_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	UMovieSceneSequencePlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	UMovieSceneSequencePlayer_GetDisableCameraCuts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	UMovieSceneSequencePlayer_GetCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID ObjectBinding                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	UMovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovieSceneSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Sequence, UMovieSceneSequence);
	READ_PTR_FULL(TickManager, UMovieSceneSequenceTickManager);
}

void UMovieSceneSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Sequence);
	DELE_PTR_FULL(TickManager);
}

// Function MovieScene.MovieSceneSubSection.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*     Sequence                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	UMovieSceneSubSection_SetSequence_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSubSection.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequence*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	UMovieSceneSubSection_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneSubSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(SubSequence, UMovieSceneSequence);
}

void UMovieSceneSubSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(SubSequence);
}

void UMovieSceneEntitySystem::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Linker, UMovieSceneEntitySystemLinker);
}

void UMovieSceneEntitySystem::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Linker);
}

void UMovieSceneSubTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSubTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

// Function MovieScene.MovieSceneCustomClockSource.OnTick
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnTick");

	UMovieSceneCustomClockSource_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// (Native, Public, HasOutParms)
// Parameters:
// struct FQualifiedFrameTime     InStopTime                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying");

	UMovieSceneCustomClockSource_OnStopPlaying_Params params;
	params.InStopTime = InStopTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// (Native, Public, HasOutParms)
// Parameters:
// struct FQualifiedFrameTime     InStartTime                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying");

	UMovieSceneCustomClockSource_OnStartPlaying_Params params;
	params.InStartTime = InStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// (Native, Public, HasOutParms)
// Parameters:
// struct FQualifiedFrameTime     InCurrentTime                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime");

	UMovieSceneCustomClockSource_OnRequestCurrentTime_Params params;
	params.InCurrentTime = InCurrentTime;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCustomClockSource::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneCustomClockSource::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneEntityProvider::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneEntityProvider::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieScenePlaybackClient::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieScenePlaybackClient::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneTrackTemplateProducer::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneTrackTemplateProducer::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNodeAndChannelMappings::AfterRead()
{
	UInterface::AfterRead();

}

void UNodeAndChannelMappings::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneNodeGroup::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneNodeGroup::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneNodeGroupCollection::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneNodeGroupCollection::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieScene::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

	READ_PTR_FULL(CameraCutTrack, UMovieSceneTrack);
}

void UMovieScene::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

	DELE_PTR_FULL(CameraCutTrack);
}

void UMovieSceneBindingOverrides::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBindingOverrides::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneBindingOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneBlenderSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneBlenderSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneBoolSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneBoolSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEntityInstantiatorSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneEntityInstantiatorSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneGenericBoundObjectInstantiator::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneGenericBoundObjectInstantiator::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneBoundSceneComponentInstantiator::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneBoundSceneComponentInstantiator::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneSceneComponentImpersonator::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneSceneComponentImpersonator::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneCompiledData::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCompiledData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneCompiledDataManager::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCompiledDataManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneFloatDecomposer::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneFloatDecomposer::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneBuiltInEasingFunction::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBuiltInEasingFunction::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneEasingExternalCurve::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Curve, UCurveFloat);
}

void UMovieSceneEasingExternalCurve::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Curve);
}

// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Interp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	UMovieSceneEasingFunction_OnEvaluate_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneEasingFunction::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneEasingFunction::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneEntitySystemLinker::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneEntitySystemLinker::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneEvalTimeSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneEvalTimeSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneFolder::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneFolder::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneKeyProxy::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneKeyProxy::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneMasterInstantiatorSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneMasterInstantiatorSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieScenePreAnimatedStateSystemInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieScenePreAnimatedStateSystemInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneCachePreAnimatedStateSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneCachePreAnimatedStateSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneRestorePreAnimatedStateSystem::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneRestorePreAnimatedStateSystem::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneSequenceTickManager::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Linker, UMovieSceneEntitySystemLinker);
}

void UMovieSceneSequenceTickManager::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Linker);
}

void UMovieSceneSpawnablesSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

}

void UMovieSceneSpawnablesSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

}

void UMovieSceneSpawnSection::AfterRead()
{
	UMovieSceneBoolSection::AfterRead();

}

void UMovieSceneSpawnSection::BeforeDelete()
{
	UMovieSceneBoolSection::BeforeDelete();

}

void UMovieSceneSpawnTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneSpawnTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UTestMovieSceneTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UTestMovieSceneTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UTestMovieSceneSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UTestMovieSceneSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UTestMovieSceneSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UTestMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void UTestMovieSceneSubTrack::AfterRead()
{
	UMovieSceneSubTrack::AfterRead();

}

void UTestMovieSceneSubTrack::BeforeDelete()
{
	UMovieSceneSubTrack::BeforeDelete();

}

void UTestMovieSceneSubSection::AfterRead()
{
	UMovieSceneSubSection::AfterRead();

}

void UTestMovieSceneSubSection::BeforeDelete()
{
	UMovieSceneSubSection::BeforeDelete();

}

void UMovieSceneTrackInstance::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AnimatedObject, UObject);
	READ_PTR_FULL(Linker, UMovieSceneEntitySystemLinker);
}

void UMovieSceneTrackInstance::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AnimatedObject);
	DELE_PTR_FULL(Linker);
}

void UMovieSceneTrackInstanceInstantiator::AfterRead()
{
	UMovieSceneEntityInstantiatorSystem::AfterRead();

}

void UMovieSceneTrackInstanceInstantiator::BeforeDelete()
{
	UMovieSceneEntityInstantiatorSystem::BeforeDelete();

}

void UMovieSceneTrackInstanceSystem::AfterRead()
{
	UMovieSceneEntitySystem::AfterRead();

	READ_PTR_FULL(Instantiator, UMovieSceneTrackInstanceInstantiator);
}

void UMovieSceneTrackInstanceSystem::BeforeDelete()
{
	UMovieSceneEntitySystem::BeforeDelete();

	DELE_PTR_FULL(Instantiator);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
