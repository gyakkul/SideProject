// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneCinePrestreamingSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinePrestreamingSection() {}
// Cross Module References
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UCinePrestreamingData_NoRegister();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingSection();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister();
	CINEMATICPRESTREAMING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreaming();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCinePrestreamingSection::execSetStartFrameOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartFrameOffset(Z_Param_InOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinePrestreamingSection::execSetQualityLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQualityLevel(Z_Param_InLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinePrestreamingSection::execGetQualityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQualityLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinePrestreamingSection::execSetPrestreamingAsset)
	{
		P_GET_OBJECT(UCinePrestreamingData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrestreamingAsset(Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinePrestreamingSection::execGetPrestreamingAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UCinePrestreamingData>*)Z_Param__Result=P_THIS->GetPrestreamingAsset();
		P_NATIVE_END;
	}
	void UMovieSceneCinePrestreamingSection::StaticRegisterNativesUMovieSceneCinePrestreamingSection()
	{
		UClass* Class = UMovieSceneCinePrestreamingSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrestreamingAsset", &UMovieSceneCinePrestreamingSection::execGetPrestreamingAsset },
			{ "GetQualityLevel", &UMovieSceneCinePrestreamingSection::execGetQualityLevel },
			{ "SetPrestreamingAsset", &UMovieSceneCinePrestreamingSection::execSetPrestreamingAsset },
			{ "SetQualityLevel", &UMovieSceneCinePrestreamingSection::execSetQualityLevel },
			{ "SetStartFrameOffset", &UMovieSceneCinePrestreamingSection::execSetStartFrameOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics
	{
		struct MovieSceneCinePrestreamingSection_eventGetPrestreamingAsset_Parms
		{
			TSoftObjectPtr<UCinePrestreamingData> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinePrestreamingSection_eventGetPrestreamingAsset_Parms, ReturnValue), Z_Construct_UClass_UCinePrestreamingData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "Comment", "/** Get the prestreaming asset soft pointer. Use for async loading. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "Get the prestreaming asset soft pointer. Use for async loading." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinePrestreamingSection, nullptr, "GetPrestreamingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::MovieSceneCinePrestreamingSection_eventGetPrestreamingAsset_Parms), Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics
	{
		struct MovieSceneCinePrestreamingSection_eventGetQualityLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinePrestreamingSection_eventGetQualityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "Comment", "/** If MovieScene.PreStream.QualityLevel is less than this then discard this section at runtime. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "If MovieScene.PreStream.QualityLevel is less than this then discard this section at runtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinePrestreamingSection, nullptr, "GetQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::MovieSceneCinePrestreamingSection_eventGetQualityLevel_Parms), Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics
	{
		struct MovieSceneCinePrestreamingSection_eventSetPrestreamingAsset_Parms
		{
			const UCinePrestreamingData* InData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinePrestreamingSection_eventSetPrestreamingAsset_Parms, InData), Z_Construct_UClass_UCinePrestreamingData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::NewProp_InData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::NewProp_InData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinePrestreamingSection, nullptr, "SetPrestreamingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::MovieSceneCinePrestreamingSection_eventSetPrestreamingAsset_Parms), Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics
	{
		struct MovieSceneCinePrestreamingSection_eventSetQualityLevel_Parms
		{
			int32 InLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::NewProp_InLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinePrestreamingSection_eventSetQualityLevel_Parms, InLevel), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::NewProp_InLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::NewProp_InLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::NewProp_InLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinePrestreamingSection, nullptr, "SetQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::MovieSceneCinePrestreamingSection_eventSetQualityLevel_Parms), Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics
	{
		struct MovieSceneCinePrestreamingSection_eventSetStartFrameOffset_Parms
		{
			int32 InOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::NewProp_InOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinePrestreamingSection_eventSetStartFrameOffset_Parms, InOffset), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::NewProp_InOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::NewProp_InOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic Prestreaming" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinePrestreamingSection, nullptr, "SetStartFrameOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::MovieSceneCinePrestreamingSection_eventSetStartFrameOffset_Parms), Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinePrestreamingSection);
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister()
	{
		return UMovieSceneCinePrestreamingSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrestreamingAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PrestreamingAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetPrestreamingAsset, "GetPrestreamingAsset" }, // 2328676483
		{ &Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_GetQualityLevel, "GetQualityLevel" }, // 1637088020
		{ &Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetPrestreamingAsset, "SetPrestreamingAsset" }, // 507879993
		{ &Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetQualityLevel, "SetQualityLevel" }, // 883302659
		{ &Z_Construct_UFunction_UMovieSceneCinePrestreamingSection_SetStartFrameOffset, "SetStartFrameOffset" }, // 1861691348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Movie Scene Section representing a Prestreaming asset. */" },
		{ "IncludePath", "Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie Scene Section representing a Prestreaming asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_PrestreamingAsset_MetaData[] = {
		{ "Category", "Prestreaming" },
		{ "Comment", "/** The asset containing cinematic prestreaming data to use for this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "The asset containing cinematic prestreaming data to use for this section." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_PrestreamingAsset = { "PrestreamingAsset", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinePrestreamingSection, PrestreamingAsset), Z_Construct_UClass_UCinePrestreamingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_PrestreamingAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_PrestreamingAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Prestreaming" },
		{ "Comment", "/** Number of frames by which to offset the evaluation. Larger values cause prestreaming to happen earlier. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "Number of frames by which to offset the evaluation. Larger values cause prestreaming to happen earlier." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinePrestreamingSection, StartFrameOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_QualityLevel_MetaData[] = {
		{ "Category", "Prestreaming" },
		{ "Comment", "/** If If MovieScene.PreStream.QualityLevel is less than this then discard this section at runtime. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "If If MovieScene.PreStream.QualityLevel is less than this then discard this section at runtime." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinePrestreamingSection, QualityLevel), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_QualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_QualityLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_PrestreamingAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::NewProp_QualityLevel,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCinePrestreamingSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinePrestreamingSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::ClassParams = {
		&UMovieSceneCinePrestreamingSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCinePrestreamingSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinePrestreamingSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCinePrestreamingSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCinePrestreamingSection.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMING_API UClass* StaticClass<UMovieSceneCinePrestreamingSection>()
	{
		return UMovieSceneCinePrestreamingSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinePrestreamingSection);
	UMovieSceneCinePrestreamingSection::~UMovieSceneCinePrestreamingSection() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData;
class UScriptStruct* FMovieSceneCinePrestreamingComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData, (UObject*)Z_Construct_UPackage__Script_CinematicPrestreaming(), TEXT("MovieSceneCinePrestreamingComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.OuterSingleton;
}
template<> CINEMATICPRESTREAMING_API UScriptStruct* StaticStruct<FMovieSceneCinePrestreamingComponentData>()
{
	return FMovieSceneCinePrestreamingComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the cinematic prestreaming system. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "ToolTip", "Component data for the cinematic prestreaming system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCinePrestreamingComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinePrestreamingSection.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCinePrestreamingComponentData, Section), Z_Construct_UClass_UMovieSceneCinePrestreamingSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
		nullptr,
		&NewStructOps,
		"MovieSceneCinePrestreamingComponentData",
		sizeof(FMovieSceneCinePrestreamingComponentData),
		alignof(FMovieSceneCinePrestreamingComponentData),
		Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCinePrestreamingComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCinePrestreamingComponentData_Statics::NewStructOps, TEXT("MovieSceneCinePrestreamingComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneCinePrestreamingComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCinePrestreamingComponentData), 3520741578U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinePrestreamingSection, UMovieSceneCinePrestreamingSection::StaticClass, TEXT("UMovieSceneCinePrestreamingSection"), &Z_Registration_Info_UClass_UMovieSceneCinePrestreamingSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinePrestreamingSection), 3130352272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_2309867620(TEXT("/Script/CinematicPrestreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Sections_MovieSceneCinePrestreamingSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
