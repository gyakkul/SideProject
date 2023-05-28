// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimFactory() {}
// Cross Module References
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimFactory();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	void UContextualAnimFactory::StaticRegisterNativesUContextualAnimFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimFactory);
	UClass* Z_Construct_UClass_UContextualAnimFactory_NoRegister()
	{
		return UContextualAnimFactory::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimFactory.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimFactory_Statics::ClassParams = {
		&UContextualAnimFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimFactory()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimFactory.OuterSingleton, Z_Construct_UClass_UContextualAnimFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimFactory.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimFactory>()
	{
		return UContextualAnimFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimFactory);
	UContextualAnimFactory::~UContextualAnimFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimFactory, UContextualAnimFactory::StaticClass, TEXT("UContextualAnimFactory"), &Z_Registration_Info_UClass_UContextualAnimFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimFactory), 3859400354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_2545051733(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
