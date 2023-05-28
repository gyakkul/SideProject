// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxTextureImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxTextureImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFbxTextureImportData::StaticRegisterNativesUFbxTextureImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxTextureImportData);
	UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister()
	{
		return UFbxTextureImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxTextureImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertNormalMaps_MetaData[];
#endif
		static void NewProp_bInvertNormalMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertNormalMaps;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialSearchLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSearchLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialSearchLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseColorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDiffuseTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseDiffuseTextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNormalTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseNormalTextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseEmissiveColorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseEmissiveColorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseEmmisiveTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseEmmisiveTextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpecularTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseSpecularTextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseOpacityTextureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseOpacityTextureName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxTextureImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Texture" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Import data and options used when importing any mesh from FBX\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxTextureImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** If importing textures is enabled, this option will cause normal map Y (Green) values to be inverted */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If importing textures is enabled, this option will cause normal map Y (Green) values to be inverted" },
	};
#endif
	void Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_SetBit(void* Obj)
	{
		((UFbxTextureImportData*)Obj)->bInvertNormalMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps = { "bInvertNormalMaps", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxTextureImportData), &Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Specify where we should search for matching materials when importing */" },
		{ "DisplayName", "Search Location" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify where we should search for matching materials when importing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation = { "MaterialSearchLocation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, MaterialSearchLocation), Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_MetaData)) }; // 3501556352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "Material" },
		{ "Comment", "/** Base material to instance from when importing materials. */" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
		{ "ToolTip", "Base material to instance from when importing materials." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName = { "BaseMaterialName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseMaterialName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName = { "BaseColorName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseColorName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName = { "BaseDiffuseTextureName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseDiffuseTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName = { "BaseNormalTextureName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseNormalTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName = { "BaseEmissiveColorName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseEmissiveColorName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName = { "BaseEmmisiveTextureName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseEmmisiveTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName = { "BaseSpecularTextureName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseSpecularTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseOpacityTextureName_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "Mesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxTextureImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseOpacityTextureName = { "BaseOpacityTextureName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTextureImportData, BaseOpacityTextureName), METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseOpacityTextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseOpacityTextureName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_bInvertNormalMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_MaterialSearchLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseColorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseDiffuseTextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseNormalTextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmissiveColorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseEmmisiveTextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseSpecularTextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTextureImportData_Statics::NewProp_BaseOpacityTextureName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxTextureImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxTextureImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxTextureImportData_Statics::ClassParams = {
		&UFbxTextureImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTextureImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxTextureImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxTextureImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxTextureImportData.OuterSingleton, Z_Construct_UClass_UFbxTextureImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxTextureImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxTextureImportData>()
	{
		return UFbxTextureImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxTextureImportData);
	UFbxTextureImportData::~UFbxTextureImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxTextureImportData, UFbxTextureImportData::StaticClass, TEXT("UFbxTextureImportData"), &Z_Registration_Info_UClass_UFbxTextureImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxTextureImportData), 1302496560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_3409175306(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxTextureImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
