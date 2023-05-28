// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/CustomizableObjectCustomSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectCustomSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectEmptyClassForSettings::StaticRegisterNativesUCustomizableObjectEmptyClassForSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectEmptyClassForSettings);
	UClass* Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_NoRegister()
	{
		return UCustomizableObjectEmptyClassForSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/CustomizableObjectCustomSettings.h" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectCustomSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectEmptyClassForSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::ClassParams = {
		&UCustomizableObjectEmptyClassForSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectEmptyClassForSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectEmptyClassForSettings.OuterSingleton, Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectEmptyClassForSettings.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectEmptyClassForSettings>()
	{
		return UCustomizableObjectEmptyClassForSettings::StaticClass();
	}
	UCustomizableObjectEmptyClassForSettings::UCustomizableObjectEmptyClassForSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectEmptyClassForSettings);
	UCustomizableObjectEmptyClassForSettings::~UCustomizableObjectEmptyClassForSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectCustomSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectCustomSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectEmptyClassForSettings, UCustomizableObjectEmptyClassForSettings::StaticClass, TEXT("UCustomizableObjectEmptyClassForSettings"), &Z_Registration_Info_UClass_UCustomizableObjectEmptyClassForSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectEmptyClassForSettings), 3718111137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectCustomSettings_h_2937324724(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectCustomSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectCustomSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
