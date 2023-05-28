// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/CinePrestreamingDebugRender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinePrestreamingDebugRender() {}
// Cross Module References
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingDebugRender();
	CINEMATICPRESTREAMINGEDITOR_API UClass* Z_Construct_UClass_UCinePrestreamingDebugRender_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreamingEditor();
// End Cross Module References
	void UCinePrestreamingDebugRender::StaticRegisterNativesUCinePrestreamingDebugRender()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCinePrestreamingDebugRender);
	UClass* Z_Construct_UClass_UCinePrestreamingDebugRender_NoRegister()
	{
		return UCinePrestreamingDebugRender::StaticClass();
	}
	struct Z_Construct_UClass_UCinePrestreamingDebugRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreamingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinePrestreamingDebugRender.h" },
		{ "ModuleRelativePath", "Private/CinePrestreamingDebugRender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinePrestreamingDebugRender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::ClassParams = {
		&UCinePrestreamingDebugRender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinePrestreamingDebugRender()
	{
		if (!Z_Registration_Info_UClass_UCinePrestreamingDebugRender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCinePrestreamingDebugRender.OuterSingleton, Z_Construct_UClass_UCinePrestreamingDebugRender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCinePrestreamingDebugRender.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMINGEDITOR_API UClass* StaticClass<UCinePrestreamingDebugRender>()
	{
		return UCinePrestreamingDebugRender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinePrestreamingDebugRender);
	UCinePrestreamingDebugRender::~UCinePrestreamingDebugRender() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Private_CinePrestreamingDebugRender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Private_CinePrestreamingDebugRender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCinePrestreamingDebugRender, UCinePrestreamingDebugRender::StaticClass, TEXT("UCinePrestreamingDebugRender"), &Z_Registration_Info_UClass_UCinePrestreamingDebugRender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCinePrestreamingDebugRender), 1783628388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Private_CinePrestreamingDebugRender_h_824963320(TEXT("/Script/CinematicPrestreamingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Private_CinePrestreamingDebugRender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Private_CinePrestreamingDebugRender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
