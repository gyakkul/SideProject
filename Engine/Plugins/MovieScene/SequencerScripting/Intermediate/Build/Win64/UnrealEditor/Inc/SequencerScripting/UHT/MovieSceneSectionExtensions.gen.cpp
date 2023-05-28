// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneSectionExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionExtensions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSectionExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetParentSequenceFrame)
	{
		P_GET_OBJECT(UMovieSceneSubSection,Z_Param_Section);
		P_GET_PROPERTY(FIntProperty,Z_Param_InFrame);
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_ParentSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetParentSequenceFrame(Z_Param_Section,Z_Param_InFrame,Z_Param_ParentSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetChannelsByType)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_OBJECT(UClass,Z_Param_ChannelType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::GetChannelsByType(Z_Param_Section,Z_Param_ChannelType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execFindChannelsByType)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_OBJECT(UClass,Z_Param_ChannelType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::FindChannelsByType(Z_Param_Section,Z_Param_ChannelType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAllChannels)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::GetAllChannels(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetChannels)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingChannel*>*)Z_Param__Result=UMovieSceneSectionExtensions::GetChannels(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrameBounded)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_UBOOL(Z_Param_bIsBounded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetEndFrameBounded(Z_Param_Section,Z_Param_bIsBounded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetEndFrameSeconds(Z_Param_Section,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetEndFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetEndFrame(Z_Param_Section,Z_Param_EndFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrameBounded)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_UBOOL(Z_Param_bIsBounded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetStartFrameBounded(Z_Param_Section,Z_Param_bIsBounded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetStartFrameSeconds(Z_Param_Section,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetStartFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetStartFrame(Z_Param_Section,Z_Param_StartFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetRangeSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetRangeSeconds(Z_Param_Section,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execSetRange)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneSectionExtensions::SetRange(Z_Param_Section,Z_Param_StartFrame,Z_Param_EndFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeEndFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeEndFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeEndFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeHasEndFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeStartFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeStartFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeStartFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetAutoSizeHasStartFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetEndFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetEndFrameSeconds(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetEndFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetEndFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execHasEndFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::HasEndFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetStartFrameSeconds)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneSectionExtensions::GetStartFrameSeconds(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execGetStartFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneSectionExtensions::GetStartFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneSectionExtensions::execHasStartFrame)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneSectionExtensions::HasStartFrame(Z_Param_Section);
		P_NATIVE_END;
	}
	void UMovieSceneSectionExtensions::StaticRegisterNativesUMovieSceneSectionExtensions()
	{
		UClass* Class = UMovieSceneSectionExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindChannelsByType", &UMovieSceneSectionExtensions::execFindChannelsByType },
			{ "GetAllChannels", &UMovieSceneSectionExtensions::execGetAllChannels },
			{ "GetAutoSizeEndFrame", &UMovieSceneSectionExtensions::execGetAutoSizeEndFrame },
			{ "GetAutoSizeEndFrameSeconds", &UMovieSceneSectionExtensions::execGetAutoSizeEndFrameSeconds },
			{ "GetAutoSizeHasEndFrame", &UMovieSceneSectionExtensions::execGetAutoSizeHasEndFrame },
			{ "GetAutoSizeHasStartFrame", &UMovieSceneSectionExtensions::execGetAutoSizeHasStartFrame },
			{ "GetAutoSizeStartFrame", &UMovieSceneSectionExtensions::execGetAutoSizeStartFrame },
			{ "GetAutoSizeStartFrameSeconds", &UMovieSceneSectionExtensions::execGetAutoSizeStartFrameSeconds },
			{ "GetChannels", &UMovieSceneSectionExtensions::execGetChannels },
			{ "GetChannelsByType", &UMovieSceneSectionExtensions::execGetChannelsByType },
			{ "GetEndFrame", &UMovieSceneSectionExtensions::execGetEndFrame },
			{ "GetEndFrameSeconds", &UMovieSceneSectionExtensions::execGetEndFrameSeconds },
			{ "GetParentSequenceFrame", &UMovieSceneSectionExtensions::execGetParentSequenceFrame },
			{ "GetStartFrame", &UMovieSceneSectionExtensions::execGetStartFrame },
			{ "GetStartFrameSeconds", &UMovieSceneSectionExtensions::execGetStartFrameSeconds },
			{ "HasEndFrame", &UMovieSceneSectionExtensions::execHasEndFrame },
			{ "HasStartFrame", &UMovieSceneSectionExtensions::execHasStartFrame },
			{ "SetEndFrame", &UMovieSceneSectionExtensions::execSetEndFrame },
			{ "SetEndFrameBounded", &UMovieSceneSectionExtensions::execSetEndFrameBounded },
			{ "SetEndFrameSeconds", &UMovieSceneSectionExtensions::execSetEndFrameSeconds },
			{ "SetRange", &UMovieSceneSectionExtensions::execSetRange },
			{ "SetRangeSeconds", &UMovieSceneSectionExtensions::execSetRangeSeconds },
			{ "SetStartFrame", &UMovieSceneSectionExtensions::execSetStartFrame },
			{ "SetStartFrameBounded", &UMovieSceneSectionExtensions::execSetStartFrameBounded },
			{ "SetStartFrameSeconds", &UMovieSceneSectionExtensions::execSetStartFrameSeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics
	{
		struct MovieSceneSectionExtensions_eventFindChannelsByType_Parms
		{
			UMovieSceneSection* Section;
			TSubclassOf<UMovieSceneScriptingChannel>  ChannelType;
			TArray<UMovieSceneScriptingChannel*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChannelType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventFindChannelsByType_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ChannelType = { "ChannelType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventFindChannelsByType_Parms, ChannelType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventFindChannelsByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ChannelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetChannelsByType instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "FindChannelsByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::MovieSceneSectionExtensions_eventFindChannelsByType_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAllChannels_Parms
		{
			UMovieSceneSection* Section;
			TArray<UMovieSceneScriptingChannel*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAllChannels_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAllChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09* Find all channels that belong to the specified UMovieSceneSection. Some sections have many channels (such as\n\x09* Transforms containing 9 double channels to represent Translation/Rotation/Scale), and a section may have mixed\n\x09* channel types.\n\x09*\n\x09* @param Section       The section to use.\n\x09* @return An array containing any key channels that match the type specified\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all channels that belong to the specified UMovieSceneSection. Some sections have many channels (such as\nTransforms containing 9 double channels to represent Translation/Rotation/Scale), and a section may have mixed\nchannel types.\n\n@param Section       The section to use.\n@return An array containing any key channels that match the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAllChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::MovieSceneSectionExtensions_eventGetAllChannels_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end frame of the AutoSize. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The end frame of the AutoSize data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end frame of the AutoSize. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\n@param Section        The section being queried\n@return The end frame of the AutoSize data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end time of the AutoSize seconds. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The end frame of the AutoSize data in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end time of the AutoSize seconds. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.\n\n@param Section        The section being queried\n@return The end frame of the AutoSize data in seconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeEndFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeEndFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms
		{
			UMovieSceneSection* Section;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a end frame.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid autosize range, and a valid end frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a end frame.\n\n@param Section        The section being queried\n@return Whether this section has a valid autosize range, and a valid end frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeHasEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasEndFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms
		{
			UMovieSceneSection* Section;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a start frame.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid autosize range, and a valid start frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a start frame.\n\n@param Section        The section being queried\n@return Whether this section has a valid autosize range, and a valid start frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeHasStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeHasStartFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start frame of the AutoSize. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The start frame of the AutoSize data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start frame of the AutoSize. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\n@param Section        The section being queried\n@return The start frame of the AutoSize data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start time of the AutoSize in seconds. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return The start frame of the AutoSize data in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start time of the AutoSize in seconds. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.\n\n@param Section        The section being queried\n@return The start frame of the AutoSize data in seconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetAutoSizeStartFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetAutoSizeStartFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics
	{
		struct MovieSceneSectionExtensions_eventGetChannels_Parms
		{
			UMovieSceneSection* Section;
			TArray<UMovieSceneScriptingChannel*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannels_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetAllChannels instead and query double-precision channels as such where appropriate" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::MovieSceneSectionExtensions_eventGetChannels_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics
	{
		struct MovieSceneSectionExtensions_eventGetChannelsByType_Parms
		{
			UMovieSceneSection* Section;
			TSubclassOf<UMovieSceneScriptingChannel>  ChannelType;
			TArray<UMovieSceneScriptingChannel*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChannelType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ChannelType = { "ChannelType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, ChannelType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetChannelsByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ChannelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09* Find all channels that belong to the specified UMovieSceneSection that match the specific type. This will filter out any children who do not inherit\n\x09* from the specified type for you.\n\x09*\n\x09* @param Section        The section to use.\n\x09* @param ChannelType\x09The class type to look for.\n\x09* @return An array containing any key channels that match the type specified\n\x09*/" },
		{ "DeterminesOutputType", "TrackType" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all channels that belong to the specified UMovieSceneSection that match the specific type. This will filter out any children who do not inherit\nfrom the specified type for you.\n\n@param Section        The section to use.\n@param ChannelType    The class type to look for.\n@return An array containing any key channels that match the type specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetChannelsByType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::MovieSceneSectionExtensions_eventGetChannelsByType_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetEndFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end frame. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the end frame\n\x09 * @return End frame of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end frame. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\n@param Section        The section within which to get the end frame\n@return End frame of this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::MovieSceneSectionExtensions_eventGetEndFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get end time in seconds. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the end time\n\x09 * @return End time of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get end time in seconds. Will throw an exception if section has no end frame, use HasEndFrame to check first.\n\n@param Section        The section within which to get the end time\n@return End time of this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetEndFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetEndFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms
		{
			UMovieSceneSubSection* Section;
			int32 InFrame;
			UMovieSceneSequence* ParentSequence;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFrame;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSequence;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_InFrame = { "InFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, InFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ParentSequence = { "ParentSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, ParentSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_InFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ParentSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get the frame in the space of its parent sequence\n\x09 *\n\x09 * @param Section        The section that the InFrame is local to\n\x09 * @param InFrame The desired local frame\n\x09 * @param ParentSequence The parent sequence to traverse from\n\x09 * @return The frame at the parent sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the frame in the space of its parent sequence\n\n@param Section        The section that the InFrame is local to\n@param InFrame The desired local frame\n@param ParentSequence The parent sequence to traverse from\n@return The frame at the parent sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetParentSequenceFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::MovieSceneSectionExtensions_eventGetParentSequenceFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventGetStartFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start frame. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the start frame\n\x09 * @return Start frame of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start frame. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\n@param Section        The section within which to get the start frame\n@return Start frame of this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::MovieSceneSectionExtensions_eventGetStartFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Get start time in seconds. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\x09 *\n\x09 * @param Section        The section within which to get the start time\n\x09 * @return Start time of this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get start time in seconds. Will throw an exception if section has no start frame, use HasStartFrame to check first.\n\n@param Section        The section within which to get the start time\n@return Start time of this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "GetStartFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventGetStartFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventHasEndFrame_Parms
		{
			UMovieSceneSection* Section;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventHasEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventHasEndFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventHasEndFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Has end frame\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid end frame (else infinite)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Has end frame\n\n@param Section        The section being queried\n@return Whether this section has a valid end frame (else infinite)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "HasEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::MovieSceneSectionExtensions_eventHasEndFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventHasStartFrame_Parms
		{
			UMovieSceneSection* Section;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventHasStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventHasStartFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventHasStartFrame_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Has start frame\n\x09 *\n\x09 * @param Section        The section being queried\n\x09 * @return Whether this section has a valid start frame (else infinite)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Has start frame\n\n@param Section        The section being queried\n@return Whether this section has a valid start frame (else infinite)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "HasStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::MovieSceneSectionExtensions_eventHasStartFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventSetEndFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 EndFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrame_Parms, EndFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::NewProp_EndFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set end frame\n\x09 *\n\x09 * @param Section        The section within which to set the end frame\n\x09 * @param EndFrame The desired start frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end frame\n\n@param Section        The section within which to set the end frame\n@param EndFrame The desired start frame for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::MovieSceneSectionExtensions_eventSetEndFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics
	{
		struct MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms
		{
			UMovieSceneSection* Section;
			bool bIsBounded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_bIsBounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBounded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms*)Obj)->bIsBounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded = { "bIsBounded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::NewProp_bIsBounded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n     * Set end frame bounded\n\x09 *\n\x09 * @param Section        The section to set whether the end frame is bounded or not\n\x09 * @param IsBounded The desired bounded state of the end frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end frame bounded\n\n@param Section        The section to set whether the end frame is bounded or not\n@param IsBounded The desired bounded state of the end frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrameBounded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::MovieSceneSectionExtensions_eventSetEndFrameBounded_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float EndTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set end time in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the end time\n\x09 * @param EndTime The desired end time for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set end time in seconds\n\n@param Section        The section within which to set the end time\n@param EndTime The desired end time for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetEndFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetEndFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics
	{
		struct MovieSceneSectionExtensions_eventSetRange_Parms
		{
			UMovieSceneSection* Section;
			int32 StartFrame;
			int32 EndFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRange_Parms, EndFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::NewProp_EndFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set range\n\x09 *\n\x09 * @param Section        The section within which to set the range\n\x09 * @param StartFrame The desired start frame for this section\n\x09 * @param EndFrame The desired end frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set range\n\n@param Section        The section within which to set the range\n@param StartFrame The desired start frame for this section\n@param EndFrame The desired end frame for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::MovieSceneSectionExtensions_eventSetRange_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventSetRangeSeconds_Parms
		{
			UMovieSceneSection* Section;
			float StartTime;
			float EndTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetRangeSeconds_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set range in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the range\n\x09 * @param StartTime The desired start frame for this section\n\x09 * @param EndTime The desired end frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set range in seconds\n\n@param Section        The section within which to set the range\n@param StartTime The desired start frame for this section\n@param EndTime The desired end frame for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetRangeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::MovieSceneSectionExtensions_eventSetRangeSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics
	{
		struct MovieSceneSectionExtensions_eventSetStartFrame_Parms
		{
			UMovieSceneSection* Section;
			int32 StartFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrame_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrame_Parms, StartFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::NewProp_StartFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start frame\n\x09 *\n\x09 * @param Section        The section within which to set the start frame\n\x09 * @param StartFrame The desired start frame for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start frame\n\n@param Section        The section within which to set the start frame\n@param StartFrame The desired start frame for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::MovieSceneSectionExtensions_eventSetStartFrame_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics
	{
		struct MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms
		{
			UMovieSceneSection* Section;
			bool bIsBounded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static void NewProp_bIsBounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBounded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded_SetBit(void* Obj)
	{
		((MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms*)Obj)->bIsBounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded = { "bIsBounded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms), &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::NewProp_bIsBounded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start frame bounded\n\x09 *\n\x09 * @param Section        The section to set whether the start frame is bounded or not\n\x09 * @param IsBounded The desired bounded state of the start frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start frame bounded\n\n@param Section        The section to set whether the start frame is bounded or not\n@param IsBounded The desired bounded state of the start frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrameBounded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::MovieSceneSectionExtensions_eventSetStartFrameBounded_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics
	{
		struct MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms
		{
			UMovieSceneSection* Section;
			float StartTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_Section,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Set start time in seconds\n\x09 *\n\x09 * @param Section        The section within which to set the start time\n\x09 * @param StartTime The desired start time for this section\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set start time in seconds\n\n@param Section        The section within which to set the start time\n@param StartTime The desired start time for this section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSectionExtensions, nullptr, "SetStartFrameSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::MovieSceneSectionExtensions_eventSetStartFrameSeconds_Parms), Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSectionExtensions);
	UClass* Z_Construct_UClass_UMovieSceneSectionExtensions_NoRegister()
	{
		return UMovieSceneSectionExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSectionExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_FindChannelsByType, "FindChannelsByType" }, // 2930606591
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAllChannels, "GetAllChannels" }, // 1776691538
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrame, "GetAutoSizeEndFrame" }, // 1865166597
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds, "GetAutoSizeEndFrameSeconds" }, // 2981181228
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame, "GetAutoSizeHasEndFrame" }, // 3679333096
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame, "GetAutoSizeHasStartFrame" }, // 3709857317
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrame, "GetAutoSizeStartFrame" }, // 587091869
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds, "GetAutoSizeStartFrameSeconds" }, // 4132832748
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannels, "GetChannels" }, // 1001667035
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetChannelsByType, "GetChannelsByType" }, // 1884756022
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrame, "GetEndFrame" }, // 788910385
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetEndFrameSeconds, "GetEndFrameSeconds" }, // 1612430117
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetParentSequenceFrame, "GetParentSequenceFrame" }, // 938551722
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrame, "GetStartFrame" }, // 1016277036
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_GetStartFrameSeconds, "GetStartFrameSeconds" }, // 2175250935
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasEndFrame, "HasEndFrame" }, // 2495739432
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_HasStartFrame, "HasStartFrame" }, // 491925294
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrame, "SetEndFrame" }, // 902899055
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameBounded, "SetEndFrameBounded" }, // 2846330218
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetEndFrameSeconds, "SetEndFrameSeconds" }, // 1281376512
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRange, "SetRange" }, // 2379180274
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetRangeSeconds, "SetRangeSeconds" }, // 2997145961
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrame, "SetStartFrame" }, // 3304633810
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameBounded, "SetStartFrameBounded" }, // 2884597807
		{ &Z_Construct_UFunction_UMovieSceneSectionExtensions_SetStartFrameSeconds, "SetStartFrameSeconds" }, // 2880505698
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneSections for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSectionExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneSections for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSectionExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::ClassParams = {
		&UMovieSceneSectionExtensions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSectionExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneSectionExtensions>()
	{
		return UMovieSceneSectionExtensions::StaticClass();
	}
	UMovieSceneSectionExtensions::UMovieSceneSectionExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSectionExtensions);
	UMovieSceneSectionExtensions::~UMovieSceneSectionExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSectionExtensions, UMovieSceneSectionExtensions::StaticClass, TEXT("UMovieSceneSectionExtensions"), &Z_Registration_Info_UClass_UMovieSceneSectionExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSectionExtensions), 2626947165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_109264117(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSectionExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
