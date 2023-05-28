// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeProjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeProjectFactory() {}
// Cross Module References
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectFactory();
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CodeEditor();
// End Cross Module References
	void UCodeProjectFactory::StaticRegisterNativesUCodeProjectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCodeProjectFactory);
	UClass* Z_Construct_UClass_UCodeProjectFactory_NoRegister()
	{
		return UCodeProjectFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCodeProjectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeProjectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodeProjectFactory.h" },
		{ "ModuleRelativePath", "Private/CodeProjectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeProjectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeProjectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCodeProjectFactory_Statics::ClassParams = {
		&UCodeProjectFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCodeProjectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeProjectFactory()
	{
		if (!Z_Registration_Info_UClass_UCodeProjectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCodeProjectFactory.OuterSingleton, Z_Construct_UClass_UCodeProjectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCodeProjectFactory.OuterSingleton;
	}
	template<> CODEEDITOR_API UClass* StaticClass<UCodeProjectFactory>()
	{
		return UCodeProjectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeProjectFactory);
	UCodeProjectFactory::~UCodeProjectFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCodeProjectFactory, UCodeProjectFactory::StaticClass, TEXT("UCodeProjectFactory"), &Z_Registration_Info_UClass_UCodeProjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCodeProjectFactory), 2510079312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_476513687(TEXT("/Script/CodeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
