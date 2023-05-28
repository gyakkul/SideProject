// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneVectorTrackExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrackExtensions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneFloatVectorTrackExtensions::execGetNumChannelsUsed)
	{
		P_GET_OBJECT(UMovieSceneFloatVectorTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneFloatVectorTrackExtensions::GetNumChannelsUsed(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFloatVectorTrackExtensions::execSetNumChannelsUsed)
	{
		P_GET_OBJECT(UMovieSceneFloatVectorTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumChannelsUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneFloatVectorTrackExtensions::SetNumChannelsUsed(Z_Param_Track,Z_Param_InNumChannelsUsed);
		P_NATIVE_END;
	}
	void UMovieSceneFloatVectorTrackExtensions::StaticRegisterNativesUMovieSceneFloatVectorTrackExtensions()
	{
		UClass* Class = UMovieSceneFloatVectorTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumChannelsUsed", &UMovieSceneFloatVectorTrackExtensions::execGetNumChannelsUsed },
			{ "SetNumChannelsUsed", &UMovieSceneFloatVectorTrackExtensions::execSetNumChannelsUsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics
	{
		struct MovieSceneFloatVectorTrackExtensions_eventGetNumChannelsUsed_Parms
		{
			UMovieSceneFloatVectorTrack* Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFloatVectorTrackExtensions_eventGetNumChannelsUsed_Parms, Track), Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFloatVectorTrackExtensions_eventGetNumChannelsUsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get the number of channels used for this track\n\x09 *\n\x09 * @param Track        The track to query for the number of channels used\n\x09 * @return The number of channels used for this track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the number of channels used for this track\n\n@param Track        The track to query for the number of channels used\n@return The number of channels used for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions, nullptr, "GetNumChannelsUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::MovieSceneFloatVectorTrackExtensions_eventGetNumChannelsUsed_Parms), Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics
	{
		struct MovieSceneFloatVectorTrackExtensions_eventSetNumChannelsUsed_Parms
		{
			UMovieSceneFloatVectorTrack* Track;
			int32 InNumChannelsUsed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFloatVectorTrackExtensions_eventSetNumChannelsUsed_Parms, Track), Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_InNumChannelsUsed = { "InNumChannelsUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFloatVectorTrackExtensions_eventSetNumChannelsUsed_Parms, InNumChannelsUsed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_InNumChannelsUsed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set the number of channels used for this track\n\x09 *\n\x09 * @param Track        The track to set\n\x09 * @param InNumChannelsUsed The number of channels to use for this track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the number of channels used for this track\n\n@param Track        The track to set\n@param InNumChannelsUsed The number of channels to use for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions, nullptr, "SetNumChannelsUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::MovieSceneFloatVectorTrackExtensions_eventSetNumChannelsUsed_Parms), Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatVectorTrackExtensions);
	UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_NoRegister()
	{
		return UMovieSceneFloatVectorTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed, "GetNumChannelsUsed" }, // 3216999339
		{ &Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed, "SetNumChannelsUsed" }, // 2510950545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneFloatVectorTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneFloatVectorTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatVectorTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::ClassParams = {
		&UMovieSceneFloatVectorTrackExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneFloatVectorTrackExtensions>()
	{
		return UMovieSceneFloatVectorTrackExtensions::StaticClass();
	}
	UMovieSceneFloatVectorTrackExtensions::UMovieSceneFloatVectorTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatVectorTrackExtensions);
	UMovieSceneFloatVectorTrackExtensions::~UMovieSceneFloatVectorTrackExtensions() {}
	DEFINE_FUNCTION(UMovieSceneDoubleVectorTrackExtensions::execGetNumChannelsUsed)
	{
		P_GET_OBJECT(UMovieSceneDoubleVectorTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDoubleVectorTrackExtensions::execSetNumChannelsUsed)
	{
		P_GET_OBJECT(UMovieSceneDoubleVectorTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumChannelsUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed(Z_Param_Track,Z_Param_InNumChannelsUsed);
		P_NATIVE_END;
	}
	void UMovieSceneDoubleVectorTrackExtensions::StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions()
	{
		UClass* Class = UMovieSceneDoubleVectorTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumChannelsUsed", &UMovieSceneDoubleVectorTrackExtensions::execGetNumChannelsUsed },
			{ "SetNumChannelsUsed", &UMovieSceneDoubleVectorTrackExtensions::execSetNumChannelsUsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics
	{
		struct MovieSceneDoubleVectorTrackExtensions_eventGetNumChannelsUsed_Parms
		{
			UMovieSceneDoubleVectorTrack* Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDoubleVectorTrackExtensions_eventGetNumChannelsUsed_Parms, Track), Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDoubleVectorTrackExtensions_eventGetNumChannelsUsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get the number of channels used for this track\n\x09 *\n\x09 * @param Track        The track to query for the number of channels used\n\x09 * @return The number of channels used for this track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the number of channels used for this track\n\n@param Track        The track to query for the number of channels used\n@return The number of channels used for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions, nullptr, "GetNumChannelsUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::MovieSceneDoubleVectorTrackExtensions_eventGetNumChannelsUsed_Parms), Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics
	{
		struct MovieSceneDoubleVectorTrackExtensions_eventSetNumChannelsUsed_Parms
		{
			UMovieSceneDoubleVectorTrack* Track;
			int32 InNumChannelsUsed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDoubleVectorTrackExtensions_eventSetNumChannelsUsed_Parms, Track), Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_InNumChannelsUsed = { "InNumChannelsUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDoubleVectorTrackExtensions_eventSetNumChannelsUsed_Parms, InNumChannelsUsed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::NewProp_InNumChannelsUsed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set the number of channels used for this track\n\x09 *\n\x09 * @param Track        The track to set\n\x09 * @param InNumChannelsUsed The number of channels to use for this track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the number of channels used for this track\n\n@param Track        The track to set\n@param InNumChannelsUsed The number of channels to use for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions, nullptr, "SetNumChannelsUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::MovieSceneDoubleVectorTrackExtensions_eventSetNumChannelsUsed_Parms), Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleVectorTrackExtensions);
	UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_NoRegister()
	{
		return UMovieSceneDoubleVectorTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed, "GetNumChannelsUsed" }, // 194954396
		{ &Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed, "SetNumChannelsUsed" }, // 371915639
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneDoubleVectorTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneVectorTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneDoubleVectorTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleVectorTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::ClassParams = {
		&UMovieSceneDoubleVectorTrackExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneDoubleVectorTrackExtensions>()
	{
		return UMovieSceneDoubleVectorTrackExtensions::StaticClass();
	}
	UMovieSceneDoubleVectorTrackExtensions::UMovieSceneDoubleVectorTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleVectorTrackExtensions);
	UMovieSceneDoubleVectorTrackExtensions::~UMovieSceneDoubleVectorTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions, UMovieSceneFloatVectorTrackExtensions::StaticClass, TEXT("UMovieSceneFloatVectorTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatVectorTrackExtensions), 154230493U) },
		{ Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions, UMovieSceneDoubleVectorTrackExtensions::StaticClass, TEXT("UMovieSceneDoubleVectorTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleVectorTrackExtensions), 3112857757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h_3217555701(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
