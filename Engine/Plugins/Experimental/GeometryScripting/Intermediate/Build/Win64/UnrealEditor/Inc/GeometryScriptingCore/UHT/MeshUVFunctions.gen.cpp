// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshUVFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshUVFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVTriangle();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions;
class UScriptStruct* FGeometryScriptRepackUVsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRepackUVsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRepackUVsOptions>()
{
	return FGeometryScriptRepackUVsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetImageWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetImageWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeIslandRotation_MetaData[];
#endif
		static void NewProp_bOptimizeIslandRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeIslandRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRepackUVsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_TargetImageWidth_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_TargetImageWidth = { "TargetImageWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRepackUVsOptions, TargetImageWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_TargetImageWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_TargetImageWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation_SetBit(void* Obj)
	{
		((FGeometryScriptRepackUVsOptions*)Obj)->bOptimizeIslandRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation = { "bOptimizeIslandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRepackUVsOptions), &Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_TargetImageWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewProp_bOptimizeIslandRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRepackUVsOptions",
		sizeof(FGeometryScriptRepackUVsOptions),
		alignof(FGeometryScriptRepackUVsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod;
	static UEnum* EGeometryScriptUVFlattenMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptUVFlattenMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUVFlattenMethod>()
	{
		return EGeometryScriptUVFlattenMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptUVFlattenMethod::ExpMap", (int64)EGeometryScriptUVFlattenMethod::ExpMap },
		{ "EGeometryScriptUVFlattenMethod::Conformal", (int64)EGeometryScriptUVFlattenMethod::Conformal },
		{ "EGeometryScriptUVFlattenMethod::SpectralConformal", (int64)EGeometryScriptUVFlattenMethod::SpectralConformal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Conformal.Name", "EGeometryScriptUVFlattenMethod::Conformal" },
		{ "ExpMap.Name", "EGeometryScriptUVFlattenMethod::ExpMap" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "SpectralConformal.Name", "EGeometryScriptUVFlattenMethod::SpectralConformal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptUVFlattenMethod",
		"EGeometryScriptUVFlattenMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource;
	static UEnum* EGeometryScriptUVIslandSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptUVIslandSource"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUVIslandSource>()
	{
		return EGeometryScriptUVIslandSource_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enumerators[] = {
		{ "EGeometryScriptUVIslandSource::PolyGroups", (int64)EGeometryScriptUVIslandSource::PolyGroups },
		{ "EGeometryScriptUVIslandSource::UVIslands", (int64)EGeometryScriptUVIslandSource::UVIslands },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "PolyGroups.Name", "EGeometryScriptUVIslandSource::PolyGroups" },
		{ "UVIslands.Name", "EGeometryScriptUVIslandSource::UVIslands" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptUVIslandSource",
		"EGeometryScriptUVIslandSource",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions;
class UScriptStruct* FGeometryScriptExpMapUVOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptExpMapUVOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptExpMapUVOptions>()
{
	return FGeometryScriptExpMapUVOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSmoothingRounds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NormalSmoothingRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSmoothingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSmoothingAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptExpMapUVOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingRounds_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingRounds = { "NormalSmoothingRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptExpMapUVOptions, NormalSmoothingRounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingAlpha_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingAlpha = { "NormalSmoothingAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptExpMapUVOptions, NormalSmoothingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewProp_NormalSmoothingAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptExpMapUVOptions",
		sizeof(FGeometryScriptExpMapUVOptions),
		alignof(FGeometryScriptExpMapUVOptions),
		Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions;
class UScriptStruct* FGeometryScriptSpectralConformalUVOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSpectralConformalUVOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSpectralConformalUVOptions>()
{
	return FGeometryScriptSpectralConformalUVOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveIrregularity_MetaData[];
#endif
		static void NewProp_bPreserveIrregularity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveIrregularity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSpectralConformalUVOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity_SetBit(void* Obj)
	{
		((FGeometryScriptSpectralConformalUVOptions*)Obj)->bPreserveIrregularity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity = { "bPreserveIrregularity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSpectralConformalUVOptions), &Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewProp_bPreserveIrregularity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSpectralConformalUVOptions",
		sizeof(FGeometryScriptSpectralConformalUVOptions),
		alignof(FGeometryScriptSpectralConformalUVOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions;
class UScriptStruct* FGeometryScriptRecomputeUVsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRecomputeUVsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRecomputeUVsOptions>()
{
	return FGeometryScriptRecomputeUVsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IslandSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IslandSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpMapOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpMapOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectralConformalOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpectralConformalOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAlignIslandsWithAxes_MetaData[];
#endif
		static void NewProp_bAutoAlignIslandsWithAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAlignIslandsWithAxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRecomputeUVsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRecomputeUVsOptions, Method), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVFlattenMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method_MetaData)) }; // 3590351205
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource = { "IslandSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRecomputeUVsOptions, IslandSource), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptUVIslandSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource_MetaData)) }; // 321936778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_ExpMapOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_ExpMapOptions = { "ExpMapOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRecomputeUVsOptions, ExpMapOptions), Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_ExpMapOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_ExpMapOptions_MetaData)) }; // 3999580094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_SpectralConformalOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_SpectralConformalOptions = { "SpectralConformalOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRecomputeUVsOptions, SpectralConformalOptions), Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_SpectralConformalOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_SpectralConformalOptions_MetaData)) }; // 1619949552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_GroupLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptRecomputeUVsOptions, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_GroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_GroupLayer_MetaData)) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes_SetBit(void* Obj)
	{
		((FGeometryScriptRecomputeUVsOptions*)Obj)->bAutoAlignIslandsWithAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes = { "bAutoAlignIslandsWithAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptRecomputeUVsOptions), &Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_IslandSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_ExpMapOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_SpectralConformalOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewProp_bAutoAlignIslandsWithAxes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRecomputeUVsOptions",
		sizeof(FGeometryScriptRecomputeUVsOptions),
		alignof(FGeometryScriptRecomputeUVsOptions),
		Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions;
class UScriptStruct* FGeometryScriptPatchBuilderOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPatchBuilderOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPatchBuilderOptions>()
{
	return FGeometryScriptPatchBuilderOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPatchCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialPatchCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinPatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchCurvatureAlignmentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatchCurvatureAlignmentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchMergingMetricThresh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatchMergingMetricThresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchMergingAngleThresh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatchMergingAngleThresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpMapOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpMapOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectInputGroups_MetaData[];
#endif
		static void NewProp_bRespectInputGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectInputGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPack_MetaData[];
#endif
		static void NewProp_bAutoPack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackingOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPatchBuilderOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_InitialPatchCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_InitialPatchCount = { "InitialPatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, InitialPatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_InitialPatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_InitialPatchCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_MinPatchSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_MinPatchSize = { "MinPatchSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, MinPatchSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_MinPatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_MinPatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchCurvatureAlignmentWeight_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchCurvatureAlignmentWeight = { "PatchCurvatureAlignmentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, PatchCurvatureAlignmentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchCurvatureAlignmentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchCurvatureAlignmentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingMetricThresh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingMetricThresh = { "PatchMergingMetricThresh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, PatchMergingMetricThresh), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingMetricThresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingMetricThresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingAngleThresh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingAngleThresh = { "PatchMergingAngleThresh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, PatchMergingAngleThresh), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingAngleThresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingAngleThresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_ExpMapOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_ExpMapOptions = { "ExpMapOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, ExpMapOptions), Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_ExpMapOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_ExpMapOptions_MetaData)) }; // 3999580094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups_SetBit(void* Obj)
	{
		((FGeometryScriptPatchBuilderOptions*)Obj)->bRespectInputGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups = { "bRespectInputGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPatchBuilderOptions), &Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_GroupLayer_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_GroupLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_GroupLayer_MetaData)) }; // 1149642374
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_SetBit(void* Obj)
	{
		((FGeometryScriptPatchBuilderOptions*)Obj)->bAutoPack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack = { "bAutoPack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPatchBuilderOptions), &Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PackingOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PackingOptions = { "PackingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPatchBuilderOptions, PackingOptions), Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PackingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PackingOptions_MetaData)) }; // 1167362897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_InitialPatchCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_MinPatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchCurvatureAlignmentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingMetricThresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PatchMergingAngleThresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_ExpMapOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bRespectInputGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_bAutoPack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewProp_PackingOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPatchBuilderOptions",
		sizeof(FGeometryScriptPatchBuilderOptions),
		alignof(FGeometryScriptPatchBuilderOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions;
class UScriptStruct* FGeometryScriptXAtlasOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptXAtlasOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptXAtlasOptions>()
{
	return FGeometryScriptXAtlasOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptXAtlasOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptXAtlasOptions, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewProp_MaxIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewProp_MaxIterations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptXAtlasOptions",
		sizeof(FGeometryScriptXAtlasOptions),
		alignof(FGeometryScriptXAtlasOptions),
		Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshToMeshUVLayer)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_CopyFromUVMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToUVSetIndex);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToMeshOut);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundTopologyErrors);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidUVSet);
		P_GET_UBOOL(Z_Param_bOnlyUVPositions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(Z_Param_CopyFromUVMesh,Z_Param_ToUVSetIndex,Z_Param_Out_CopyToMesh,Z_Param_Out_CopyToMeshOut,Z_Param_Out_bFoundTopologyErrors,Z_Param_Out_bIsValidUVSet,Z_Param_bOnlyUVPositions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshUVLayerToMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_CopyFromMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToUVMesh);
		P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_CopyToUVMeshOut);
		P_GET_UBOOL_REF(Z_Param_Out_bInvalidTopology);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidUVSet);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(Z_Param_CopyFromMesh,Z_Param_UVSetIndex,Z_Param_Out_CopyToUVMesh,Z_Param_Out_CopyToUVMeshOut,Z_Param_Out_bInvalidTopology,Z_Param_Out_bIsValidUVSet,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execGetMeshPerVertexUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidUVSet);
		P_GET_UBOOL_REF(Z_Param_Out_bHasVertexIDGaps);
		P_GET_UBOOL_REF(Z_Param_Out_bHasSplitUVs);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Out_UVList,Z_Param_Out_bIsValidUVSet,Z_Param_Out_bHasVertexIDGaps,Z_Param_Out_bHasSplitUVs,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execGetMeshUVSizeInfo)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_MeshArea);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_UVArea);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_MeshBounds);
		P_GET_STRUCT_REF(FBox2D,Z_Param_Out_UVBounds);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidUVSet);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundUnsetUVs);
		P_GET_UBOOL(Z_Param_bOnlyIncludeValidUVTris);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Selection,Z_Param_Out_MeshArea,Z_Param_Out_UVArea,Z_Param_Out_MeshBounds,Z_Param_Out_UVBounds,Z_Param_Out_bIsValidUVSet,Z_Param_Out_bFoundUnsetUVs,Z_Param_bOnlyIncludeValidUVTris,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execAutoGenerateXAtlasMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FGeometryScriptXAtlasOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execAutoGeneratePatchBuilderMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FGeometryScriptPatchBuilderOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execRepackMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FGeometryScriptRepackUVsOptions,Z_Param_RepackOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_RepackOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execRecomputeMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FGeometryScriptRecomputeUVsOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Options,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromCylinderProjection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FTransform,Z_Param_CylinderTransform);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SplitAngle);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_CylinderTransform,Z_Param_Selection,Z_Param_SplitAngle,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromBoxProjection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FTransform,Z_Param_BoxTransform);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinIslandTriCount);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_BoxTransform,Z_Param_Selection,Z_Param_MinIslandTriCount,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromPlanarProjection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FTransform,Z_Param_PlaneTransform);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_PlaneTransform,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execRotateMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationAngle);
		P_GET_STRUCT(FVector2D,Z_Param_RotationOrigin);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_RotationAngle,Z_Param_RotationOrigin,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execScaleMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FVector2D,Z_Param_Scale);
		P_GET_STRUCT(FVector2D,Z_Param_ScaleOrigin);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Scale,Z_Param_ScaleOrigin,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execTranslateMeshUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_STRUCT(FVector2D,Z_Param_Translation);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_Translation,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execSetMeshTriangleUVs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVSetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_STRUCT(FGeometryScriptUVTriangle,Z_Param_UVs);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(Z_Param_TargetMesh,Z_Param_UVSetIndex,Z_Param_TriangleID,Z_Param_UVs,Z_Param_Out_bIsValidTriangle,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execCopyUVSet)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_FromUVSet);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToUVSet);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(Z_Param_TargetMesh,Z_Param_FromUVSet,Z_Param_ToUVSet,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshUVFunctions::execSetNumUVSets)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumUVSets);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(Z_Param_TargetMesh,Z_Param_NumUVSets,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshUVFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshUVFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshUVFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoGeneratePatchBuilderMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execAutoGeneratePatchBuilderMeshUVs },
			{ "AutoGenerateXAtlasMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execAutoGenerateXAtlasMeshUVs },
			{ "CopyMeshToMeshUVLayer", &UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshToMeshUVLayer },
			{ "CopyMeshUVLayerToMesh", &UGeometryScriptLibrary_MeshUVFunctions::execCopyMeshUVLayerToMesh },
			{ "CopyUVSet", &UGeometryScriptLibrary_MeshUVFunctions::execCopyUVSet },
			{ "GetMeshPerVertexUVs", &UGeometryScriptLibrary_MeshUVFunctions::execGetMeshPerVertexUVs },
			{ "GetMeshUVSizeInfo", &UGeometryScriptLibrary_MeshUVFunctions::execGetMeshUVSizeInfo },
			{ "RecomputeMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execRecomputeMeshUVs },
			{ "RepackMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execRepackMeshUVs },
			{ "RotateMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execRotateMeshUVs },
			{ "ScaleMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execScaleMeshUVs },
			{ "SetMeshTriangleUVs", &UGeometryScriptLibrary_MeshUVFunctions::execSetMeshTriangleUVs },
			{ "SetMeshUVsFromBoxProjection", &UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromBoxProjection },
			{ "SetMeshUVsFromCylinderProjection", &UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromCylinderProjection },
			{ "SetMeshUVsFromPlanarProjection", &UGeometryScriptLibrary_MeshUVFunctions::execSetMeshUVsFromPlanarProjection },
			{ "SetNumUVSets", &UGeometryScriptLibrary_MeshUVFunctions::execSetNumUVSets },
			{ "TranslateMeshUVs", &UGeometryScriptLibrary_MeshUVFunctions::execTranslateMeshUVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptPatchBuilderOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions, METADATA_PARAMS(nullptr, 0) }; // 2494839576
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "AutoGeneratePatchBuilderMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventAutoGeneratePatchBuilderMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptXAtlasOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions, METADATA_PARAMS(nullptr, 0) }; // 2710070010
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "AutoGenerateXAtlasMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventAutoGenerateXAtlasMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms
		{
			UDynamicMesh* CopyFromUVMesh;
			int32 ToUVSetIndex;
			UDynamicMesh* CopyToMesh;
			UDynamicMesh* CopyToMeshOut;
			bool bFoundTopologyErrors;
			bool bIsValidUVSet;
			bool bOnlyUVPositions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyFromUVMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToUVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ToUVSetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToMeshOut;
		static void NewProp_bFoundTopologyErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundTopologyErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidUVSet_MetaData[];
#endif
		static void NewProp_bIsValidUVSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidUVSet;
		static void NewProp_bOnlyUVPositions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUVPositions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyFromUVMesh = { "CopyFromUVMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, CopyFromUVMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ToUVSetIndex_MetaData[] = {
		{ "DisplayName", "To UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ToUVSetIndex = { "ToUVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, ToUVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ToUVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ToUVSetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMesh_MetaData[] = {
		{ "DisplayName", "Copy To Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMesh = { "CopyToMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, CopyToMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMeshOut_MetaData[] = {
		{ "DisplayName", "Copy To Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMeshOut = { "CopyToMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, CopyToMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMeshOut_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bFoundTopologyErrors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms*)Obj)->bFoundTopologyErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bFoundTopologyErrors = { "bFoundTopologyErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bFoundTopologyErrors_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet_MetaData[] = {
		{ "DisplayName", "Is Valid UV Channel" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms*)Obj)->bIsValidUVSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet = { "bIsValidUVSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bOnlyUVPositions_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms*)Obj)->bOnlyUVPositions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bOnlyUVPositions = { "bOnlyUVPositions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bOnlyUVPositions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Copy From Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyFromUVMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ToUVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_CopyToMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bFoundTopologyErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bIsValidUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_bOnlyUVPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "Comment", "/**\n\x09 * Transfer the 3D vertex positions and triangles of CopyFromUVMesh to the given UV Channel identified by ToUVChannel of CopyToMesh.\n\x09 * 3D positions (X,Y,Z) will be copied as UV positions (X,Y), ie Z is ignored.\n\x09 * \n\x09 * bOnlyUVPositions controls whether only UV positions will be updated, or if the UV topology will be fully replaced.\n\x09 * When false, CopyFromUVMesh must currently have a MaxVertexID <= that of the UV Channel MaxElementID\n\x09 * When true, CopyFromUVMesh must currently have a MaxTriangleID <= that of CopyToMesh\n\x09 * \n\x09 * @param bInvalidTopology will be returned true if any topological inconsistencies are found (but the operation will generally continue)\n\x09 * @param bIsValidUVSet will be returned false if To UV Channel is not available\n\x09 * @param bOnlyUVPositions if true, only (valid, matching) UV positions are updated, a full new UV topology is created\n\x09 */" },
		{ "CPP_Default_bOnlyUVPositions", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Copy Mesh To Mesh UV Channel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Transfer the 3D vertex positions and triangles of CopyFromUVMesh to the given UV Channel identified by ToUVChannel of CopyToMesh.\n3D positions (X,Y,Z) will be copied as UV positions (X,Y), ie Z is ignored.\n\nbOnlyUVPositions controls whether only UV positions will be updated, or if the UV topology will be fully replaced.\nWhen false, CopyFromUVMesh must currently have a MaxVertexID <= that of the UV Channel MaxElementID\nWhen true, CopyFromUVMesh must currently have a MaxTriangleID <= that of CopyToMesh\n\n@param bInvalidTopology will be returned true if any topological inconsistencies are found (but the operation will generally continue)\n@param bIsValidUVSet will be returned false if To UV Channel is not available\n@param bOnlyUVPositions if true, only (valid, matching) UV positions are updated, a full new UV topology is created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "CopyMeshToMeshUVLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshToMeshUVLayer_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms
		{
			UDynamicMesh* CopyFromMesh;
			int32 UVSetIndex;
			UDynamicMesh* CopyToUVMesh;
			UDynamicMesh* CopyToUVMeshOut;
			bool bInvalidTopology;
			bool bIsValidUVSet;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyFromMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToUVMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToUVMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyToUVMeshOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyToUVMeshOut;
		static void NewProp_bInvalidTopology_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvalidTopology;
		static void NewProp_bIsValidUVSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidUVSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyFromMesh = { "CopyFromMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, CopyFromMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_UVSetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMesh_MetaData[] = {
		{ "DisplayName", "Copy To UV Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMesh = { "CopyToUVMesh", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, CopyToUVMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMeshOut_MetaData[] = {
		{ "DisplayName", "Copy To UV Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMeshOut = { "CopyToUVMeshOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, CopyToUVMeshOut), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMeshOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMeshOut_MetaData)) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bInvalidTopology_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms*)Obj)->bInvalidTopology = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bInvalidTopology = { "bInvalidTopology", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bInvalidTopology_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bIsValidUVSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms*)Obj)->bIsValidUVSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bIsValidUVSet = { "bIsValidUVSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bIsValidUVSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Copy From Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyFromMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_CopyToUVMeshOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bInvalidTopology,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_bIsValidUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "Comment", "/**\n\x09 * Copy the 2D UVs from the given UV Channel in CopyFromMesh to the 3D vertex positions in CopyToUVMesh,\n\x09 * with the triangle mesh topology defined by the UV Channel. Generally this \"UV Mesh\" topology will not\n\x09 * be the same as the 3D mesh topology. PolyGroup IDs and Material IDs are preserved in the UVMesh.\n\x09 * \n\x09 * 2D UV Positions are copied to 3D as (X, Y, 0) \n\x09 * \n\x09 * CopyMeshToMeshUVChannel will copy the 3D UV Mesh back to the UV Channel. This pair of functions can\n\x09 * then be used to implement UV generation/editing via other mesh functions.\n\x09 * \n\x09 * @param bInvalidTopology will be returned true if any topological issues were found\n\x09 * @param bIsValidUVSet will be returned false if UVSetIndex is not available\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Copy Mesh UV Channel To Mesh" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Copy the 2D UVs from the given UV Channel in CopyFromMesh to the 3D vertex positions in CopyToUVMesh,\nwith the triangle mesh topology defined by the UV Channel. Generally this \"UV Mesh\" topology will not\nbe the same as the 3D mesh topology. PolyGroup IDs and Material IDs are preserved in the UVMesh.\n\n2D UV Positions are copied to 3D as (X, Y, 0)\n\nCopyMeshToMeshUVChannel will copy the 3D UV Mesh back to the UV Channel. This pair of functions can\nthen be used to implement UV generation/editing via other mesh functions.\n\n@param bInvalidTopology will be returned true if any topological issues were found\n@param bIsValidUVSet will be returned false if UVSetIndex is not available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "CopyMeshUVLayerToMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::GeometryScriptLibrary_MeshUVFunctions_eventCopyMeshUVLayerToMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 FromUVSet;
			int32 ToUVSet;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromUVSet_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FromUVSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToUVSet_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ToUVSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_FromUVSet_MetaData[] = {
		{ "DisplayName", "From UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_FromUVSet = { "FromUVSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms, FromUVSet), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_FromUVSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_FromUVSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ToUVSet_MetaData[] = {
		{ "DisplayName", "To UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ToUVSet = { "ToUVSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms, ToUVSet), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ToUVSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ToUVSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_FromUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ToUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Copy UV Channel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "CopyUVSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::GeometryScriptLibrary_MeshUVFunctions_eventCopyUVSet_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptUVList UVList;
			bool bIsValidUVSet;
			bool bHasVertexIDGaps;
			bool bHasSplitUVs;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static void NewProp_bIsValidUVSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidUVSet;
		static void NewProp_bHasVertexIDGaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexIDGaps;
		static void NewProp_bHasSplitUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSplitUVs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(nullptr, 0) }; // 1719514926
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bIsValidUVSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms*)Obj)->bIsValidUVSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bIsValidUVSet = { "bIsValidUVSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bIsValidUVSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasVertexIDGaps_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms*)Obj)->bHasVertexIDGaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasVertexIDGaps = { "bHasVertexIDGaps", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasVertexIDGaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasSplitUVs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms*)Obj)->bHasSplitUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasSplitUVs = { "bHasSplitUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasSplitUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bIsValidUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasVertexIDGaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_bHasSplitUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "Comment", "/**\n\x09 * Get a list of single vertex UVs for each mesh vertex in the TargetMesh, derived from the specified UV Channel.\n\x09 * The UV Channel may store multiple UVs for a single vertex (along UV seams)\n\x09 * In such cases an arbitrary UV will be stored for that vertex, and bHasSplitUVs will be returned as true\n\x09 * @param UVSetIndex index of UV Channel to read\n\x09 * @param UVList output UV list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n\x09 * @param bIsValidUVSet will be set to true if the UV Channel was valid\n\x09 * @param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount \n\x09 * @param bHasSplitUVs will be set to true if there were split UVs in the UV Channel\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a list of single vertex UVs for each mesh vertex in the TargetMesh, derived from the specified UV Channel.\nThe UV Channel may store multiple UVs for a single vertex (along UV seams)\nIn such cases an arbitrary UV will be stored for that vertex, and bHasSplitUVs will be returned as true\n@param UVSetIndex index of UV Channel to read\n@param UVList output UV list will be stored here. Size will be equal to the MaxVertexID of TargetMesh  (not the VertexCount!)\n@param bIsValidUVSet will be set to true if the UV Channel was valid\n@param bHasVertexIDGaps will be set to true if some vertex indices in TargetMesh were invalid, ie MaxVertexID > VertexCount\n@param bHasSplitUVs will be set to true if there were split UVs in the UV Channel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "GetMeshPerVertexUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventGetMeshPerVertexUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptMeshSelection Selection;
			double MeshArea;
			double UVArea;
			FBox MeshBounds;
			FBox2D UVBounds;
			bool bIsValidUVSet;
			bool bFoundUnsetUVs;
			bool bOnlyIncludeValidUVTris;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MeshArea;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_UVArea;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVBounds;
		static void NewProp_bIsValidUVSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidUVSet;
		static void NewProp_bFoundUnsetUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundUnsetUVs;
		static void NewProp_bOnlyIncludeValidUVTris_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIncludeValidUVTris;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_MeshArea = { "MeshArea", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, MeshArea), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVArea = { "UVArea", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, UVArea), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_MeshBounds = { "MeshBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, MeshBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVBounds = { "UVBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, UVBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bIsValidUVSet_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms*)Obj)->bIsValidUVSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bIsValidUVSet = { "bIsValidUVSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bIsValidUVSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bFoundUnsetUVs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms*)Obj)->bFoundUnsetUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bFoundUnsetUVs = { "bFoundUnsetUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bFoundUnsetUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bOnlyIncludeValidUVTris_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms*)Obj)->bOnlyIncludeValidUVTris = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bOnlyIncludeValidUVTris = { "bOnlyIncludeValidUVTris", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bOnlyIncludeValidUVTris_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Copy From Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_MeshArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_MeshBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_UVBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bIsValidUVSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bFoundUnsetUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_bOnlyIncludeValidUVTris,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "Comment", "/**\n\x09 * Compute information about dimensions and areas for a UV Set of a Mesh, with an optional Mesh Selection\n\x09 * @param UVSetIndex index of UV Channel to query\n\x09 * @param Selection subset of triangles to process, whole mesh is used if selection is not provided\n\x09 * @param MeshArea output 3D area of queried triangles\n\x09 * @param UVArea output 2D UV-space area of queried triangles\n\x09 * @param MeshBounds output 3D bounding box of queried triangles\n\x09 * @param UVBounds output 2D UV-space bounding box of queried triangles\n\x09 * @param bIsValidUVSet output flag set to false if UV Channel does not exist on the target mesh. In this case Areas and Bounds are not initialized.\n\x09 * @param bFoundUnsetUVs output flag set to true if any of the queried triangles do not have valid UVs set\n\x09 * @param bOnlyIncludeValidUVTris if true, only triangles with valid UVs are included in 3D Mesh Area/Bounds\n\x09 */" },
		{ "CPP_Default_bOnlyIncludeValidUVTris", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute information about dimensions and areas for a UV Set of a Mesh, with an optional Mesh Selection\n@param UVSetIndex index of UV Channel to query\n@param Selection subset of triangles to process, whole mesh is used if selection is not provided\n@param MeshArea output 3D area of queried triangles\n@param UVArea output 2D UV-space area of queried triangles\n@param MeshBounds output 3D bounding box of queried triangles\n@param UVBounds output 2D UV-space bounding box of queried triangles\n@param bIsValidUVSet output flag set to false if UV Channel does not exist on the target mesh. In this case Areas and Bounds are not initialized.\n@param bFoundUnsetUVs output flag set to true if any of the queried triangles do not have valid UVs set\n@param bOnlyIncludeValidUVTris if true, only triangles with valid UVs are included in 3D Mesh Area/Bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "GetMeshUVSizeInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::GeometryScriptLibrary_MeshUVFunctions_eventGetMeshUVSizeInfo_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptRecomputeUVsOptions Options;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions, METADATA_PARAMS(nullptr, 0) }; // 2143180464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "RecomputeMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventRecomputeMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FGeometryScriptRepackUVsOptions RepackOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepackOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_RepackOptions = { "RepackOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms, RepackOptions), Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions, METADATA_PARAMS(nullptr, 0) }; // 1167362897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_RepackOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "RepackMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventRepackMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			float RotationAngle;
			FVector2D RotationOrigin;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, RotationAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_RotationOrigin = { "RotationOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, RotationOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_RotationOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "RotateMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventRotateMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FVector2D Scale;
			FVector2D ScaleOrigin;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ScaleOrigin = { "ScaleOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, ScaleOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ScaleOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "ScaleMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventScaleMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			int32 TriangleID;
			FGeometryScriptUVTriangle UVs;
			bool bIsValidTriangle;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms, TriangleID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms, UVs), Z_Construct_UScriptStruct_FGeometryScriptUVTriangle, METADATA_PARAMS(nullptr, 0) }; // 192984062
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "SetMeshTriangleUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventSetMeshTriangleUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FTransform BoxTransform;
			FGeometryScriptMeshSelection Selection;
			int32 MinIslandTriCount;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinIslandTriCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_BoxTransform = { "BoxTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, BoxTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_MinIslandTriCount = { "MinIslandTriCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, MinIslandTriCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_BoxTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_MinIslandTriCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_MinIslandTriCount", "2" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "SetMeshUVsFromBoxProjection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromBoxProjection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FTransform CylinderTransform;
			FGeometryScriptMeshSelection Selection;
			float SplitAngle;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CylinderTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitAngle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_CylinderTransform = { "CylinderTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, CylinderTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_SplitAngle = { "SplitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, SplitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_CylinderTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_SplitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_SplitAngle", "45.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "SetMeshUVsFromCylinderProjection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromCylinderProjection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FTransform PlaneTransform;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_PlaneTransform = { "PlaneTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_PlaneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "Comment", "/**\n\x09 * Scale of PlaneTransform defines world-space dimension that maps to 1 UV dimension\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Scale of PlaneTransform defines world-space dimension that maps to 1 UV dimension" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "SetMeshUVsFromPlanarProjection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::GeometryScriptLibrary_MeshUVFunctions_eventSetMeshUVsFromPlanarProjection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 NumUVSets;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUVSets_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumUVSets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_NumUVSets_MetaData[] = {
		{ "DisplayName", "Num UV Channels" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_NumUVSets = { "NumUVSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms, NumUVSets), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_NumUVSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_NumUVSets_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_NumUVSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "Set Num UV Channels" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "SetNumUVSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::GeometryScriptLibrary_MeshUVFunctions_eventSetNumUVSets_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics
	{
		struct GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 UVSetIndex;
			FVector2D Translation;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UVSetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_UVSetIndex_MetaData[] = {
		{ "DisplayName", "UV Channel" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_UVSetIndex = { "UVSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, UVSetIndex), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_UVSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_UVSetIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_UVSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|UVs" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, nullptr, "TranslateMeshUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::GeometryScriptLibrary_MeshUVFunctions_eventTranslateMeshUVs_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshUVFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshUVFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs, "AutoGeneratePatchBuilderMeshUVs" }, // 2303461861
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs, "AutoGenerateXAtlasMeshUVs" }, // 3343411989
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer, "CopyMeshToMeshUVLayer" }, // 4273310976
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh, "CopyMeshUVLayerToMesh" }, // 2900831862
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet, "CopyUVSet" }, // 1338346907
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs, "GetMeshPerVertexUVs" }, // 1900339767
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo, "GetMeshUVSizeInfo" }, // 2345253085
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs, "RecomputeMeshUVs" }, // 3603992362
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs, "RepackMeshUVs" }, // 1522729272
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs, "RotateMeshUVs" }, // 2683742504
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs, "ScaleMeshUVs" }, // 2982854498
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs, "SetMeshTriangleUVs" }, // 3832180056
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection, "SetMeshUVsFromBoxProjection" }, // 2153632682
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection, "SetMeshUVsFromCylinderProjection" }, // 2680728097
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection, "SetMeshUVsFromPlanarProjection" }, // 1153292963
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets, "SetNumUVSets" }, // 4064992188
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs, "TranslateMeshUVs" }, // 4001846110
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshUVFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshUVFunctions.h" },
		{ "ScriptName", "GeometryScript_UVs" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshUVFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshUVFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshUVFunctions>()
	{
		return UGeometryScriptLibrary_MeshUVFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshUVFunctions::UGeometryScriptLibrary_MeshUVFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshUVFunctions);
	UGeometryScriptLibrary_MeshUVFunctions::~UGeometryScriptLibrary_MeshUVFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptUVFlattenMethod_StaticEnum, TEXT("EGeometryScriptUVFlattenMethod"), &Z_Registration_Info_UEnum_EGeometryScriptUVFlattenMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3590351205U) },
		{ EGeometryScriptUVIslandSource_StaticEnum, TEXT("EGeometryScriptUVIslandSource"), &Z_Registration_Info_UEnum_EGeometryScriptUVIslandSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 321936778U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptRepackUVsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRepackUVsOptions_Statics::NewStructOps, TEXT("GeometryScriptRepackUVsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRepackUVsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRepackUVsOptions), 1167362897U) },
		{ FGeometryScriptExpMapUVOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptExpMapUVOptions_Statics::NewStructOps, TEXT("GeometryScriptExpMapUVOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptExpMapUVOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptExpMapUVOptions), 3999580094U) },
		{ FGeometryScriptSpectralConformalUVOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSpectralConformalUVOptions_Statics::NewStructOps, TEXT("GeometryScriptSpectralConformalUVOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSpectralConformalUVOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSpectralConformalUVOptions), 1619949552U) },
		{ FGeometryScriptRecomputeUVsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRecomputeUVsOptions_Statics::NewStructOps, TEXT("GeometryScriptRecomputeUVsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRecomputeUVsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRecomputeUVsOptions), 2143180464U) },
		{ FGeometryScriptPatchBuilderOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPatchBuilderOptions_Statics::NewStructOps, TEXT("GeometryScriptPatchBuilderOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPatchBuilderOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPatchBuilderOptions), 2494839576U) },
		{ FGeometryScriptXAtlasOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptXAtlasOptions_Statics::NewStructOps, TEXT("GeometryScriptXAtlasOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptXAtlasOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptXAtlasOptions), 2710070010U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshUVFunctions, UGeometryScriptLibrary_MeshUVFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshUVFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshUVFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshUVFunctions), 2380370445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_4260825983(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshUVFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
