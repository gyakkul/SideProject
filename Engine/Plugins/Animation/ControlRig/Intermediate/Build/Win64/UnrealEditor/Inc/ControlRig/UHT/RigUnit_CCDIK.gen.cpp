// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h"
#include "CCDIK.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_CCDIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit;
class UScriptStruct* FRigUnit_CCDIK_RotationLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_RotationLimit"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_RotationLimit>()
{
	return FRigUnit_CCDIK_RotationLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_RotationLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the bone to apply the rotation limit to.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The name of the bone to apply the rotation limit to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimit, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The limit of the rotation in degrees.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The limit of the rotation in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimit, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_CCDIK_RotationLimit",
		sizeof(FRigUnit_CCDIK_RotationLimit),
		alignof(FRigUnit_CCDIK_RotationLimit),
		Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem;
class UScriptStruct* FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_RotationLimitPerItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_RotationLimitPerItem>()
{
	return FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_RotationLimitPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the item to apply the rotation limit to.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The name of the item to apply the rotation limit to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimitPerItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The limit of the rotation in degrees.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The limit of the rotation in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_RotationLimitPerItem, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_CCDIK_RotationLimitPerItem",
		sizeof(FRigUnit_CCDIK_RotationLimitPerItem),
		alignof(FRigUnit_CCDIK_RotationLimitPerItem),
		Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData;
class UScriptStruct* FRigUnit_CCDIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK_WorkData>()
{
	return FRigUnit_CCDIK_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationLimitIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLimitsPerItem_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitsPerItem_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitsPerItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEffector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedEffector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCCDIKChainLink, METADATA_PARAMS(nullptr, 0) }; // 3069445452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_MetaData)) }; // 3069445452
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_Inner = { "RotationLimitIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex = { "RotationLimitIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, RotationLimitIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_Inner = { "RotationLimitsPerItem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem = { "RotationLimitsPerItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector = { "CachedEffector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK_WorkData, CachedEffector), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_Chain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_RotationLimitsPerItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewProp_CachedEffector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_CCDIK_WorkData",
		sizeof(FRigUnit_CCDIK_WorkData),
		alignof(FRigUnit_CCDIK_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_CCDIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIK;
class UScriptStruct* FRigUnit_CCDIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIK_Execute;
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("EffectorBone"), TEXT("FName"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimit>"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIK::Execute"), &FRigUnit_CCDIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton, Arguments_FRigUnit_CCDIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIK>()
{
	return FRigUnit_CCDIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last bone in the chain to solve - the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The last bone in the chain to solve - the effector" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, EffectorBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FRigUnit_CCDIK*)Obj)->bStartFromTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIK), &Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, BaseRotationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit, METADATA_PARAMS(nullptr, 0) }; // 4081812210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_MetaData)) }; // 4081812210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_CCDIK*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIK), &Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData_MetaData)) }; // 1117435438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bStartFromTail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_BaseRotationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_RotationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_CCDIK",
		sizeof(FRigUnit_CCDIK),
		alignof(FRigUnit_CCDIK),
		Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIK.InnerSingleton;
	}

void FRigUnit_CCDIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_CCDIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_CCDIK_RotationLimit> RotationLimits_8_Array(RotationLimits);
	
	StaticExecute(
		InExecuteContext,
		StartBone,
		EffectorBone,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_8_Array,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_CCDIKPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIKPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem;
class UScriptStruct* FRigUnit_CCDIKPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIKPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIKPerItem_Execute;
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimitPerItem>"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIKPerItem::Execute"), &FRigUnit_CCDIKPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton, Arguments_FRigUnit_CCDIKPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIKPerItem>()
{
	return FRigUnit_CCDIKPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIKPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The chain to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FRigUnit_CCDIKPerItem*)Obj)->bStartFromTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, BaseRotationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, METADATA_PARAMS(nullptr, 0) }; // 212545948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_MetaData)) }; // 212545948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_CCDIKPerItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData_MetaData)) }; // 1117435438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bStartFromTail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_BaseRotationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_RotationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_CCDIKPerItem",
		sizeof(FRigUnit_CCDIKPerItem),
		alignof(FRigUnit_CCDIKPerItem),
		Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem.InnerSingleton;
	}

void FRigUnit_CCDIKPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_CCDIKPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits_7_Array(RotationLimits);
	
	StaticExecute(
		InExecuteContext,
		Items,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_7_Array,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_CCDIKItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_CCDIKItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray;
class UScriptStruct* FRigUnit_CCDIKItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CCDIKItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CCDIKItemArray_Execute;
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("bStartFromTail"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("BaseRotationLimit"), TEXT("float"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("RotationLimits"), TEXT("TArray<FRigUnit_CCDIK_RotationLimitPerItem>"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_CCDIKItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_CCDIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CCDIKItemArray::Execute"), &FRigUnit_CCDIKItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton, Arguments_FRigUnit_CCDIKItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CCDIKItemArray>()
{
	return FRigUnit_CCDIKItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The CCID solver can solve N-Bone chains using \n * the Cyclic Coordinate Descent Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "DisplayName", "CCDIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "The CCID solver can solve N-Bone chains using\nthe Cyclic Coordinate Descent Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CCDIKItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The chain to use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the direction of the solvers is flipped.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true the direction of the solvers is flipped." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FRigUnit_CCDIKItemArray*)Obj)->bStartFromTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The general rotation limit to be applied to bones\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "The general rotation limit to be applied to bones" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit = { "BaseRotationLimit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, BaseRotationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem, METADATA_PARAMS(nullptr, 0) }; // 212545948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the limits of rotation per bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "Defines the limits of rotation per bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_MetaData)) }; // 212545948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_CCDIKItemArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_CCDIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_CCDIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_CCDIKItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData_MetaData)) }; // 1117435438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bStartFromTail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_BaseRotationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_RotationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_CCDIKItemArray",
		sizeof(FRigUnit_CCDIKItemArray),
		alignof(FRigUnit_CCDIKItemArray),
		Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray.InnerSingleton;
	}

void FRigUnit_CCDIKItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_CCDIKItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits_7_Array(RotationLimits);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		EffectorTransform,
		Precision,
		Weight,
		MaxIterations,
		bStartFromTail,
		BaseRotationLimit,
		RotationLimits_7_Array,
		bPropagateToChildren,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_CCDIK_RotationLimit::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimit_Statics::NewStructOps, TEXT("RigUnit_CCDIK_RotationLimit"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_RotationLimit), 4081812210U) },
		{ FRigUnit_CCDIK_RotationLimitPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_RotationLimitPerItem_Statics::NewStructOps, TEXT("RigUnit_CCDIK_RotationLimitPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_RotationLimitPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_RotationLimitPerItem), 212545948U) },
		{ FRigUnit_CCDIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_CCDIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK_WorkData), 1117435438U) },
		{ FRigUnit_CCDIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::NewStructOps, TEXT("RigUnit_CCDIK"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIK), 547500103U) },
		{ FRigUnit_CCDIKPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIKPerItem_Statics::NewStructOps, TEXT("RigUnit_CCDIKPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIKPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIKPerItem), 2259963834U) },
		{ FRigUnit_CCDIKItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::NewStructOps, TEXT("RigUnit_CCDIKItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_CCDIKItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CCDIKItemArray), 2730078630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_1400565244(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_CCDIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
