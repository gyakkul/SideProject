// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericMaterialPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericMaterialPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialXPipelineSettings();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialImportOption;
	static UEnum* EInterchangeMaterialImportOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeMaterialImportOption"));
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialImportOption>()
	{
		return EInterchangeMaterialImportOption_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enumerators[] = {
		{ "EInterchangeMaterialImportOption::ImportAsMaterials", (int64)EInterchangeMaterialImportOption::ImportAsMaterials },
		{ "EInterchangeMaterialImportOption::ImportAsMaterialInstances", (int64)EInterchangeMaterialImportOption::ImportAsMaterialInstances },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ImportAsMaterialInstances.Name", "EInterchangeMaterialImportOption::ImportAsMaterialInstances" },
		{ "ImportAsMaterials.Name", "EInterchangeMaterialImportOption::ImportAsMaterials" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeMaterialImportOption",
		"EInterchangeMaterialImportOption",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialImportOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXShaders;
	static UEnum* EInterchangeMaterialXShaders_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeMaterialXShaders"));
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeMaterialXShaders>()
	{
		return EInterchangeMaterialXShaders_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators[] = {
		{ "EInterchangeMaterialXShaders::StandardSurface", (int64)EInterchangeMaterialXShaders::StandardSurface },
		{ "EInterchangeMaterialXShaders::StandardSurfaceTransmission", (int64)EInterchangeMaterialXShaders::StandardSurfaceTransmission },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "StandardSurface.Comment", "/** Default settings for Autodesk's Standard Surface shader\x09*/" },
		{ "StandardSurface.Name", "EInterchangeMaterialXShaders::StandardSurface" },
		{ "StandardSurface.ToolTip", "Default settings for Autodesk's Standard Surface shader" },
		{ "StandardSurfaceTransmission.Comment", "/** Standard Surface shader use for translucency\x09*/" },
		{ "StandardSurfaceTransmission.Name", "EInterchangeMaterialXShaders::StandardSurfaceTransmission" },
		{ "StandardSurfaceTransmission.ToolTip", "Standard Surface shader use for translucency" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeMaterialXShaders",
		"EInterchangeMaterialXShaders",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings;
class UScriptStruct* FMaterialXPipelineSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialXPipelineSettings, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("MaterialXPipelineSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FMaterialXPipelineSettings>()
{
	return FMaterialXPipelineSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceShader_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceShader_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SurfaceShader_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceShader_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceShader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialXPipelineSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_ValueProp = { "SurfaceShader", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_Key_KeyProp = { "SurfaceShader_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialXShaders, METADATA_PARAMS(nullptr, 0) }; // 1088367954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialFunction" },
		{ "Category", "MaterialX" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader = { "SurfaceShader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialXPipelineSettings, SurfaceShader), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_MetaData)) }; // 1088367954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewProp_SurfaceShader,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"MaterialXPipelineSettings",
		sizeof(FMaterialXPipelineSettings),
		alignof(FMaterialXPipelineSettings),
		Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialXPipelineSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.InnerSingleton, Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings.InnerSingleton;
	}
	void UInterchangeGenericMaterialPipeline::StaticRegisterNativesUInterchangeGenericMaterialPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericMaterialPipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister()
	{
		return UInterchangeGenericMaterialPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMaterials_MetaData[];
#endif
		static void NewProp_bImportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMaterials;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialImport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialImport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TexturePipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericMaterialPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If enabled, imports the material assets found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "If enabled, imports the material assets found in the sources." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_SetBit(void* Obj)
	{
		((UInterchangeGenericMaterialPipeline*)Obj)->bImportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials = { "bImportMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMaterialPipeline), &Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_MetaData[] = {
		{ "Category", "Materials" },
		{ "EditCondition", "bImportMaterials" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport = { "MaterialImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, MaterialImport), Z_Construct_UEnum_InterchangePipelines_EInterchangeMaterialImportOption, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_MetaData)) }; // 190757658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "Materials" },
		{ "Comment", "/** Optional material used as the parent when importing materials as instances. If no parent material is specified, one will be automatically selected during the import process. */" },
		{ "EditCondition", "bImportMaterials && MaterialImport==EInterchangeMaterialImportOption::ImportAsMaterialInstances" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "Optional material used as the parent when importing materials as instances. If no parent material is specified, one will be automatically selected during the import process." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, ParentMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline_MetaData[] = {
		{ "Category", "Textures" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline = { "TexturePipeline", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, TexturePipeline), Z_Construct_UClass_UInterchangeGenericTexturePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialXSettings_MetaData[] = {
		{ "Category", "MaterialX" },
		{ "DisplayName", "Settings" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialXSettings = { "MaterialXSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, MaterialXSettings), Z_Construct_UScriptStruct_FMaterialXPipelineSettings, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialXSettings_MetaData)) }; // 510835125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "Comment", "/** END UInterchangePipelineBase overrides */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMaterialPipeline.h" },
		{ "ToolTip", "END UInterchangePipelineBase overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMaterialPipeline, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_bImportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_ParentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_TexturePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_MaterialXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::NewProp_BaseNodeContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericMaterialPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::ClassParams = {
		&UInterchangeGenericMaterialPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericMaterialPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericMaterialPipeline>()
	{
		return UInterchangeGenericMaterialPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericMaterialPipeline);
	UInterchangeGenericMaterialPipeline::~UInterchangeGenericMaterialPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::EnumInfo[] = {
		{ EInterchangeMaterialImportOption_StaticEnum, TEXT("EInterchangeMaterialImportOption"), &Z_Registration_Info_UEnum_EInterchangeMaterialImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 190757658U) },
		{ EInterchangeMaterialXShaders_StaticEnum, TEXT("EInterchangeMaterialXShaders"), &Z_Registration_Info_UEnum_EInterchangeMaterialXShaders, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1088367954U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ScriptStructInfo[] = {
		{ FMaterialXPipelineSettings::StaticStruct, Z_Construct_UScriptStruct_FMaterialXPipelineSettings_Statics::NewStructOps, TEXT("MaterialXPipelineSettings"), &Z_Registration_Info_UScriptStruct_MaterialXPipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialXPipelineSettings), 510835125U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericMaterialPipeline, UInterchangeGenericMaterialPipeline::StaticClass, TEXT("UInterchangeGenericMaterialPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericMaterialPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericMaterialPipeline), 2567672793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_161359129(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMaterialPipeline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
