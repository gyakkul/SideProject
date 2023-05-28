// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DistributeRotation() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation;
class UScriptStruct* FRigUnit_DistributeRotation_Rotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation_Rotation"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation_Rotation>()
{
	return FRigUnit_DistributeRotation_Rotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation_Rotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The rotation to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The rotation to be applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_Rotation, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio of where this rotation sits along the chain\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The ratio of where this rotation sits along the chain" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_Rotation, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewProp_Ratio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_DistributeRotation_Rotation",
		sizeof(FRigUnit_DistributeRotation_Rotation),
		alignof(FRigUnit_DistributeRotation_Rotation),
		Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData;
class UScriptStruct* FRigUnit_DistributeRotation_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation_WorkData>()
{
	return FRigUnit_DistributeRotation_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemRotationB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemRotationT_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemRotationT_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRotationT;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemLocalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemLocalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemLocalTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_Inner = { "ItemRotationA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA = { "ItemRotationA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_Inner = { "ItemRotationB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB = { "ItemRotationB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_Inner = { "ItemRotationT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT = { "ItemRotationT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemRotationT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_Inner = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms = { "ItemLocalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemRotationT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewProp_ItemLocalTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_DistributeRotation_WorkData",
		sizeof(FRigUnit_DistributeRotation_WorkData),
		alignof(FRigUnit_DistributeRotation_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_DistributeRotation>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotation cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation;
class UScriptStruct* FRigUnit_DistributeRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotation_Execute;
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_DistributeRotation_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotation::Execute"), &FRigUnit_DistributeRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton, Arguments_FRigUnit_DistributeRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotation>()
{
	return FRigUnit_DistributeRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided along a chain.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each bone!\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided along a chain.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each bone!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The name of the first bone to align" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The name of the last bone to align" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(nullptr, 0) }; // 2295381266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_MetaData)) }; // 2295381266
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_DistributeRotation*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_DistributeRotation), &Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotation, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData_MetaData)) }; // 2954659250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_RotationEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_DistributeRotation",
		sizeof(FRigUnit_DistributeRotation),
		alignof(FRigUnit_DistributeRotation),
		Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation.InnerSingleton;
	}

void FRigUnit_DistributeRotation::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DistributeRotation::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_2_Array(Rotations);
	
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		Rotations_2_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_DistributeRotationForCollection>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotationForCollection cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection;
class UScriptStruct* FRigUnit_DistributeRotationForCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotationForCollection"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotationForCollection_Execute;
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotationForCollection_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotationForCollection::Execute"), &FRigUnit_DistributeRotationForCollection::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton, Arguments_FRigUnit_DistributeRotationForCollection_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotationForCollection>()
{
	return FRigUnit_DistributeRotationForCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided across a collection of items.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each item!\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided across a collection of items.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each item!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotationForCollection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to use to distribute the rotation\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The items to use to distribute the rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items_MetaData)) }; // 2993270268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(nullptr, 0) }; // 2295381266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_MetaData)) }; // 2295381266
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForCollection, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData_MetaData)) }; // 2954659250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_RotationEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_DistributeRotationForCollection",
		sizeof(FRigUnit_DistributeRotationForCollection),
		alignof(FRigUnit_DistributeRotationForCollection),
		Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection.InnerSingleton;
	}

void FRigUnit_DistributeRotationForCollection::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DistributeRotationForCollection::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_1_Array(Rotations);
	
	StaticExecute(
		InExecuteContext,
		Items,
		Rotations_1_Array,
		RotationEaseType,
		Weight,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_DistributeRotationForItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_DistributeRotationForItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray;
class UScriptStruct* FRigUnit_DistributeRotationForItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DistributeRotationForItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DistributeRotationForItemArray_Execute;
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_DistributeRotation_Rotation>"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_DistributeRotationForItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_DistributeRotation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DistributeRotationForItemArray::Execute"), &FRigUnit_DistributeRotationForItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton, Arguments_FRigUnit_DistributeRotationForItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DistributeRotationForItemArray>()
{
	return FRigUnit_DistributeRotationForItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Distributes rotations provided across a array of items.\n * Each rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\n * Note: This node adds rotation in local space of each item!\n */" },
		{ "DisplayName", "Distribute Rotation" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "Distributes rotations provided across a array of items.\nEach rotation is expressed by a quaternion and a ratio, where the ratio is between 0.0 and 1.0\nNote: This node adds rotation in local space of each item!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DistributeRotationForItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to use to distribute the rotation\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The items to use to distribute the rotation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation, METADATA_PARAMS(nullptr, 0) }; // 2295381266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The list of rotations to be applied" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_MetaData)) }; // 2295381266
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DistributeRotationForItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData_MetaData)) }; // 2954659250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_RotationEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_DistributeRotationForItemArray",
		sizeof(FRigUnit_DistributeRotationForItemArray),
		alignof(FRigUnit_DistributeRotationForItemArray),
		Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray.InnerSingleton;
	}

void FRigUnit_DistributeRotationForItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DistributeRotationForItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_DistributeRotation_Rotation> Rotations_1_Array(Rotations);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Rotations_1_Array,
		RotationEaseType,
		Weight,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DistributeRotation_Rotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Rotation_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation_Rotation"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_Rotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation_Rotation), 2295381266U) },
		{ FRigUnit_DistributeRotation_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_WorkData_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation_WorkData), 2954659250U) },
		{ FRigUnit_DistributeRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotation_Statics::NewStructOps, TEXT("RigUnit_DistributeRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotation), 192324759U) },
		{ FRigUnit_DistributeRotationForCollection::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForCollection_Statics::NewStructOps, TEXT("RigUnit_DistributeRotationForCollection"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotationForCollection), 281907699U) },
		{ FRigUnit_DistributeRotationForItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::NewStructOps, TEXT("RigUnit_DistributeRotationForItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_DistributeRotationForItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DistributeRotationForItemArray), 3324216011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_2052991691(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_DistributeRotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
