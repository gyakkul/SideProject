// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneControlRigSpaceChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_MovieSceneControlRigSpaceChannel_generated_h
#error "MovieSceneControlRigSpaceChannel.generated.h already included, missing '#pragma once' in MovieSceneControlRigSpaceChannel.h"
#endif
#define CONTROLRIG_MovieSceneControlRigSpaceChannel_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMovieSceneControlRigSpaceBaseKey>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMovieSceneControlRigSpaceChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h


#define FOREACH_ENUM_EMOVIESCENECONTROLRIGSPACETYPE(op) \
	op(EMovieSceneControlRigSpaceType::Parent) \
	op(EMovieSceneControlRigSpaceType::World) \
	op(EMovieSceneControlRigSpaceType::ControlRig) 

enum class EMovieSceneControlRigSpaceType : uint8;
template<> struct TIsUEnumClass<EMovieSceneControlRigSpaceType> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EMovieSceneControlRigSpaceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
