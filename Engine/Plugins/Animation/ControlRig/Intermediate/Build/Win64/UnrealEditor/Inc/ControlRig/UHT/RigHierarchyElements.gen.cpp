// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchyElements.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyElements() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlTransformChannel();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBaseElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigComputedTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurveElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementParentConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigMultiParentElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigNullElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPreferredEulerAngles();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigReferenceElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodyElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodySettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSingleParentElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformElement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigTransformType;
	static UEnum* ERigTransformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigTransformType"));
		}
		return Z_Registration_Info_UEnum_ERigTransformType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigTransformType::Type>()
	{
		return ERigTransformType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigTransformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enumerators[] = {
		{ "ERigTransformType::InitialLocal", (int64)ERigTransformType::InitialLocal },
		{ "ERigTransformType::CurrentLocal", (int64)ERigTransformType::CurrentLocal },
		{ "ERigTransformType::InitialGlobal", (int64)ERigTransformType::InitialGlobal },
		{ "ERigTransformType::CurrentGlobal", (int64)ERigTransformType::CurrentGlobal },
		{ "ERigTransformType::NumTransformTypes", (int64)ERigTransformType::NumTransformTypes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enum_MetaDataParams[] = {
		{ "CurrentGlobal.Name", "ERigTransformType::CurrentGlobal" },
		{ "CurrentLocal.Name", "ERigTransformType::CurrentLocal" },
		{ "InitialGlobal.Name", "ERigTransformType::InitialGlobal" },
		{ "InitialLocal.Name", "ERigTransformType::InitialLocal" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "NumTransformTypes.Name", "ERigTransformType::NumTransformTypes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigTransformType",
		"ERigTransformType::Type",
		Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType()
	{
		if (!Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigTransformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigTransformType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigComputedTransform;
class UScriptStruct* FRigComputedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigComputedTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigComputedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigComputedTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigComputedTransform>()
{
	return FRigComputedTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigComputedTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigComputedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigComputedTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigComputedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigComputedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigComputedTransform",
		sizeof(FRigComputedTransform),
		alignof(FRigComputedTransform),
		Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigComputedTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigComputedTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigComputedTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigComputedTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform;
class UScriptStruct* FRigLocalAndGlobalTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigLocalAndGlobalTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigLocalAndGlobalTransform>()
{
	return FRigLocalAndGlobalTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigLocalAndGlobalTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigLocalAndGlobalTransform, Local), Z_Construct_UScriptStruct_FRigComputedTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local_MetaData)) }; // 4166707439
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigLocalAndGlobalTransform, Global), Z_Construct_UScriptStruct_FRigComputedTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global_MetaData)) }; // 4166707439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigLocalAndGlobalTransform",
		sizeof(FRigLocalAndGlobalTransform),
		alignof(FRigLocalAndGlobalTransform),
		Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform;
class UScriptStruct* FRigCurrentAndInitialTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurrentAndInitialTransform"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurrentAndInitialTransform>()
{
	return FRigCurrentAndInitialTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurrentAndInitialTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigCurrentAndInitialTransform, Current), Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current_MetaData)) }; // 955482661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigCurrentAndInitialTransform, Initial), Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial_MetaData)) }; // 955482661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewProp_Initial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigCurrentAndInitialTransform",
		sizeof(FRigCurrentAndInitialTransform),
		alignof(FRigCurrentAndInitialTransform),
		Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles;
