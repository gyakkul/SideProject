// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SmartObjectDefinitionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectDefinitionFactory() {}
// Cross Module References
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinitionFactory();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinitionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsEditorModule();
// End Cross Module References
	void USmartObjectDefinitionFactory::StaticRegisterNativesUSmartObjectDefinitionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectDefinitionFactory);
	UClass* Z_Construct_UClass_USmartObjectDefinitionFactory_NoRegister()
	{
		return USmartObjectDefinitionFactory::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectDefinitionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory responsible to create SmartObjectDefinitions\n */" },
		{ "IncludePath", "SmartObjectDefinitionFactory.h" },
		{ "ModuleRelativePath", "Private/SmartObjectDefinitionFactory.h" },
		{ "ToolTip", "Factory responsible to create SmartObjectDefinitions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectDefinitionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::ClassParams = {
		&USmartObjectDefinitionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectDefinitionFactory()
	{
		if (!Z_Registration_Info_UClass_USmartObjectDefinitionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectDefinitionFactory.OuterSingleton, Z_Construct_UClass_USmartObjectDefinitionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectDefinitionFactory.OuterSingleton;
	}
	template<> SMARTOBJECTSEDITORMODULE_API UClass* StaticClass<USmartObjectDefinitionFactory>()
	{
		return USmartObjectDefinitionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectDefinitionFactory);
	USmartObjectDefinitionFactory::~USmartObjectDefinitionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectDefinitionFactory, USmartObjectDefinitionFactory::StaticClass, TEXT("USmartObjectDefinitionFactory"), &Z_Registration_Info_UClass_USmartObjectDefinitionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectDefinitionFactory), 2807230525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_3892664265(TEXT("/Script/SmartObjectsEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectDefinitionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
