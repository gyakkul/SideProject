// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneCinematicShotSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCinematicShotSection::execSetShotDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InShotDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShotDisplayName(Z_Param_InShotDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCinematicShotSection::execGetShotDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetShotDisplayName();
		P_NATIVE_END;
	}
	void UMovieSceneCinematicShotSection::StaticRegisterNativesUMovieSceneCinematicShotSection()
	{
		UClass* Class = UMovieSceneCinematicShotSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShotDisplayName", &UMovieSceneCinematicShotSection::execGetShotDisplayName },
			{ "SetShotDisplayName", &UMovieSceneCinematicShotSection::execSetShotDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics
	{
		struct MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** @return The shot display name. if empty, returns the sequence's name*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "@return The shot display name. if empty, returns the sequence's name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinematicShotSection, nullptr, "GetShotDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::MovieSceneCinematicShotSection_eventGetShotDisplayName_Parms), Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics
	{
		struct MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms
		{
			FString InShotDisplayName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InShotDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InShotDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName = { "InShotDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms, InShotDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::NewProp_InShotDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Set the shot display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "Set the shot display name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCinematicShotSection, nullptr, "SetShotDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::MovieSceneCinematicShotSection_eventSetShotDisplayName_Parms), Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinematicShotSection);
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShotDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCinematicShotSection_GetShotDisplayName, "GetShotDisplayName" }, // 587678655
		{ &Z_Construct_UFunction_UMovieSceneCinematicShotSection_SetShotDisplayName, "SetShotDisplayName" }, // 2943491283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a cinematic shot section.\n */" },
		{ "IncludePath", "Sections/MovieSceneCinematicShotSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a cinematic shot section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData[] = {
		{ "Comment", "/** The Shot's display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName = { "ShotDisplayName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ShotDisplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The Shot's display name */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, DisplayName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "Comment", "/** The shot's reference frame offset for single thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The shot's reference frame offset for single thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinematicShotSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams = {
		&UMovieSceneCinematicShotSection::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers),
		0,
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCinematicShotSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCinematicShotSection>()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotSection);
	UMovieSceneCinematicShotSection::~UMovieSceneCinematicShotSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinematicShotSection, UMovieSceneCinematicShotSection::StaticClass, TEXT("UMovieSceneCinematicShotSection"), &Z_Registration_Info_UClass_UMovieSceneCinematicShotSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinematicShotSection), 1967813326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_329134259(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCinematicShotSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