class UScriptStruct* FRigPreferredEulerAngles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPreferredEulerAngles, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPreferredEulerAngles"));
	}
	return Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPreferredEulerAngles>()
{
	return FRigPreferredEulerAngles::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPreferredEulerAngles>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPreferredEulerAngles, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPreferredEulerAngles, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPreferredEulerAngles, Initial), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewProp_Initial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigPreferredEulerAngles",
		sizeof(FRigPreferredEulerAngles),
		alignof(FRigPreferredEulerAngles),
		Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigPreferredEulerAngles()
	{
		if (!Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton, Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBaseElement;
class UScriptStruct* FRigBaseElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBaseElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigBaseElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBaseElement>()
{
	return FRigBaseElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigBaseElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAtInstructionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CreatedAtInstructionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBaseElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBaseElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_NameString_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_NameString = { "NameString", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBaseElement, NameString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_NameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_NameString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBaseElement, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex = { "SubIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBaseElement, SubIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((FRigBaseElement*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigBaseElement), &Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex = { "CreatedAtInstructionIndex", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBaseElement, CreatedAtInstructionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_NameString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_SubIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewProp_CreatedAtInstructionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBaseElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigBaseElement",
		sizeof(FRigBaseElement),
		alignof(FRigBaseElement),
		Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBaseElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBaseElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigBaseElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton, Z_Construct_UScriptStruct_FRigBaseElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigBaseElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigTransformElement>() == std::is_polymorphic<FRigBaseElement>(), "USTRUCT FRigTransformElement cannot be polymorphic unless super FRigBaseElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformElement;
class UScriptStruct* FRigTransformElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTransformElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTransformElement>()
{
	return FRigTransformElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigTransformElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "RigElement" },
		{ "DisplayAfter", "Index" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformElement, Pose), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose_MetaData)) }; // 3454371401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigBaseElement,
		&NewStructOps,
		"RigTransformElement",
		sizeof(FRigTransformElement),
		alignof(FRigTransformElement),
		Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigTransformElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigTransformElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigSingleParentElement>() == std::is_polymorphic<FRigTransformElement>(), "USTRUCT FRigSingleParentElement cannot be polymorphic unless super FRigTransformElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSingleParentElement;
class UScriptStruct* FRigSingleParentElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSingleParentElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigSingleParentElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigSingleParentElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigSingleParentElement>()
{
	return FRigSingleParentElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigSingleParentElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSingleParentElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigTransformElement,
		&NewStructOps,
		"RigSingleParentElement",
		sizeof(FRigSingleParentElement),
		alignof(FRigSingleParentElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigSingleParentElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton, Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigSingleParentElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementWeight;
class UScriptStruct* FRigElementWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementWeight, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementWeight"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementWeight.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementWeight>()
{
	return FRigElementWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigElementWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementWeight, Location), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementWeight, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementWeight, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigElementWeight",
		sizeof(FRigElementWeight),
		alignof(FRigElementWeight),
		Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton, Z_Construct_UScriptStruct_FRigElementWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigElementWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementParentConstraint;
class UScriptStruct* FRigElementParentConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementParentConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementParentConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementParentConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementParentConstraint>()
{
	return FRigElementParentConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementParentConstraint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigElementParentConstraint",
		sizeof(FRigElementParentConstraint),
		alignof(FRigElementParentConstraint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigElementParentConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigElementParentConstraint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigMultiParentElement>() == std::is_polymorphic<FRigTransformElement>(), "USTRUCT FRigMultiParentElement cannot be polymorphic unless super FRigTransformElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigMultiParentElement;
class UScriptStruct* FRigMultiParentElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigMultiParentElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigMultiParentElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigMultiParentElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigMultiParentElement>()
{
	return FRigMultiParentElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigMultiParentElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigMultiParentElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigTransformElement,
		&NewStructOps,
		"RigMultiParentElement",
		sizeof(FRigMultiParentElement),
		alignof(FRigMultiParentElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigMultiParentElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton, Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigMultiParentElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigBoneElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigBoneElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBoneElement;
class UScriptStruct* FRigBoneElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBoneElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigBoneElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBoneElement>()
{
	return FRigBoneElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigBoneElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBoneElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBoneElement>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType = { "BoneType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigBoneElement, BoneType), Z_Construct_UEnum_ControlRig_ERigBoneType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_MetaData)) }; // 4276824854
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewProp_BoneType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBoneElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigSingleParentElement,
		&NewStructOps,
		"RigBoneElement",
		sizeof(FRigBoneElement),
		alignof(FRigBoneElement),
		Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigBoneElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigBoneElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton, Z_Construct_UScriptStruct_FRigBoneElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigBoneElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigNullElement>() == std::is_polymorphic<FRigMultiParentElement>(), "USTRUCT FRigNullElement cannot be polymorphic unless super FRigMultiParentElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigNullElement;
class UScriptStruct* FRigNullElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigNullElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigNullElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigNullElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigNullElement>()
{
	return FRigNullElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigNullElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigNullElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigNullElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigNullElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigNullElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigMultiParentElement,
		&NewStructOps,
		"RigNullElement",
		sizeof(FRigNullElement),
		alignof(FRigNullElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigNullElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigNullElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigNullElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton, Z_Construct_UScriptStruct_FRigNullElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigNullElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlElementCustomization;
class UScriptStruct* FRigControlElementCustomization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElementCustomization, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlElementCustomization"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlElementCustomization.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlElementCustomization>()
{
	return FRigControlElementCustomization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableSpaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedSpaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlElementCustomization>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_Inner = { "AvailableSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces = { "AvailableSpaces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElementCustomization, AvailableSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_Inner = { "RemovedSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces = { "RemovedSpaces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElementCustomization, RemovedSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_AvailableSpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewProp_RemovedSpaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlElementCustomization",
		sizeof(FRigControlElementCustomization),
		alignof(FRigControlElementCustomization),
		Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton, Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlElementCustomization.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlTransformChannel;
	static UEnum* ERigControlTransformChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlTransformChannel"));
		}
		return Z_Registration_Info_UEnum_ERigControlTransformChannel.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlTransformChannel>()
	{
		return ERigControlTransformChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enumerators[] = {
		{ "ERigControlTransformChannel::TranslationX", (int64)ERigControlTransformChannel::TranslationX },
		{ "ERigControlTransformChannel::TranslationY", (int64)ERigControlTransformChannel::TranslationY },
		{ "ERigControlTransformChannel::TranslationZ", (int64)ERigControlTransformChannel::TranslationZ },
		{ "ERigControlTransformChannel::Pitch", (int64)ERigControlTransformChannel::Pitch },
		{ "ERigControlTransformChannel::Yaw", (int64)ERigControlTransformChannel::Yaw },
		{ "ERigControlTransformChannel::Roll", (int64)ERigControlTransformChannel::Roll },
		{ "ERigControlTransformChannel::ScaleX", (int64)ERigControlTransformChannel::ScaleX },
		{ "ERigControlTransformChannel::ScaleY", (int64)ERigControlTransformChannel::ScaleY },
		{ "ERigControlTransformChannel::ScaleZ", (int64)ERigControlTransformChannel::ScaleZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "Pitch.Name", "ERigControlTransformChannel::Pitch" },
		{ "Roll.Name", "ERigControlTransformChannel::Roll" },
		{ "ScaleX.Name", "ERigControlTransformChannel::ScaleX" },
		{ "ScaleY.Name", "ERigControlTransformChannel::ScaleY" },
		{ "ScaleZ.Name", "ERigControlTransformChannel::ScaleZ" },
		{ "TranslationX.Name", "ERigControlTransformChannel::TranslationX" },
		{ "TranslationY.Name", "ERigControlTransformChannel::TranslationY" },
		{ "TranslationZ.Name", "ERigControlTransformChannel::TranslationZ" },
		{ "Yaw.Name", "ERigControlTransformChannel::Yaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlTransformChannel",
		"ERigControlTransformChannel",
		Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlTransformChannel()
	{
		if (!Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlTransformChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlTransformChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlSettings;
class UScriptStruct* FRigControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlSettings>()
{
	return FRigControlSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurve_MetaData[];
#endif
		static void NewProp_bIsCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitEnabled_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LimitEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLimits_MetaData[];
#endif
		static void NewProp_bDrawLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShapeVisible_MetaData[];
#endif
		static void NewProp_bShapeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapeVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTransientControl_MetaData[];
#endif
		static void NewProp_bIsTransientControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransientControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlEnum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Customization_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Customization;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivenControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivenControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DrivenControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupWithParentControl_MetaData[];
#endif
		static void NewProp_bGroupWithParentControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupWithParentControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpaceSwitching_MetaData[];
#endif
		static void NewProp_bRestrictSpaceSwitching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpaceSwitching;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilteredChannels_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilteredChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredChannels;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimatable_MetaData[];
#endif
		static void NewProp_bAnimatable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShapeEnabled_MetaData[];
#endif
		static void NewProp_bShapeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapeEnabled;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, AnimationType), Z_Construct_UEnum_ControlRig_ERigControlAnimationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_MetaData)) }; // 1236207984
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_MetaData[] = {
		{ "Category", "Control" },
		{ "DisplayName", "Value Type" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, ControlType), Z_Construct_UEnum_ControlRig_ERigControlType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_MetaData)) }; // 1332923376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** the primary axis to use for float controls */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "the primary axis to use for float controls" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, PrimaryAxis), Z_Construct_UEnum_ControlRig_ERigControlAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_MetaData)) }; // 1900149964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_MetaData[] = {
		{ "Comment", "/** If Created from a Curve  Container*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If Created from a Curve  Container" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bIsCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve = { "bIsCurve", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_Inner = { "LimitEnabled", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigControlLimitEnabled, METADATA_PARAMS(nullptr, 0) }; // 1597237226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** True if the control has limits. */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "True if the control has limits." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled = { "LimitEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, LimitEnabled), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_MetaData)) }; // 1597237226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/**\n\x09 * True if the limits should be drawn in debug.\n\x09 * For this to be enabled you need to have at least one min and max limit turned on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "True if the limits should be drawn in debug.\nFor this to be enabled you need to have at least one min and max limit turned on." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bDrawLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits = { "bDrawLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The minimum limit of the control's value */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The minimum limit of the control's value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, MinimumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue_MetaData)) }; // 526117509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Limits" },
		{ "Comment", "/** The maximum limit of the control's value */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The maximum limit of the control's value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, MaximumValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue_MetaData)) }; // 526117509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Set to true if the shape is currently visible in 3d */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Set to true if the shape is currently visible in 3d" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bShapeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible = { "bShapeVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Defines how the shape visibility should be changed */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Defines how the shape visibility should be changed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility = { "ShapeVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, ShapeVisibility), Z_Construct_UEnum_ControlRig_ERigControlVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_MetaData)) }; // 4055407710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/* This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "This is optional UI setting - this doesn't mean this is always used, but it is optional for manipulation layer to use this" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, ShapeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor = { "ShapeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, ShapeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is transient and only visible in the control rig editor */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If the control is transient and only visible in the control rig editor" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bIsTransientControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl = { "bIsTransientControl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If the control is 4transient and only visible in the control rig editor */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If the control is 4transient and only visible in the control rig editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum = { "ControlEnum", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, ControlEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * The User interface customization used for a control\n\x09 * This will be used as the default content for the space picker and other widgets\n\x09 */" },
		{ "DisplayName", "Customization" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The User interface customization used for a control\nThis will be used as the default content for the space picker and other widgets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization = { "Customization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, Customization), Z_Construct_UScriptStruct_FRigControlElementCustomization, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization_MetaData)) }; // 3630895427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_Inner = { "DrivenControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * The list of driven controls for this proxy control.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "The list of driven controls for this proxy control." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls = { "DrivenControls", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, DrivenControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * If set to true the animation channel will be grouped with the parent control in sequencer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "If set to true the animation channel will be grouped with the parent control in sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bGroupWithParentControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl = { "bGroupWithParentControl", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Allow to space switch only to the available spaces\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Allow to space switch only to the available spaces" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bRestrictSpaceSwitching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching = { "bRestrictSpaceSwitching", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner = { "FilteredChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ControlRig_ERigControlTransformChannel, METADATA_PARAMS(nullptr, 0) }; // 3480083958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Filtered Visible Transform channels. If this is empty everything is visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Filtered Visible Transform channels. If this is empty everything is visible" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels = { "FilteredChannels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlSettings, FilteredChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_MetaData)) }; // 3480083958
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_MetaData[] = {
		{ "Comment", "/**\n\x09 * Deprecated properties.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use animation_type instead." },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Deprecated properties." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bAnimatable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable = { "bAnimatable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use animation_type or shape_visible instead." },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_SetBit(void* Obj)
	{
		((FRigControlSettings*)Obj)->bShapeEnabled_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled = { "bShapeEnabled", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlSettings), &Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_AnimationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_LimitEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bDrawLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_MaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ShapeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bIsTransientControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_ControlEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_Customization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_DrivenControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bGroupWithParentControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bRestrictSpaceSwitching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_FilteredChannels,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bAnimatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewProp_bShapeEnabled,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlSettings",
		sizeof(FRigControlSettings),
		alignof(FRigControlSettings),
		Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigControlSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigControlElement>() == std::is_polymorphic<FRigMultiParentElement>(), "USTRUCT FRigControlElement cannot be polymorphic unless super FRigMultiParentElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlElement;
class UScriptStruct* FRigControlElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlElement>()
{
	return FRigControlElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredEulerAngles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredEulerAngles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElement, Settings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings_MetaData)) }; // 2264367978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElement, Offset), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset_MetaData)) }; // 3454371401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElement, Shape), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape_MetaData)) }; // 3454371401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles_MetaData[] = {
		{ "Category", "RigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles = { "PreferredEulerAngles", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlElement, PreferredEulerAngles), Z_Construct_UScriptStruct_FRigPreferredEulerAngles, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles_MetaData)) }; // 1918025064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlElement_Statics::NewProp_PreferredEulerAngles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigMultiParentElement,
		&NewStructOps,
		"RigControlElement",
		sizeof(FRigControlElement),
		alignof(FRigControlElement),
		Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton, Z_Construct_UScriptStruct_FRigControlElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigCurveElement>() == std::is_polymorphic<FRigBaseElement>(), "USTRUCT FRigCurveElement cannot be polymorphic unless super FRigBaseElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurveElement;
class UScriptStruct* FRigCurveElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurveElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurveElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurveElement>()
{
	return FRigCurveElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigCurveElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurveElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigCurveElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurveElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurveElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigBaseElement,
		&NewStructOps,
		"RigCurveElement",
		sizeof(FRigCurveElement),
		alignof(FRigCurveElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurveElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurveElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigCurveElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton, Z_Construct_UScriptStruct_FRigCurveElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigCurveElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRigidBodySettings;
class UScriptStruct* FRigRigidBodySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRigidBodySettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRigidBodySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodySettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRigidBodySettings>()
{
	return FRigRigidBodySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRigidBodySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigRigidBodySettings, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewProp_Mass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigRigidBodySettings",
		sizeof(FRigRigidBodySettings),
		alignof(FRigRigidBodySettings),
		Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigRigidBodySettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigRigidBodyElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigRigidBodyElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigRigidBodyElement;
class UScriptStruct* FRigRigidBodyElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigRigidBodyElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigRigidBodyElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigRigidBodyElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigRigidBodyElement>()
{
	return FRigRigidBodyElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigRigidBodyElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigRigidBodyElement, Settings), Z_Construct_UScriptStruct_FRigRigidBodySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings_MetaData)) }; // 3426962083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigSingleParentElement,
		&NewStructOps,
		"RigRigidBodyElement",
		sizeof(FRigRigidBodyElement),
		alignof(FRigRigidBodyElement),
		Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigRigidBodyElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton, Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigRigidBodyElement.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigReferenceElement>() == std::is_polymorphic<FRigSingleParentElement>(), "USTRUCT FRigReferenceElement cannot be polymorphic unless super FRigSingleParentElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigReferenceElement;
class UScriptStruct* FRigReferenceElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigReferenceElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigReferenceElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigReferenceElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigReferenceElement>()
{
	return FRigReferenceElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigReferenceElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigReferenceElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigReferenceElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigReferenceElement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigReferenceElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigSingleParentElement,
		&NewStructOps,
		"RigReferenceElement",
		sizeof(FRigReferenceElement),
		alignof(FRigReferenceElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigReferenceElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigReferenceElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigReferenceElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton, Z_Construct_UScriptStruct_FRigReferenceElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigReferenceElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement;
class UScriptStruct* FRigHierarchyCopyPasteContentPerElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyCopyPasteContentPerElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyCopyPasteContentPerElement>()
{
	return FRigHierarchyCopyPasteContentPerElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyCopyPasteContentPerElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_Inner = { "ParentWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 4235111560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights = { "ParentWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, ParentWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_MetaData)) }; // 4235111560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContentPerElement, Pose), Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose_MetaData)) }; // 3454371401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_ParentWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchyCopyPasteContentPerElement",
		sizeof(FRigHierarchyCopyPasteContentPerElement),
		alignof(FRigHierarchyCopyPasteContentPerElement),
		Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent;
class UScriptStruct* FRigHierarchyCopyPasteContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyCopyPasteContent"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyCopyPasteContent>()
{
	return FRigHierarchyCopyPasteContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Types_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Types_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Contents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalTransforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyCopyPasteContent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement, METADATA_PARAMS(nullptr, 0) }; // 3981963925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_MetaData)) }; // 3981963925
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(nullptr, 0) }; // 3496922284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_MetaData[] = {
		{ "Comment", "// Maintain properties below for backwards compatibility pre-5.0\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
		{ "ToolTip", "Maintain properties below for backwards compatibility pre-5.0" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_MetaData)) }; // 3496922284
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_Inner = { "Contents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, Contents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_Inner = { "LocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms = { "LocalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, LocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_Inner = { "GlobalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyElements.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms = { "GlobalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyCopyPasteContent, GlobalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Elements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Types,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_Contents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_LocalTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewProp_GlobalTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchyCopyPasteContent",
		sizeof(FRigHierarchyCopyPasteContent),
		alignof(FRigHierarchyCopyPasteContent),
		Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::EnumInfo[] = {
		{ ERigTransformType_StaticEnum, TEXT("ERigTransformType"), &Z_Registration_Info_UEnum_ERigTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 994774967U) },
		{ ERigControlTransformChannel_StaticEnum, TEXT("ERigControlTransformChannel"), &Z_Registration_Info_UEnum_ERigControlTransformChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3480083958U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::ScriptStructInfo[] = {
		{ FRigComputedTransform::StaticStruct, Z_Construct_UScriptStruct_FRigComputedTransform_Statics::NewStructOps, TEXT("RigComputedTransform"), &Z_Registration_Info_UScriptStruct_RigComputedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigComputedTransform), 4166707439U) },
		{ FRigLocalAndGlobalTransform::StaticStruct, Z_Construct_UScriptStruct_FRigLocalAndGlobalTransform_Statics::NewStructOps, TEXT("RigLocalAndGlobalTransform"), &Z_Registration_Info_UScriptStruct_RigLocalAndGlobalTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigLocalAndGlobalTransform), 955482661U) },
		{ FRigCurrentAndInitialTransform::StaticStruct, Z_Construct_UScriptStruct_FRigCurrentAndInitialTransform_Statics::NewStructOps, TEXT("RigCurrentAndInitialTransform"), &Z_Registration_Info_UScriptStruct_RigCurrentAndInitialTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurrentAndInitialTransform), 3454371401U) },
		{ FRigPreferredEulerAngles::StaticStruct, Z_Construct_UScriptStruct_FRigPreferredEulerAngles_Statics::NewStructOps, TEXT("RigPreferredEulerAngles"), &Z_Registration_Info_UScriptStruct_RigPreferredEulerAngles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPreferredEulerAngles), 1918025064U) },
		{ FRigBaseElement::StaticStruct, Z_Construct_UScriptStruct_FRigBaseElement_Statics::NewStructOps, TEXT("RigBaseElement"), &Z_Registration_Info_UScriptStruct_RigBaseElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBaseElement), 1651397968U) },
		{ FRigTransformElement::StaticStruct, Z_Construct_UScriptStruct_FRigTransformElement_Statics::NewStructOps, TEXT("RigTransformElement"), &Z_Registration_Info_UScriptStruct_RigTransformElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformElement), 4177964781U) },
		{ FRigSingleParentElement::StaticStruct, Z_Construct_UScriptStruct_FRigSingleParentElement_Statics::NewStructOps, TEXT("RigSingleParentElement"), &Z_Registration_Info_UScriptStruct_RigSingleParentElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSingleParentElement), 2422852705U) },
		{ FRigElementWeight::StaticStruct, Z_Construct_UScriptStruct_FRigElementWeight_Statics::NewStructOps, TEXT("RigElementWeight"), &Z_Registration_Info_UScriptStruct_RigElementWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementWeight), 4235111560U) },
		{ FRigElementParentConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigElementParentConstraint_Statics::NewStructOps, TEXT("RigElementParentConstraint"), &Z_Registration_Info_UScriptStruct_RigElementParentConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementParentConstraint), 2423568508U) },
		{ FRigMultiParentElement::StaticStruct, Z_Construct_UScriptStruct_FRigMultiParentElement_Statics::NewStructOps, TEXT("RigMultiParentElement"), &Z_Registration_Info_UScriptStruct_RigMultiParentElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigMultiParentElement), 4237284969U) },
		{ FRigBoneElement::StaticStruct, Z_Construct_UScriptStruct_FRigBoneElement_Statics::NewStructOps, TEXT("RigBoneElement"), &Z_Registration_Info_UScriptStruct_RigBoneElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBoneElement), 888085748U) },
		{ FRigNullElement::StaticStruct, Z_Construct_UScriptStruct_FRigNullElement_Statics::NewStructOps, TEXT("RigNullElement"), &Z_Registration_Info_UScriptStruct_RigNullElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigNullElement), 1830296859U) },
		{ FRigControlElementCustomization::StaticStruct, Z_Construct_UScriptStruct_FRigControlElementCustomization_Statics::NewStructOps, TEXT("RigControlElementCustomization"), &Z_Registration_Info_UScriptStruct_RigControlElementCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlElementCustomization), 3630895427U) },
		{ FRigControlSettings::StaticStruct, Z_Construct_UScriptStruct_FRigControlSettings_Statics::NewStructOps, TEXT("RigControlSettings"), &Z_Registration_Info_UScriptStruct_RigControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlSettings), 2264367978U) },
		{ FRigControlElement::StaticStruct, Z_Construct_UScriptStruct_FRigControlElement_Statics::NewStructOps, TEXT("RigControlElement"), &Z_Registration_Info_UScriptStruct_RigControlElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlElement), 682711063U) },
		{ FRigCurveElement::StaticStruct, Z_Construct_UScriptStruct_FRigCurveElement_Statics::NewStructOps, TEXT("RigCurveElement"), &Z_Registration_Info_UScriptStruct_RigCurveElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurveElement), 815582676U) },
		{ FRigRigidBodySettings::StaticStruct, Z_Construct_UScriptStruct_FRigRigidBodySettings_Statics::NewStructOps, TEXT("RigRigidBodySettings"), &Z_Registration_Info_UScriptStruct_RigRigidBodySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRigidBodySettings), 3426962083U) },
		{ FRigRigidBodyElement::StaticStruct, Z_Construct_UScriptStruct_FRigRigidBodyElement_Statics::NewStructOps, TEXT("RigRigidBodyElement"), &Z_Registration_Info_UScriptStruct_RigRigidBodyElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigRigidBodyElement), 412230532U) },
		{ FRigReferenceElement::StaticStruct, Z_Construct_UScriptStruct_FRigReferenceElement_Statics::NewStructOps, TEXT("RigReferenceElement"), &Z_Registration_Info_UScriptStruct_RigReferenceElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigReferenceElement), 165254704U) },
		{ FRigHierarchyCopyPasteContentPerElement::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement_Statics::NewStructOps, TEXT("RigHierarchyCopyPasteContentPerElement"), &Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContentPerElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyCopyPasteContentPerElement), 3981963925U) },
		{ FRigHierarchyCopyPasteContent::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContent_Statics::NewStructOps, TEXT("RigHierarchyCopyPasteContent"), &Z_Registration_Info_UScriptStruct_RigHierarchyCopyPasteContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyCopyPasteContent), 2360317323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_2373198167(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyElements_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
