// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Game/Settings/TextureShareSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShareSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareSettings();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TextureShare();
// End Cross Module References
	void UTextureShareSettings::StaticRegisterNativesUTextureShareSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureShareSettings);
	UClass* Z_Construct_UClass_UTextureShareSettings_NoRegister()
	{
		return UTextureShareSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureShareSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateDefaults_MetaData[];
#endif
		static void NewProp_bCreateDefaults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProcessName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureShareSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureShare plugin settings\n **/" },
		{ "IncludePath", "Game/Settings/TextureShareSettings.h" },
		{ "ModuleRelativePath", "Private/Game/Settings/TextureShareSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "TextureShare plugin settings" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults_MetaData[] = {
		{ "Category", "Main" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ModuleRelativePath", "Private/Game/Settings/TextureShareSettings.h" },
		{ "ToolTip", "Enable base textureshare object creation by default" },
	};
#endif
	void Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults_SetBit(void* Obj)
	{
		((UTextureShareSettings*)Obj)->bCreateDefaults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults = { "bCreateDefaults", nullptr, (EPropertyFlags)0x0020080800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureShareSettings), &Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "Main" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ModuleRelativePath", "Private/Game/Settings/TextureShareSettings.h" },
		{ "ToolTip", "Process name for this app" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0020080800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShareSettings, ProcessName), METADATA_PARAMS(Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_ProcessName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_ProcessName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureShareSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_bCreateDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareSettings_Statics::NewProp_ProcessName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureShareSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureShareSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureShareSettings_Statics::ClassParams = {
		&UTextureShareSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UTextureShareSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureShareSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureShareSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureShareSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureShareSettings.OuterSingleton, Z_Construct_UClass_UTextureShareSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureShareSettings.OuterSingleton;
	}
	template<> TEXTURESHARE_API UClass* StaticClass<UTextureShareSettings>()
	{
		return UTextureShareSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureShareSettings);
	UTextureShareSettings::~UTextureShareSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureShareSettings, UTextureShareSettings::StaticClass, TEXT("UTextureShareSettings"), &Z_Registration_Info_UClass_UTextureShareSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureShareSettings), 213030291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_2889735953(TEXT("/Script/TextureShare"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_Settings_TextureShareSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
