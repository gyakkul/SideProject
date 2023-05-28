// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITDSpatializationSourceSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITDSpatializationSourceSettingsFactory() {}
// Cross Module References
	SPATIALIZATIONEDITOR_API UClass* Z_Construct_UClass_UITDSpatializationSettingsFactory();
	SPATIALIZATIONEDITOR_API UClass* Z_Construct_UClass_UITDSpatializationSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpatializationEditor();
// End Cross Module References
	void UITDSpatializationSettingsFactory::StaticRegisterNativesUITDSpatializationSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UITDSpatializationSettingsFactory);
	UClass* Z_Construct_UClass_UITDSpatializationSettingsFactory_NoRegister()
	{
		return UITDSpatializationSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatializationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ITDSpatializationSourceSettingsFactory.h" },
		{ "ModuleRelativePath", "Public/ITDSpatializationSourceSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UITDSpatializationSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::ClassParams = {
		&UITDSpatializationSettingsFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITDSpatializationSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UITDSpatializationSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UITDSpatializationSettingsFactory.OuterSingleton, Z_Construct_UClass_UITDSpatializationSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UITDSpatializationSettingsFactory.OuterSingleton;
	}
	template<> SPATIALIZATIONEDITOR_API UClass* StaticClass<UITDSpatializationSettingsFactory>()
	{
		return UITDSpatializationSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITDSpatializationSettingsFactory);
	UITDSpatializationSettingsFactory::~UITDSpatializationSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UITDSpatializationSettingsFactory, UITDSpatializationSettingsFactory::StaticClass, TEXT("UITDSpatializationSettingsFactory"), &Z_Registration_Info_UClass_UITDSpatializationSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UITDSpatializationSettingsFactory), 3534334233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_2487598670(TEXT("/Script/SpatializationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_SpatializationEditor_Public_ITDSpatializationSourceSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
