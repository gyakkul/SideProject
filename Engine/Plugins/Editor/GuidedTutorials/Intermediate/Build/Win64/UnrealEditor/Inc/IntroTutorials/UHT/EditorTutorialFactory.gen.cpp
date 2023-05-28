// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorTutorialFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorialFactory() {}
// Cross Module References
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialFactory();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	void UEditorTutorialFactory::StaticRegisterNativesUEditorTutorialFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTutorialFactory);
	UClass* Z_Construct_UClass_UEditorTutorialFactory_NoRegister()
	{
		return UEditorTutorialFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorialFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorialFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTutorialFactory.h" },
		{ "ModuleRelativePath", "Private/EditorTutorialFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorialFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorialFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorialFactory_Statics::ClassParams = {
		&UEditorTutorialFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorialFactory()
	{
		if (!Z_Registration_Info_UClass_UEditorTutorialFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTutorialFactory.OuterSingleton, Z_Construct_UClass_UEditorTutorialFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTutorialFactory.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorialFactory>()
	{
		return UEditorTutorialFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorialFactory);
	UEditorTutorialFactory::~UEditorTutorialFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTutorialFactory, UEditorTutorialFactory::StaticClass, TEXT("UEditorTutorialFactory"), &Z_Registration_Info_UClass_UEditorTutorialFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTutorialFactory), 704358375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_859590854(TEXT("/Script/IntroTutorials"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
