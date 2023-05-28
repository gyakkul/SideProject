// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ModifyTransforms() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigModifyBoneMode;
	static UEnum* EControlRigModifyBoneMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigModifyBoneMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigModifyBoneMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigModifyBoneMode"));
		}
		return Z_Registration_Info_UEnum_EControlRigModifyBoneMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigModifyBoneMode>()
	{
		return EControlRigModifyBoneMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enumerators[] = {
		{ "EControlRigModifyBoneMode::OverrideLocal", (int64)EControlRigModifyBoneMode::OverrideLocal },
		{ "EControlRigModifyBoneMode::OverrideGlobal", (int64)EControlRigModifyBoneMode::OverrideGlobal },
		{ "EControlRigModifyBoneMode::AdditiveLocal", (int64)EControlRigModifyBoneMode::AdditiveLocal },
		{ "EControlRigModifyBoneMode::AdditiveGlobal", (int64)EControlRigModifyBoneMode::AdditiveGlobal },
		{ "EControlRigModifyBoneMode::Max", (int64)EControlRigModifyBoneMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enum_MetaDataParams[] = {
		{ "AdditiveGlobal.Comment", "/**\n     * Additive to existing global transform.\n     * Input transform is added as a global offset in the root of the hierarchy.\n\x09 */" },
		{ "AdditiveGlobal.Name", "EControlRigModifyBoneMode::AdditiveGlobal" },
		{ "AdditiveGlobal.ToolTip", "Additive to existing global transform.\nInput transform is added as a global offset in the root of the hierarchy." },
		{ "AdditiveLocal.Comment", "/** \n\x09 * Additive to existing local transform.\n\x09 * Input transform is added within the bone's space.\n\x09 */" },
		{ "AdditiveLocal.Name", "EControlRigModifyBoneMode::AdditiveLocal" },
		{ "AdditiveLocal.ToolTip", "Additive to existing local transform.\nInput transform is added within the bone's space." },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigModifyBoneMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "OverrideGlobal.Comment", "/** Override existing global transform */" },
		{ "OverrideGlobal.Name", "EControlRigModifyBoneMode::OverrideGlobal" },
		{ "OverrideGlobal.ToolTip", "Override existing global transform" },
		{ "OverrideLocal.Comment", "/** Override existing local transform */" },
		{ "OverrideLocal.Name", "EControlRigModifyBoneMode::OverrideLocal" },
		{ "OverrideLocal.ToolTip", "Override existing local transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigModifyBoneMode",
		"EControlRigModifyBoneMode",
		Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode()
	{
		if (!Z_Registration_Info_UEnum_EControlRigModifyBoneMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigModifyBoneMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigModifyBoneMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem;
class UScriptStruct* FRigUnit_ModifyTransforms_PerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyTransforms_PerItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyTransforms_PerItem>()
{
	return FRigUnit_ModifyTransforms_PerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyTransforms_PerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "FRigUnit_ModifyTransforms_PerItem" },
		{ "Comment", "/**\n\x09 * The item to set the transform for.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "The item to set the transform for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms_PerItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "FRigUnit_ModifyTransforms_PerItem" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "The transform value to set for the given Bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms_PerItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ModifyTransforms_PerItem",
		sizeof(FRigUnit_ModifyTransforms_PerItem),
		alignof(FRigUnit_ModifyTransforms_PerItem),
		Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData;
class UScriptStruct* FRigUnit_ModifyTransforms_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyTransforms_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyTransforms_WorkData>()
{
	return FRigUnit_ModifyTransforms_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyTransforms_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewProp_CachedItems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ModifyTransforms_WorkData",
		sizeof(FRigUnit_ModifyTransforms_WorkData),
		alignof(FRigUnit_ModifyTransforms_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ModifyTransforms>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ModifyTransforms cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms;
class UScriptStruct* FRigUnit_ModifyTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ModifyTransforms_Execute;
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("ItemToModify"), TEXT("TArray<FRigUnit_ModifyTransforms_PerItem>"));
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("WeightMinimum"), TEXT("float"));
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("WeightMaximum"), TEXT("float"));
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("Mode"), TEXT("EControlRigModifyBoneMode"));
		Arguments_FRigUnit_ModifyTransforms_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_ModifyTransforms_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ModifyTransforms::Execute"), &FRigUnit_ModifyTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.OuterSingleton, Arguments_FRigUnit_ModifyTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyTransforms>()
{
	return FRigUnit_ModifyTransforms::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToModify_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToModify_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * Modify Transforms is used to perform a change in the hierarchy by setting one or more bones' transforms\n */" },
		{ "DisplayName", "Modify Transforms" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "ModifyBone" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "Modify Transforms is used to perform a change in the hierarchy by setting one or more bones' transforms" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyTransforms>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify_Inner = { "ItemToModify", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem, METADATA_PARAMS(nullptr, 0) }; // 1569866288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The items to modify.\n\x09 */" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "The items to modify." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify = { "ItemToModify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, ItemToModify), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify_MetaData)) }; // 1569866288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * At 1 this sets the transform, between 0 and 1 the transform is blended with previous results.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "At 1 this sets the transform, between 0 and 1 the transform is blended with previous results." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The minimum of the weight - defaults to 0.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "The minimum of the weight - defaults to 0.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMinimum = { "WeightMinimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, WeightMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The maximum of the weight - defaults to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "The maximum of the weight - defaults to 1.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMaximum = { "WeightMaximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, WeightMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space, additive or override.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space, additive or override." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, Mode), Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode_MetaData)) }; // 3240575816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WorkData_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyTransforms, WorkData), Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WorkData_MetaData)) }; // 399177927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_ItemToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WeightMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ModifyTransforms",
		sizeof(FRigUnit_ModifyTransforms),
		alignof(FRigUnit_ModifyTransforms),
		Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms.InnerSingleton;
	}

void FRigUnit_ModifyTransforms::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ModifyTransforms::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_ModifyTransforms_PerItem> ItemToModify_0_Array(ItemToModify);
	
	StaticExecute(
		InExecuteContext,
		ItemToModify_0_Array,
		Weight,
		WeightMinimum,
		WeightMaximum,
		Mode,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::EnumInfo[] = {
		{ EControlRigModifyBoneMode_StaticEnum, TEXT("EControlRigModifyBoneMode"), &Z_Registration_Info_UEnum_EControlRigModifyBoneMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240575816U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ModifyTransforms_PerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics::NewStructOps, TEXT("RigUnit_ModifyTransforms_PerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_PerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyTransforms_PerItem), 1569866288U) },
		{ FRigUnit_ModifyTransforms_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics::NewStructOps, TEXT("RigUnit_ModifyTransforms_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyTransforms_WorkData), 399177927U) },
		{ FRigUnit_ModifyTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::NewStructOps, TEXT("RigUnit_ModifyTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyTransforms), 459308319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_1064864564(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
