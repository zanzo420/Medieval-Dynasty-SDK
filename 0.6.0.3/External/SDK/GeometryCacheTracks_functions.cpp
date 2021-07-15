﻿// Name: Medieval Dynasty, Version: 0.6.0.3

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

void FMovieSceneGeometryCacheParams::AfterRead()
{
	READ_PTR_FULL(GeometryCacheAsset, UGeometryCache);
}

void FMovieSceneGeometryCacheParams::BeforeDelete()
{
	DELE_PTR_FULL(GeometryCacheAsset);
}

void FMovieSceneGeometryCacheSectionTemplateParameters::AfterRead()
{
	FMovieSceneGeometryCacheParams::AfterRead();

}

void FMovieSceneGeometryCacheSectionTemplateParameters::BeforeDelete()
{
	FMovieSceneGeometryCacheParams::BeforeDelete();

}

void FMovieSceneGeometryCacheSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneGeometryCacheSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void UMovieSceneGeometryCacheSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneGeometryCacheSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneGeometryCacheTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneGeometryCacheTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
