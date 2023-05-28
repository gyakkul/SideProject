// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusSourceFactory() {}
// Cross Module References
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusSourceFactory();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OptimusEditor();
// End Cross Module References
	void UOptimusSourceFactory::StaticRegisterNativesUOptimusSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSourceFactory);
	UClass* Z_Construct_UClass_UOptimusSourceFactory_NoRegister()
	{
		return UOptimusSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OptimusSourceFactory.h" },
		{ "ModuleRelativePath", "Private/OptimusSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSourceFactory_Statics::ClassParams = {
		&UOptimusSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UOptimusSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSourceFactory.OuterSingleton, Z_Construct_UClass_UOptimusSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSourceFactory.OuterSingleton;
	}
	template<> OPTIMUSEDITOR_API UClass* StaticClass<UOptimusSourceFactory>()
	{
		return UOptimusSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSourceFactory);
	UOptimusSourceFactory::~UOptimusSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSourceFactory, UOptimusSourceFactory::StaticClass, TEXT("UOptimusSourceFactory"), &Z_Registration_Info_UClass_UOptimusSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSourceFactory), 1428392088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusSourceFactory_h_3723967937(TEXT("/Script/OptimusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
