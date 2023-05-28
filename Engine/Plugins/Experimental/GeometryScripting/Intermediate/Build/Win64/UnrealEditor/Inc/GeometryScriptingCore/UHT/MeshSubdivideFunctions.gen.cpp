// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSubdivideFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSubdivideFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions;
class UScriptStruct* FGeometryScriptPNTessellateOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPNTessellateOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPNTessellateOptions>()
{
	return FGeometryScriptPNTessellateOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// PN Tessellate options\n//\n" },
		{ "DisplayName", "PN Tessellate Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ToolTip", "PN Tessellate options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPNTessellateOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((FGeometryScriptPNTessellateOptions*)Obj)->bRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptPNTessellateOptions), &Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewProp_bRecomputeNormals,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPNTessellateOptions",
		sizeof(FGeometryScriptPNTessellateOptions),
		alignof(FGeometryScriptPNTessellateOptions),
		Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectiveTessellatePatternType;
	static UEnum* ESelectiveTessellatePatternType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("ESelectiveTessellatePatternType"));
		}
		return Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<ESelectiveTessellatePatternType>()
	{
		return ESelectiveTessellatePatternType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enumerators[] = {
		{ "ESelectiveTessellatePatternType::ConcentricRings", (int64)ESelectiveTessellatePatternType::ConcentricRings },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// Selective Tessellate options\n//\n" },
		{ "ConcentricRings.Name", "ESelectiveTessellatePatternType::ConcentricRings" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ToolTip", "Selective Tessellate options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"ESelectiveTessellatePatternType",
		"ESelectiveTessellatePatternType",
		Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType()
	{
		if (!Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectiveTessellatePatternType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions;
class UScriptStruct* FGeometryScriptSelectiveTessellateOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSelectiveTessellateOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSelectiveTessellateOptions>()
{
	return FGeometryScriptSelectiveTessellateOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultithreading_MetaData[];
#endif
		static void NewProp_bEnableMultithreading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultithreading;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmptyBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmptyBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Selective Tessellate Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSelectiveTessellateOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading_SetBit(void* Obj)
	{
		((FGeometryScriptSelectiveTessellateOptions*)Obj)->bEnableMultithreading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading = { "bEnableMultithreading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptSelectiveTessellateOptions), &Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** EmptyBehavior Defines how an empty input selection should be interpreted */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ToolTip", "EmptyBehavior Defines how an empty input selection should be interpreted" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior = { "EmptyBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSelectiveTessellateOptions, EmptyBehavior), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptEmptySelectionBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior_MetaData)) }; // 2116030996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_bEnableMultithreading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewProp_EmptyBehavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSelectiveTessellateOptions",
		sizeof(FGeometryScriptSelectiveTessellateOptions),
		alignof(FGeometryScriptSelectiveTessellateOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSubdivideFunctions::execApplySelectiveTessellation)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT(FGeometryScriptSelectiveTessellateOptions,Z_Param_Options);
		P_GET_PROPERTY(FIntProperty,Z_Param_TessellationLevel);
		P_GET_ENUM(ESelectiveTessellatePatternType,Z_Param_PatternType);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Options,Z_Param_TessellationLevel,ESelectiveTessellatePatternType(Z_Param_PatternType),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyUniformTessellation)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TessellationLevel);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation(Z_Param_TargetMesh,Z_Param_TessellationLevel,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyPNTessellation)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptPNTessellateOptions,Z_Param_Options);
		P_GET_PROPERTY(FIntProperty,Z_Param_TessellationLevel);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation(Z_Param_TargetMesh,Z_Param_Options,Z_Param_TessellationLevel,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSubdivideFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPNTessellation", &UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyPNTessellation },
			{ "ApplySelectiveTessellation", &UGeometryScriptLibrary_MeshSubdivideFunctions::execApplySelectiveTessellation },
			{ "ApplyUniformTessellation", &UGeometryScriptLibrary_MeshSubdivideFunctions::execApplyUniformTessellation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics
	{
		struct GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptPNTessellateOptions Options;
			int32 TessellationLevel;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TessellationLevel;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions, METADATA_PARAMS(nullptr, 0) }; // 2158190579
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_TessellationLevel = { "TessellationLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms, TessellationLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_TessellationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Subdivide" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_TessellationLevel", "3" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions, nullptr, "ApplyPNTessellation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyPNTessellation_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics
	{
		struct GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptSelectiveTessellateOptions Options;
			int32 TessellationLevel;
			ESelectiveTessellatePatternType PatternType;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TessellationLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PatternType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PatternType;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions, METADATA_PARAMS(nullptr, 0) }; // 3662254898
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_TessellationLevel = { "TessellationLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, TessellationLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_PatternType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_PatternType = { "PatternType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, PatternType), Z_Construct_UEnum_GeometryScriptingCore_ESelectiveTessellatePatternType, METADATA_PARAMS(nullptr, 0) }; // 3898630679
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_TessellationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_PatternType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_PatternType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Subdivide" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_PatternType", "ConcentricRings" },
		{ "CPP_Default_TessellationLevel", "1" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions, nullptr, "ApplySelectiveTessellation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::GeometryScriptLibrary_MeshSubdivideFunctions_eventApplySelectiveTessellation_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics
	{
		struct GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TessellationLevel;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TessellationLevel;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_TessellationLevel = { "TessellationLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms, TessellationLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_TessellationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Subdivide" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_TessellationLevel", "3" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions, nullptr, "ApplyUniformTessellation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::GeometryScriptLibrary_MeshSubdivideFunctions_eventApplyUniformTessellation_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSubdivideFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation, "ApplyPNTessellation" }, // 2632822966
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation, "ApplySelectiveTessellation" }, // 3390333943
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation, "ApplyUniformTessellation" }, // 3648817956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSubdivideFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSubdivideFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSubdivide" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSubdivideFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSubdivideFunctions>()
	{
		return UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshSubdivideFunctions::UGeometryScriptLibrary_MeshSubdivideFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSubdivideFunctions);
	UGeometryScriptLibrary_MeshSubdivideFunctions::~UGeometryScriptLibrary_MeshSubdivideFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::EnumInfo[] = {
		{ ESelectiveTessellatePatternType_StaticEnum, TEXT("ESelectiveTessellatePatternType"), &Z_Registration_Info_UEnum_ESelectiveTessellatePatternType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898630679U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptPNTessellateOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics::NewStructOps, TEXT("GeometryScriptPNTessellateOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPNTessellateOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPNTessellateOptions), 2158190579U) },
		{ FGeometryScriptSelectiveTessellateOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics::NewStructOps, TEXT("GeometryScriptSelectiveTessellateOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSelectiveTessellateOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSelectiveTessellateOptions), 3662254898U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions, UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshSubdivideFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSubdivideFunctions), 1461857080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_4198280640(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
