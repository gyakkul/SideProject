// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneAudioSection.h"
#include "Channels/MovieSceneAudioTriggerChannel.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "Channels/MovieSceneStringChannel.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAudioSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneAudioSection::execGetStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAudioSection::execSetStartOffset)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartOffset(Z_Param_InStartOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAudioSection::execGetSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->GetSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAudioSection::execSetSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_InSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_InSound);
		P_NATIVE_END;
	}
	void UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection()
	{
		UClass* Class = UMovieSceneAudioSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSound", &UMovieSceneAudioSection::execGetSound },
			{ "GetStartOffset", &UMovieSceneAudioSection::execGetStartOffset },
			{ "SetSound", &UMovieSceneAudioSection::execSetSound },
			{ "SetStartOffset", &UMovieSceneAudioSection::execSetStartOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics
	{
		struct MovieSceneAudioSection_eventGetSound_Parms
		{
			USoundBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAudioSection_eventGetSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Gets the sound for this section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Gets the sound for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::MovieSceneAudioSection_eventGetSound_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics
	{
		struct MovieSceneAudioSection_eventGetStartOffset_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAudioSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Get the offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "GetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::MovieSceneAudioSection_eventGetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics
	{
		struct MovieSceneAudioSection_eventSetSound_Parms
		{
			USoundBase* InSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound = { "InSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAudioSection_eventSetSound_Parms, InSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::NewProp_InSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets this section's sound */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Sets this section's sound" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::MovieSceneAudioSection_eventSetSound_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics
	{
		struct MovieSceneAudioSection_eventSetStartOffset_Parms
		{
			FFrameNumber InStartOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneAudioSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::NewProp_InStartOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set the offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Set the offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAudioSection, nullptr, "SetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::MovieSceneAudioSection_eventSetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAudioSection);
	UClass* Z_Construct_UClass_UMovieSceneAudioSection_NoRegister()
	{
		return UMovieSceneAudioSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAudioSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDilationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioDilationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Float_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Float_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Float_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Float;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_String_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_String_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_String_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_String;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Bool_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Bool_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Bool_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Bool;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Int_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Int_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Int_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Int;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Trigger_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Inputs_Trigger_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueueSubtitles_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnQueueSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackPercent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAudioSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneAudioSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetSound, "GetSound" }, // 2801040392
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_GetStartOffset, "GetStartOffset" }, // 1626002816
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetSound, "SetSound" }, // 826233961
		{ &Z_Construct_UFunction_UMovieSceneAudioSection_SetStartOffset, "SetStartOffset" }, // 757551721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Audio section, for use in the audio track, or by attached audio objects\n */" },
		{ "IncludePath", "Sections/MovieSceneAudioSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Audio section, for use in the audio track, or by attached audio objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The sound cue or wave that this section plays */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The sound cue or wave that this section plays" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Comment", "/** The offset into the beginning of the audio clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The offset into the beginning of the audio clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData[] = {
		{ "Comment", "/** The absolute time that the sound starts playing at */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The absolute time that the sound starts playing at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime = { "AudioStartTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioStartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData[] = {
		{ "Comment", "/** The amount which this audio is time dilated by */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The amount which this audio is time dilated by" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor = { "AudioDilationFactor", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioDilationFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData[] = {
		{ "Comment", "/** The volume the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume = { "AudioVolume", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AudioVolume_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "Comment", "/** The volume the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The volume the sound will be played with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Comment", "/** The pitch multiplier the sound will be played with. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The pitch multiplier the sound will be played with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_ValueProp = { "Inputs_Float", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_Key_KeyProp = { "Inputs_Float_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_MetaData[] = {
		{ "Comment", "/** Generic inputs for the sound  */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Generic inputs for the sound" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float = { "Inputs_Float", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Float), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_ValueProp = { "Inputs_String", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(nullptr, 0) }; // 2536368632
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_Key_KeyProp = { "Inputs_String_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String = { "Inputs_String", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_String), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_MetaData)) }; // 2536368632
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_ValueProp = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(nullptr, 0) }; // 2252890828
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_Key_KeyProp = { "Inputs_Bool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool = { "Inputs_Bool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Bool), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_MetaData)) }; // 2252890828
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_ValueProp = { "Inputs_Int", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(nullptr, 0) }; // 2921625975
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_Key_KeyProp = { "Inputs_Int_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int = { "Inputs_Int", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Int), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_MetaData)) }; // 2921625975
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_ValueProp = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel, METADATA_PARAMS(nullptr, 0) }; // 2588004683
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp = { "Inputs_Trigger_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger = { "Inputs_Trigger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, Inputs_Trigger), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_MetaData)) }; // 2588004683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData_MetaData)) }; // 124520195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/* Allow looping if the section length is greater than the sound duration */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Allow looping if the section length is greater than the sound duration" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneAudioSection*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UMovieSceneAudioSection*)Obj)->bSuppressSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the attenuation settings on this section be used. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Should the attenuation settings on this section be used." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UMovieSceneAudioSection*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneAudioSection), &Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation settings to use. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "The attenuation settings to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData[] = {
		{ "Comment", "/** Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles = { "OnQueueSubtitles", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnQueueSubtitles), Z_Construct_UDelegateFunction_Engine_OnQueueSubtitles__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles_MetaData)) }; // 2150454995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioFinished), Z_Construct_UDelegateFunction_Engine_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished_MetaData)) }; // 1676964744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneAudioSection.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent = { "OnAudioPlaybackPercent", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneAudioSection, OnAudioPlaybackPercent), Z_Construct_UDelegateFunction_Engine_OnAudioPlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent_MetaData)) }; // 4279184691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioDilationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_SoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_Inputs_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttachActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bSuppressSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnQueueSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAudioSection_Statics::NewProp_OnAudioPlaybackPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAudioSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams = {
		&UMovieSceneAudioSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAudioSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton, Z_Construct_UClass_UMovieSceneAudioSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneAudioSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneAudioSection>()
	{
		return UMovieSceneAudioSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioSection);
	UMovieSceneAudioSection::~UMovieSceneAudioSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAudioSection)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAudioSection, UMovieSceneAudioSection::StaticClass, TEXT("UMovieSceneAudioSection"), &Z_Registration_Info_UClass_UMovieSceneAudioSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAudioSection), 274737638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_269266715(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
