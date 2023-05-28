// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneOutlinerMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneOutlinerMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_USceneOutlinerMenuContext();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_USceneOutlinerMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SceneOutliner();
// End Cross Module References
	void USceneOutlinerMenuContext::StaticRegisterNativesUSceneOutlinerMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneOutlinerMenuContext);
	UClass* Z_Construct_UClass_USceneOutlinerMenuContext_NoRegister()
	{
		return USceneOutlinerMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USceneOutlinerMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneOutlinerMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneOutlinerMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneOutlinerMenuContext.h" },
		{ "ModuleRelativePath", "Public/SceneOutlinerMenuContext.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneOutlinerMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneOutlinerMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneOutlinerMenuContext_Statics::ClassParams = {
		&USceneOutlinerMenuContext::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneOutlinerMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneOutlinerMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneOutlinerMenuContext()
	{
		if (!Z_Registration_Info_UClass_USceneOutlinerMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneOutlinerMenuContext.OuterSingleton, Z_Construct_UClass_USceneOutlinerMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneOutlinerMenuContext.OuterSingleton;
	}
	template<> SCENEOUTLINER_API UClass* StaticClass<USceneOutlinerMenuContext>()
	{
		return USceneOutlinerMenuContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneOutlinerMenuContext);
	USceneOutlinerMenuContext::~USceneOutlinerMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Public_SceneOutlinerMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Public_SceneOutlinerMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneOutlinerMenuContext, USceneOutlinerMenuContext::StaticClass, TEXT("USceneOutlinerMenuContext"), &Z_Registration_Info_UClass_USceneOutlinerMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneOutlinerMenuContext), 2731549263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Public_SceneOutlinerMenuContext_h_2870415647(TEXT("/Script/SceneOutliner"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Public_SceneOutlinerMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Public_SceneOutlinerMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
