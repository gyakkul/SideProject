// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieSceneEventBlueprintExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventBlueprintExtension() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneEventBlueprintExtension();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneEventBlueprintExtension_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	void UMovieSceneEventBlueprintExtension::StaticRegisterNativesUMovieSceneEventBlueprintExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventBlueprintExtension);
	UClass* Z_Construct_UClass_UMovieSceneEventBlueprintExtension_NoRegister()
	{
		return UMovieSceneEventBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EventSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneEventBlueprintExtension.h" },
		{ "ModuleRelativePath", "Private/MovieSceneEventBlueprintExtension.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections_Inner = { "EventSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections_MetaData[] = {
		{ "Comment", "/** List of event sections that are bound to the blueprint */" },
		{ "ModuleRelativePath", "Private/MovieSceneEventBlueprintExtension.h" },
		{ "ToolTip", "List of event sections that are bound to the blueprint" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections = { "EventSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventBlueprintExtension, EventSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::NewProp_EventSections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventBlueprintExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::ClassParams = {
		&UMovieSceneEventBlueprintExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventBlueprintExtension()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventBlueprintExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventBlueprintExtension.OuterSingleton, Z_Construct_UClass_UMovieSceneEventBlueprintExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventBlueprintExtension.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneEventBlueprintExtension>()
	{
		return UMovieSceneEventBlueprintExtension::StaticClass();
	}
	UMovieSceneEventBlueprintExtension::UMovieSceneEventBlueprintExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventBlueprintExtension);
	UMovieSceneEventBlueprintExtension::~UMovieSceneEventBlueprintExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventBlueprintExtension, UMovieSceneEventBlueprintExtension::StaticClass, TEXT("UMovieSceneEventBlueprintExtension"), &Z_Registration_Info_UClass_UMovieSceneEventBlueprintExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventBlueprintExtension), 3006518019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_2685352096(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_MovieSceneEventBlueprintExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
