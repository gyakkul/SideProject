// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/Rig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URig();
	ENGINE_API UClass* Z_Construct_UClass_URig_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControlConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Node;
class UScriptStruct* FNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Node.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Node.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Node"));
	}
	return Z_Registration_Info_UScriptStruct_Node.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNode>()
{
	return FNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvanced_MetaData[];
#endif
		static void NewProp_bAdvanced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvanced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Rig Controller for bone transform **/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Rig Controller for bone transform *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FNode" },
		{ "Comment", "/** Name of the original node. We don't allow to change this. This is used for identity.**/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Name of the original node. We don't allow to change this. This is used for identity.*" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNode, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData[] = {
		{ "Category", "FNode" },
		{ "Comment", "/** We save Parent Node but if the parent node is removed, it will reset to root */" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "We save Parent Node but if the parent node is removed, it will reset to root" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNode, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Absolute transform of the node. Hoping to use this data in the future to render*/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Absolute transform of the node. Hoping to use this data in the future to render" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "FNode" },
		{ "Comment", "/** This is Display Name where it will be used to display in Retarget Manager. This name has to be unique. */" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This is Display Name where it will be used to display in Retarget Manager. This name has to be unique." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNode, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData[] = {
		{ "Category", "FNode" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_SetBit(void* Obj)
	{
		((FNode*)Obj)->bAdvanced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced = { "bAdvanced", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNode), &Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNode_Statics::NewProp_bAdvanced,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Node",
		sizeof(FNode),
		alignof(FNode),
		Z_Construct_UScriptStruct_FNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNode()
	{
		if (!Z_Registration_Info_UScriptStruct_Node.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Node.InnerSingleton, Z_Construct_UScriptStruct_FNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Node.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlConstraint;
	static UEnum* EControlConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EControlConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EControlConstraint"));
		}
		return Z_Registration_Info_UEnum_EControlConstraint.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EControlConstraint::Type>()
	{
		return EControlConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EControlConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enumerators[] = {
		{ "EControlConstraint::Orientation", (int64)EControlConstraint::Orientation },
		{ "EControlConstraint::Translation", (int64)EControlConstraint::Translation },
		{ "EControlConstraint::MAX", (int64)EControlConstraint::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Control Constraint Type */" },
		{ "MAX.Comment", "/** Max Number. */" },
		{ "MAX.Name", "EControlConstraint::MAX" },
		{ "MAX.ToolTip", "Max Number." },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "Orientation.Comment", "/** Rotation constraint. */" },
		{ "Orientation.Name", "EControlConstraint::Orientation" },
		{ "Orientation.ToolTip", "Rotation constraint." },
		{ "ToolTip", "Control Constraint Type" },
		{ "Translation.Comment", "/** Translation constraint. */" },
		{ "Translation.Name", "EControlConstraint::Translation" },
		{ "Translation.ToolTip", "Translation constraint." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EControlConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EControlConstraint",
		"EControlConstraint::Type",
		Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EControlConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EControlConstraint()
	{
		if (!Z_Registration_Info_UEnum_EControlConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlConstraint.InnerSingleton, Z_Construct_UEnum_Engine_EControlConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstraintTransform;
	static UEnum* EConstraintTransform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstraintTransform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstraintTransform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EConstraintTransform, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EConstraintTransform"));
		}
		return Z_Registration_Info_UEnum_EConstraintTransform.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EConstraintTransform::Type>()
	{
		return EConstraintTransform_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EConstraintTransform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enumerators[] = {
		{ "EConstraintTransform::Absolute", (int64)EConstraintTransform::Absolute },
		{ "EConstraintTransform::Relative", (int64)EConstraintTransform::Relative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "/** Absolute value. */" },
		{ "Absolute.Name", "EConstraintTransform::Absolute" },
		{ "Absolute.ToolTip", "Absolute value." },
		{ "Comment", "/** Constraint Transform Type. - currently unused */" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "Relative.Comment", "/** Apply relative transform from ref pose. */" },
		{ "Relative.Name", "EConstraintTransform::Relative" },
		{ "Relative.ToolTip", "Apply relative transform from ref pose." },
		{ "ToolTip", "Constraint Transform Type. - currently unused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EConstraintTransform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EConstraintTransform",
		"EConstraintTransform::Type",
		Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EConstraintTransform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EConstraintTransform()
	{
		if (!Z_Registration_Info_UEnum_EConstraintTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstraintTransform.InnerSingleton, Z_Construct_UEnum_Engine_EConstraintTransform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstraintTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformConstraint;
class UScriptStruct* FRigTransformConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RigTransformConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRigTransformConstraint>()
{
	return FRigTransformConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigTransformConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranformType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranformType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData[] = {
		{ "Comment", "/*EditAnywhere, Category=\"FTransformBaseConstraint\"*/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType = { "TranformType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformConstraint, TranformType), Z_Construct_UEnum_Engine_EConstraintTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType_MetaData)) }; // 3911294752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData[] = {
		{ "Category", "FTransformBaseConstraint" },
		{ "Comment", "/** Parent space that is defined **/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Parent space that is defined *" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace = { "ParentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformConstraint, ParentSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/*EditAnywhere, Category=\"FTransformBaseConstraint\"*/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "EditAnywhere, Category=\"FTransformBaseConstraint\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformConstraint, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_TranformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_ParentSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RigTransformConstraint",
		sizeof(FRigTransformConstraint),
		alignof(FRigTransformConstraint),
		Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigTransformConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigTransformConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigTransformConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformBaseConstraint;
class UScriptStruct* FTransformBaseConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformBaseConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformBaseConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBaseConstraint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TransformBaseConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_TransformBaseConstraint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformBaseConstraint>()
{
	return FTransformBaseConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This defines what constraint it is defined */" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This defines what constraint it is defined" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBaseConstraint>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_Inner = { "TransformConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigTransformConstraint, METADATA_PARAMS(nullptr, 0) }; // 2959887360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData[] = {
		{ "Category", "FTransformBaseConstraint" },
		{ "Comment", "/** What transform type **/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "What transform type *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints = { "TransformConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformBaseConstraint, TransformConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_MetaData)) }; // 2959887360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewProp_TransformConstraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TransformBaseConstraint",
		sizeof(FTransformBaseConstraint),
		alignof(FTransformBaseConstraint),
		Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBaseConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformBaseConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformBaseConstraint.InnerSingleton, Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformBaseConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformBase;
class UScriptStruct* FTransformBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TransformBase"));
	}
	return Z_Registration_Info_UScriptStruct_TransformBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformBase>()
{
	return FTransformBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set. */" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "FTransformBase" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformBase, Node), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData[] = {
		{ "Category", "FTransformBase" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Constraints, FTransformBase), nullptr, nullptr, STRUCT_OFFSET(FTransformBase, Constraints), Z_Construct_UScriptStruct_FTransformBaseConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints_MetaData)) }; // 1113215870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformBase_Statics::NewProp_Constraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TransformBase",
		sizeof(FTransformBase),
		alignof(FTransformBase),
		Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformBase()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformBase.InnerSingleton, Z_Construct_UScriptStruct_FTransformBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformBase.InnerSingleton;
	}
	void URig::StaticRegisterNativesURig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URig);
	UClass* Z_Construct_UClass_URig_NoRegister()
	{
		return URig::StaticClass();
	}
	struct Z_Construct_UClass_URig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformBases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformBases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformBases;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09URig : that has rigging data for skeleton\n *\x09\x09- used for retargeting\n *\x09\x09- support to share different animations\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Rig.h" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "URig : that has rigging data for skeleton\n        - used for retargeting\n        - support to share different animations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URig_Statics::NewProp_TransformBases_Inner = { "TransformBases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformBase, METADATA_PARAMS(nullptr, 0) }; // 221855390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Skeleton bone tree - each contains name and parent index**/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URig_Statics::NewProp_TransformBases = { "TransformBases", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URig, TransformBases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URig_Statics::NewProp_TransformBases_MetaData)) }; // 221855390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URig_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNode, METADATA_PARAMS(nullptr, 0) }; // 2119817587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Skeleton bone tree - each contains name and parent index**/" },
		{ "ModuleRelativePath", "Classes/Animation/Rig.h" },
		{ "ToolTip", "Skeleton bone tree - each contains name and parent index*" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URig_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URig, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URig_Statics::NewProp_Nodes_MetaData)) }; // 2119817587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_TransformBases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_TransformBases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URig_Statics::NewProp_Nodes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(URig, INodeMappingProviderInterface), false },  // 3118747077
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URig_Statics::ClassParams = {
		&URig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URig_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URig_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URig()
	{
		if (!Z_Registration_Info_UClass_URig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URig.OuterSingleton, Z_Construct_UClass_URig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URig.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URig>()
	{
		return URig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URig);
	URig::~URig() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URig)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::EnumInfo[] = {
		{ EControlConstraint_StaticEnum, TEXT("EControlConstraint"), &Z_Registration_Info_UEnum_EControlConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 883260179U) },
		{ EConstraintTransform_StaticEnum, TEXT("EConstraintTransform"), &Z_Registration_Info_UEnum_EConstraintTransform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3911294752U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ScriptStructInfo[] = {
		{ FNode::StaticStruct, Z_Construct_UScriptStruct_FNode_Statics::NewStructOps, TEXT("Node"), &Z_Registration_Info_UScriptStruct_Node, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNode), 2119817587U) },
		{ FRigTransformConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigTransformConstraint_Statics::NewStructOps, TEXT("RigTransformConstraint"), &Z_Registration_Info_UScriptStruct_RigTransformConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformConstraint), 2959887360U) },
		{ FTransformBaseConstraint::StaticStruct, Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics::NewStructOps, TEXT("TransformBaseConstraint"), &Z_Registration_Info_UScriptStruct_TransformBaseConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformBaseConstraint), 1113215870U) },
		{ FTransformBase::StaticStruct, Z_Construct_UScriptStruct_FTransformBase_Statics::NewStructOps, TEXT("TransformBase"), &Z_Registration_Info_UScriptStruct_TransformBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformBase), 221855390U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URig, URig::StaticClass, TEXT("URig"), &Z_Registration_Info_UClass_URig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URig), 1480772088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_22663688(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
