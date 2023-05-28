// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithSkyLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSkyLightComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithSkyLightComponentTemplate::StaticRegisterNativesUDatasmithSkyLightComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSkyLightComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister()
	{
		return UDatasmithSkyLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cubemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData)) }; // 533544456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, CubemapResolution), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSkyLightComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithSkyLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSkyLightComponentTemplate>()
	{
		return UDatasmithSkyLightComponentTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSkyLightComponentTemplate);
	UDatasmithSkyLightComponentTemplate::~UDatasmithSkyLightComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSkyLightComponentTemplate, UDatasmithSkyLightComponentTemplate::StaticClass, TEXT("UDatasmithSkyLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSkyLightComponentTemplate), 3796138770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_1418163881(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
