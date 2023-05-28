// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithSpotLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSpotLightComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithSpotLightComponentTemplate::StaticRegisterNativesUDatasmithSpotLightComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSpotLightComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister()
	{
		return UDatasmithSpotLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSpotLightComponentTemplate, InnerConeAngle), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithSpotLightComponentTemplate, OuterConeAngle), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSpotLightComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithSpotLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSpotLightComponentTemplate>()
	{
		return UDatasmithSpotLightComponentTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSpotLightComponentTemplate);
	UDatasmithSpotLightComponentTemplate::~UDatasmithSpotLightComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSpotLightComponentTemplate, UDatasmithSpotLightComponentTemplate::StaticClass, TEXT("UDatasmithSpotLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSpotLightComponentTemplate), 3655288599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_987471047(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
