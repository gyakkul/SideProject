// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothLODData_Legacy.h"
#include "ClothCollisionData.h"
#include "ClothPhysicalMeshData.h"
#include "PointWeightMap.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothLODData_Legacy() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicalMeshData();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy;
class UScriptStruct* FClothParameterMask_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothParameterMask_Legacy, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothParameterMask_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothParameterMask_Legacy>()
{
	return FClothParameterMask_Legacy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaskName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use FPointWeightMap instead.\n * Redirected from the now defunct ClothingSystemRuntime module.\n */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse FPointWeightMap instead.\nRedirected from the now defunct ClothingSystemRuntime module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothParameterMask_Legacy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaskName_MetaData[] = {
		{ "Comment", "/** Name of the mask, mainly for users to differentiate */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Name of the mask, mainly for users to differentiate" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaskName = { "MaskName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothParameterMask_Legacy, MaskName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaskName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Comment", "/** The currently targeted parameter for the mask */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "The currently targeted parameter for the mask" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothParameterMask_Legacy, CurrentTarget), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget_MetaData)) }; // 802952671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Comment", "/** The maximum value currently in the mask value array */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "The maximum value currently in the mask value array" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothParameterMask_Legacy, MaxValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MinValue_MetaData[] = {
		{ "Comment", "/** The maximum value currently in the mask value array */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "The maximum value currently in the mask value array" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothParameterMask_Legacy, MinValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MinValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "/** The actual values stored in the mask */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "The actual values stored in the mask" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothParameterMask_Legacy, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether this mask is enabled and able to effect final mesh values */" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Whether this mask is enabled and able to effect final mesh values" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FClothParameterMask_Legacy*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClothParameterMask_Legacy), &Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothParameterMask_Legacy",
		sizeof(FClothParameterMask_Legacy),
		alignof(FClothParameterMask_Legacy),
		Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothParameterMask_Legacy()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy.InnerSingleton;
	}
	void UClothLODDataCommon_Legacy::StaticRegisterNativesUClothLODDataCommon_Legacy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothLODDataCommon_Legacy);
	UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister()
	{
		return UClothLODDataCommon_Legacy::StaticClass();
	}
	struct Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMeshData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothPhysicalMeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothPhysicalMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterMasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterMasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterMasks;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, legacy definition kept for backward compatibility only.\n * Use FClothLODDataCommon instead.\n */" },
		{ "IncludePath", "ClothLODData_Legacy.h" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Deprecated, legacy definition kept for backward compatibility only.\nUse FClothLODDataCommon instead." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_PhysicalMeshData_MetaData[] = {
		{ "Comment", "// Deprecated, use ClothPhysicalMeshData instead\n" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Deprecated, use ClothPhysicalMeshData instead" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_PhysicalMeshData = { "PhysicalMeshData", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothLODDataCommon_Legacy, PhysicalMeshData_DEPRECATED), Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_PhysicalMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_PhysicalMeshData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ClothPhysicalMeshData_MetaData[] = {
		{ "Comment", "// Raw phys mesh data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Raw phys mesh data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ClothPhysicalMeshData = { "ClothPhysicalMeshData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothLODDataCommon_Legacy, ClothPhysicalMeshData), Z_Construct_UScriptStruct_FClothPhysicalMeshData, METADATA_PARAMS(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ClothPhysicalMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ClothPhysicalMeshData_MetaData)) }; // 423704680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_CollisionData_MetaData[] = {
		{ "Comment", "// Collision primitive and convex data for clothing collisions\n" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Collision primitive and convex data for clothing collisions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothLODDataCommon_Legacy, CollisionData), Z_Construct_UScriptStruct_FClothCollisionData, METADATA_PARAMS(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_CollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_CollisionData_MetaData)) }; // 986026815
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks_Inner = { "ParameterMasks", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPointWeightMap, METADATA_PARAMS(nullptr, 0) }; // 3433712234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks_MetaData[] = {
		{ "Comment", "// Parameter masks defining the physics mesh masked data\n" },
		{ "ModuleRelativePath", "Public/ClothLODData_Legacy.h" },
		{ "ToolTip", "Parameter masks defining the physics mesh masked data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks = { "ParameterMasks", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothLODDataCommon_Legacy, ParameterMasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks_MetaData)) }; // 3433712234
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_PhysicalMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ClothPhysicalMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_CollisionData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::NewProp_ParameterMasks,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothLODDataCommon_Legacy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::ClassParams = {
		&UClothLODDataCommon_Legacy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy()
	{
		if (!Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton, Z_Construct_UClass_UClothLODDataCommon_Legacy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothLODDataCommon_Legacy>()
	{
		return UClothLODDataCommon_Legacy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothLODDataCommon_Legacy);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothLODDataCommon_Legacy)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ScriptStructInfo[] = {
		{ FClothParameterMask_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothParameterMask_Legacy_Statics::NewStructOps, TEXT("ClothParameterMask_Legacy"), &Z_Registration_Info_UScriptStruct_ClothParameterMask_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothParameterMask_Legacy), 2609652381U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothLODDataCommon_Legacy, UClothLODDataCommon_Legacy::StaticClass, TEXT("UClothLODDataCommon_Legacy"), &Z_Registration_Info_UClass_UClothLODDataCommon_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothLODDataCommon_Legacy), 1754541380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_634910463(TEXT("/Script/ClothingSystemRuntimeCommon"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothLODData_Legacy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
