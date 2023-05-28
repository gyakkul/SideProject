// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshBooleanFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBooleanFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation;
	static UEnum* EGeometryScriptBooleanOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptBooleanOperation"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBooleanOperation>()
	{
		return EGeometryScriptBooleanOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enumerators[] = {
		{ "EGeometryScriptBooleanOperation::Union", (int64)EGeometryScriptBooleanOperation::Union },
		{ "EGeometryScriptBooleanOperation::Intersection", (int64)EGeometryScriptBooleanOperation::Intersection },
		{ "EGeometryScriptBooleanOperation::Subtract", (int64)EGeometryScriptBooleanOperation::Subtract },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Intersection.Name", "EGeometryScriptBooleanOperation::Intersection" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "Subtract.Name", "EGeometryScriptBooleanOperation::Subtract" },
		{ "Union.Name", "EGeometryScriptBooleanOperation::Union" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptBooleanOperation",
		"EGeometryScriptBooleanOperation",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions;
class UScriptStruct* FGeometryScriptMeshBooleanOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshBooleanOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshBooleanOptions>()
{
	return FGeometryScriptMeshBooleanOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillHoles_MetaData[];
#endif
		static void NewProp_bFillHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyOutput_MetaData[];
#endif
		static void NewProp_bSimplifyOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyPlanarTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifyPlanarTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshBooleanOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBooleanOptions*)Obj)->bFillHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles = { "bFillHoles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBooleanOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput_SetBit(void* Obj)
	{
		((FGeometryScriptMeshBooleanOptions*)Obj)->bSimplifyOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput = { "bSimplifyOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshBooleanOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_SimplifyPlanarTolerance = { "SimplifyPlanarTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshBooleanOptions, SimplifyPlanarTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bFillHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_bSimplifyOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewProp_SimplifyPlanarTolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshBooleanOptions",
		sizeof(FGeometryScriptMeshBooleanOptions),
		alignof(FGeometryScriptMeshBooleanOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions;
class UScriptStruct* FGeometryScriptMeshSelfUnionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshSelfUnionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshSelfUnionOptions>()
{
	return FGeometryScriptMeshSelfUnionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillHoles_MetaData[];
#endif
		static void NewProp_bFillHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrimFlaps_MetaData[];
#endif
		static void NewProp_bTrimFlaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimFlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyOutput_MetaData[];
#endif
		static void NewProp_bSimplifyOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyPlanarTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifyPlanarTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshSelfUnionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles_SetBit(void* Obj)
	{
		((FGeometryScriptMeshSelfUnionOptions*)Obj)->bFillHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles = { "bFillHoles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshSelfUnionOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps_SetBit(void* Obj)
	{
		((FGeometryScriptMeshSelfUnionOptions*)Obj)->bTrimFlaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps = { "bTrimFlaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshSelfUnionOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput_SetBit(void* Obj)
	{
		((FGeometryScriptMeshSelfUnionOptions*)Obj)->bSimplifyOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput = { "bSimplifyOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshSelfUnionOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_SimplifyPlanarTolerance = { "SimplifyPlanarTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshSelfUnionOptions, SimplifyPlanarTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_SimplifyPlanarTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshSelfUnionOptions, WindingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_WindingThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bFillHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bTrimFlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_bSimplifyOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_SimplifyPlanarTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewProp_WindingThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshSelfUnionOptions",
		sizeof(FGeometryScriptMeshSelfUnionOptions),
		alignof(FGeometryScriptMeshSelfUnionOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions;
class UScriptStruct* FGeometryScriptMeshPlaneCutOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshPlaneCutOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshPlaneCutOptions>()
{
	return FGeometryScriptMeshPlaneCutOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillHoles_MetaData[];
#endif
		static void NewProp_bFillHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillSpans_MetaData[];
#endif
		static void NewProp_bFillSpans_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillSpans;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCutSide_MetaData[];
#endif
		static void NewProp_bFlipCutSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCutSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVWorldDimension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVWorldDimension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshPlaneCutOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles_SetBit(void* Obj)
	{
		((FGeometryScriptMeshPlaneCutOptions*)Obj)->bFillHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles = { "bFillHoles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshPlaneCutOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans_SetBit(void* Obj)
	{
		((FGeometryScriptMeshPlaneCutOptions*)Obj)->bFillSpans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans = { "bFillSpans", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshPlaneCutOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide_SetBit(void* Obj)
	{
		((FGeometryScriptMeshPlaneCutOptions*)Obj)->bFlipCutSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide = { "bFlipCutSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshPlaneCutOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_UVWorldDimension_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_UVWorldDimension = { "UVWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPlaneCutOptions, UVWorldDimension), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_UVWorldDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_UVWorldDimension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFillSpans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_bFlipCutSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewProp_UVWorldDimension,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshPlaneCutOptions",
		sizeof(FGeometryScriptMeshPlaneCutOptions),
		alignof(FGeometryScriptMeshPlaneCutOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions;
class UScriptStruct* FGeometryScriptMeshPlaneSliceOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshPlaneSliceOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshPlaneSliceOptions>()
{
	return FGeometryScriptMeshPlaneSliceOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillHoles_MetaData[];
#endif
		static void NewProp_bFillHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillSpans_MetaData[];
#endif
		static void NewProp_bFillSpans_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillSpans;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GapWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GapWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVWorldDimension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVWorldDimension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshPlaneSliceOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles_SetBit(void* Obj)
	{
		((FGeometryScriptMeshPlaneSliceOptions*)Obj)->bFillHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles = { "bFillHoles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshPlaneSliceOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans_SetBit(void* Obj)
	{
		((FGeometryScriptMeshPlaneSliceOptions*)Obj)->bFillSpans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans = { "bFillSpans", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshPlaneSliceOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_GapWidth_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_GapWidth = { "GapWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPlaneSliceOptions, GapWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_GapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_GapWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_UVWorldDimension_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_UVWorldDimension = { "UVWorldDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptMeshPlaneSliceOptions, UVWorldDimension), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_UVWorldDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_UVWorldDimension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_bFillSpans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_GapWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewProp_UVWorldDimension,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshPlaneSliceOptions",
		sizeof(FGeometryScriptMeshPlaneSliceOptions),
		alignof(FGeometryScriptMeshPlaneSliceOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions;
class UScriptStruct* FGeometryScriptMeshMirrorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptMeshMirrorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptMeshMirrorOptions>()
{
	return FGeometryScriptMeshMirrorOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPlaneCut_MetaData[];
#endif
		static void NewProp_bApplyPlaneCut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPlaneCut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCutSide_MetaData[];
#endif
		static void NewProp_bFlipCutSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCutSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldAlongPlane_MetaData[];
#endif
		static void NewProp_bWeldAlongPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldAlongPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptMeshMirrorOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut_SetBit(void* Obj)
	{
		((FGeometryScriptMeshMirrorOptions*)Obj)->bApplyPlaneCut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut = { "bApplyPlaneCut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshMirrorOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide_SetBit(void* Obj)
	{
		((FGeometryScriptMeshMirrorOptions*)Obj)->bFlipCutSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide = { "bFlipCutSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshMirrorOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane_SetBit(void* Obj)
	{
		((FGeometryScriptMeshMirrorOptions*)Obj)->bWeldAlongPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane = { "bWeldAlongPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptMeshMirrorOptions), &Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bApplyPlaneCut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bFlipCutSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewProp_bWeldAlongPlane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptMeshMirrorOptions",
		sizeof(FGeometryScriptMeshMirrorOptions),
		alignof(FGeometryScriptMeshMirrorOptions),
		Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshMirror)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_MirrorFrame);
		P_GET_STRUCT(FGeometryScriptMeshMirrorOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(Z_Param_TargetMesh,Z_Param_MirrorFrame,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneSlice)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_CutFrame);
		P_GET_STRUCT(FGeometryScriptMeshPlaneSliceOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(Z_Param_TargetMesh,Z_Param_CutFrame,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneCut)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_CutFrame);
		P_GET_STRUCT(FGeometryScriptMeshPlaneCutOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(Z_Param_TargetMesh,Z_Param_CutFrame,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshSelfUnion)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelfUnionOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshBoolean)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToolMesh);
		P_GET_STRUCT(FTransform,Z_Param_ToolTransform);
		P_GET_ENUM(EGeometryScriptBooleanOperation,Z_Param_Operation);
		P_GET_STRUCT(FGeometryScriptMeshBooleanOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(Z_Param_TargetMesh,Z_Param_TargetTransform,Z_Param_ToolMesh,Z_Param_ToolTransform,EGeometryScriptBooleanOperation(Z_Param_Operation),Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshBooleanFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyMeshBoolean", &UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshBoolean },
			{ "ApplyMeshMirror", &UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshMirror },
			{ "ApplyMeshPlaneCut", &UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneCut },
			{ "ApplyMeshPlaneSlice", &UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneSlice },
			{ "ApplyMeshSelfUnion", &UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshSelfUnion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics
	{
		struct GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform TargetTransform;
			UDynamicMesh* ToolMesh;
			FTransform ToolTransform;
			EGeometryScriptBooleanOperation Operation;
			FGeometryScriptMeshBooleanOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ToolMesh = { "ToolMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, ToolMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ToolTransform = { "ToolTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, ToolTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, Operation), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptBooleanOperation, METADATA_PARAMS(nullptr, 0) }; // 1684593155
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions, METADATA_PARAMS(nullptr, 0) }; // 1365585726
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ToolMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ToolTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Booleans" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, nullptr, "ApplyMeshBoolean", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshBoolean_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics
	{
		struct GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform MirrorFrame;
			FGeometryScriptMeshMirrorOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorFrame;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_MirrorFrame = { "MirrorFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms, MirrorFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions, METADATA_PARAMS(nullptr, 0) }; // 3128005553
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_MirrorFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Booleans" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, nullptr, "ApplyMeshMirror", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshMirror_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics
	{
		struct GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform CutFrame;
			FGeometryScriptMeshPlaneCutOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CutFrame;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_CutFrame = { "CutFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms, CutFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions, METADATA_PARAMS(nullptr, 0) }; // 1199899825
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_CutFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Booleans" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, nullptr, "ApplyMeshPlaneCut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneCut_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics
	{
		struct GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms
		{
			UDynamicMesh* TargetMesh;
			FTransform CutFrame;
			FGeometryScriptMeshPlaneSliceOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CutFrame;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_CutFrame = { "CutFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms, CutFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions, METADATA_PARAMS(nullptr, 0) }; // 3924661731
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_CutFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Booleans" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, nullptr, "ApplyMeshPlaneSlice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshPlaneSlice_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics
	{
		struct GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelfUnionOptions Options;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions, METADATA_PARAMS(nullptr, 0) }; // 3785109934
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Booleans" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, nullptr, "ApplyMeshSelfUnion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::GeometryScriptLibrary_MeshBooleanFunctions_eventApplyMeshSelfUnion_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshBooleanFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean, "ApplyMeshBoolean" }, // 1247319329
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror, "ApplyMeshMirror" }, // 3401544317
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut, "ApplyMeshPlaneCut" }, // 1257853661
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice, "ApplyMeshPlaneSlice" }, // 4081396222
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion, "ApplyMeshSelfUnion" }, // 1324918399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshBooleanFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBooleanFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshBooleans" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshBooleanFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshBooleanFunctions>()
	{
		return UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshBooleanFunctions::UGeometryScriptLibrary_MeshBooleanFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshBooleanFunctions);
	UGeometryScriptLibrary_MeshBooleanFunctions::~UGeometryScriptLibrary_MeshBooleanFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptBooleanOperation_StaticEnum, TEXT("EGeometryScriptBooleanOperation"), &Z_Registration_Info_UEnum_EGeometryScriptBooleanOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1684593155U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptMeshBooleanOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshBooleanOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshBooleanOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshBooleanOptions), 1365585726U) },
		{ FGeometryScriptMeshSelfUnionOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshSelfUnionOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshSelfUnionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshSelfUnionOptions), 3785109934U) },
		{ FGeometryScriptMeshPlaneCutOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshPlaneCutOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneCutOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshPlaneCutOptions), 1199899825U) },
		{ FGeometryScriptMeshPlaneSliceOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshPlaneSliceOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshPlaneSliceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshPlaneSliceOptions), 3924661731U) },
		{ FGeometryScriptMeshMirrorOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics::NewStructOps, TEXT("GeometryScriptMeshMirrorOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptMeshMirrorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptMeshMirrorOptions), 3128005553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshBooleanFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshBooleanFunctions), 3476890082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_2445192973(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
