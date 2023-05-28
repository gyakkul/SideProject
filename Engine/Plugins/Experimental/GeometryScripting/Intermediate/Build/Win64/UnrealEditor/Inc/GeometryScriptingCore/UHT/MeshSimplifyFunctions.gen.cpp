// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSimplifyFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSimplifyFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions;
class UScriptStruct* FGeometryScriptPlanarSimplifyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPlanarSimplifyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPlanarSimplifyOptions>()
{
	return FGeometryScriptPlanarSimplifyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompact_MetaData[];
#endif
		static void NewProp_bAutoCompact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPlanarSimplifyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPlanarSimplifyOptions, AngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ToolTip", "If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_SetBit(void* Obj)
	{
		((FGeometryScriptPlanarSimplifyOptions*)Obj)->bAutoCompact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact = { "bAutoCompact", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPlanarSimplifyOptions), &Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_AngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewProp_bAutoCompact,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPlanarSimplifyOptions",
		sizeof(FGeometryScriptPlanarSimplifyOptions),
		alignof(FGeometryScriptPlanarSimplifyOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions;
class UScriptStruct* FGeometryScriptPolygroupSimplifyOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPolygroupSimplifyOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPolygroupSimplifyOptions>()
{
	return FGeometryScriptPolygroupSimplifyOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompact_MetaData[];
#endif
		static void NewProp_bAutoCompact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPolygroupSimplifyOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptPolygroupSimplifyOptions, AngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_AngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ToolTip", "If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact_SetBit(void* Obj)
	{
		((FGeometryScriptPolygroupSimplifyOptions*)Obj)->bAutoCompact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact = { "bAutoCompact", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPolygroupSimplifyOptions), &Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_AngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewProp_bAutoCompact,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPolygroupSimplifyOptions",
		sizeof(FGeometryScriptPolygroupSimplifyOptions),
		alignof(FGeometryScriptPolygroupSimplifyOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType;
	static UEnum* EGeometryScriptRemoveMeshSimplificationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptRemoveMeshSimplificationType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemoveMeshSimplificationType>()
	{
		return EGeometryScriptRemoveMeshSimplificationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enumerators[] = {
		{ "EGeometryScriptRemoveMeshSimplificationType::StandardQEM", (int64)EGeometryScriptRemoveMeshSimplificationType::StandardQEM },
		{ "EGeometryScriptRemoveMeshSimplificationType::VolumePreserving", (int64)EGeometryScriptRemoveMeshSimplificationType::VolumePreserving },
		{ "EGeometryScriptRemoveMeshSimplificationType::AttributeAware", (int64)EGeometryScriptRemoveMeshSimplificationType::AttributeAware },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enum_MetaDataParams[] = {
		{ "AttributeAware.Name", "EGeometryScriptRemoveMeshSimplificationType::AttributeAware" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "StandardQEM.Name", "EGeometryScriptRemoveMeshSimplificationType::StandardQEM" },
		{ "VolumePreserving.Name", "EGeometryScriptRemoveMeshSimplificationType::VolumePreserving" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptRemoveMeshSimplificationType",
		"EGeometryScriptRemoveMeshSimplificationType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions;
class UScriptStruct* FGeometryScriptSimplifyMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSimplifyMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSimplifyMeshOptions>()
{
	return FGeometryScriptSimplifyMeshOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSeamCollapse_MetaData[];
#endif
		static void NewProp_bAllowSeamCollapse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSeamCollapse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSeamSmoothing_MetaData[];
#endif
		static void NewProp_bAllowSeamSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSeamSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSeamSplits_MetaData[];
#endif
		static void NewProp_bAllowSeamSplits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSeamSplits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveVertexPositions_MetaData[];
#endif
		static void NewProp_bPreserveVertexPositions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveVertexPositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetainQuadricMemory_MetaData[];
#endif
		static void NewProp_bRetainQuadricMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainQuadricMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompact_MetaData[];
#endif
		static void NewProp_bAutoCompact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSimplifyMeshOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSimplifyMeshOptions, Method), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveMeshSimplificationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method_MetaData)) }; // 522842943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bAllowSeamCollapse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse = { "bAllowSeamCollapse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bAllowSeamSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing = { "bAllowSeamSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bAllowSeamSplits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits = { "bAllowSeamSplits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bPreserveVertexPositions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions = { "bPreserveVertexPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bRetainQuadricMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory = { "bRetainQuadricMemory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ToolTip", "If enabled, the simplified mesh is automatically compacted to remove gaps in the index space. This is expensive and can be disabled by advanced users." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_SetBit(void* Obj)
	{
		((FGeometryScriptSimplifyMeshOptions*)Obj)->bAutoCompact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact = { "bAutoCompact", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSimplifyMeshOptions), &Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamCollapse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAllowSeamSplits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bPreserveVertexPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bRetainQuadricMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewProp_bAutoCompact,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSimplifyMeshOptions",
		sizeof(FGeometryScriptSimplifyMeshOptions),
		alignof(FGeometryScriptSimplifyMeshOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTolerance)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_STRUCT(FGeometryScriptSimplifyMeshOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance(Z_Param_TargetMesh,Z_Param_Tolerance,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToVertexCount)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexCount);
		P_GET_STRUCT(FGeometryScriptSimplifyMeshOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(Z_Param_TargetMesh,Z_Param_VertexCount,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTriangleCount)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleCount);
		P_GET_STRUCT(FGeometryScriptSimplifyMeshOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(Z_Param_TargetMesh,Z_Param_TriangleCount,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPolygroupTopology)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPolygroupSimplifyOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology(Z_Param_TargetMesh,Z_Param_Options,Z_Param_GroupLayer,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPlanar)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPlanarSimplifyOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSimplifyFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySimplifyToPlanar", &UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPlanar },
			{ "ApplySimplifyToPolygroupTopology", &UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPolygroupTopology },
			{ "ApplySimplifyToTolerance", &UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTolerance },
			{ "ApplySimplifyToTriangleCount", &UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTriangleCount },
			{ "ApplySimplifyToVertexCount", &UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToVertexCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics
	{
		struct GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPlanarSimplifyOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions, METADATA_PARAMS(nullptr, 0) }; // 3494908898
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, nullptr, "ApplySimplifyToPlanar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPlanar_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics
	{
		struct GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPolygroupSimplifyOptions Options;
			FGeometryScriptGroupLayer GroupLayer;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions, METADATA_PARAMS(nullptr, 0) }; // 2499835081
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(nullptr, 0) }; // 1149642374
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "ApplySimplifyToPolyGroupTopology" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, nullptr, "ApplySimplifyToPolygroupTopology", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToPolygroupTopology_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics
	{
		struct GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms
		{
			UDynamicMesh* TargetMesh;
			float Tolerance;
			FGeometryScriptSimplifyMeshOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1750326993
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, nullptr, "ApplySimplifyToTolerance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTolerance_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics
	{
		struct GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleCount;
			FGeometryScriptSimplifyMeshOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms, TriangleCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1750326993
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_TriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, nullptr, "ApplySimplifyToTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToTriangleCount_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics
	{
		struct GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexCount;
			FGeometryScriptSimplifyMeshOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms, VertexCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions, METADATA_PARAMS(nullptr, 0) }; // 1750326993
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_VertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Simplification" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, nullptr, "ApplySimplifyToVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::GeometryScriptLibrary_MeshSimplifyFunctions_eventApplySimplifyToVertexCount_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSimplifyFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar, "ApplySimplifyToPlanar" }, // 1081701186
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology, "ApplySimplifyToPolygroupTopology" }, // 597408579
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance, "ApplySimplifyToTolerance" }, // 3815261650
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount, "ApplySimplifyToTriangleCount" }, // 2196092451
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount, "ApplySimplifyToVertexCount" }, // 878022063
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSimplifyFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSimplifyFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSimplification" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSimplifyFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSimplifyFunctions>()
	{
		return UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshSimplifyFunctions::UGeometryScriptLibrary_MeshSimplifyFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSimplifyFunctions);
	UGeometryScriptLibrary_MeshSimplifyFunctions::~UGeometryScriptLibrary_MeshSimplifyFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptRemoveMeshSimplificationType_StaticEnum, TEXT("EGeometryScriptRemoveMeshSimplificationType"), &Z_Registration_Info_UEnum_EGeometryScriptRemoveMeshSimplificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 522842943U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptPlanarSimplifyOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics::NewStructOps, TEXT("GeometryScriptPlanarSimplifyOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPlanarSimplifyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPlanarSimplifyOptions), 3494908898U) },
		{ FGeometryScriptPolygroupSimplifyOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics::NewStructOps, TEXT("GeometryScriptPolygroupSimplifyOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPolygroupSimplifyOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPolygroupSimplifyOptions), 2499835081U) },
		{ FGeometryScriptSimplifyMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics::NewStructOps, TEXT("GeometryScriptSimplifyMeshOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSimplifyMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSimplifyMeshOptions), 1750326993U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshSimplifyFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSimplifyFunctions), 4129192633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_529433549(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
