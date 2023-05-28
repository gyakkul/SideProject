// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TwistBones() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBones();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData;
class UScriptStruct* FRigUnit_TwistBones_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwistBones_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwistBones_WorkData>()
{
	return FRigUnit_TwistBones_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics
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
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemRatios_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemRatios_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemRatios;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwistBones_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios_Inner = { "ItemRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios = { "ItemRatios", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones_WorkData, ItemRatios), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms_Inner = { "ItemTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms = { "ItemTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones_WorkData, ItemTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemRatios,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewProp_ItemTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_TwistBones_WorkData",
		sizeof(FRigUnit_TwistBones_WorkData),
		alignof(FRigUnit_TwistBones_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_TwistBones>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TwistBones cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwistBones;
class UScriptStruct* FRigUnit_TwistBones::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwistBones, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwistBones"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwistBones_Execute;
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("PoleAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("TwistEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_TwistBones_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TwistBones_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwistBones::Execute"), &FRigUnit_TwistBones::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.OuterSingleton, Arguments_FRigUnit_TwistBones_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwistBones>()
{
	return FRigUnit_TwistBones::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TwistEaseType;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Creates a gradient of twist rotation along a chain.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Twist Bones" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "Creates a gradient of twist rotation along a chain." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwistBones>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to twist\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The name of the first bone to twist" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to twist\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The name of the last bone to twist" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The axis to twist the bones around\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The axis to twist the bones around" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_PoleAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The axis to use for the pole vector for each bone\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The axis to use for the pole vector for each bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_PoleAxis = { "PoleAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, PoleAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_PoleAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_PoleAxis_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between two twists.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The easing to use between two twists." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType = { "TwistEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, TwistEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_TwistBones*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwistBones), &Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBones, WorkData), Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_WorkData_MetaData)) }; // 223735996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_PoleAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_TwistEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TwistBones",
		sizeof(FRigUnit_TwistBones),
		alignof(FRigUnit_TwistBones),
		Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBones()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwistBones.InnerSingleton;
	}

void FRigUnit_TwistBones::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwistBones::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		TwistAxis,
		PoleAxis,
		TwistEaseType,
		Weight,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_TwistBonesPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TwistBonesPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem;
class UScriptStruct* FRigUnit_TwistBonesPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwistBonesPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwistBonesPerItem_Execute;
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("TwistAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("PoleAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("TwistEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_TwistBonesPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_TwistBones_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwistBonesPerItem::Execute"), &FRigUnit_TwistBonesPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.OuterSingleton, Arguments_FRigUnit_TwistBonesPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwistBonesPerItem>()
{
	return FRigUnit_TwistBonesPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistEaseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistEaseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TwistEaseType;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Creates a gradient of twist rotation along a collection of items.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Twist Bones" },
		{ "Keywords", "TwistBones" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "Creates a gradient of twist rotation along a collection of items." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwistBonesPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to twist\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The items to twist" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The axis to twist the bones around\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The axis to twist the bones around" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_PoleAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The axis to use for the pole vector for each bone\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The axis to use for the pole vector for each bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_PoleAxis = { "PoleAxis", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, PoleAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_PoleAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_PoleAxis_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between two twists.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The easing to use between two twists." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType = { "TwistEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, TwistEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_TwistBonesPerItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwistBonesPerItem), &Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwistBonesPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_WorkData_MetaData)) }; // 223735996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_PoleAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_TwistEaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TwistBonesPerItem",
		sizeof(FRigUnit_TwistBonesPerItem),
		alignof(FRigUnit_TwistBonesPerItem),
		Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem.InnerSingleton;
	}

void FRigUnit_TwistBonesPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwistBonesPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		TwistAxis,
		PoleAxis,
		TwistEaseType,
		Weight,
		bPropagateToChildren,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_TwistBones_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics::NewStructOps, TEXT("RigUnit_TwistBones_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_TwistBones_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwistBones_WorkData), 223735996U) },
		{ FRigUnit_TwistBones::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics::NewStructOps, TEXT("RigUnit_TwistBones"), &Z_Registration_Info_UScriptStruct_RigUnit_TwistBones, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwistBones), 2598646649U) },
		{ FRigUnit_TwistBonesPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics::NewStructOps, TEXT("RigUnit_TwistBonesPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_TwistBonesPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwistBonesPerItem), 4101470310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_2348456496(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
