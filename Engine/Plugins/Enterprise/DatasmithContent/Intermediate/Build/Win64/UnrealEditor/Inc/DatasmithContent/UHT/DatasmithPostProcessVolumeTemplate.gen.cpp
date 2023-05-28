// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithPostProcessVolumeTemplate.h"
#include "ObjectTemplates/DatasmithCineCameraComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithPostProcessVolumeTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithPostProcessVolumeTemplate::StaticRegisterNativesUDatasmithPostProcessVolumeTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPostProcessVolumeTemplate);
	UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister()
	{
		return UDatasmithPostProcessVolumeTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[];
#endif
		static void NewProp_bUnbound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an APostProcessVolume\n */" },
		{ "IncludePath", "ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ToolTip", "Represents an APostProcessVolume" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithPostProcessVolumeTemplate, Settings), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData)) }; // 2634461512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UDatasmithPostProcessVolumeTemplate*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit(void* Obj)
	{
		((UDatasmithPostProcessVolumeTemplate*)Obj)->bUnbound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPostProcessVolumeTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams = {
		&UDatasmithPostProcessVolumeTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithPostProcessVolumeTemplate>()
	{
		return UDatasmithPostProcessVolumeTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPostProcessVolumeTemplate);
	UDatasmithPostProcessVolumeTemplate::~UDatasmithPostProcessVolumeTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate, UDatasmithPostProcessVolumeTemplate::StaticClass, TEXT("UDatasmithPostProcessVolumeTemplate"), &Z_Registration_Info_UClass_UDatasmithPostProcessVolumeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPostProcessVolumeTemplate), 406823022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_4173488068(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPostProcessVolumeTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
