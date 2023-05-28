// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithVREDImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithVREDImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATASMITHVREDTRANSLATOR_API UEnum* Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariant();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantCamera();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantCameraOption();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantGeometry();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantLight();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantLightOption();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantMaterial();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantSet();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantTransform();
	DATASMITHVREDTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantTransformOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DatasmithVREDTranslator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVREDCppVariantType;
	static UEnum* EVREDCppVariantType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVREDCppVariantType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVREDCppVariantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("EVREDCppVariantType"));
		}
		return Z_Registration_Info_UEnum_EVREDCppVariantType.OuterSingleton;
	}
	template<> DATASMITHVREDTRANSLATOR_API UEnum* StaticEnum<EVREDCppVariantType>()
	{
		return EVREDCppVariantType_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enumerators[] = {
		{ "EVREDCppVariantType::Unsupported", (int64)EVREDCppVariantType::Unsupported },
		{ "EVREDCppVariantType::Camera", (int64)EVREDCppVariantType::Camera },
		{ "EVREDCppVariantType::Geometry", (int64)EVREDCppVariantType::Geometry },
		{ "EVREDCppVariantType::VariantSet", (int64)EVREDCppVariantType::VariantSet },
		{ "EVREDCppVariantType::Material", (int64)EVREDCppVariantType::Material },
		{ "EVREDCppVariantType::Transform", (int64)EVREDCppVariantType::Transform },
		{ "EVREDCppVariantType::Light", (int64)EVREDCppVariantType::Light },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Camera.Name", "EVREDCppVariantType::Camera" },
		{ "Geometry.Name", "EVREDCppVariantType::Geometry" },
		{ "Light.Name", "EVREDCppVariantType::Light" },
		{ "Material.Name", "EVREDCppVariantType::Material" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
		{ "Transform.Name", "EVREDCppVariantType::Transform" },
		{ "Unsupported.Name", "EVREDCppVariantType::Unsupported" },
		{ "VariantSet.Name", "EVREDCppVariantType::VariantSet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		"EVREDCppVariantType",
		"EVREDCppVariantType",
		Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType()
	{
		if (!Z_Registration_Info_UEnum_EVREDCppVariantType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVREDCppVariantType.InnerSingleton, Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVREDCppVariantType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption;
class UScriptStruct* FVREDCppVariantGeometryOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantGeometryOption"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantGeometryOption>()
{
	return FVREDCppVariantGeometryOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VisibleMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleMeshes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HiddenMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantGeometryOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantGeometryOption, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes_Inner = { "VisibleMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes = { "VisibleMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantGeometryOption, VisibleMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes_Inner = { "HiddenMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes = { "HiddenMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantGeometryOption, HiddenMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_VisibleMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewProp_HiddenMeshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantGeometryOption",
		sizeof(FVREDCppVariantGeometryOption),
		alignof(FVREDCppVariantGeometryOption),
		Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption;
class UScriptStruct* FVREDCppVariantCameraOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantCameraOption"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantCameraOption>()
{
	return FVREDCppVariantCameraOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantCameraOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantCameraOption, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantCameraOption, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantCameraOption, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantCameraOption",
		sizeof(FVREDCppVariantCameraOption),
		alignof(FVREDCppVariantCameraOption),
		Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantCameraOption()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption;
class UScriptStruct* FVREDCppVariantMaterialOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantMaterialOption"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantMaterialOption>()
{
	return FVREDCppVariantMaterialOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantMaterialOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantMaterialOption, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantMaterialOption",
		sizeof(FVREDCppVariantMaterialOption),
		alignof(FVREDCppVariantMaterialOption),
		Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption;
class UScriptStruct* FVREDCppVariantTransformOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantTransformOption"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantTransformOption>()
{
	return FVREDCppVariantTransformOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantTransformOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantTransformOption, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantTransformOption, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantTransformOption",
		sizeof(FVREDCppVariantTransformOption),
		alignof(FVREDCppVariantTransformOption),
		Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantTransformOption()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption;
class UScriptStruct* FVREDCppVariantLightOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantLightOption, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantLightOption"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantLightOption>()
{
	return FVREDCppVariantLightOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantLightOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantLightOption, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantLightOption",
		sizeof(FVREDCppVariantLightOption),
		alignof(FVREDCppVariantLightOption),
		Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantLightOption()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantCamera;
class UScriptStruct* FVREDCppVariantCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantCamera, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantCamera"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantCamera>()
{
	return FVREDCppVariantCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantCamera>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVREDCppVariantCameraOption, METADATA_PARAMS(nullptr, 0) }; // 1848551241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantCamera, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options_MetaData)) }; // 1848551241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantCamera",
		sizeof(FVREDCppVariantCamera),
		alignof(FVREDCppVariantCamera),
		Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantCamera.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry;
class UScriptStruct* FVREDCppVariantGeometry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantGeometry, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantGeometry"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantGeometry>()
{
	return FVREDCppVariantGeometry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantGeometry>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes_Inner = { "TargetNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes = { "TargetNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantGeometry, TargetNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption, METADATA_PARAMS(nullptr, 0) }; // 1574330698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantGeometry, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options_MetaData)) }; // 1574330698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_TargetNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantGeometry",
		sizeof(FVREDCppVariantGeometry),
		alignof(FVREDCppVariantGeometry),
		Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantGeometry()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantSet;
class UScriptStruct* FVREDCppVariantSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantSet, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantSet"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantSet.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantSet>()
{
	return FVREDCppVariantSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetVariantNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVariantNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetVariantNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChosenOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChosenOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChosenOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSetGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetGroupName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimClips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimClips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimClips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSequentialAnimation_MetaData[];
#endif
		static void NewProp_bSequentialAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSequentialAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantSet>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames_Inner = { "TargetVariantNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames = { "TargetVariantNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantSet, TargetVariantNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions_Inner = { "ChosenOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions = { "ChosenOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantSet, ChosenOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_VariantSetGroupName_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_VariantSetGroupName = { "VariantSetGroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantSet, VariantSetGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_VariantSetGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_VariantSetGroupName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips_Inner = { "AnimClips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips = { "AnimClips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantSet, AnimClips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation_SetBit(void* Obj)
	{
		((FVREDCppVariantSet*)Obj)->bSequentialAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation = { "bSequentialAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVREDCppVariantSet), &Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_TargetVariantNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_ChosenOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_VariantSetGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_AnimClips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewProp_bSequentialAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantSet",
		sizeof(FVREDCppVariantSet),
		alignof(FVREDCppVariantSet),
		Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantSet()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantSet.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial;
class UScriptStruct* FVREDCppVariantMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantMaterial, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantMaterial>()
{
	return FVREDCppVariantMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantMaterial>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes_Inner = { "TargetNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes = { "TargetNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantMaterial, TargetNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption, METADATA_PARAMS(nullptr, 0) }; // 3224742041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantMaterial, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options_MetaData)) }; // 3224742041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_TargetNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantMaterial",
		sizeof(FVREDCppVariantMaterial),
		alignof(FVREDCppVariantMaterial),
		Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantTransform;
class UScriptStruct* FVREDCppVariantTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantTransform, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantTransform"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantTransform>()
{
	return FVREDCppVariantTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantTransform>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes_Inner = { "TargetNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes = { "TargetNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantTransform, TargetNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVREDCppVariantTransformOption, METADATA_PARAMS(nullptr, 0) }; // 841085842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantTransform, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options_MetaData)) }; // 841085842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_TargetNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantTransform",
		sizeof(FVREDCppVariantTransform),
		alignof(FVREDCppVariantTransform),
		Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariantLight;
class UScriptStruct* FVREDCppVariantLight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariantLight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariantLight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariantLight, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariantLight"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariantLight.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariantLight>()
{
	return FVREDCppVariantLight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariantLight>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes_Inner = { "TargetNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes = { "TargetNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantLight, TargetNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVREDCppVariantLightOption, METADATA_PARAMS(nullptr, 0) }; // 3046515212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariantLight, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options_MetaData)) }; // 3046515212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_TargetNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		nullptr,
		&NewStructOps,
		"VREDCppVariantLight",
		sizeof(FVREDCppVariantLight),
		alignof(FVREDCppVariantLight),
		Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariantLight()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariantLight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariantLight.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariantLight.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVREDCppVariant>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FVREDCppVariant cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VREDCppVariant;
class UScriptStruct* FVREDCppVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VREDCppVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VREDCppVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVREDCppVariant, (UObject*)Z_Construct_UPackage__Script_DatasmithVREDTranslator(), TEXT("VREDCppVariant"));
	}
	return Z_Registration_Info_UScriptStruct_VREDCppVariant.OuterSingleton;
}
template<> DATASMITHVREDTRANSLATOR_API UScriptStruct* StaticStruct<FVREDCppVariant>()
{
	return FVREDCppVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVREDCppVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariantSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Light;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVREDCppVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Type), Z_Construct_UEnum_DatasmithVREDTranslator_EVREDCppVariantType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type_MetaData)) }; // 1808235896
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Camera), Z_Construct_UScriptStruct_FVREDCppVariantCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Camera_MetaData)) }; // 581059145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Geometry_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Geometry), Z_Construct_UScriptStruct_FVREDCppVariantGeometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Geometry_MetaData)) }; // 734389855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Material), Z_Construct_UScriptStruct_FVREDCppVariantMaterial, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Material_MetaData)) }; // 476850406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_VariantSet_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, VariantSet), Z_Construct_UScriptStruct_FVREDCppVariantSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_VariantSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_VariantSet_MetaData)) }; // 23763947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Transform), Z_Construct_UScriptStruct_FVREDCppVariantTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Transform_MetaData)) }; // 1036057285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "VRED" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVREDCppVariant, Light), Z_Construct_UScriptStruct_FVREDCppVariantLight, METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Light_MetaData)) }; // 775323739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVREDCppVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_VariantSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewProp_Light,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVREDCppVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"VREDCppVariant",
		sizeof(FVREDCppVariant),
		alignof(FVREDCppVariant),
		Z_Construct_UScriptStruct_FVREDCppVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVREDCppVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVREDCppVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_VREDCppVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VREDCppVariant.InnerSingleton, Z_Construct_UScriptStruct_FVREDCppVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VREDCppVariant.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::EnumInfo[] = {
		{ EVREDCppVariantType_StaticEnum, TEXT("EVREDCppVariantType"), &Z_Registration_Info_UEnum_EVREDCppVariantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1808235896U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::ScriptStructInfo[] = {
		{ FVREDCppVariantGeometryOption::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantGeometryOption_Statics::NewStructOps, TEXT("VREDCppVariantGeometryOption"), &Z_Registration_Info_UScriptStruct_VREDCppVariantGeometryOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantGeometryOption), 1574330698U) },
		{ FVREDCppVariantCameraOption::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantCameraOption_Statics::NewStructOps, TEXT("VREDCppVariantCameraOption"), &Z_Registration_Info_UScriptStruct_VREDCppVariantCameraOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantCameraOption), 1848551241U) },
		{ FVREDCppVariantMaterialOption::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantMaterialOption_Statics::NewStructOps, TEXT("VREDCppVariantMaterialOption"), &Z_Registration_Info_UScriptStruct_VREDCppVariantMaterialOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantMaterialOption), 3224742041U) },
		{ FVREDCppVariantTransformOption::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantTransformOption_Statics::NewStructOps, TEXT("VREDCppVariantTransformOption"), &Z_Registration_Info_UScriptStruct_VREDCppVariantTransformOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantTransformOption), 841085842U) },
		{ FVREDCppVariantLightOption::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantLightOption_Statics::NewStructOps, TEXT("VREDCppVariantLightOption"), &Z_Registration_Info_UScriptStruct_VREDCppVariantLightOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantLightOption), 3046515212U) },
		{ FVREDCppVariantCamera::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantCamera_Statics::NewStructOps, TEXT("VREDCppVariantCamera"), &Z_Registration_Info_UScriptStruct_VREDCppVariantCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantCamera), 581059145U) },
		{ FVREDCppVariantGeometry::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantGeometry_Statics::NewStructOps, TEXT("VREDCppVariantGeometry"), &Z_Registration_Info_UScriptStruct_VREDCppVariantGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantGeometry), 734389855U) },
		{ FVREDCppVariantSet::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantSet_Statics::NewStructOps, TEXT("VREDCppVariantSet"), &Z_Registration_Info_UScriptStruct_VREDCppVariantSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantSet), 23763947U) },
		{ FVREDCppVariantMaterial::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantMaterial_Statics::NewStructOps, TEXT("VREDCppVariantMaterial"), &Z_Registration_Info_UScriptStruct_VREDCppVariantMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantMaterial), 476850406U) },
		{ FVREDCppVariantTransform::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantTransform_Statics::NewStructOps, TEXT("VREDCppVariantTransform"), &Z_Registration_Info_UScriptStruct_VREDCppVariantTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantTransform), 1036057285U) },
		{ FVREDCppVariantLight::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariantLight_Statics::NewStructOps, TEXT("VREDCppVariantLight"), &Z_Registration_Info_UScriptStruct_VREDCppVariantLight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariantLight), 775323739U) },
		{ FVREDCppVariant::StaticStruct, Z_Construct_UScriptStruct_FVREDCppVariant_Statics::NewStructOps, TEXT("VREDCppVariant"), &Z_Registration_Info_UScriptStruct_VREDCppVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVREDCppVariant), 1074376728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_1824327831(TEXT("/Script/DatasmithVREDTranslator"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
