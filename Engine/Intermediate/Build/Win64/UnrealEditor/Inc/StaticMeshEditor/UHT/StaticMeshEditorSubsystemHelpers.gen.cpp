// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshEditorSubsystemHelpers.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshEditorSubsystemHelpers() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	STATICMESHEDITOR_API UEnum* Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionSettings();
	UPackage* Z_Construct_UPackage__Script_StaticMeshEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings;
class UScriptStruct* FStaticMeshReductionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshReductionSettings, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("StaticMeshReductionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.OuterSingleton;
}
template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<FStaticMeshReductionSettings>()
{
	return FStaticMeshReductionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshReductionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Percentage of triangles to keep. Ranges from 0.0 to 1.0: 1.0 = no reduction, 0.0 = no triangles.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Percentage of triangles to keep. Ranges from 0.0 to 1.0: 1.0 = no reduction, 0.0 = no triangles." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshReductionSettings, PercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// ScreenSize to display this LOD. Ranges from 0.0 to 1.0.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "ScreenSize to display this LOD. Ranges from 0.0 to 1.0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshReductionSettings, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_ScreenSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_PercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewProp_ScreenSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		nullptr,
		&NewStructOps,
		"StaticMeshReductionSettings",
		sizeof(FStaticMeshReductionSettings),
		alignof(FStaticMeshReductionSettings),
		Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions;
class UScriptStruct* FStaticMeshReductionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshReductionOptions, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("StaticMeshReductionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.OuterSingleton;
}
template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<FStaticMeshReductionOptions>()
{
	return FStaticMeshReductionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshReductionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// If true, the screen sizes at which LODs swap are computed automatically\n// @note that this is displayed as 'Auto Compute LOD Distances' in the UI\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "If true, the screen sizes at which LODs swap are computed automatically\n@note that this is displayed as 'Auto Compute LOD Distances' in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((FStaticMeshReductionOptions*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize = { "bAutoComputeLODScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticMeshReductionOptions), &Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings_Inner = { "ReductionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshReductionSettings, METADATA_PARAMS(nullptr, 0) }; // 3175932343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Array of reduction settings to apply to each new LOD mesh.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Array of reduction settings to apply to each new LOD mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStaticMeshReductionOptions, ReductionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings_MetaData)) }; // 3175932343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_bAutoComputeLODScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewProp_ReductionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		nullptr,
		&NewStructOps,
		"StaticMeshReductionOptions",
		sizeof(FStaticMeshReductionOptions),
		alignof(FStaticMeshReductionOptions),
		Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptCollisionShapeType;
	static UEnum* EScriptCollisionShapeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptCollisionShapeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptCollisionShapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("EScriptCollisionShapeType"));
		}
		return Z_Registration_Info_UEnum_EScriptCollisionShapeType.OuterSingleton;
	}
	template<> STATICMESHEDITOR_API UEnum* StaticEnum<EScriptCollisionShapeType>()
	{
		return EScriptCollisionShapeType_StaticEnum();
	}
	struct Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enumerators[] = {
		{ "EScriptCollisionShapeType::Box", (int64)EScriptCollisionShapeType::Box },
		{ "EScriptCollisionShapeType::Sphere", (int64)EScriptCollisionShapeType::Sphere },
		{ "EScriptCollisionShapeType::Capsule", (int64)EScriptCollisionShapeType::Capsule },
		{ "EScriptCollisionShapeType::NDOP10_X", (int64)EScriptCollisionShapeType::NDOP10_X },
		{ "EScriptCollisionShapeType::NDOP10_Y", (int64)EScriptCollisionShapeType::NDOP10_Y },
		{ "EScriptCollisionShapeType::NDOP10_Z", (int64)EScriptCollisionShapeType::NDOP10_Z },
		{ "EScriptCollisionShapeType::NDOP18", (int64)EScriptCollisionShapeType::NDOP18 },
		{ "EScriptCollisionShapeType::NDOP26", (int64)EScriptCollisionShapeType::NDOP26 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Name", "EScriptCollisionShapeType::Box" },
		{ "Capsule.Name", "EScriptCollisionShapeType::Capsule" },
		{ "Comment", "/** Types of Collision Construct that are generated **/" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "NDOP10_X.Name", "EScriptCollisionShapeType::NDOP10_X" },
		{ "NDOP10_Y.Name", "EScriptCollisionShapeType::NDOP10_Y" },
		{ "NDOP10_Z.Name", "EScriptCollisionShapeType::NDOP10_Z" },
		{ "NDOP18.Name", "EScriptCollisionShapeType::NDOP18" },
		{ "NDOP26.Name", "EScriptCollisionShapeType::NDOP26" },
		{ "Sphere.Name", "EScriptCollisionShapeType::Sphere" },
		{ "ToolTip", "Types of Collision Construct that are generated *" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		nullptr,
		"EScriptCollisionShapeType",
		"EScriptCollisionShapeType",
		Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType()
	{
		if (!Z_Registration_Info_UEnum_EScriptCollisionShapeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptCollisionShapeType.InnerSingleton, Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptCollisionShapeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions;
class UScriptStruct* FJoinStaticMeshActorsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("JoinStaticMeshActorsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.OuterSingleton;
}
template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<FJoinStaticMeshActorsOptions>()
{
	return FJoinStaticMeshActorsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroySourceActors_MetaData[];
#endif
		static void NewProp_bDestroySourceActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroySourceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenameComponentsFromSource_MetaData[];
#endif
		static void NewProp_bRenameComponentsFromSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenameComponentsFromSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinStaticMeshActorsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Destroy the provided Actors after the operation.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Destroy the provided Actors after the operation." },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_SetBit(void* Obj)
	{
		((FJoinStaticMeshActorsOptions*)Obj)->bDestroySourceActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors = { "bDestroySourceActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Name of the new spawned Actor to replace the provided Actors.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Name of the new spawned Actor to replace the provided Actors." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinStaticMeshActorsOptions, NewActorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Rename StaticMeshComponents based on source Actor's name.\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Rename StaticMeshComponents based on source Actor's name." },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_SetBit(void* Obj)
	{
		((FJoinStaticMeshActorsOptions*)Obj)->bRenameComponentsFromSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource = { "bRenameComponentsFromSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bDestroySourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_NewActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewProp_bRenameComponentsFromSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		nullptr,
		&NewStructOps,
		"JoinStaticMeshActorsOptions",
		sizeof(FJoinStaticMeshActorsOptions),
		alignof(FJoinStaticMeshActorsOptions),
		Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.InnerSingleton, Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMergeStaticMeshActorsOptions>() == std::is_polymorphic<FJoinStaticMeshActorsOptions>(), "USTRUCT FMergeStaticMeshActorsOptions cannot be polymorphic unless super FJoinStaticMeshActorsOptions is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions;
class UScriptStruct* FMergeStaticMeshActorsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("MergeStaticMeshActorsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.OuterSingleton;
}
template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<FMergeStaticMeshActorsOptions>()
{
	return FMergeStaticMeshActorsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMergingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMergingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergeStaticMeshActorsOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Spawn the new merged actors\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FMergeStaticMeshActorsOptions*)Obj)->bSpawnMergedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMergeStaticMeshActorsOptions), &Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The package path you want to save to. ie: /Game/MyFolder\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeStaticMeshActorsOptions, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings = { "MeshMergingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeStaticMeshActorsOptions, MeshMergingSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings_MetaData)) }; // 1528135240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_bSpawnMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_BasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewProp_MeshMergingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions,
		&NewStructOps,
		"MergeStaticMeshActorsOptions",
		sizeof(FMergeStaticMeshActorsOptions),
		alignof(FMergeStaticMeshActorsOptions),
		Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.InnerSingleton, Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCreateProxyMeshActorOptions>() == std::is_polymorphic<FJoinStaticMeshActorsOptions>(), "USTRUCT FCreateProxyMeshActorOptions cannot be polymorphic unless super FJoinStaticMeshActorsOptions is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions;
class UScriptStruct* FCreateProxyMeshActorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions, (UObject*)Z_Construct_UPackage__Script_StaticMeshEditor(), TEXT("CreateProxyMeshActorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.OuterSingleton;
}
template<> STATICMESHEDITOR_API UScriptStruct* StaticStruct<FCreateProxyMeshActorOptions>()
{
	return FCreateProxyMeshActorOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshProxySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshProxySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateProxyMeshActorOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Spawn the new merged actors\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FCreateProxyMeshActorOptions*)Obj)->bSpawnMergedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateProxyMeshActorOptions), &Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The package path you want to save to. ie: /Game/MyFolder\n" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateProxyMeshActorOptions, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystemHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings = { "MeshProxySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateProxyMeshActorOptions, MeshProxySettings), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings_MetaData)) }; // 1902887107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_bSpawnMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_BasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewProp_MeshProxySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
		Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions,
		&NewStructOps,
		"CreateProxyMeshActorOptions",
		sizeof(FCreateProxyMeshActorOptions),
		alignof(FCreateProxyMeshActorOptions),
		Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.InnerSingleton, Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::EnumInfo[] = {
		{ EScriptCollisionShapeType_StaticEnum, TEXT("EScriptCollisionShapeType"), &Z_Registration_Info_UEnum_EScriptCollisionShapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1976287348U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::ScriptStructInfo[] = {
		{ FStaticMeshReductionSettings::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshReductionSettings_Statics::NewStructOps, TEXT("StaticMeshReductionSettings"), &Z_Registration_Info_UScriptStruct_StaticMeshReductionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshReductionSettings), 3175932343U) },
		{ FStaticMeshReductionOptions::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshReductionOptions_Statics::NewStructOps, TEXT("StaticMeshReductionOptions"), &Z_Registration_Info_UScriptStruct_StaticMeshReductionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshReductionOptions), 318483350U) },
		{ FJoinStaticMeshActorsOptions::StaticStruct, Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions_Statics::NewStructOps, TEXT("JoinStaticMeshActorsOptions"), &Z_Registration_Info_UScriptStruct_JoinStaticMeshActorsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoinStaticMeshActorsOptions), 2587761173U) },
		{ FMergeStaticMeshActorsOptions::StaticStruct, Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions_Statics::NewStructOps, TEXT("MergeStaticMeshActorsOptions"), &Z_Registration_Info_UScriptStruct_MergeStaticMeshActorsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergeStaticMeshActorsOptions), 3823753245U) },
		{ FCreateProxyMeshActorOptions::StaticStruct, Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions_Statics::NewStructOps, TEXT("CreateProxyMeshActorOptions"), &Z_Registration_Info_UScriptStruct_CreateProxyMeshActorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateProxyMeshActorOptions), 3005345854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_2465956809(TEXT("/Script/StaticMeshEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystemHelpers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
