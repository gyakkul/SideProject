// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ModifyBoneTransforms() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone;
class UScriptStruct* FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms_PerBone"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms_PerBone>()
{
	return FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms_PerBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "FRigUnit_ModifyBoneTransforms_PerBone" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The name of the Bone to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms_PerBone, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "FRigUnit_ModifyBoneTransforms_PerBone" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The transform value to set for the given Bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms_PerBone, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_ModifyBoneTransforms_PerBone",
		sizeof(FRigUnit_ModifyBoneTransforms_PerBone),
		alignof(FRigUnit_ModifyBoneTransforms_PerBone),
		Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ModifyBoneTransforms_WorkData>() == std::is_polymorphic<FRigUnit_ModifyTransforms_WorkData>(), "USTRUCT FRigUnit_ModifyBoneTransforms_WorkData cannot be polymorphic unless super FRigUnit_ModifyTransforms_WorkData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData;
class UScriptStruct* FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms_WorkData>()
{
	return FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms_WorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData,
		&NewStructOps,
		"RigUnit_ModifyBoneTransforms_WorkData",
		sizeof(FRigUnit_ModifyBoneTransforms_WorkData),
		alignof(FRigUnit_ModifyBoneTransforms_WorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ModifyBoneTransforms>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ModifyBoneTransforms cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms;
class UScriptStruct* FRigUnit_ModifyBoneTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ModifyBoneTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ModifyBoneTransforms_Execute;
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("BoneToModify"), TEXT("TArray<FRigUnit_ModifyBoneTransforms_PerBone>"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WeightMinimum"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WeightMaximum"), TEXT("float"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("Mode"), TEXT("EControlRigModifyBoneMode"));
		Arguments_FRigUnit_ModifyBoneTransforms_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_ModifyBoneTransforms_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ModifyBoneTransforms::Execute"), &FRigUnit_ModifyBoneTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton, Arguments_FRigUnit_ModifyBoneTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ModifyBoneTransforms>()
{
	return FRigUnit_ModifyBoneTransforms::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneToModify;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * ModifyBonetransforms is used to perform a change in the hierarchy by setting one or more bones' transforms.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Modify Transforms" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "ModifyBone" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "ModifyBonetransforms is used to perform a change in the hierarchy by setting one or more bones' transforms." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ModifyBoneTransforms>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_Inner = { "BoneToModify", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone, METADATA_PARAMS(nullptr, 0) }; // 938643204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The bones to modify.\n\x09 */" },
		{ "DefaultArraySize", "1" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The bones to modify." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, BoneToModify), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_MetaData)) }; // 938643204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * At 1 this sets the transform, between 0 and 1 the transform is blended with previous results.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "At 1 this sets the transform, between 0 and 1 the transform is blended with previous results." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The minimum of the weight - defaults to 0.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The minimum of the weight - defaults to 0.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum = { "WeightMinimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WeightMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**\n\x09 * The maximum of the weight - defaults to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "The maximum of the weight - defaults to 1.0" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum = { "WeightMaximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WeightMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space, additive or override.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space, additive or override." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, Mode), Z_Construct_UEnum_ControlRig_EControlRigModifyBoneMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_MetaData)) }; // 3240575816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_ModifyBoneTransforms.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ModifyBoneTransforms, WorkData), Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData_MetaData)) }; // 2702658096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_BoneToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WeightMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ModifyBoneTransforms",
		sizeof(FRigUnit_ModifyBoneTransforms),
		alignof(FRigUnit_ModifyBoneTransforms),
		Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms.InnerSingleton;
	}

void FRigUnit_ModifyBoneTransforms::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ModifyBoneTransforms::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify_0_Array(BoneToModify);
	
	StaticExecute(
		InExecuteContext,
		BoneToModify_0_Array,
		Weight,
		WeightMinimum,
		WeightMaximum,
		Mode,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ModifyBoneTransforms_PerBone::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms_PerBone"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_PerBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms_PerBone), 938643204U) },
		{ FRigUnit_ModifyBoneTransforms_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms_WorkData), 2702658096U) },
		{ FRigUnit_ModifyBoneTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::NewStructOps, TEXT("RigUnit_ModifyBoneTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_ModifyBoneTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ModifyBoneTransforms), 2734924031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_2541072127(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
