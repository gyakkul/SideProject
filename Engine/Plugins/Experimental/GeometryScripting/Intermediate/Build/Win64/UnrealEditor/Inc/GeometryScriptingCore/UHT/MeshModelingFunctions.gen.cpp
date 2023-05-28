// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshModelingFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshModelingFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode;
	static UEnum* EGeometryScriptMeshEditPolygroupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMeshEditPolygroupMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshEditPolygroupMode>()
	{
		return EGeometryScriptMeshEditPolygroupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enumerators[] = {
		{ "EGeometryScriptMeshEditPolygroupMode::PreserveExisting", (int64)EGeometryScriptMeshEditPolygroupMode::PreserveExisting },
		{ "EGeometryScriptMeshEditPolygroupMode::AutoGenerateNew", (int64)EGeometryScriptMeshEditPolygroupMode::AutoGenerateNew },
		{ "EGeometryScriptMeshEditPolygroupMode::SetConstant", (int64)EGeometryScriptMeshEditPolygroupMode::SetConstant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enum_MetaDataParams[] = {
		{ "AutoGenerateNew.Name", "EGeometryScriptMeshEditPolygroupMode::AutoGenerateNew" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "PreserveExisting.Name", "EGeometryScriptMeshEditPolygroupMode::PreserveExisting" },
		{ "SetConstant.Name", "EGeometryScriptMeshEditPolygroupMode::SetConstant" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMeshEditPolygroupMode",
		"EGeometryScriptMeshEditPolygroupMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions;
class UScriptStruct* FGeometryScriptMeshEditPolygroupOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshEditPolygroupOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshEditPolygroupOptions>()
{
	return FGeometryScriptMeshEditPolygroupOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantGroup_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ConstantGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshEditPolygroupOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode = { "GroupMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshEditPolygroupOptions, GroupMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshEditPolygroupMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode_MetaData)) }; // 1129268528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_ConstantGroup_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_ConstantGroup = { "ConstantGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshEditPolygroupOptions, ConstantGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_ConstantGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_ConstantGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_GroupMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewProp_ConstantGroup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshEditPolygroupOptions",
		sizeof(FGeometryScriptMeshEditPolygroupOptions),
		alignof(FGeometryScriptMeshEditPolygroupOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions;
class UScriptStruct* FGeometryScriptMeshOffsetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshOffsetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshOffsetOptions>()
{
	return FGeometryScriptMeshOffsetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedBoundary_MetaData[];
#endif
		static void NewProp_bFixedBoundary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedBoundary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolveSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SolveSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectDuringSmoothing_MetaData[];
#endif
		static void NewProp_bReprojectDuringSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectDuringSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshOffsetOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetOptions, OffsetDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_OffsetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_OffsetDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_SetBit(void* Obj)
	{
		((FGeometryScriptMeshOffsetOptions*)Obj)->bFixedBoundary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary = { "bFixedBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshOffsetOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SolveSteps_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SolveSteps = { "SolveSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetOptions, SolveSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SolveSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SolveSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SmoothAlpha_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SmoothAlpha = { "SmoothAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetOptions, SmoothAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SmoothAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SmoothAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing_SetBit(void* Obj)
	{
		((FGeometryScriptMeshOffsetOptions*)Obj)->bReprojectDuringSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing = { "bReprojectDuringSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshOffsetOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_BoundaryAlpha_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// should not be > 0.9\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ToolTip", "should not be > 0.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_BoundaryAlpha = { "BoundaryAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetOptions, BoundaryAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_BoundaryAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_BoundaryAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_OffsetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bFixedBoundary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SolveSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_SmoothAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_bReprojectDuringSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewProp_BoundaryAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshOffsetOptions",
		sizeof(FGeometryScriptMeshOffsetOptions),
		alignof(FGeometryScriptMeshOffsetOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea;
	static UEnum* EGeometryScriptPolyOperationArea_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPolyOperationArea"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPolyOperationArea>()
	{
		return EGeometryScriptPolyOperationArea_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enumerators[] = {
		{ "EGeometryScriptPolyOperationArea::EntireSelection", (int64)EGeometryScriptPolyOperationArea::EntireSelection },
		{ "EGeometryScriptPolyOperationArea::PerPolygroup", (int64)EGeometryScriptPolyOperationArea::PerPolygroup },
		{ "EGeometryScriptPolyOperationArea::PerTriangle", (int64)EGeometryScriptPolyOperationArea::PerTriangle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EntireSelection.Name", "EGeometryScriptPolyOperationArea::EntireSelection" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "PerPolygroup.DisplayName", "Per PolyGroup" },
		{ "PerPolygroup.Name", "EGeometryScriptPolyOperationArea::PerPolygroup" },
		{ "PerTriangle.Name", "EGeometryScriptPolyOperationArea::PerTriangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPolyOperationArea",
		"EGeometryScriptPolyOperationArea",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions;
class UScriptStruct* FGeometryScriptMeshExtrudeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshExtrudeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshExtrudeOptions>()
{
	return FGeometryScriptMeshExtrudeOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrudeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtrudeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidsToShells_MetaData[];
#endif
		static void NewProp_bSolidsToShells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidsToShells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshExtrudeOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDistance = { "ExtrudeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshExtrudeOptions, ExtrudeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDirection_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDirection = { "ExtrudeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshExtrudeOptions, ExtrudeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshExtrudeOptions, UVScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_SetBit(void* Obj)
	{
		((FGeometryScriptMeshExtrudeOptions*)Obj)->bSolidsToShells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells = { "bSolidsToShells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshExtrudeOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_ExtrudeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewProp_bSolidsToShells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshExtrudeOptions",
		sizeof(FGeometryScriptMeshExtrudeOptions),
		alignof(FGeometryScriptMeshExtrudeOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection;
	static UEnum* EGeometryScriptLinearExtrudeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptLinearExtrudeDirection"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptLinearExtrudeDirection>()
	{
		return EGeometryScriptLinearExtrudeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enumerators[] = {
		{ "EGeometryScriptLinearExtrudeDirection::FixedDirection", (int64)EGeometryScriptLinearExtrudeDirection::FixedDirection },
		{ "EGeometryScriptLinearExtrudeDirection::AverageFaceNormal", (int64)EGeometryScriptLinearExtrudeDirection::AverageFaceNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enum_MetaDataParams[] = {
		{ "AverageFaceNormal.Name", "EGeometryScriptLinearExtrudeDirection::AverageFaceNormal" },
		{ "BlueprintType", "true" },
		{ "FixedDirection.Name", "EGeometryScriptLinearExtrudeDirection::FixedDirection" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptLinearExtrudeDirection",
		"EGeometryScriptLinearExtrudeDirection",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions;
class UScriptStruct* FGeometryScriptMeshLinearExtrudeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshLinearExtrudeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshLinearExtrudeOptions>()
{
	return FGeometryScriptMeshLinearExtrudeOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AreaMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AreaMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidsToShells_MetaData[];
#endif
		static void NewProp_bSolidsToShells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidsToShells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshLinearExtrudeOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode = { "DirectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, DirectionMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptLinearExtrudeDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode_MetaData)) }; // 1058365727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode = { "AreaMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, AreaMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode_MetaData)) }; // 745588794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_GroupOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_GroupOptions = { "GroupOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, GroupOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_GroupOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_GroupOptions_MetaData)) }; // 1381089281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshLinearExtrudeOptions, UVScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells_SetBit(void* Obj)
	{
		((FGeometryScriptMeshLinearExtrudeOptions*)Obj)->bSolidsToShells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells = { "bSolidsToShells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshLinearExtrudeOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_DirectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_AreaMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_GroupOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewProp_bSolidsToShells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshLinearExtrudeOptions",
		sizeof(FGeometryScriptMeshLinearExtrudeOptions),
		alignof(FGeometryScriptMeshLinearExtrudeOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType;
	static UEnum* EGeometryScriptOffsetFacesType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptOffsetFacesType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptOffsetFacesType>()
	{
		return EGeometryScriptOffsetFacesType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enumerators[] = {
		{ "EGeometryScriptOffsetFacesType::VertexNormal", (int64)EGeometryScriptOffsetFacesType::VertexNormal },
		{ "EGeometryScriptOffsetFacesType::FaceNormal", (int64)EGeometryScriptOffsetFacesType::FaceNormal },
		{ "EGeometryScriptOffsetFacesType::ParallelFaceOffset", (int64)EGeometryScriptOffsetFacesType::ParallelFaceOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FaceNormal.Name", "EGeometryScriptOffsetFacesType::FaceNormal" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ParallelFaceOffset.Name", "EGeometryScriptOffsetFacesType::ParallelFaceOffset" },
		{ "VertexNormal.Name", "EGeometryScriptOffsetFacesType::VertexNormal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptOffsetFacesType",
		"EGeometryScriptOffsetFacesType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions;
class UScriptStruct* FGeometryScriptMeshOffsetFacesOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshOffsetFacesOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshOffsetFacesOptions>()
{
	return FGeometryScriptMeshOffsetFacesOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AreaMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AreaMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidsToShells_MetaData[];
#endif
		static void NewProp_bSolidsToShells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidsToShells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshOffsetFacesOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetFacesOptions, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType = { "OffsetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetFacesOptions, OffsetType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOffsetFacesType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType_MetaData)) }; // 1348988425
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode = { "AreaMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetFacesOptions, AreaMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode_MetaData)) }; // 745588794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_GroupOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_GroupOptions = { "GroupOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetFacesOptions, GroupOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_GroupOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_GroupOptions_MetaData)) }; // 1381089281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshOffsetFacesOptions, UVScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells_SetBit(void* Obj)
	{
		((FGeometryScriptMeshOffsetFacesOptions*)Obj)->bSolidsToShells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells = { "bSolidsToShells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshOffsetFacesOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_OffsetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_AreaMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_GroupOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewProp_bSolidsToShells,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshOffsetFacesOptions",
		sizeof(FGeometryScriptMeshOffsetFacesOptions),
		alignof(FGeometryScriptMeshOffsetFacesOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions;
class UScriptStruct* FGeometryScriptMeshInsetOutsetFacesOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshInsetOutsetFacesOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshInsetOutsetFacesOptions>()
{
	return FGeometryScriptMeshInsetOutsetFacesOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryOnly_MetaData[];
#endif
		static void NewProp_bBoundaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Softness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Softness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AreaMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AreaMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshInsetOutsetFacesOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((FGeometryScriptMeshInsetOutsetFacesOptions*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshInsetOutsetFacesOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly_SetBit(void* Obj)
	{
		((FGeometryScriptMeshInsetOutsetFacesOptions*)Obj)->bBoundaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly = { "bBoundaryOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshInsetOutsetFacesOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Softness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Softness = { "Softness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, Softness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Softness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Softness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaScale = { "AreaScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, AreaScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode = { "AreaMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, AreaMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOperationArea, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode_MetaData)) }; // 745588794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_GroupOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_GroupOptions = { "GroupOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, GroupOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_GroupOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_GroupOptions_MetaData)) }; // 1381089281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshInsetOutsetFacesOptions, UVScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_UVScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bReproject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_bBoundaryOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_Softness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_AreaMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_GroupOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewProp_UVScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshInsetOutsetFacesOptions",
		sizeof(FGeometryScriptMeshInsetOutsetFacesOptions),
		alignof(FGeometryScriptMeshInsetOutsetFacesOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions;
class UScriptStruct* FGeometryScriptMeshBevelOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshBevelOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshBevelOptions>()
{
	return FGeometryScriptMeshBevelOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BevelDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[];
#endif
		static void NewProp_bInferMaterialID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferMaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetMaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFilterBox_MetaData[];
#endif
		static void NewProp_bApplyFilterBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFilterBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBoxTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterBoxTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFullyContained_MetaData[];
#endif
		static void NewProp_bFullyContained_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyContained;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshBevelOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_BevelDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_BevelDistance = { "BevelDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelOptions, BevelDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_BevelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_BevelDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBevelOptions*)Obj)->bInferMaterialID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBevelOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelOptions, SetMaterialID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_SetMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_SetMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_MetaData[] = {
		{ "Category", "FilterShape" },
		{ "Comment", "/**\n\x09 * If true the set of beveled PolyGroup edges is limited to those that \n\x09 * are fully or partially contained within the (transformed) FilterBox\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ToolTip", "If true the set of beveled PolyGroup edges is limited to those that\nare fully or partially contained within the (transformed) FilterBox" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBevelOptions*)Obj)->bApplyFilterBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox = { "bApplyFilterBox", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBevelOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBox_MetaData[] = {
		{ "Category", "FilterShape" },
		{ "Comment", "/**\n\x09 * Bounding Box used for edge filtering\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ToolTip", "Bounding Box used for edge filtering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBox = { "FilterBox", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelOptions, FilterBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBoxTransform_MetaData[] = {
		{ "Category", "FilterShape" },
		{ "Comment", "/**\n\x09 * Transform applied to the FilterBox\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ToolTip", "Transform applied to the FilterBox" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBoxTransform = { "FilterBoxTransform", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelOptions, FilterBoxTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBoxTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBoxTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_MetaData[] = {
		{ "Category", "FilterShape" },
		{ "Comment", "/**\n\x09 * If true, then only PolyGroup edges that are fully contained within the filter box will be beveled,\n\x09 * otherwise the edge will be beveled if any vertex is within the filter box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ToolTip", "If true, then only PolyGroup edges that are fully contained within the filter box will be beveled,\notherwise the edge will be beveled if any vertex is within the filter box." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBevelOptions*)Obj)->bFullyContained = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained = { "bFullyContained", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBevelOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_BevelDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bInferMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_SetMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bApplyFilterBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_FilterBoxTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewProp_bFullyContained,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshBevelOptions",
		sizeof(FGeometryScriptMeshBevelOptions),
		alignof(FGeometryScriptMeshBevelOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode;
	static UEnum* EGeometryScriptMeshBevelSelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptMeshBevelSelectionMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshBevelSelectionMode>()
	{
		return EGeometryScriptMeshBevelSelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enumerators[] = {
		{ "EGeometryScriptMeshBevelSelectionMode::TriangleArea", (int64)EGeometryScriptMeshBevelSelectionMode::TriangleArea },
		{ "EGeometryScriptMeshBevelSelectionMode::AllPolygroupEdges", (int64)EGeometryScriptMeshBevelSelectionMode::AllPolygroupEdges },
		{ "EGeometryScriptMeshBevelSelectionMode::SharedPolygroupEdges", (int64)EGeometryScriptMeshBevelSelectionMode::SharedPolygroupEdges },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "AllPolygroupEdges.Comment", "/** Convert the selection to PolyGroups and bevel all the PolyGroup Edges of the selected PolyGroups */" },
		{ "AllPolygroupEdges.DisplayName", "All PolyGroup Edges" },
		{ "AllPolygroupEdges.Name", "EGeometryScriptMeshBevelSelectionMode::AllPolygroupEdges" },
		{ "AllPolygroupEdges.ToolTip", "Convert the selection to PolyGroups and bevel all the PolyGroup Edges of the selected PolyGroups" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mode passed to ApplyMeshBevelSelection to control how the input Selection should\n * be interpreted as selecting an area of the mesh to Bevel\n */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "SharedPolygroupEdges.Comment", "/** Convert the selection to PolyGroups and bevel all the PolyGroup Edges that are between selected PolyGroups */" },
		{ "SharedPolygroupEdges.DisplayName", "Shared PolyGroup Edges" },
		{ "SharedPolygroupEdges.Name", "EGeometryScriptMeshBevelSelectionMode::SharedPolygroupEdges" },
		{ "SharedPolygroupEdges.ToolTip", "Convert the selection to PolyGroups and bevel all the PolyGroup Edges that are between selected PolyGroups" },
		{ "ToolTip", "Mode passed to ApplyMeshBevelSelection to control how the input Selection should\nbe interpreted as selecting an area of the mesh to Bevel" },
		{ "TriangleArea.Comment", "/** Convert the selection to Triangles and bevel the boundary edge loops of the triangle set */" },
		{ "TriangleArea.Name", "EGeometryScriptMeshBevelSelectionMode::TriangleArea" },
		{ "TriangleArea.ToolTip", "Convert the selection to Triangles and bevel the boundary edge loops of the triangle set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptMeshBevelSelectionMode",
		"EGeometryScriptMeshBevelSelectionMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions;
class UScriptStruct* FGeometryScriptMeshBevelSelectionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshBevelSelectionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshBevelSelectionOptions>()
{
	return FGeometryScriptMeshBevelSelectionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BevelDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[];
#endif
		static void NewProp_bInferMaterialID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferMaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetMaterialID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshBevelSelectionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_BevelDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_BevelDistance = { "BevelDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelSelectionOptions, BevelDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_BevelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_BevelDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBevelSelectionOptions*)Obj)->bInferMaterialID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBevelSelectionOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBevelSelectionOptions, SetMaterialID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_SetMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_SetMaterialID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_BevelDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_bInferMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewProp_SetMaterialID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshBevelSelectionOptions",
		sizeof(FGeometryScriptMeshBevelSelectionOptions),
		alignof(FGeometryScriptMeshBevelSelectionOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshExtrude_Compatibility_5p0)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshExtrudeOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshPolygroupBevel)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshBevelOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshBevelSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_ENUM(EGeometryScriptMeshBevelSelectionMode,Z_Param_BevelMode);
		P_GET_STRUCT(FGeometryScriptMeshBevelSelectionOptions,Z_Param_BevelOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(Z_Param_TargetMesh,Z_Param_Selection,EGeometryScriptMeshBevelSelectionMode(Z_Param_BevelMode),Z_Param_BevelOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshInsetOutsetFaces)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshInsetOutsetFacesOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffsetFaces)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshOffsetFacesOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshLinearExtrudeFaces)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshLinearExtrudeOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Selection,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshShell)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshOffsetOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffset)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshOffsetOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDuplicateFaces)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_NewTriangles);
		P_GET_STRUCT(FGeometryScriptMeshEditPolygroupOptions,Z_Param_GroupOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_NewTriangles,Z_Param_GroupOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDisconnectFaces)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_UBOOL(Z_Param_bAllowBowtiesInOutput);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_bAllowBowtiesInOutput,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshModelingFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshModelingFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyMeshBevelSelection", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshBevelSelection },
			{ "ApplyMeshDisconnectFaces", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDisconnectFaces },
			{ "ApplyMeshDuplicateFaces", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshDuplicateFaces },
			{ "ApplyMeshExtrude_Compatibility_5p0", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshExtrude_Compatibility_5p0 },
			{ "ApplyMeshInsetOutsetFaces", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshInsetOutsetFaces },
			{ "ApplyMeshLinearExtrudeFaces", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshLinearExtrudeFaces },
			{ "ApplyMeshOffset", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffset },
			{ "ApplyMeshOffsetFaces", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshOffsetFaces },
			{ "ApplyMeshPolygroupBevel", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshPolygroupBevel },
			{ "ApplyMeshShell", &UGeometryScriptLibrary_MeshModelingFunctions::execApplyMeshShell },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			EGeometryScriptMeshBevelSelectionMode BevelMode;
			FGeometryScriptMeshBevelSelectionOptions BevelOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BevelMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BevelMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BevelOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelMode = { "BevelMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, BevelMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshBevelSelectionMode, METADATA_PARAMS(nullptr, 0) }; // 3829117031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelOptions = { "BevelOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, BevelOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions, METADATA_PARAMS(nullptr, 0) }; // 395573205
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_BevelOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Apply a Mesh Bevel operation to parts of TargetMesh using the BevelOptions settings.\n\x09 * @param Selection specifies which mesh edges to Bevel\n\x09 * @param BevelMode specifies how Selection should be converted to a Triangle Region or set of PolyGroup Edges\n\x09 * @param BevelOptions settings for the Bevel Operation\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a Mesh Bevel operation to parts of TargetMesh using the BevelOptions settings.\n@param Selection specifies which mesh edges to Bevel\n@param BevelMode specifies how Selection should be converted to a Triangle Region or set of PolyGroup Edges\n@param BevelOptions settings for the Bevel Operation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshBevelSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshBevelSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			bool bAllowBowtiesInOutput;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static void NewProp_bAllowBowtiesInOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBowtiesInOutput;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_bAllowBowtiesInOutput_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms*)Obj)->bAllowBowtiesInOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_bAllowBowtiesInOutput = { "bAllowBowtiesInOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_bAllowBowtiesInOutput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_bAllowBowtiesInOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Disconnect the triangles of TargetMesh identified by the Selection.\n\x09 * The input Selection will still identify the same geometric elements after Disconnecting.\n\x09 * @param bAllowBowtiesInOutput if false, any bowtie vertices resulting created in the Duplicate area will be disconnected into unique vertices\n\x09 */" },
		{ "CPP_Default_bAllowBowtiesInOutput", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Disconnect the triangles of TargetMesh identified by the Selection.\nThe input Selection will still identify the same geometric elements after Disconnecting.\n@param bAllowBowtiesInOutput if false, any bowtie vertices resulting created in the Duplicate area will be disconnected into unique vertices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshDisconnectFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDisconnectFaces_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptMeshSelection NewTriangles;
			FGeometryScriptMeshEditPolygroupOptions GroupOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupOptions;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_NewTriangles = { "NewTriangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, NewTriangles), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_GroupOptions = { "GroupOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, GroupOptions), Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions, METADATA_PARAMS(nullptr, 0) }; // 1381089281
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_NewTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_GroupOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Duplicate the triangles of TargetMesh identified by the Selection\n\x09 * @param NewTriangles a Mesh Selection of the duplicate triangles is returned here (with type Triangles)\n\x09 * @param bAllowBowtiesInOutput if false, any bowtie vertices resulting created in the Duplicate area will be disconnected into unique vertices\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_GroupOptions", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Duplicate the triangles of TargetMesh identified by the Selection\n@param NewTriangles a Mesh Selection of the duplicate triangles is returned here (with type Triangles)\n@param bAllowBowtiesInOutput if false, any bowtie vertices resulting created in the Duplicate area will be disconnected into unique vertices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshDuplicateFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshDuplicateFaces_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshExtrudeOptions Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions, METADATA_PARAMS(nullptr, 0) }; // 38581946
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Compatibility" },
		{ "Comment", "//---------------------------------------------\n// Backwards-Compatibility implementations\n//---------------------------------------------\n// These are versions/variants of the above functions that were released\n// in previous UE 5.x versions, that have since been updated. \n// To avoid breaking user scripts, these previous versions are currently kept and \n// called via redirectors registered in GeometryScriptingCoreModule.cpp.\n// \n// These functions may be deprecated in future UE releases.\n//\n" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Backwards-Compatibility implementations\n---------------------------------------------\nThese are versions/variants of the above functions that were released\nin previous UE 5.x versions, that have since been updated.\nTo avoid breaking user scripts, these previous versions are currently kept and\ncalled via redirectors registered in GeometryScriptingCoreModule.cpp.\n\nThese functions may be deprecated in future UE releases." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshExtrude_Compatibility_5p0", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshExtrude_Compatibility_5p0_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshInsetOutsetFacesOptions Options;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions, METADATA_PARAMS(nullptr, 0) }; // 1441130646
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Apply an Inset or Outset to the faces of TargetMesh identified by the Selection, or all faces if the Selection is empty.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply an Inset or Outset to the faces of TargetMesh identified by the Selection, or all faces if the Selection is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshInsetOutsetFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshInsetOutsetFaces_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshLinearExtrudeOptions Options;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions, METADATA_PARAMS(nullptr, 0) }; // 496332793
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Apply Linear Extrusion (ie extrusion in a single direction) to the triangles of TargetMesh identified by the Selection.\n\x09 * The input Selection will still identify the same geometric elements after the Extrusion\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply Linear Extrusion (ie extrusion in a single direction) to the triangles of TargetMesh identified by the Selection.\nThe input Selection will still identify the same geometric elements after the Extrusion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshLinearExtrudeFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshLinearExtrudeFaces_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshOffsetOptions Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions, METADATA_PARAMS(nullptr, 0) }; // 3048739925
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Offset the vertices of TargetMesh from their initial positions based on averaged vertex normals.\n\x09 * This function is intended for high-res meshes, for polymodeling-style offsets, ApplyMeshOffsetFaces will produce better results.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Offset the vertices of TargetMesh from their initial positions based on averaged vertex normals.\nThis function is intended for high-res meshes, for polymodeling-style offsets, ApplyMeshOffsetFaces will produce better results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffset_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshOffsetFacesOptions Options;
			FGeometryScriptMeshSelection Selection;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions, METADATA_PARAMS(nullptr, 0) }; // 802926599
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Apply an Offset to the faces of TargetMesh identified by the Selection, or all faces if the Selection is empty.\n\x09 * The Offset direction at each vertex can be derived from the averaged vertex normals or per-triangle normals.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply an Offset to the faces of TargetMesh identified by the Selection, or all faces if the Selection is empty.\nThe Offset direction at each vertex can be derived from the averaged vertex normals or per-triangle normals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshOffsetFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshOffsetFaces_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshBevelOptions Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions, METADATA_PARAMS(nullptr, 0) }; // 2942145500
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "ApplyMeshPolyGroupBevel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshPolygroupBevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshPolygroupBevel_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics
	{
		struct GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshOffsetOptions Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions, METADATA_PARAMS(nullptr, 0) }; // 3048739925
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Modeling" },
		{ "Comment", "/**\n\x09 * Create a thickened shell from TargetMesh by offsetting the vertex positions along averaged vertex normals, inwards or outwards.\n\x09 * Similar to ApplyMeshOffset but also includes the initial mesh (possibly flipped, if the offset is positive)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a thickened shell from TargetMesh by offsetting the vertex positions along averaged vertex normals, inwards or outwards.\nSimilar to ApplyMeshOffset but also includes the initial mesh (possibly flipped, if the offset is positive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, nullptr, "ApplyMeshShell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::GeometryScriptLibrary_MeshModelingFunctions_eventApplyMeshShell_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshModelingFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshModelingFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection, "ApplyMeshBevelSelection" }, // 3558871862
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces, "ApplyMeshDisconnectFaces" }, // 2361348348
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces, "ApplyMeshDuplicateFaces" }, // 1355024686
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0, "ApplyMeshExtrude_Compatibility_5p0" }, // 4237222132
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces, "ApplyMeshInsetOutsetFaces" }, // 2909230160
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces, "ApplyMeshLinearExtrudeFaces" }, // 1695320270
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset, "ApplyMeshOffset" }, // 4021670855
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces, "ApplyMeshOffsetFaces" }, // 3103493690
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel, "ApplyMeshPolygroupBevel" }, // 705862940
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell, "ApplyMeshShell" }, // 2813559029
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshModelingFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshModelingFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshModeling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshModelingFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshModelingFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshModelingFunctions>()
	{
		return UGeometryScriptLibrary_MeshModelingFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshModelingFunctions::UGeometryScriptLibrary_MeshModelingFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshModelingFunctions);
	UGeometryScriptLibrary_MeshModelingFunctions::~UGeometryScriptLibrary_MeshModelingFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptMeshEditPolygroupMode_StaticEnum, TEXT("EGeometryScriptMeshEditPolygroupMode"), &Z_Registration_Info_UEnum_EGeometryScriptMeshEditPolygroupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1129268528U) },
		{ EGeometryScriptPolyOperationArea_StaticEnum, TEXT("EGeometryScriptPolyOperationArea"), &Z_Registration_Info_UEnum_EGeometryScriptPolyOperationArea, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 745588794U) },
		{ EGeometryScriptLinearExtrudeDirection_StaticEnum, TEXT("EGeometryScriptLinearExtrudeDirection"), &Z_Registration_Info_UEnum_EGeometryScriptLinearExtrudeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1058365727U) },
		{ EGeometryScriptOffsetFacesType_StaticEnum, TEXT("EGeometryScriptOffsetFacesType"), &Z_Registration_Info_UEnum_EGeometryScriptOffsetFacesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1348988425U) },
		{ EGeometryScriptMeshBevelSelectionMode_StaticEnum, TEXT("EGeometryScriptMeshBevelSelectionMode"), &Z_Registration_Info_UEnum_EGeometryScriptMeshBevelSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3829117031U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptMeshEditPolygroupOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshEditPolygroupOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshEditPolygroupOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshEditPolygroupOptions), 1381089281U) },
		{ FGeometryScriptMeshOffsetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshOffsetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshOffsetOptions), 3048739925U) },
		{ FGeometryScriptMeshExtrudeOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshExtrudeOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshExtrudeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshExtrudeOptions), 38581946U) },
		{ FGeometryScriptMeshLinearExtrudeOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshLinearExtrudeOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshLinearExtrudeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshLinearExtrudeOptions), 496332793U) },
		{ FGeometryScriptMeshOffsetFacesOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshOffsetFacesOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshOffsetFacesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshOffsetFacesOptions), 802926599U) },
		{ FGeometryScriptMeshInsetOutsetFacesOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshInsetOutsetFacesOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshInsetOutsetFacesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshInsetOutsetFacesOptions), 1441130646U) },
		{ FGeometryScriptMeshBevelOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshBevelOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshBevelOptions), 2942145500U) },
		{ FGeometryScriptMeshBevelSelectionOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshBevelSelectionOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshBevelSelectionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshBevelSelectionOptions), 395573205U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions, UGeometryScriptLibrary_MeshModelingFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshModelingFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshModelingFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshModelingFunctions), 663997440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_3810478485(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
