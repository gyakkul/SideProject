// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialShaderQualitySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
// End Cross Module References
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialShaderQualitySettings);
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialShaderQualitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForwardSettingMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ForwardSettingMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSettingMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ForwardSettingMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS(config = Engine, defaultconfig)\n" },
		{ "IncludePath", "MaterialShaderQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
		{ "ToolTip", "UCLASS(config = Engine, defaultconfig)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp = { "ForwardSettingMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialShaderQualitySettings, ForwardSettingMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialShaderQualitySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams = {
		&UMaterialShaderQualitySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton, Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton;
	}
	template<> MATERIALSHADERQUALITYSETTINGS_API UClass* StaticClass<UMaterialShaderQualitySettings>()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
	UMaterialShaderQualitySettings::~UMaterialShaderQualitySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialShaderQualitySettings, UMaterialShaderQualitySettings::StaticClass, TEXT("UMaterialShaderQualitySettings"), &Z_Registration_Info_UClass_UMaterialShaderQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialShaderQualitySettings), 1073558293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_4161617261(TEXT("/Script/MaterialShaderQualitySettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
