// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorStaticMeshLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "StaticMeshEditorSubsystemHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorStaticMeshLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	STATICMESHEDITOR_API UEnum* Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionOptions();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated;
class UScriptStruct* FEditorScriptingMeshReductionSettings_Deprecated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMeshReductionSettings_Deprecated"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingMeshReductionSettings_Deprecated>()
{
	return FEditorScriptingMeshReductionSettings_Deprecated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Deprecated as of 5.0, use the struct FStaticMeshReductionSettings in Static Mesh Editor Library Instead\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Deprecated as of 5.0, use the struct FStaticMeshReductionSettings in Static Mesh Editor Library Instead" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionSettings_Deprecated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Percentage of triangles to keep. Ranges from 0.0 to 1.0: 1.0 = no reduction, 0.0 = no triangles.\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Percentage of triangles to keep. Ranges from 0.0 to 1.0: 1.0 = no reduction, 0.0 = no triangles." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionSettings_Deprecated, PercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_PercentTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_PercentTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// ScreenSize to display this LOD. Ranges from 0.0 to 1.0.\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "ScreenSize to display this LOD. Ranges from 0.0 to 1.0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionSettings_Deprecated, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_ScreenSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_PercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewProp_ScreenSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingMeshReductionSettings_Deprecated",
		sizeof(FEditorScriptingMeshReductionSettings_Deprecated),
		alignof(FEditorScriptingMeshReductionSettings_Deprecated),
		Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.InnerSingleton, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated;
class UScriptStruct* FEditorScriptingMeshReductionOptions_Deprecated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMeshReductionOptions_Deprecated"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingMeshReductionOptions_Deprecated>()
{
	return FEditorScriptingMeshReductionOptions_Deprecated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[];
#endif
		static void NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReductionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//  Deprecated as of 5.0, use the struct FStaticMeshReductionOptions in Static Mesh Editor Library Instead\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Deprecated as of 5.0, use the struct FStaticMeshReductionOptions in Static Mesh Editor Library Instead" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMeshReductionOptions_Deprecated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// If true, the screen sizes at which LODs swap are computed automatically\n// @note that this is displayed as 'Auto Compute LOD Distances' in the UI\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "If true, the screen sizes at which LODs swap are computed automatically\n@note that this is displayed as 'Auto Compute LOD Distances' in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((FEditorScriptingMeshReductionOptions_Deprecated*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize = { "bAutoComputeLODScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorScriptingMeshReductionOptions_Deprecated), &Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings_Inner = { "ReductionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated, METADATA_PARAMS(nullptr, 0) }; // 327435930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Array of reduction settings to apply to each new LOD mesh.\n" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Array of reduction settings to apply to each new LOD mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingMeshReductionOptions_Deprecated, ReductionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings_MetaData)) }; // 327435930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_bAutoComputeLODScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewProp_ReductionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingMeshReductionOptions_Deprecated",
		sizeof(FEditorScriptingMeshReductionOptions_Deprecated),
		alignof(FEditorScriptingMeshReductionOptions_Deprecated),
		Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.InnerSingleton, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated;
	static UEnum* EScriptingCollisionShapeType_Deprecated_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EScriptingCollisionShapeType_Deprecated"));
		}
		return Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EScriptingCollisionShapeType_Deprecated>()
	{
		return EScriptingCollisionShapeType_Deprecated_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enumerators[] = {
		{ "EScriptingCollisionShapeType_Deprecated::Box", (int64)EScriptingCollisionShapeType_Deprecated::Box },
		{ "EScriptingCollisionShapeType_Deprecated::Sphere", (int64)EScriptingCollisionShapeType_Deprecated::Sphere },
		{ "EScriptingCollisionShapeType_Deprecated::Capsule", (int64)EScriptingCollisionShapeType_Deprecated::Capsule },
		{ "EScriptingCollisionShapeType_Deprecated::NDOP10_X", (int64)EScriptingCollisionShapeType_Deprecated::NDOP10_X },
		{ "EScriptingCollisionShapeType_Deprecated::NDOP10_Y", (int64)EScriptingCollisionShapeType_Deprecated::NDOP10_Y },
		{ "EScriptingCollisionShapeType_Deprecated::NDOP10_Z", (int64)EScriptingCollisionShapeType_Deprecated::NDOP10_Z },
		{ "EScriptingCollisionShapeType_Deprecated::NDOP18", (int64)EScriptingCollisionShapeType_Deprecated::NDOP18 },
		{ "EScriptingCollisionShapeType_Deprecated::NDOP26", (int64)EScriptingCollisionShapeType_Deprecated::NDOP26 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Name", "EScriptingCollisionShapeType_Deprecated::Box" },
		{ "Capsule.Name", "EScriptingCollisionShapeType_Deprecated::Capsule" },
		{ "Comment", "/** Types of Collision Construct that are generated **/" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "NDOP10_X.Name", "EScriptingCollisionShapeType_Deprecated::NDOP10_X" },
		{ "NDOP10_Y.Name", "EScriptingCollisionShapeType_Deprecated::NDOP10_Y" },
		{ "NDOP10_Z.Name", "EScriptingCollisionShapeType_Deprecated::NDOP10_Z" },
		{ "NDOP18.Name", "EScriptingCollisionShapeType_Deprecated::NDOP18" },
		{ "NDOP26.Name", "EScriptingCollisionShapeType_Deprecated::NDOP26" },
		{ "Sphere.Name", "EScriptingCollisionShapeType_Deprecated::Sphere" },
		{ "ToolTip", "Types of Collision Construct that are generated *" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		"EScriptingCollisionShapeType_Deprecated",
		"EScriptingCollisionShapeType_Deprecated",
		Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated()
	{
		if (!Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.InnerSingleton, Z_Construct_UEnum_EditorScriptingUtilities_EScriptingCollisionShapeType_Deprecated_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execAddSimpleCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_ENUM(EScriptCollisionShapeType,Z_Param_ShapeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::AddSimpleCollisions(Z_Param_StaticMesh,EScriptCollisionShapeType(Z_Param_ShapeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execAddSimpleCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_ENUM(EScriptCollisionShapeType,Z_Param_ShapeType);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::AddSimpleCollisionsWithNotification(Z_Param_StaticMesh,EScriptCollisionShapeType(Z_Param_ShapeType),Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetLods)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FStaticMeshReductionOptions,Z_Param_Out_ReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetLods(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetLodsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FStaticMeshReductionOptions,Z_Param_Out_ReductionOptions);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetLodsWithNotification(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGenerateBoxUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GenerateBoxUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGenerateCylindricalUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GenerateCylindricalUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGeneratePlanarUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GeneratePlanarUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execRemoveUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::RemoveUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execInsertUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::InsertUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execAddUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::AddUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetNumUVChannels)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetNumUVChannels(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetAllowCPUAccess)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bAllowCPUAccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::SetAllowCPUAccess(Z_Param_StaticMesh,Z_Param_bAllowCPUAccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetNumberMaterials)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetNumberMaterials(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetNumberVerts)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetNumberVerts(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetGenerateLightmapUVs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetGenerateLightmapUVs(Z_Param_StaticMesh,Z_Param_bGenerateLightmapUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execHasInstanceVertexColors)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::HasInstanceVertexColors(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execHasVertexColors)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::HasVertexColors(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execEnableSectionCastShadow)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bCastShadow);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::EnableSectionCastShadow(Z_Param_StaticMesh,Z_Param_bCastShadow,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execIsSectionCollisionEnabled)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::IsSectionCollisionEnabled(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execEnableSectionCollision)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bCollisionEnabled);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::EnableSectionCollision(Z_Param_StaticMesh,Z_Param_bCollisionEnabled,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execRemoveCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::RemoveCollisions(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execRemoveCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::RemoveCollisionsWithNotification(Z_Param_StaticMesh,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execBulkSetConvexDecompositionCollisions)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_StaticMeshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::BulkSetConvexDecompositionCollisions(Z_Param_Out_StaticMeshes,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetConvexDecompositionCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetConvexDecompositionCollisions(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execBulkSetConvexDecompositionCollisionsWithNotification)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_StaticMeshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::BulkSetConvexDecompositionCollisionsWithNotification(Z_Param_Out_StaticMeshes,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetConvexDecompositionCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetConvexDecompositionCollisionsWithNotification(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetConvexCollisionCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetConvexCollisionCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetCollisionComplexity)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetCollisionComplexity(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetSimpleCollisionCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetSimpleCollisionCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetLodScreenSizes)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetLodScreenSizes(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execRemoveLods)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::RemoveLods(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetLodCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::GetLodCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetLodFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_DestinationStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_DestinationLodIndex);
		P_GET_OBJECT(UStaticMesh,Z_Param_SourceStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceLodIndex);
		P_GET_UBOOL(Z_Param_bReuseExistingMaterialSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::SetLodFromStaticMesh(Z_Param_DestinationStaticMesh,Z_Param_DestinationLodIndex,Z_Param_SourceStaticMesh,Z_Param_SourceLodIndex,Z_Param_bReuseExistingMaterialSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execReimportAllCustomLODs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::ReimportAllCustomLODs(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execImportLOD)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_BaseStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDEPRECATED_EditorStaticMeshLibrary::ImportLOD(Z_Param_BaseStaticMesh,Z_Param_LODIndex,Z_Param_SourceFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetLodBuildSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_BuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::SetLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_BuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetLodBuildSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_OutBuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::GetLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_OutBuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execSetLodReductionSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_ReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::SetLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_ReductionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_EditorStaticMeshLibrary::execGetLodReductionSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_OutReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_EditorStaticMeshLibrary::GetLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_OutReductionOptions);
		P_NATIVE_END;
	}
	void UDEPRECATED_EditorStaticMeshLibrary::StaticRegisterNativesUDEPRECATED_EditorStaticMeshLibrary()
	{
		UClass* Class = UDEPRECATED_EditorStaticMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSimpleCollisions", &UDEPRECATED_EditorStaticMeshLibrary::execAddSimpleCollisions },
			{ "AddSimpleCollisionsWithNotification", &UDEPRECATED_EditorStaticMeshLibrary::execAddSimpleCollisionsWithNotification },
			{ "AddUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execAddUVChannel },
			{ "BulkSetConvexDecompositionCollisions", &UDEPRECATED_EditorStaticMeshLibrary::execBulkSetConvexDecompositionCollisions },
			{ "BulkSetConvexDecompositionCollisionsWithNotification", &UDEPRECATED_EditorStaticMeshLibrary::execBulkSetConvexDecompositionCollisionsWithNotification },
			{ "EnableSectionCastShadow", &UDEPRECATED_EditorStaticMeshLibrary::execEnableSectionCastShadow },
			{ "EnableSectionCollision", &UDEPRECATED_EditorStaticMeshLibrary::execEnableSectionCollision },
			{ "GenerateBoxUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execGenerateBoxUVChannel },
			{ "GenerateCylindricalUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execGenerateCylindricalUVChannel },
			{ "GeneratePlanarUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execGeneratePlanarUVChannel },
			{ "GetCollisionComplexity", &UDEPRECATED_EditorStaticMeshLibrary::execGetCollisionComplexity },
			{ "GetConvexCollisionCount", &UDEPRECATED_EditorStaticMeshLibrary::execGetConvexCollisionCount },
			{ "GetLodBuildSettings", &UDEPRECATED_EditorStaticMeshLibrary::execGetLodBuildSettings },
			{ "GetLodCount", &UDEPRECATED_EditorStaticMeshLibrary::execGetLodCount },
			{ "GetLodReductionSettings", &UDEPRECATED_EditorStaticMeshLibrary::execGetLodReductionSettings },
			{ "GetLodScreenSizes", &UDEPRECATED_EditorStaticMeshLibrary::execGetLodScreenSizes },
			{ "GetNumberMaterials", &UDEPRECATED_EditorStaticMeshLibrary::execGetNumberMaterials },
			{ "GetNumberVerts", &UDEPRECATED_EditorStaticMeshLibrary::execGetNumberVerts },
			{ "GetNumUVChannels", &UDEPRECATED_EditorStaticMeshLibrary::execGetNumUVChannels },
			{ "GetSimpleCollisionCount", &UDEPRECATED_EditorStaticMeshLibrary::execGetSimpleCollisionCount },
			{ "HasInstanceVertexColors", &UDEPRECATED_EditorStaticMeshLibrary::execHasInstanceVertexColors },
			{ "HasVertexColors", &UDEPRECATED_EditorStaticMeshLibrary::execHasVertexColors },
			{ "ImportLOD", &UDEPRECATED_EditorStaticMeshLibrary::execImportLOD },
			{ "InsertUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execInsertUVChannel },
			{ "IsSectionCollisionEnabled", &UDEPRECATED_EditorStaticMeshLibrary::execIsSectionCollisionEnabled },
			{ "ReimportAllCustomLODs", &UDEPRECATED_EditorStaticMeshLibrary::execReimportAllCustomLODs },
			{ "RemoveCollisions", &UDEPRECATED_EditorStaticMeshLibrary::execRemoveCollisions },
			{ "RemoveCollisionsWithNotification", &UDEPRECATED_EditorStaticMeshLibrary::execRemoveCollisionsWithNotification },
			{ "RemoveLods", &UDEPRECATED_EditorStaticMeshLibrary::execRemoveLods },
			{ "RemoveUVChannel", &UDEPRECATED_EditorStaticMeshLibrary::execRemoveUVChannel },
			{ "SetAllowCPUAccess", &UDEPRECATED_EditorStaticMeshLibrary::execSetAllowCPUAccess },
			{ "SetConvexDecompositionCollisions", &UDEPRECATED_EditorStaticMeshLibrary::execSetConvexDecompositionCollisions },
			{ "SetConvexDecompositionCollisionsWithNotification", &UDEPRECATED_EditorStaticMeshLibrary::execSetConvexDecompositionCollisionsWithNotification },
			{ "SetGenerateLightmapUVs", &UDEPRECATED_EditorStaticMeshLibrary::execSetGenerateLightmapUVs },
			{ "SetLodBuildSettings", &UDEPRECATED_EditorStaticMeshLibrary::execSetLodBuildSettings },
			{ "SetLodFromStaticMesh", &UDEPRECATED_EditorStaticMeshLibrary::execSetLodFromStaticMesh },
			{ "SetLodReductionSettings", &UDEPRECATED_EditorStaticMeshLibrary::execSetLodReductionSettings },
			{ "SetLods", &UDEPRECATED_EditorStaticMeshLibrary::execSetLods },
			{ "SetLodsWithNotification", &UDEPRECATED_EditorStaticMeshLibrary::execSetLodsWithNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			EScriptCollisionShapeType ShapeType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, ShapeType), Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData)) }; // 1976287348
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "AddSimpleCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::EditorStaticMeshLibrary_eventAddSimpleCollisions_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics
	{
		struct EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			EScriptCollisionShapeType ShapeType;
			bool bApplyChanges;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms, ShapeType), Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData)) }; // 1976287348
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "AddSimpleCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::EditorStaticMeshLibrary_eventAddSimpleCollisionsWithNotification_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventAddUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventAddUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventAddUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventAddUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "AddUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::EditorStaticMeshLibrary_eventAddUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms
		{
			TArray<UStaticMesh*> StaticMeshes;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "BulkSetConvexDecompositionCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisions_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics
	{
		struct EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms
		{
			TArray<UStaticMesh*> StaticMeshes;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "BulkSetConvexDecompositionCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::EditorStaticMeshLibrary_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics
	{
		struct EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCastShadow;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "EnableSectionCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::EditorStaticMeshLibrary_eventEnableSectionCastShadow_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics
	{
		struct EditorStaticMeshLibrary_eventEnableSectionCollision_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCollisionEnabled;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventEnableSectionCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventEnableSectionCollision_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_bCollisionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "EnableSectionCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::EditorStaticMeshLibrary_eventEnableSectionCollision_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector Size;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GenerateBoxUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::EditorStaticMeshLibrary_eventGenerateBoxUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GenerateCylindricalUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::EditorStaticMeshLibrary_eventGenerateCylindricalUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GeneratePlanarUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::EditorStaticMeshLibrary_eventGeneratePlanarUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics
	{
		struct EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms
		{
			UStaticMesh* StaticMesh;
			TEnumAsByte<ECollisionTraceFlag> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(nullptr, 0) }; // 3043805667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetCollisionComplexity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::EditorStaticMeshLibrary_eventGetCollisionComplexity_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetConvexCollisionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::EditorStaticMeshLibrary_eventGetConvexCollisionCount_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodBuildSettings_Parms
		{
			const UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshBuildSettings OutBuildOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_OutBuildOptions = { "OutBuildOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodBuildSettings_Parms, OutBuildOptions), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 3244455572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::NewProp_OutBuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::EditorStaticMeshLibrary_eventGetLodBuildSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetLodCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::EditorStaticMeshLibrary_eventGetLodCount_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodReductionSettings_Parms
		{
			const UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshReductionSettings OutReductionOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutReductionOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_OutReductionOptions = { "OutReductionOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodReductionSettings_Parms, OutReductionOptions), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(nullptr, 0) }; // 1559220690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::NewProp_OutReductionOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetLodReductionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::EditorStaticMeshLibrary_eventGetLodReductionSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics
	{
		struct EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms
		{
			UStaticMesh* StaticMesh;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetLodScreenSizes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::EditorStaticMeshLibrary_eventGetLodScreenSizes_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics
	{
		struct EditorStaticMeshLibrary_eventGetNumberMaterials_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberMaterials_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetNumberMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::EditorStaticMeshLibrary_eventGetNumberMaterials_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics
	{
		struct EditorStaticMeshLibrary_eventGetNumberVerts_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumberVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetNumberVerts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::EditorStaticMeshLibrary_eventGetNumberVerts_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics
	{
		struct EditorStaticMeshLibrary_eventGetNumUVChannels_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetNumUVChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetNumUVChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::EditorStaticMeshLibrary_eventGetNumUVChannels_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics
	{
		struct EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "GetSimpleCollisionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::EditorStaticMeshLibrary_eventGetSimpleCollisionCount_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics
	{
		struct EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "HasInstanceVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::EditorStaticMeshLibrary_eventHasInstanceVertexColors_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics
	{
		struct EditorStaticMeshLibrary_eventHasVertexColors_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventHasVertexColors_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventHasVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventHasVertexColors_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "HasVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::EditorStaticMeshLibrary_eventHasVertexColors_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics
	{
		struct EditorStaticMeshLibrary_eventImportLOD_Parms
		{
			UStaticMesh* BaseStaticMesh;
			int32 LODIndex;
			FString SourceFilename;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_BaseStaticMesh = { "BaseStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventImportLOD_Parms, BaseStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventImportLOD_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventImportLOD_Parms, SourceFilename), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventImportLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_BaseStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_SourceFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "ImportLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::EditorStaticMeshLibrary_eventImportLOD_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventInsertUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventInsertUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventInsertUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventInsertUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "InsertUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::EditorStaticMeshLibrary_eventInsertUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics
	{
		struct EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "IsSectionCollisionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::EditorStaticMeshLibrary_eventIsSectionCollisionEnabled_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics
	{
		struct EditorStaticMeshLibrary_eventReimportAllCustomLODs_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventReimportAllCustomLODs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventReimportAllCustomLODs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventReimportAllCustomLODs_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "ReimportAllCustomLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::EditorStaticMeshLibrary_eventReimportAllCustomLODs_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventRemoveCollisions_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "RemoveCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::EditorStaticMeshLibrary_eventRemoveCollisions_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "RemoveCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::EditorStaticMeshLibrary_eventRemoveCollisionsWithNotification_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveLods_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveLods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventRemoveLods_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "RemoveLods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::EditorStaticMeshLibrary_eventRemoveLods_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics
	{
		struct EditorStaticMeshLibrary_eventRemoveUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventRemoveUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventRemoveUVChannel_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "RemoveUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::EditorStaticMeshLibrary_eventRemoveUVChannel_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics
	{
		struct EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms
		{
			UStaticMesh* StaticMesh;
			bool bAllowCPUAccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms*)Obj)->bAllowCPUAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetAllowCPUAccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::EditorStaticMeshLibrary_eventSetAllowCPUAccess_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics
	{
		struct EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetConvexDecompositionCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::EditorStaticMeshLibrary_eventSetConvexDecompositionCollisions_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics
	{
		struct EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetConvexDecompositionCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::EditorStaticMeshLibrary_eventSetConvexDecompositionCollisionsWithNotification_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics
	{
		struct EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms
		{
			UStaticMesh* StaticMesh;
			bool bGenerateLightmapUVs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ScriptName", "SetGenerateLightmapUv" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetGenerateLightmapUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::EditorStaticMeshLibrary_eventSetGenerateLightmapUVs_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLodBuildSettings_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshBuildSettings BuildOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions = { "BuildOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodBuildSettings_Parms, BuildOptions), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData)) }; // 3244455572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::NewProp_BuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::EditorStaticMeshLibrary_eventSetLodBuildSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms
		{
			UStaticMesh* DestinationStaticMesh;
			int32 DestinationLodIndex;
			UStaticMesh* SourceStaticMesh;
			int32 SourceLodIndex;
			bool bReuseExistingMaterialSlots;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationStaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationLodIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLodIndex;
		static void NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseExistingMaterialSlots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh = { "DestinationStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, DestinationStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex = { "DestinationLodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, DestinationLodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex = { "SourceLodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, SourceLodIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms*)Obj)->bReuseExistingMaterialSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots = { "bReuseExistingMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetLodFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::EditorStaticMeshLibrary_eventSetLodFromStaticMesh_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLodReductionSettings_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshReductionSettings ReductionOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodReductionSettings_Parms, ReductionOptions), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData)) }; // 1559220690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::NewProp_ReductionOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetLodReductionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::EditorStaticMeshLibrary_eventSetLodReductionSettings_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLods_Parms
		{
			UStaticMesh* StaticMesh;
			FStaticMeshReductionOptions ReductionOptions;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, ReductionOptions), Z_Construct_UScriptStruct_FStaticMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData)) }; // 318483350
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLods_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReductionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetLods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::EditorStaticMeshLibrary_eventSetLods_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics
	{
		struct EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			FStaticMeshReductionOptions ReductionOptions;
			bool bApplyChanges;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms, ReductionOptions), Z_Construct_UScriptStruct_FStaticMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData)) }; // 318483350
	void Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms), &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReductionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, nullptr, "SetLodsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::EditorStaticMeshLibrary_eventSetLodsWithNotification_Parms), Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_EditorStaticMeshLibrary);
	UClass* Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_NoRegister()
	{
		return UDEPRECATED_EditorStaticMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisions, "AddSimpleCollisions" }, // 2476438633
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddSimpleCollisionsWithNotification, "AddSimpleCollisionsWithNotification" }, // 790477305
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_AddUVChannel, "AddUVChannel" }, // 1153394822
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisions, "BulkSetConvexDecompositionCollisions" }, // 2765733041
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_BulkSetConvexDecompositionCollisionsWithNotification, "BulkSetConvexDecompositionCollisionsWithNotification" }, // 503669582
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCastShadow, "EnableSectionCastShadow" }, // 2035222247
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_EnableSectionCollision, "EnableSectionCollision" }, // 4074477768
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateBoxUVChannel, "GenerateBoxUVChannel" }, // 956208423
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GenerateCylindricalUVChannel, "GenerateCylindricalUVChannel" }, // 762914188
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GeneratePlanarUVChannel, "GeneratePlanarUVChannel" }, // 339010182
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetCollisionComplexity, "GetCollisionComplexity" }, // 2108385398
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetConvexCollisionCount, "GetConvexCollisionCount" }, // 1148523134
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodBuildSettings, "GetLodBuildSettings" }, // 236249279
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodCount, "GetLodCount" }, // 2053310291
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodReductionSettings, "GetLodReductionSettings" }, // 2547886224
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetLodScreenSizes, "GetLodScreenSizes" }, // 3911288694
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberMaterials, "GetNumberMaterials" }, // 3151089486
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumberVerts, "GetNumberVerts" }, // 3819694682
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetNumUVChannels, "GetNumUVChannels" }, // 3117077547
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_GetSimpleCollisionCount, "GetSimpleCollisionCount" }, // 902466858
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasInstanceVertexColors, "HasInstanceVertexColors" }, // 2566873583
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_HasVertexColors, "HasVertexColors" }, // 800538587
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ImportLOD, "ImportLOD" }, // 2069075338
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_InsertUVChannel, "InsertUVChannel" }, // 2912461637
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_IsSectionCollisionEnabled, "IsSectionCollisionEnabled" }, // 1829820741
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_ReimportAllCustomLODs, "ReimportAllCustomLODs" }, // 3460778604
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisions, "RemoveCollisions" }, // 1647593108
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveCollisionsWithNotification, "RemoveCollisionsWithNotification" }, // 3326331262
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveLods, "RemoveLods" }, // 1367798058
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_RemoveUVChannel, "RemoveUVChannel" }, // 178678364
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetAllowCPUAccess, "SetAllowCPUAccess" }, // 1514681610
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisions, "SetConvexDecompositionCollisions" }, // 1671653329
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetConvexDecompositionCollisionsWithNotification, "SetConvexDecompositionCollisionsWithNotification" }, // 3992958051
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetGenerateLightmapUVs, "SetGenerateLightmapUVs" }, // 208620775
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodBuildSettings, "SetLodBuildSettings" }, // 1193161591
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodFromStaticMesh, "SetLodFromStaticMesh" }, // 2903884924
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodReductionSettings, "SetLodReductionSettings" }, // 2393453478
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLods, "SetLods" }, // 1769313446
		{ &Z_Construct_UFunction_UDEPRECATED_EditorStaticMeshLibrary_SetLodsWithNotification, "SetLodsWithNotification" }, // 3014472825
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class to altering and analyzing a StaticMesh and use the common functionalities of the Mesh Editor.\n * The editor should not be in play in editor mode.\n */" },
		{ "IncludePath", "EditorStaticMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorStaticMeshLibrary.h" },
		{ "ToolTip", "Utility class to altering and analyzing a StaticMesh and use the common functionalities of the Mesh Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_EditorStaticMeshLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::ClassParams = {
		&UDEPRECATED_EditorStaticMeshLibrary::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_EditorStaticMeshLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_EditorStaticMeshLibrary.OuterSingleton, Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_EditorStaticMeshLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UDEPRECATED_EditorStaticMeshLibrary>()
	{
		return UDEPRECATED_EditorStaticMeshLibrary::StaticClass();
	}
	UDEPRECATED_EditorStaticMeshLibrary::UDEPRECATED_EditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_EditorStaticMeshLibrary);
	UDEPRECATED_EditorStaticMeshLibrary::~UDEPRECATED_EditorStaticMeshLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::EnumInfo[] = {
		{ EScriptingCollisionShapeType_Deprecated_StaticEnum, TEXT("EScriptingCollisionShapeType_Deprecated"), &Z_Registration_Info_UEnum_EScriptingCollisionShapeType_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 671665690U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ScriptStructInfo[] = {
		{ FEditorScriptingMeshReductionSettings_Deprecated::StaticStruct, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics::NewStructOps, TEXT("EditorScriptingMeshReductionSettings_Deprecated"), &Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionSettings_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScriptingMeshReductionSettings_Deprecated), 327435930U) },
		{ FEditorScriptingMeshReductionOptions_Deprecated::StaticStruct, Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics::NewStructOps, TEXT("EditorScriptingMeshReductionOptions_Deprecated"), &Z_Registration_Info_UScriptStruct_EditorScriptingMeshReductionOptions_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScriptingMeshReductionOptions_Deprecated), 62017825U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary, UDEPRECATED_EditorStaticMeshLibrary::StaticClass, TEXT("UDEPRECATED_EditorStaticMeshLibrary"), &Z_Registration_Info_UClass_UDEPRECATED_EditorStaticMeshLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_EditorStaticMeshLibrary), 1205887881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_381166047(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
