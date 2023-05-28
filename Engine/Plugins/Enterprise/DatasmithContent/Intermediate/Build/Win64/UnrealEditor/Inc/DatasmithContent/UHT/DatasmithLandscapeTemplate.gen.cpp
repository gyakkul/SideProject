// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithLandscapeTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithLandscapeTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithLandscapeTemplate::StaticRegisterNativesUDatasmithLandscapeTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLandscapeTemplate);
	UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister()
	{
		return UDatasmithLandscapeTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticLightingLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithLandscapeTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLandscapeTemplate, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD = { "StaticLightingLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLandscapeTemplate, StaticLightingLOD), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLandscapeTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::ClassParams = {
		&UDatasmithLandscapeTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithLandscapeTemplate>()
	{
		return UDatasmithLandscapeTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLandscapeTemplate);
	UDatasmithLandscapeTemplate::~UDatasmithLandscapeTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithLandscapeTemplate, UDatasmithLandscapeTemplate::StaticClass, TEXT("UDatasmithLandscapeTemplate"), &Z_Registration_Info_UClass_UDatasmithLandscapeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLandscapeTemplate), 2119730138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_19072384(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
