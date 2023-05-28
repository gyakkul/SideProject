// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbcImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbcImportSettings() {}
// Cross Module References
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcImportSettings();
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcImportSettings_NoRegister();
	ALEMBICLIBRARY_API UEnum* Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset();
	ALEMBICLIBRARY_API UEnum* Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport();
	ALEMBICLIBRARY_API UEnum* Z_Construct_UEnum_AlembicLibrary_EAlembicImportType();
	ALEMBICLIBRARY_API UEnum* Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType();
	ALEMBICLIBRARY_API UEnum* Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcCompressionSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcConversionSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcGeometryCacheSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcMaterialSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcNormalGenerationSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcSamplingSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcStaticMeshSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AlembicLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlembicImportType;
	static UEnum* EAlembicImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlembicImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlembicImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AlembicLibrary_EAlembicImportType, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("EAlembicImportType"));
		}
		return Z_Registration_Info_UEnum_EAlembicImportType.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UEnum* StaticEnum<EAlembicImportType>()
	{
		return EAlembicImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enumerators[] = {
		{ "EAlembicImportType::StaticMesh", (int64)EAlembicImportType::StaticMesh },
		{ "EAlembicImportType::GeometryCache", (int64)EAlembicImportType::GeometryCache },
		{ "EAlembicImportType::Skeletal", (int64)EAlembicImportType::Skeletal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum that describes type of asset to import */" },
		{ "GeometryCache.Comment", "/** Imports the Alembic file as flipbook and matrix animated objects */" },
		{ "GeometryCache.DisplayName", "Geometry Cache" },
		{ "GeometryCache.Name", "EAlembicImportType::GeometryCache" },
		{ "GeometryCache.ToolTip", "Imports the Alembic file as flipbook and matrix animated objects" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "Skeletal.Comment", "/** Imports the Alembic file as a skeletal mesh containing base poses as morph targets and blending between them to achieve the correct animation frame */" },
		{ "Skeletal.Name", "EAlembicImportType::Skeletal" },
		{ "Skeletal.ToolTip", "Imports the Alembic file as a skeletal mesh containing base poses as morph targets and blending between them to achieve the correct animation frame" },
		{ "StaticMesh.Comment", "/** Imports only the first frame as one or multiple static meshes */" },
		{ "StaticMesh.Name", "EAlembicImportType::StaticMesh" },
		{ "StaticMesh.ToolTip", "Imports only the first frame as one or multiple static meshes" },
		{ "ToolTip", "Enum that describes type of asset to import" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		"EAlembicImportType",
		"EAlembicImportType",
		Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AlembicLibrary_EAlembicImportType()
	{
		if (!Z_Registration_Info_UEnum_EAlembicImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlembicImportType.InnerSingleton, Z_Construct_UEnum_AlembicLibrary_EAlembicImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlembicImportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseCalculationType;
	static UEnum* EBaseCalculationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBaseCalculationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBaseCalculationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("EBaseCalculationType"));
		}
		return Z_Registration_Info_UEnum_EBaseCalculationType.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UEnum* StaticEnum<EBaseCalculationType>()
	{
		return EBaseCalculationType_StaticEnum();
	}
	struct Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enumerators[] = {
		{ "EBaseCalculationType::None", (int64)EBaseCalculationType::None },
		{ "EBaseCalculationType::PercentageBased", (int64)EBaseCalculationType::PercentageBased },
		{ "EBaseCalculationType::FixedNumber", (int64)EBaseCalculationType::FixedNumber },
		{ "EBaseCalculationType::NoCompression", (int64)EBaseCalculationType::NoCompression },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FixedNumber.Comment", "/** Set a fixed number of bases to import*/" },
		{ "FixedNumber.Name", "EBaseCalculationType::FixedNumber" },
		{ "FixedNumber.ToolTip", "Set a fixed number of bases to import" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "NoCompression.Comment", "/** One base per frame, uncompressed*/" },
		{ "NoCompression.Name", "EBaseCalculationType::NoCompression" },
		{ "NoCompression.ToolTip", "One base per frame, uncompressed" },
		{ "None.Hidden", "" },
		{ "None.Name", "EBaseCalculationType::None" },
		{ "PercentageBased.Comment", "/** Determines the number of bases that should be used with the given percentage*/" },
		{ "PercentageBased.Name", "EBaseCalculationType::PercentageBased" },
		{ "PercentageBased.ToolTip", "Determines the number of bases that should be used with the given percentage" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		"EBaseCalculationType",
		"EBaseCalculationType",
		Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType()
	{
		if (!Z_Registration_Info_UEnum_EBaseCalculationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseCalculationType.InnerSingleton, Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBaseCalculationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcCompressionSettings;
class UScriptStruct* FAbcCompressionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcCompressionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcCompressionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcCompressionSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcCompressionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcCompressionSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcCompressionSettings>()
{
	return FAbcCompressionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMeshes_MetaData[];
#endif
		static void NewProp_bMergeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMatrixAnimation_MetaData[];
#endif
		static void NewProp_bBakeMatrixAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMatrixAnimation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BaseCalculationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCalculationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BaseCalculationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentageOfTotalBases_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentageOfTotalBases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfBases_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfBases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumNumberOfVertexInfluencePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumNumberOfVertexInfluencePercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcCompressionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Whether or not the individual meshes should be merged for compression purposes */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not the individual meshes should be merged for compression purposes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes_SetBit(void* Obj)
	{
		((FAbcCompressionSettings*)Obj)->bMergeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes = { "bMergeMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcCompressionSettings), &Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Whether or not Matrix-only animation should be baked out as vertex animation (or skipped?)*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not Matrix-only animation should be baked out as vertex animation (or skipped?)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation_SetBit(void* Obj)
	{
		((FAbcCompressionSettings*)Obj)->bBakeMatrixAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation = { "bBakeMatrixAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcCompressionSettings), &Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Determines how the final number of bases that are stored as morph targets are calculated*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Determines how the final number of bases that are stored as morph targets are calculated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType = { "BaseCalculationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcCompressionSettings, BaseCalculationType), Z_Construct_UEnum_AlembicLibrary_EBaseCalculationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType_MetaData)) }; // 2887826535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_PercentageOfTotalBases_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Will generate given percentage of the given bases as morph targets*/" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Will generate given percentage of the given bases as morph targets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_PercentageOfTotalBases = { "PercentageOfTotalBases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcCompressionSettings, PercentageOfTotalBases), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_PercentageOfTotalBases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_PercentageOfTotalBases_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MaxNumberOfBases_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Will generate given fixed number of bases as morph targets*/" },
		{ "EnumCondition", "2" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Will generate given fixed number of bases as morph targets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MaxNumberOfBases = { "MaxNumberOfBases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcCompressionSettings, MaxNumberOfBases), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MaxNumberOfBases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MaxNumberOfBases_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MinimumNumberOfVertexInfluencePercentage_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum percentage of influenced vertices required for a morph target to be valid */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Minimum percentage of influenced vertices required for a morph target to be valid" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MinimumNumberOfVertexInfluencePercentage = { "MinimumNumberOfVertexInfluencePercentage", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcCompressionSettings, MinimumNumberOfVertexInfluencePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MinimumNumberOfVertexInfluencePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MinimumNumberOfVertexInfluencePercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bMergeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_bBakeMatrixAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_BaseCalculationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_PercentageOfTotalBases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MaxNumberOfBases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewProp_MinimumNumberOfVertexInfluencePercentage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcCompressionSettings",
		sizeof(FAbcCompressionSettings),
		alignof(FAbcCompressionSettings),
		Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcCompressionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcCompressionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcCompressionSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcCompressionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlembicSamplingType;
	static UEnum* EAlembicSamplingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlembicSamplingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlembicSamplingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("EAlembicSamplingType"));
		}
		return Z_Registration_Info_UEnum_EAlembicSamplingType.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UEnum* StaticEnum<EAlembicSamplingType>()
	{
		return EAlembicSamplingType_StaticEnum();
	}
	struct Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enumerators[] = {
		{ "EAlembicSamplingType::PerFrame", (int64)EAlembicSamplingType::PerFrame },
		{ "EAlembicSamplingType::PerXFrames", (int64)EAlembicSamplingType::PerXFrames },
		{ "EAlembicSamplingType::PerTimeStep", (int64)EAlembicSamplingType::PerTimeStep },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "PerFrame.Comment", "/** Samples the animation according to the imported data (default)*/" },
		{ "PerFrame.Name", "EAlembicSamplingType::PerFrame" },
		{ "PerFrame.ToolTip", "Samples the animation according to the imported data (default)" },
		{ "PerTimeStep.Comment", "/** Samples the animation at given intervals determined by Time Steps*/" },
		{ "PerTimeStep.Name", "EAlembicSamplingType::PerTimeStep" },
		{ "PerTimeStep.ToolTip", "Samples the animation at given intervals determined by Time Steps" },
		{ "PerXFrames.Comment", "/** Samples the animation at given intervals determined by Frame Steps*/" },
		{ "PerXFrames.DisplayName", "Per X Frames" },
		{ "PerXFrames.Name", "EAlembicSamplingType::PerXFrames" },
		{ "PerXFrames.ToolTip", "Samples the animation at given intervals determined by Frame Steps" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		"EAlembicSamplingType",
		"EAlembicSamplingType",
		Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType()
	{
		if (!Z_Registration_Info_UEnum_EAlembicSamplingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlembicSamplingType.InnerSingleton, Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlembicSamplingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcSamplingSettings;
class UScriptStruct* FAbcSamplingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcSamplingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcSamplingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcSamplingSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcSamplingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcSamplingSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcSamplingSettings>()
{
	return FAbcSamplingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameEnd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipEmpty_MetaData[];
#endif
		static void NewProp_bSkipEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcSamplingSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Type of sampling performed while importing the animation*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Type of sampling performed while importing the animation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType = { "SamplingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcSamplingSettings, SamplingType), Z_Construct_UEnum_AlembicLibrary_EAlembicSamplingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType_MetaData)) }; // 1262846129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameSteps_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Steps to take when sampling the animation*/" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Steps to take when sampling the animation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameSteps = { "FrameSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcSamplingSettings, FrameSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_TimeSteps_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Time steps to take when sampling the animation*/" },
		{ "EnumCondition", "2" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Time steps to take when sampling the animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_TimeSteps = { "TimeSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcSamplingSettings, TimeSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_TimeSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_TimeSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameStart_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Starting index to start sampling the animation from*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Starting index to start sampling the animation from" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameStart = { "FrameStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcSamplingSettings, FrameStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameEnd_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Ending index to stop sampling the animation at*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Ending index to stop sampling the animation at" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameEnd = { "FrameEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcSamplingSettings, FrameEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Skip empty (pre-roll) frames and start importing at the frame which actually contains data */" },
		{ "DisplayName", "Skip Empty Frames at Start of Alembic Sequence" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Skip empty (pre-roll) frames and start importing at the frame which actually contains data" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty_SetBit(void* Obj)
	{
		((FAbcSamplingSettings*)Obj)->bSkipEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty = { "bSkipEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcSamplingSettings), &Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_SamplingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_TimeSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_FrameEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewProp_bSkipEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcSamplingSettings",
		sizeof(FAbcSamplingSettings),
		alignof(FAbcSamplingSettings),
		Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcSamplingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcSamplingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcSamplingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcSamplingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings;
class UScriptStruct* FAbcNormalGenerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcNormalGenerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcNormalGenerationSettings>()
{
	return FAbcNormalGenerationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOneSmoothingGroupPerObject_MetaData[];
#endif
		static void NewProp_bForceOneSmoothingGroupPerObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOneSmoothingGroupPerObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardEdgeAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardEdgeAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDegenerateTriangles_MetaData[];
#endif
		static void NewProp_bIgnoreDegenerateTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDegenerateTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipComputingTangents_MetaData[];
#endif
		static void NewProp_bSkipComputingTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipComputingTangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcNormalGenerationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject_MetaData[] = {
		{ "Category", "NormalCalculation" },
		{ "Comment", "/** Whether or not to force smooth normals for each individual object rather than calculating smoothing groups */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not to force smooth normals for each individual object rather than calculating smoothing groups" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject_SetBit(void* Obj)
	{
		((FAbcNormalGenerationSettings*)Obj)->bForceOneSmoothingGroupPerObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject = { "bForceOneSmoothingGroupPerObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcNormalGenerationSettings), &Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_HardEdgeAngleThreshold_MetaData[] = {
		{ "Category", "NormalCalculation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold used to determine whether an angle between two normals should be considered hard, closer to 0 means more smooth vs 1 */" },
		{ "EditCondition", "!bForceOneSmoothingGroupPerObject" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Threshold used to determine whether an angle between two normals should be considered hard, closer to 0 means more smooth vs 1" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_HardEdgeAngleThreshold = { "HardEdgeAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcNormalGenerationSettings, HardEdgeAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_HardEdgeAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_HardEdgeAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "NormalCalculation" },
		{ "Comment", "/** Determines whether or not the normals should be forced to be recomputed */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Determines whether or not the normals should be forced to be recomputed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((FAbcNormalGenerationSettings*)Obj)->bRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcNormalGenerationSettings), &Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles_MetaData[] = {
		{ "Category", "NormalCalculation" },
		{ "Comment", "/** Determines whether or not the degenerate triangles should be ignored when calculating tangents/normals */" },
		{ "EditCondition", "bRecomputeNormals" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Determines whether or not the degenerate triangles should be ignored when calculating tangents/normals" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles_SetBit(void* Obj)
	{
		((FAbcNormalGenerationSettings*)Obj)->bIgnoreDegenerateTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles = { "bIgnoreDegenerateTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcNormalGenerationSettings), &Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Determines whether tangents are computed for GeometryCache. Skipping them can improve streaming performance but may cause visual artifacts where they are required */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Determines whether tangents are computed for GeometryCache. Skipping them can improve streaming performance but may cause visual artifacts where they are required" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents_SetBit(void* Obj)
	{
		((FAbcNormalGenerationSettings*)Obj)->bSkipComputingTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents = { "bSkipComputingTangents", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcNormalGenerationSettings), &Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bForceOneSmoothingGroupPerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_HardEdgeAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bIgnoreDegenerateTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewProp_bSkipComputingTangents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcNormalGenerationSettings",
		sizeof(FAbcNormalGenerationSettings),
		alignof(FAbcNormalGenerationSettings),
		Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcNormalGenerationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcMaterialSettings;
class UScriptStruct* FAbcMaterialSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcMaterialSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcMaterialSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcMaterialSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcMaterialSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcMaterialSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcMaterialSettings>()
{
	return FAbcMaterialSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterials_MetaData[];
#endif
		static void NewProp_bCreateMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFindMaterials_MetaData[];
#endif
		static void NewProp_bFindMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcMaterialSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Whether or not to create materials according to found Face Set names (will not work without face sets) */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not to create materials according to found Face Set names (will not work without face sets)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials_SetBit(void* Obj)
	{
		((FAbcMaterialSettings*)Obj)->bCreateMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials = { "bCreateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcMaterialSettings), &Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Whether or not to try and find materials according to found Face Set names (will not work without face sets) */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not to try and find materials according to found Face Set names (will not work without face sets)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials_SetBit(void* Obj)
	{
		((FAbcMaterialSettings*)Obj)->bFindMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials = { "bFindMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcMaterialSettings), &Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bCreateMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewProp_bFindMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcMaterialSettings",
		sizeof(FAbcMaterialSettings),
		alignof(FAbcMaterialSettings),
		Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcMaterialSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcMaterialSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcMaterialSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcMaterialSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings;
class UScriptStruct* FAbcStaticMeshSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcStaticMeshSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcStaticMeshSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcStaticMeshSettings>()
{
	return FAbcStaticMeshSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMeshes_MetaData[];
#endif
		static void NewProp_bMergeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateMatrixTransformations_MetaData[];
#endif
		static void NewProp_bPropagateMatrixTransformations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateMatrixTransformations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcStaticMeshSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "// Whether or not to merge the static meshes on import (remember this can cause problems with overlapping UV-sets)\n" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not to merge the static meshes on import (remember this can cause problems with overlapping UV-sets)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes_SetBit(void* Obj)
	{
		((FAbcStaticMeshSettings*)Obj)->bMergeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes = { "bMergeMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcStaticMeshSettings), &Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "// This will, if applicable, apply matrix transformations to the meshes\n" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "This will, if applicable, apply matrix transformations to the meshes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations_SetBit(void* Obj)
	{
		((FAbcStaticMeshSettings*)Obj)->bPropagateMatrixTransformations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations = { "bPropagateMatrixTransformations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcStaticMeshSettings), &Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "// Flag for whether or not lightmap UVs should be generated\n" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Flag for whether or not lightmap UVs should be generated" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FAbcStaticMeshSettings*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcStaticMeshSettings), &Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bMergeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bPropagateMatrixTransformations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewProp_bGenerateLightmapUVs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcStaticMeshSettings",
		sizeof(FAbcStaticMeshSettings),
		alignof(FAbcStaticMeshSettings),
		Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcStaticMeshSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbcConversionPreset;
	static UEnum* EAbcConversionPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbcConversionPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbcConversionPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("EAbcConversionPreset"));
		}
		return Z_Registration_Info_UEnum_EAbcConversionPreset.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UEnum* StaticEnum<EAbcConversionPreset>()
	{
		return EAbcConversionPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enumerators[] = {
		{ "EAbcConversionPreset::Maya", (int64)EAbcConversionPreset::Maya },
		{ "EAbcConversionPreset::Max", (int64)EAbcConversionPreset::Max },
		{ "EAbcConversionPreset::Custom", (int64)EAbcConversionPreset::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum that describes type of asset to import */" },
		{ "Custom.DisplayName", "Custom Settings" },
		{ "Custom.Name", "EAbcConversionPreset::Custom" },
		{ "IsBlueprintBase", "true" },
		{ "Max.Comment", "/** Imports the Alembic file as flipbook and matrix animated objects */" },
		{ "Max.DisplayName", "Autodesk 3ds Max" },
		{ "Max.Name", "EAbcConversionPreset::Max" },
		{ "Max.ToolTip", "Imports the Alembic file as flipbook and matrix animated objects" },
		{ "Maya.Comment", "/** Imports only the first frame as one or multiple static meshes */" },
		{ "Maya.DisplayName", "Autodesk Maya" },
		{ "Maya.Name", "EAbcConversionPreset::Maya" },
		{ "Maya.ToolTip", "Imports only the first frame as one or multiple static meshes" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Enum that describes type of asset to import" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		"EAbcConversionPreset",
		"EAbcConversionPreset",
		Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset()
	{
		if (!Z_Registration_Info_UEnum_EAbcConversionPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbcConversionPreset.InnerSingleton, Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbcConversionPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcConversionSettings;
class UScriptStruct* FAbcConversionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcConversionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcConversionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcConversionSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcConversionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcConversionSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcConversionSettings>()
{
	return FAbcConversionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcConversionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Preset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipU_MetaData[];
#endif
		static void NewProp_bFlipU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipV_MetaData[];
#endif
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcConversionSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Currently preset that should be applied */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Currently preset that should be applied" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcConversionSettings, Preset), Z_Construct_UEnum_AlembicLibrary_EAbcConversionPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset_MetaData)) }; // 4178796398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Flag whether or not to flip the U channel in the Texture Coordinates */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Flag whether or not to flip the U channel in the Texture Coordinates" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU_SetBit(void* Obj)
	{
		((FAbcConversionSettings*)Obj)->bFlipU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU = { "bFlipU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcConversionSettings), &Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Flag whether or not to flip the V channel in the Texture Coordinates */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Flag whether or not to flip the V channel in the Texture Coordinates" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((FAbcConversionSettings*)Obj)->bFlipV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcConversionSettings), &Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Scale value that should be applied */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Scale value that should be applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcConversionSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Conversion" },
		{ "Comment", "/** Rotation in Euler angles that should be applied */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Rotation in Euler angles that should be applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcConversionSettings, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_bFlipV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcConversionSettings",
		sizeof(FAbcConversionSettings),
		alignof(FAbcConversionSettings),
		Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcConversionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcConversionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcConversionSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcConversionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport;
	static UEnum* EAbcGeometryCacheMotionVectorsImport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("EAbcGeometryCacheMotionVectorsImport"));
		}
		return Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UEnum* StaticEnum<EAbcGeometryCacheMotionVectorsImport>()
	{
		return EAbcGeometryCacheMotionVectorsImport_StaticEnum();
	}
	struct Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enumerators[] = {
		{ "EAbcGeometryCacheMotionVectorsImport::NoMotionVectors", (int64)EAbcGeometryCacheMotionVectorsImport::NoMotionVectors },
		{ "EAbcGeometryCacheMotionVectorsImport::ImportAbcVelocitiesAsMotionVectors", (int64)EAbcGeometryCacheMotionVectorsImport::ImportAbcVelocitiesAsMotionVectors },
		{ "EAbcGeometryCacheMotionVectorsImport::CalculateMotionVectorsDuringImport", (int64)EAbcGeometryCacheMotionVectorsImport::CalculateMotionVectorsDuringImport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CalculateMotionVectorsDuringImport.Comment", "/** Force calculation of motion vectors during import. This will increase file size as the motion vectors will be stored on disc. */" },
		{ "CalculateMotionVectorsDuringImport.Name", "EAbcGeometryCacheMotionVectorsImport::CalculateMotionVectorsDuringImport" },
		{ "CalculateMotionVectorsDuringImport.ToolTip", "Force calculation of motion vectors during import. This will increase file size as the motion vectors will be stored on disc." },
		{ "ImportAbcVelocitiesAsMotionVectors.Comment", "/** Imports the Velocities from the Alembic file and converts them to motion vectors. This will increase file size as the motion vectors will be stored on disc. */" },
		{ "ImportAbcVelocitiesAsMotionVectors.Name", "EAbcGeometryCacheMotionVectorsImport::ImportAbcVelocitiesAsMotionVectors" },
		{ "ImportAbcVelocitiesAsMotionVectors.ToolTip", "Imports the Velocities from the Alembic file and converts them to motion vectors. This will increase file size as the motion vectors will be stored on disc." },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "NoMotionVectors.Comment", "/** No motion vectors will be present in the geometry cache. */" },
		{ "NoMotionVectors.Name", "EAbcGeometryCacheMotionVectorsImport::NoMotionVectors" },
		{ "NoMotionVectors.ToolTip", "No motion vectors will be present in the geometry cache." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		"EAbcGeometryCacheMotionVectorsImport",
		"EAbcGeometryCacheMotionVectorsImport",
		Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport()
	{
		if (!Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.InnerSingleton, Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings;
class UScriptStruct* FAbcGeometryCacheSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings, (UObject*)Z_Construct_UPackage__Script_AlembicLibrary(), TEXT("AbcGeometryCacheSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.OuterSingleton;
}
template<> ALEMBICLIBRARY_API UScriptStruct* StaticStruct<FAbcGeometryCacheSettings>()
{
	return FAbcGeometryCacheSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenTracks_MetaData[];
#endif
		static void NewProp_bFlattenTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreImportedVertexNumbers_MetaData[];
#endif
		static void NewProp_bStoreImportedVertexNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreImportedVertexNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyConstantTopologyOptimizations_MetaData[];
#endif
		static void NewProp_bApplyConstantTopologyOptimizations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyConstantTopologyOptimizations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateMotionVectorsDuringImport_MetaData[];
#endif
		static void NewProp_bCalculateMotionVectorsDuringImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateMotionVectorsDuringImport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionVectors_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionVectors_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionVectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeIndexBuffers_MetaData[];
#endif
		static void NewProp_bOptimizeIndexBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeIndexBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedPositionPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressedPositionPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedTextureCoordinatesNumberOfBits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedTextureCoordinatesNumberOfBits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbcGeometryCacheSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "// Whether or not to merge all vertex animation into one track\n" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Whether or not to merge all vertex animation into one track" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks_SetBit(void* Obj)
	{
		((FAbcGeometryCacheSettings*)Obj)->bFlattenTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks = { "bFlattenTracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcGeometryCacheSettings), &Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Store the imported vertex numbers. This lets you know the vertex numbers inside the DCC.\n\x09  * The values of each vertex number will range from 0 to 7 for a cube. Even if the number of positions might be 24. */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Store the imported vertex numbers. This lets you know the vertex numbers inside the DCC.\nThe values of each vertex number will range from 0 to 7 for a cube. Even if the number of positions might be 24." },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers_SetBit(void* Obj)
	{
		((FAbcGeometryCacheSettings*)Obj)->bStoreImportedVertexNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers = { "bStoreImportedVertexNumbers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcGeometryCacheSettings), &Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Force the preprocessor to only do optimization once instead of when the preprocessor decides. This may lead to some problems with certain meshes but makes sure motion\n\x09    blur always works if the topology is constant. */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Force the preprocessor to only do optimization once instead of when the preprocessor decides. This may lead to some problems with certain meshes but makes sure motion\n          blur always works if the topology is constant." },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations_SetBit(void* Obj)
	{
		((FAbcGeometryCacheSettings*)Obj)->bApplyConstantTopologyOptimizations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations = { "bApplyConstantTopologyOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcGeometryCacheSettings), &Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport_MetaData[] = {
		{ "Comment", "/** Force calculation of motion vectors during import. This will increase file size as the motion vectors will be stored on disc. Recommended to OFF.*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Force calculation of motion vectors during import. This will increase file size as the motion vectors will be stored on disc. Recommended to OFF." },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport_SetBit(void* Obj)
	{
		((FAbcGeometryCacheSettings*)Obj)->bCalculateMotionVectorsDuringImport_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport = { "bCalculateMotionVectorsDuringImport", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcGeometryCacheSettings), &Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors = { "MotionVectors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcGeometryCacheSettings, MotionVectors), Z_Construct_UEnum_AlembicLibrary_EAbcGeometryCacheMotionVectorsImport, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors_MetaData)) }; // 964165275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Optimizes index buffers for each unique frame, to allow better cache coherency on the GPU. Very costly and time-consuming process, recommended to OFF.*/" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Optimizes index buffers for each unique frame, to allow better cache coherency on the GPU. Very costly and time-consuming process, recommended to OFF." },
	};
#endif
	void Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers_SetBit(void* Obj)
	{
		((FAbcGeometryCacheSettings*)Obj)->bOptimizeIndexBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers = { "bOptimizeIndexBuffers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAbcGeometryCacheSettings), &Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedPositionPrecision_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Precision used for compressing vertex positions (lower = better result but less compression, higher = more lossy compression but smaller size) */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Precision used for compressing vertex positions (lower = better result but less compression, higher = more lossy compression but smaller size)" },
		{ "UIMax", "100" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedPositionPrecision = { "CompressedPositionPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcGeometryCacheSettings, CompressedPositionPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedPositionPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedPositionPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedTextureCoordinatesNumberOfBits_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "31" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Bit-precision used for compressing texture coordinates (hight = better result but less compression, lower = more lossy compression but smaller size) */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Bit-precision used for compressing texture coordinates (hight = better result but less compression, lower = more lossy compression but smaller size)" },
		{ "UIMax", "16" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedTextureCoordinatesNumberOfBits = { "CompressedTextureCoordinatesNumberOfBits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbcGeometryCacheSettings, CompressedTextureCoordinatesNumberOfBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedTextureCoordinatesNumberOfBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedTextureCoordinatesNumberOfBits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bFlattenTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bStoreImportedVertexNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bApplyConstantTopologyOptimizations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bCalculateMotionVectorsDuringImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_MotionVectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_bOptimizeIndexBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedPositionPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewProp_CompressedTextureCoordinatesNumberOfBits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
		nullptr,
		&NewStructOps,
		"AbcGeometryCacheSettings",
		sizeof(FAbcGeometryCacheSettings),
		alignof(FAbcGeometryCacheSettings),
		Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbcGeometryCacheSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.InnerSingleton, Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings.InnerSingleton;
	}
	void UAbcImportSettings::StaticRegisterNativesUAbcImportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbcImportSettings);
	UClass* Z_Construct_UClass_UAbcImportSettings_NoRegister()
	{
		return UAbcImportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAbcImportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalGenerationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCacheSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbcImportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class that contains all options for importing an alembic file */" },
		{ "IncludePath", "AbcImportSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Class that contains all options for importing an alembic file" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType_MetaData[] = {
		{ "Category", "Alembic" },
		{ "Comment", "/** Type of asset to import from Alembic file */" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ToolTip", "Type of asset to import from Alembic file" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, ImportType), Z_Construct_UEnum_AlembicLibrary_EAlembicImportType, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType_MetaData)) }; // 3573314755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_SamplingSettings_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_SamplingSettings = { "SamplingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, SamplingSettings), Z_Construct_UScriptStruct_FAbcSamplingSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_SamplingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_SamplingSettings_MetaData)) }; // 1357415953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_NormalGenerationSettings_MetaData[] = {
		{ "Category", "NormalCalculation" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_NormalGenerationSettings = { "NormalGenerationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, NormalGenerationSettings), Z_Construct_UScriptStruct_FAbcNormalGenerationSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_NormalGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_NormalGenerationSettings_MetaData)) }; // 1512432401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, MaterialSettings), Z_Construct_UScriptStruct_FAbcMaterialSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_MaterialSettings_MetaData)) }; // 1636184379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, CompressionSettings), Z_Construct_UScriptStruct_FAbcCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_CompressionSettings_MetaData)) }; // 2073802008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_StaticMeshSettings_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_StaticMeshSettings = { "StaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, StaticMeshSettings), Z_Construct_UScriptStruct_FAbcStaticMeshSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_StaticMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_StaticMeshSettings_MetaData)) }; // 3624339423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_GeometryCacheSettings_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_GeometryCacheSettings = { "GeometryCacheSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, GeometryCacheSettings), Z_Construct_UScriptStruct_FAbcGeometryCacheSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_GeometryCacheSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_GeometryCacheSettings_MetaData)) }; // 3628307381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "Category", "Conversion" },
		{ "ModuleRelativePath", "Public/AbcImportSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcImportSettings, ConversionSettings), Z_Construct_UScriptStruct_FAbcConversionSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ConversionSettings_MetaData)) }; // 2998324651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbcImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ImportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_SamplingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_NormalGenerationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_StaticMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_GeometryCacheSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcImportSettings_Statics::NewProp_ConversionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbcImportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbcImportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbcImportSettings_Statics::ClassParams = {
		&UAbcImportSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbcImportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbcImportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcImportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbcImportSettings()
	{
		if (!Z_Registration_Info_UClass_UAbcImportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbcImportSettings.OuterSingleton, Z_Construct_UClass_UAbcImportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbcImportSettings.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UClass* StaticClass<UAbcImportSettings>()
	{
		return UAbcImportSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbcImportSettings);
	UAbcImportSettings::~UAbcImportSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::EnumInfo[] = {
		{ EAlembicImportType_StaticEnum, TEXT("EAlembicImportType"), &Z_Registration_Info_UEnum_EAlembicImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3573314755U) },
		{ EBaseCalculationType_StaticEnum, TEXT("EBaseCalculationType"), &Z_Registration_Info_UEnum_EBaseCalculationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2887826535U) },
		{ EAlembicSamplingType_StaticEnum, TEXT("EAlembicSamplingType"), &Z_Registration_Info_UEnum_EAlembicSamplingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1262846129U) },
		{ EAbcConversionPreset_StaticEnum, TEXT("EAbcConversionPreset"), &Z_Registration_Info_UEnum_EAbcConversionPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4178796398U) },
		{ EAbcGeometryCacheMotionVectorsImport_StaticEnum, TEXT("EAbcGeometryCacheMotionVectorsImport"), &Z_Registration_Info_UEnum_EAbcGeometryCacheMotionVectorsImport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 964165275U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ScriptStructInfo[] = {
		{ FAbcCompressionSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcCompressionSettings_Statics::NewStructOps, TEXT("AbcCompressionSettings"), &Z_Registration_Info_UScriptStruct_AbcCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcCompressionSettings), 2073802008U) },
		{ FAbcSamplingSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcSamplingSettings_Statics::NewStructOps, TEXT("AbcSamplingSettings"), &Z_Registration_Info_UScriptStruct_AbcSamplingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcSamplingSettings), 1357415953U) },
		{ FAbcNormalGenerationSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcNormalGenerationSettings_Statics::NewStructOps, TEXT("AbcNormalGenerationSettings"), &Z_Registration_Info_UScriptStruct_AbcNormalGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcNormalGenerationSettings), 1512432401U) },
		{ FAbcMaterialSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcMaterialSettings_Statics::NewStructOps, TEXT("AbcMaterialSettings"), &Z_Registration_Info_UScriptStruct_AbcMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcMaterialSettings), 1636184379U) },
		{ FAbcStaticMeshSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcStaticMeshSettings_Statics::NewStructOps, TEXT("AbcStaticMeshSettings"), &Z_Registration_Info_UScriptStruct_AbcStaticMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcStaticMeshSettings), 3624339423U) },
		{ FAbcConversionSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcConversionSettings_Statics::NewStructOps, TEXT("AbcConversionSettings"), &Z_Registration_Info_UScriptStruct_AbcConversionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcConversionSettings), 2998324651U) },
		{ FAbcGeometryCacheSettings::StaticStruct, Z_Construct_UScriptStruct_FAbcGeometryCacheSettings_Statics::NewStructOps, TEXT("AbcGeometryCacheSettings"), &Z_Registration_Info_UScriptStruct_AbcGeometryCacheSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbcGeometryCacheSettings), 3628307381U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbcImportSettings, UAbcImportSettings::StaticClass, TEXT("UAbcImportSettings"), &Z_Registration_Info_UClass_UAbcImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbcImportSettings), 2475465901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_895930083(TEXT("/Script/AlembicLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcImportSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
