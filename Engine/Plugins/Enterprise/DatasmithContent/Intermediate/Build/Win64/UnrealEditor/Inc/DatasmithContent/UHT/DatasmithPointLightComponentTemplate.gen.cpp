// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithPointLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithPointLightComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithPointLightComponentTemplate::StaticRegisterNativesUDatasmithPointLightComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPointLightComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister()
	{
		return UDatasmithPointLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_MetaData)) }; // 117192790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, SourceRadius), METADATA_PARAMS(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, SourceLength), METADATA_PARAMS(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPointLightComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithPointLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithPointLightComponentTemplate>()
	{
		return UDatasmithPointLightComponentTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPointLightComponentTemplate);
	UDatasmithPointLightComponentTemplate::~UDatasmithPointLightComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithPointLightComponentTemplate, UDatasmithPointLightComponentTemplate::StaticClass, TEXT("UDatasmithPointLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPointLightComponentTemplate), 1395847683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_2270146932(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
