// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchy.h"
#include "EulerTransform.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Rigs/RigHierarchyElements.h"
#include "Rigs/RigHierarchyPose.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "TransformNoScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchy() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformNoScale();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyController_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlValueType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigNullElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTransformStackEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigTransformStackEntryType;
	static UEnum* ERigTransformStackEntryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigTransformStackEntryType"));
		}
		return Z_Registration_Info_UEnum_ERigTransformStackEntryType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigTransformStackEntryType>()
	{
		return ERigTransformStackEntryType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enumerators[] = {
		{ "TransformPose", (int64)TransformPose },
		{ "ControlOffset", (int64)ControlOffset },
		{ "ControlShape", (int64)ControlShape },
		{ "CurveValue", (int64)CurveValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enum_MetaDataParams[] = {
		{ "ControlOffset.Name", "ControlOffset" },
		{ "ControlShape.Name", "ControlShape" },
		{ "CurveValue.Name", "CurveValue" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "TransformPose.Name", "TransformPose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigTransformStackEntryType",
		"ERigTransformStackEntryType",
		Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType()
	{
		if (!Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigTransformStackEntryType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTransformStackEntry;
class UScriptStruct* FRigTransformStackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTransformStackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTransformStackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformStackEntry, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTransformStackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RigTransformStackEntry.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTransformStackEntry>()
{
	return FRigTransformStackEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EntryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectChildren_MetaData[];
#endif
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Callstack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callstack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Callstack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTransformStackEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Key_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_EntryType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_EntryType = { "EntryType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, EntryType), Z_Construct_UEnum_ControlRig_ERigTransformStackEntryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_EntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_EntryType_MetaData)) }; // 4019443428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_TransformType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, TransformType), Z_Construct_UEnum_ControlRig_ERigTransformType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_TransformType_MetaData)) }; // 994774967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_OldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_OldTransform = { "OldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, OldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_OldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_OldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_NewTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_NewTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((FRigTransformStackEntry*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigTransformStackEntry), &Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack_Inner = { "Callstack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack = { "Callstack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigTransformStackEntry, Callstack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_EntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_TransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_OldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewProp_Callstack,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigTransformStackEntry",
		sizeof(FRigTransformStackEntry),
		alignof(FRigTransformStackEntry),
		Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigTransformStackEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RigTransformStackEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTransformStackEntry.InnerSingleton, Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigTransformStackEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetPreviousParent)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=P_THIS->GetPreviousParent(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetPreviousName)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPreviousName(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetTransformNoScaleFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransformNoScale*)Z_Param__Result=URigHierarchy::GetTransformNoScaleFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromTransformNoScale)
	{
		P_GET_STRUCT(FTransformNoScale,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromTransformNoScale(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetEulerTransformFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEulerTransform*)Z_Param__Result=URigHierarchy::GetEulerTransformFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromEulerTransform)
	{
		P_GET_STRUCT(FEulerTransform,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromEulerTransform(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetTransformFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URigHierarchy::GetTransformFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromTransform(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRotatorFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=URigHierarchy::GetRotatorFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromRotator(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetVectorFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=URigHierarchy::GetVectorFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromVector)
	{
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromVector(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetVector2DFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URigHierarchy::GetVector2DFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromVector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromVector2D(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetIntFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URigHierarchy::GetIntFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromInt(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetFloatFromControlValue)
	{
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URigHierarchy::GetFloatFromControlValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromFloat(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execMakeControlValueFromBool)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=URigHierarchy::MakeControlValueFromBool(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetPose_ForBlueprint)
	{
		P_GET_STRUCT(FRigPose,Z_Param_InPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPose_ForBlueprint(Z_Param_InPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetPose)
	{
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigPose*)Z_Param__Result=P_THIS->GetPose(Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetController)
	{
		P_GET_UBOOL(Z_Param_bCreateIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchyController**)Z_Param__Result=P_THIS->GetController(Z_Param_bCreateIfNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsControllerAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllerAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSendAutoKeyEvent)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InElement);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOffsetInSeconds);
		P_GET_UBOOL(Z_Param_bAsynchronous);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendAutoKeyEvent(Z_Param_InElement,Z_Param_InOffsetInSeconds,Z_Param_bAsynchronous);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetAllKeys_ForBlueprint)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetAllKeys_ForBlueprint(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsParentedTo)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParentedTo(Z_Param_InChild,Z_Param_InParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSwitchToWorldSpace)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToWorldSpace(Z_Param_InChild,Z_Param_bInitial,Z_Param_bAffectChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSwitchToDefaultParent)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToDefaultParent(Z_Param_InChild,Z_Param_bInitial,Z_Param_bAffectChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSwitchToParent)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToParent(Z_Param_InChild,Z_Param_InParent,Z_Param_bInitial,Z_Param_bAffectChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetParentWeightArray)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_TARRAY(FRigElementWeight,Z_Param_InWeights);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParentWeightArray(Z_Param_InChild,Z_Param_InWeights,Z_Param_bInitial,Z_Param_bAffectChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetParentWeight)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
		P_GET_STRUCT(FRigElementWeight,Z_Param_InWeight);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParentWeight(Z_Param_InChild,Z_Param_InParent,Z_Param_InWeight,Z_Param_bInitial,Z_Param_bAffectChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetParentWeightArray)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementWeight>*)Z_Param__Result=P_THIS->GetParentWeightArray(Z_Param_InChild,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetParentWeight)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InChild);
		P_GET_STRUCT(FRigElementKey,Z_Param_InParent);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementWeight*)Z_Param__Result=P_THIS->GetParentWeight(Z_Param_InChild,Z_Param_InParent,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetNumberOfParents)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfParents(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetFirstParent)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=P_THIS->GetFirstParent(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetDefaultParent)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=P_THIS->GetDefaultParent(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetParents)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetParents(Z_Param_InKey,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetChildren)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetChildren(Z_Param_InKey,Z_Param_bRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetParentTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetParentTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetParentTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetParentTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlSettingsByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FRigControlSettings,Z_Param_InSettings);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bForce);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlSettingsByIndex(Z_Param_InElementIndex,Z_Param_InSettings,Z_Param_bSetupUndo,Z_Param_bForce,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlSettings)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FRigControlSettings,Z_Param_InSettings);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bForce);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlSettings(Z_Param_InKey,Z_Param_InSettings,Z_Param_bSetupUndo,Z_Param_bForce,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlShapeTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlShapeTransformByIndex(Z_Param_InElementIndex,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlShapeTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlShapeTransform(Z_Param_InKey,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlOffsetTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlOffsetTransformByIndex(Z_Param_InElementIndex,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlOffsetTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlOffsetTransform(Z_Param_InKey,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execUnsetCurveValueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsetCurveValueByIndex(Z_Param_InElementIndex,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execUnsetCurveValue)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsetCurveValue(Z_Param_InKey,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetCurveValueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveValueByIndex(Z_Param_InElementIndex,Z_Param_InValue,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetCurveValue)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurveValue(Z_Param_InKey,Z_Param_InValue,Z_Param_bSetupUndo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsCurveValueSetByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurveValueSetByIndex(Z_Param_InElementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsCurveValueSet)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurveValueSet(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetCurveValueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurveValueByIndex(Z_Param_InElementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetCurveValue)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurveValue(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlVisibilityByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlVisibilityByIndex(Z_Param_InElementIndex,Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlVisibility)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlVisibility(Z_Param_InKey,Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlValueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_GET_ENUM(ERigControlValueType,Z_Param_InValueType);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlValueByIndex(Z_Param_InElementIndex,Z_Param_InValue,ERigControlValueType(Z_Param_InValueType),Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlValue)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FRigControlValue,Z_Param_InValue);
		P_GET_ENUM(ERigControlValueType,Z_Param_InValueType);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlValue(Z_Param_InKey,Z_Param_InValue,ERigControlValueType(Z_Param_InValueType),Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlPreferredRotatorByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bFixEulerFlips);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlPreferredRotatorByIndex(Z_Param_InElementIndex,Z_Param_Out_InValue,Z_Param_bInitial,Z_Param_bFixEulerFlips);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetControlPreferredRotator)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InValue);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bFixEulerFlips);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlPreferredRotator(Z_Param_InKey,Z_Param_Out_InValue,Z_Param_bInitial,Z_Param_bFixEulerFlips);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetControlPreferredRotatorByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlPreferredRotatorByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetControlPreferredRotator)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlPreferredRotator(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetControlValueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_ENUM(ERigControlValueType,Z_Param_InValueType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=P_THIS->GetControlValueByIndex(Z_Param_InElementIndex,ERigControlValueType(Z_Param_InValueType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetControlValue)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_ENUM(ERigControlValueType,Z_Param_InValueType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlValue*)Z_Param__Result=P_THIS->GetControlValue(Z_Param_InKey,ERigControlValueType(Z_Param_InValueType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalControlShapeTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalControlShapeTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalControlShapeTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalControlShapeTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLocalControlShapeTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalControlShapeTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLocalControlShapeTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalControlShapeTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalControlOffsetTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalControlOffsetTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalControlOffsetTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalControlOffsetTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetGlobalTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalTransformByIndex(Z_Param_InElementIndex,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetGlobalTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalTransform(Z_Param_InKey,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetGlobalTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGlobalTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetLocalTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalTransformByIndex(Z_Param_InElementIndex,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetLocalTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_STRUCT(FTransform,Z_Param_InTransform);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bAffectChildren);
		P_GET_UBOOL(Z_Param_bSetupUndo);
		P_GET_UBOOL(Z_Param_bPrintPythonCommands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalTransform(Z_Param_InKey,Z_Param_InTransform,Z_Param_bInitial,Z_Param_bAffectChildren,Z_Param_bSetupUndo,Z_Param_bPrintPythonCommands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLocalTransformByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalTransformByIndex(Z_Param_InElementIndex,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLocalTransform)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_GET_UBOOL(Z_Param_bInitial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalTransform(Z_Param_InKey,Z_Param_bInitial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSortKeys)
	{
		P_GET_TARRAY_REF(FRigElementKey,Z_Param_Out_InKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->SortKeys(Z_Param_Out_InKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsSelectedByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectedByIndex(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsSelected)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetSelectedKeys)
	{
		P_GET_ENUM(ERigElementType,Z_Param_InTypeFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetSelectedKeys(ERigElementType(Z_Param_InTypeFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetTag)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTag(Z_Param_InItem,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execHasTag)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_InItem,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetTags)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetTags(Z_Param_InItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetRigElementKeyArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FRigElementKey,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRigElementKeyArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetRigElementKeyMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FRigElementKey,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRigElementKeyMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRigElementKeyArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetRigElementKeyArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRigElementKeyMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FRigElementKey,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=P_THIS->GetRigElementKeyMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetLinearColorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLinearColorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetLinearColorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLinearColorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLinearColorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=P_THIS->GetLinearColorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLinearColorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FLinearColor,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearColorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetTransformArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FTransform,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTransformArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetTransformMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FTransform,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTransformMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetTransformArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetTransformArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetTransformMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FTransform,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetQuatArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FQuat,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetQuatArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetQuatMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FQuat,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetQuatMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetQuatArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuat>*)Z_Param__Result=P_THIS->GetQuatArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetQuatMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FQuat,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetQuatMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetRotatorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FRotator,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRotatorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetRotatorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FRotator,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRotatorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRotatorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRotator>*)Z_Param__Result=P_THIS->GetRotatorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRotatorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FRotator,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetRotatorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetVectorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVectorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetVectorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVectorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetVectorArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetVectorArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetVectorMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_STRUCT(FVector,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetNameArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(FName,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNameArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetNameMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetNameMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetNameArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetNameArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetNameMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FNameProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNameMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetInt32ArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(int32,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInt32ArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetInt32Metadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInt32Metadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetInt32ArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInt32ArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetInt32Metadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt32Metadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetFloatArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(float,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetFloatMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetFloatArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetFloatMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetBoolArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_TARRAY(bool,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoolArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execSetBoolMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoolMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetBoolArrayMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetBoolMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolMetadata(Z_Param_InItem,Z_Param_InMetadataName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execRemoveAllMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAllMetadata(Z_Param_InItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execRemoveMetadata)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMetadata(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetMetadataType)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_InMetadataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERigMetadataType*)Z_Param__Result=P_THIS->GetMetadataType(Z_Param_InItem,Z_Param_InMetadataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetMetadataNames)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMetadataNames(Z_Param_InItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRootElementKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetRootElementKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetReferenceKeys)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetReferenceKeys(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetRigidBodyKeys)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetRigidBodyKeys(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetCurveKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetCurveKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetControlKeys)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetControlKeys(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetNullKeys)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetNullKeys(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetBoneKeys)
	{
		P_GET_UBOOL(Z_Param_bTraverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetBoneKeys(Z_Param_bTraverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execFindNull_ForBlueprintOnly)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigNullElement*)Z_Param__Result=P_THIS->FindNull_ForBlueprintOnly(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execFindControl_ForBlueprintOnly)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigControlElement*)Z_Param__Result=P_THIS->FindControl_ForBlueprintOnly(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execFindBone_ForBlueprintOnly)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigBoneElement*)Z_Param__Result=P_THIS->FindBone_ForBlueprintOnly(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetKeys)
	{
		P_GET_TARRAY(int32,Z_Param_InElementIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->GetKeys(Z_Param_InElementIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetKey)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=P_THIS->GetKey(Z_Param_InElementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetLocalIndex_ForBlueprint)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalIndex_ForBlueprint(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execGetIndex_ForBlueprint)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndex_ForBlueprint(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsProcedural)
	{
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsProcedural(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execContains_ForBlueprint)
	{
		P_GET_STRUCT(FRigElementKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Contains_ForBlueprint(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execIsValidIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InElementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidIndex(Z_Param_InElementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execResetCurveValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCurveValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execResetPoseToInitial)
	{
		P_GET_ENUM(ERigElementType,Z_Param_InTypeFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPoseToInitial(ERigElementType(Z_Param_InTypeFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execCopyPose)
	{
		P_GET_OBJECT(URigHierarchy,Z_Param_InHierarchy);
		P_GET_UBOOL(Z_Param_bCurrent);
		P_GET_UBOOL(Z_Param_bInitial);
		P_GET_UBOOL(Z_Param_bWeights);
		P_GET_UBOOL(Z_Param_bMatchPoseInGlobalIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyPose(Z_Param_InHierarchy,Z_Param_bCurrent,Z_Param_bInitial,Z_Param_bWeights,Z_Param_bMatchPoseInGlobalIfNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execCopyHierarchy)
	{
		P_GET_OBJECT(URigHierarchy,Z_Param_InHierarchy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyHierarchy(Z_Param_InHierarchy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigHierarchy::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void URigHierarchy::StaticRegisterNativesURigHierarchy()
	{
		UClass* Class = URigHierarchy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Contains_ForBlueprint", &URigHierarchy::execContains_ForBlueprint },
			{ "CopyHierarchy", &URigHierarchy::execCopyHierarchy },
			{ "CopyPose", &URigHierarchy::execCopyPose },
			{ "FindBone_ForBlueprintOnly", &URigHierarchy::execFindBone_ForBlueprintOnly },
			{ "FindControl_ForBlueprintOnly", &URigHierarchy::execFindControl_ForBlueprintOnly },
			{ "FindNull_ForBlueprintOnly", &URigHierarchy::execFindNull_ForBlueprintOnly },
			{ "GetAllKeys_ForBlueprint", &URigHierarchy::execGetAllKeys_ForBlueprint },
			{ "GetBoneKeys", &URigHierarchy::execGetBoneKeys },
			{ "GetBoolArrayMetadata", &URigHierarchy::execGetBoolArrayMetadata },
			{ "GetBoolMetadata", &URigHierarchy::execGetBoolMetadata },
			{ "GetChildren", &URigHierarchy::execGetChildren },
			{ "GetControlKeys", &URigHierarchy::execGetControlKeys },
			{ "GetController", &URigHierarchy::execGetController },
			{ "GetControlPreferredRotator", &URigHierarchy::execGetControlPreferredRotator },
			{ "GetControlPreferredRotatorByIndex", &URigHierarchy::execGetControlPreferredRotatorByIndex },
			{ "GetControlValue", &URigHierarchy::execGetControlValue },
			{ "GetControlValueByIndex", &URigHierarchy::execGetControlValueByIndex },
			{ "GetCurveKeys", &URigHierarchy::execGetCurveKeys },
			{ "GetCurveValue", &URigHierarchy::execGetCurveValue },
			{ "GetCurveValueByIndex", &URigHierarchy::execGetCurveValueByIndex },
			{ "GetDefaultParent", &URigHierarchy::execGetDefaultParent },
			{ "GetEulerTransformFromControlValue", &URigHierarchy::execGetEulerTransformFromControlValue },
			{ "GetFirstParent", &URigHierarchy::execGetFirstParent },
			{ "GetFloatArrayMetadata", &URigHierarchy::execGetFloatArrayMetadata },
			{ "GetFloatFromControlValue", &URigHierarchy::execGetFloatFromControlValue },
			{ "GetFloatMetadata", &URigHierarchy::execGetFloatMetadata },
			{ "GetGlobalControlOffsetTransform", &URigHierarchy::execGetGlobalControlOffsetTransform },
			{ "GetGlobalControlOffsetTransformByIndex", &URigHierarchy::execGetGlobalControlOffsetTransformByIndex },
			{ "GetGlobalControlShapeTransform", &URigHierarchy::execGetGlobalControlShapeTransform },
			{ "GetGlobalControlShapeTransformByIndex", &URigHierarchy::execGetGlobalControlShapeTransformByIndex },
			{ "GetGlobalTransform", &URigHierarchy::execGetGlobalTransform },
			{ "GetGlobalTransformByIndex", &URigHierarchy::execGetGlobalTransformByIndex },
			{ "GetIndex_ForBlueprint", &URigHierarchy::execGetIndex_ForBlueprint },
			{ "GetInt32ArrayMetadata", &URigHierarchy::execGetInt32ArrayMetadata },
			{ "GetInt32Metadata", &URigHierarchy::execGetInt32Metadata },
			{ "GetIntFromControlValue", &URigHierarchy::execGetIntFromControlValue },
			{ "GetKey", &URigHierarchy::execGetKey },
			{ "GetKeys", &URigHierarchy::execGetKeys },
			{ "GetLinearColorArrayMetadata", &URigHierarchy::execGetLinearColorArrayMetadata },
			{ "GetLinearColorMetadata", &URigHierarchy::execGetLinearColorMetadata },
			{ "GetLocalControlShapeTransform", &URigHierarchy::execGetLocalControlShapeTransform },
			{ "GetLocalControlShapeTransformByIndex", &URigHierarchy::execGetLocalControlShapeTransformByIndex },
			{ "GetLocalIndex_ForBlueprint", &URigHierarchy::execGetLocalIndex_ForBlueprint },
			{ "GetLocalTransform", &URigHierarchy::execGetLocalTransform },
			{ "GetLocalTransformByIndex", &URigHierarchy::execGetLocalTransformByIndex },
			{ "GetMetadataNames", &URigHierarchy::execGetMetadataNames },
			{ "GetMetadataType", &URigHierarchy::execGetMetadataType },
			{ "GetNameArrayMetadata", &URigHierarchy::execGetNameArrayMetadata },
			{ "GetNameMetadata", &URigHierarchy::execGetNameMetadata },
			{ "GetNullKeys", &URigHierarchy::execGetNullKeys },
			{ "GetNumberOfParents", &URigHierarchy::execGetNumberOfParents },
			{ "GetParents", &URigHierarchy::execGetParents },
			{ "GetParentTransform", &URigHierarchy::execGetParentTransform },
			{ "GetParentTransformByIndex", &URigHierarchy::execGetParentTransformByIndex },
			{ "GetParentWeight", &URigHierarchy::execGetParentWeight },
			{ "GetParentWeightArray", &URigHierarchy::execGetParentWeightArray },
			{ "GetPose", &URigHierarchy::execGetPose },
			{ "GetPreviousName", &URigHierarchy::execGetPreviousName },
			{ "GetPreviousParent", &URigHierarchy::execGetPreviousParent },
			{ "GetQuatArrayMetadata", &URigHierarchy::execGetQuatArrayMetadata },
			{ "GetQuatMetadata", &URigHierarchy::execGetQuatMetadata },
			{ "GetReferenceKeys", &URigHierarchy::execGetReferenceKeys },
			{ "GetRigElementKeyArrayMetadata", &URigHierarchy::execGetRigElementKeyArrayMetadata },
			{ "GetRigElementKeyMetadata", &URigHierarchy::execGetRigElementKeyMetadata },
			{ "GetRigidBodyKeys", &URigHierarchy::execGetRigidBodyKeys },
			{ "GetRootElementKeys", &URigHierarchy::execGetRootElementKeys },
			{ "GetRotatorArrayMetadata", &URigHierarchy::execGetRotatorArrayMetadata },
			{ "GetRotatorFromControlValue", &URigHierarchy::execGetRotatorFromControlValue },
			{ "GetRotatorMetadata", &URigHierarchy::execGetRotatorMetadata },
			{ "GetSelectedKeys", &URigHierarchy::execGetSelectedKeys },
			{ "GetTags", &URigHierarchy::execGetTags },
			{ "GetTransformArrayMetadata", &URigHierarchy::execGetTransformArrayMetadata },
			{ "GetTransformFromControlValue", &URigHierarchy::execGetTransformFromControlValue },
			{ "GetTransformMetadata", &URigHierarchy::execGetTransformMetadata },
			{ "GetTransformNoScaleFromControlValue", &URigHierarchy::execGetTransformNoScaleFromControlValue },
			{ "GetVector2DFromControlValue", &URigHierarchy::execGetVector2DFromControlValue },
			{ "GetVectorArrayMetadata", &URigHierarchy::execGetVectorArrayMetadata },
			{ "GetVectorFromControlValue", &URigHierarchy::execGetVectorFromControlValue },
			{ "GetVectorMetadata", &URigHierarchy::execGetVectorMetadata },
			{ "HasTag", &URigHierarchy::execHasTag },
			{ "IsControllerAvailable", &URigHierarchy::execIsControllerAvailable },
			{ "IsCurveValueSet", &URigHierarchy::execIsCurveValueSet },
			{ "IsCurveValueSetByIndex", &URigHierarchy::execIsCurveValueSetByIndex },
			{ "IsParentedTo", &URigHierarchy::execIsParentedTo },
			{ "IsProcedural", &URigHierarchy::execIsProcedural },
			{ "IsSelected", &URigHierarchy::execIsSelected },
			{ "IsSelectedByIndex", &URigHierarchy::execIsSelectedByIndex },
			{ "IsValidIndex", &URigHierarchy::execIsValidIndex },
			{ "MakeControlValueFromBool", &URigHierarchy::execMakeControlValueFromBool },
			{ "MakeControlValueFromEulerTransform", &URigHierarchy::execMakeControlValueFromEulerTransform },
			{ "MakeControlValueFromFloat", &URigHierarchy::execMakeControlValueFromFloat },
			{ "MakeControlValueFromInt", &URigHierarchy::execMakeControlValueFromInt },
			{ "MakeControlValueFromRotator", &URigHierarchy::execMakeControlValueFromRotator },
			{ "MakeControlValueFromTransform", &URigHierarchy::execMakeControlValueFromTransform },
			{ "MakeControlValueFromTransformNoScale", &URigHierarchy::execMakeControlValueFromTransformNoScale },
			{ "MakeControlValueFromVector", &URigHierarchy::execMakeControlValueFromVector },
			{ "MakeControlValueFromVector2D", &URigHierarchy::execMakeControlValueFromVector2D },
			{ "Num", &URigHierarchy::execNum },
			{ "RemoveAllMetadata", &URigHierarchy::execRemoveAllMetadata },
			{ "RemoveMetadata", &URigHierarchy::execRemoveMetadata },
			{ "Reset", &URigHierarchy::execReset },
			{ "ResetCurveValues", &URigHierarchy::execResetCurveValues },
			{ "ResetPoseToInitial", &URigHierarchy::execResetPoseToInitial },
			{ "ResetToDefault", &URigHierarchy::execResetToDefault },
			{ "SendAutoKeyEvent", &URigHierarchy::execSendAutoKeyEvent },
			{ "SetBoolArrayMetadata", &URigHierarchy::execSetBoolArrayMetadata },
			{ "SetBoolMetadata", &URigHierarchy::execSetBoolMetadata },
			{ "SetControlOffsetTransform", &URigHierarchy::execSetControlOffsetTransform },
			{ "SetControlOffsetTransformByIndex", &URigHierarchy::execSetControlOffsetTransformByIndex },
			{ "SetControlPreferredRotator", &URigHierarchy::execSetControlPreferredRotator },
			{ "SetControlPreferredRotatorByIndex", &URigHierarchy::execSetControlPreferredRotatorByIndex },
			{ "SetControlSettings", &URigHierarchy::execSetControlSettings },
			{ "SetControlSettingsByIndex", &URigHierarchy::execSetControlSettingsByIndex },
			{ "SetControlShapeTransform", &URigHierarchy::execSetControlShapeTransform },
			{ "SetControlShapeTransformByIndex", &URigHierarchy::execSetControlShapeTransformByIndex },
			{ "SetControlValue", &URigHierarchy::execSetControlValue },
			{ "SetControlValueByIndex", &URigHierarchy::execSetControlValueByIndex },
			{ "SetControlVisibility", &URigHierarchy::execSetControlVisibility },
			{ "SetControlVisibilityByIndex", &URigHierarchy::execSetControlVisibilityByIndex },
			{ "SetCurveValue", &URigHierarchy::execSetCurveValue },
			{ "SetCurveValueByIndex", &URigHierarchy::execSetCurveValueByIndex },
			{ "SetFloatArrayMetadata", &URigHierarchy::execSetFloatArrayMetadata },
			{ "SetFloatMetadata", &URigHierarchy::execSetFloatMetadata },
			{ "SetGlobalTransform", &URigHierarchy::execSetGlobalTransform },
			{ "SetGlobalTransformByIndex", &URigHierarchy::execSetGlobalTransformByIndex },
			{ "SetInt32ArrayMetadata", &URigHierarchy::execSetInt32ArrayMetadata },
			{ "SetInt32Metadata", &URigHierarchy::execSetInt32Metadata },
			{ "SetLinearColorArrayMetadata", &URigHierarchy::execSetLinearColorArrayMetadata },
			{ "SetLinearColorMetadata", &URigHierarchy::execSetLinearColorMetadata },
			{ "SetLocalTransform", &URigHierarchy::execSetLocalTransform },
			{ "SetLocalTransformByIndex", &URigHierarchy::execSetLocalTransformByIndex },
			{ "SetNameArrayMetadata", &URigHierarchy::execSetNameArrayMetadata },
			{ "SetNameMetadata", &URigHierarchy::execSetNameMetadata },
			{ "SetParentWeight", &URigHierarchy::execSetParentWeight },
			{ "SetParentWeightArray", &URigHierarchy::execSetParentWeightArray },
			{ "SetPose_ForBlueprint", &URigHierarchy::execSetPose_ForBlueprint },
			{ "SetQuatArrayMetadata", &URigHierarchy::execSetQuatArrayMetadata },
			{ "SetQuatMetadata", &URigHierarchy::execSetQuatMetadata },
			{ "SetRigElementKeyArrayMetadata", &URigHierarchy::execSetRigElementKeyArrayMetadata },
			{ "SetRigElementKeyMetadata", &URigHierarchy::execSetRigElementKeyMetadata },
			{ "SetRotatorArrayMetadata", &URigHierarchy::execSetRotatorArrayMetadata },
			{ "SetRotatorMetadata", &URigHierarchy::execSetRotatorMetadata },
			{ "SetTag", &URigHierarchy::execSetTag },
			{ "SetTransformArrayMetadata", &URigHierarchy::execSetTransformArrayMetadata },
			{ "SetTransformMetadata", &URigHierarchy::execSetTransformMetadata },
			{ "SetVectorArrayMetadata", &URigHierarchy::execSetVectorArrayMetadata },
			{ "SetVectorMetadata", &URigHierarchy::execSetVectorMetadata },
			{ "SortKeys", &URigHierarchy::execSortKeys },
			{ "SwitchToDefaultParent", &URigHierarchy::execSwitchToDefaultParent },
			{ "SwitchToParent", &URigHierarchy::execSwitchToParent },
			{ "SwitchToWorldSpace", &URigHierarchy::execSwitchToWorldSpace },
			{ "UnsetCurveValue", &URigHierarchy::execUnsetCurveValue },
			{ "UnsetCurveValueByIndex", &URigHierarchy::execUnsetCurveValueByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics
	{
		struct RigHierarchy_eventContains_ForBlueprint_Parms
		{
			FRigElementKey InKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventContains_ForBlueprint_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventContains_ForBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventContains_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if the provided element key is valid\n\x09 * @param InKey The key to validate\n\x09 * @return Returns true if the provided element key is valid\n\x09 */" },
		{ "DisplayName", "Contains" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "Contains" },
		{ "ToolTip", "Returns true if the provided element key is valid\n@param InKey The key to validate\n@return Returns true if the provided element key is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "Contains_ForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::RigHierarchy_eventContains_ForBlueprint_Parms), Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics
	{
		struct RigHierarchy_eventCopyHierarchy_Parms
		{
			URigHierarchy* InHierarchy;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHierarchy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::NewProp_InHierarchy = { "InHierarchy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventCopyHierarchy_Parms, InHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::NewProp_InHierarchy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Copies the contents of a hierarchy onto this one\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Copies the contents of a hierarchy onto this one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "CopyHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::RigHierarchy_eventCopyHierarchy_Parms), Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_CopyHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_CopyHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_CopyPose_Statics
	{
		struct RigHierarchy_eventCopyPose_Parms
		{
			URigHierarchy* InHierarchy;
			bool bCurrent;
			bool bInitial;
			bool bWeights;
			bool bMatchPoseInGlobalIfNeeded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHierarchy;
		static void NewProp_bCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurrent;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeights;
		static void NewProp_bMatchPoseInGlobalIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchPoseInGlobalIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_InHierarchy = { "InHierarchy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventCopyPose_Parms, InHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bCurrent_SetBit(void* Obj)
	{
		((RigHierarchy_eventCopyPose_Parms*)Obj)->bCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bCurrent = { "bCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventCopyPose_Parms), &Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bCurrent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventCopyPose_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventCopyPose_Parms), &Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bWeights_SetBit(void* Obj)
	{
		((RigHierarchy_eventCopyPose_Parms*)Obj)->bWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bWeights = { "bWeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventCopyPose_Parms), &Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bWeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bMatchPoseInGlobalIfNeeded_SetBit(void* Obj)
	{
		((RigHierarchy_eventCopyPose_Parms*)Obj)->bMatchPoseInGlobalIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bMatchPoseInGlobalIfNeeded = { "bMatchPoseInGlobalIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventCopyPose_Parms), &Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bMatchPoseInGlobalIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_InHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::NewProp_bMatchPoseInGlobalIfNeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Copies the contents of a hierarchy onto this one\n\x09 */" },
		{ "CPP_Default_bMatchPoseInGlobalIfNeeded", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Copies the contents of a hierarchy onto this one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "CopyPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::RigHierarchy_eventCopyPose_Parms), Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_CopyPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_CopyPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics
	{
		struct RigHierarchy_eventFindBone_ForBlueprintOnly_Parms
		{
			FRigElementKey InKey;
			FRigBoneElement ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindBone_ForBlueprintOnly_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindBone_ForBlueprintOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigBoneElement, METADATA_PARAMS(nullptr, 0) }; // 888085748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09* Returns bone element for a given key, for scripting purpose only, for cpp usage, use Find<FRigBoneElement>()\n\x09* @param InKey The key of the bone element to retrieve. \n\x09*/" },
		{ "DisplayName", "Find Bone" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "FindBone" },
		{ "ToolTip", "Returns bone element for a given key, for scripting purpose only, for cpp usage, use Find<FRigBoneElement>()\n@param InKey The key of the bone element to retrieve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "FindBone_ForBlueprintOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::RigHierarchy_eventFindBone_ForBlueprintOnly_Parms), Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics
	{
		struct RigHierarchy_eventFindControl_ForBlueprintOnly_Parms
		{
			FRigElementKey InKey;
			FRigControlElement ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindControl_ForBlueprintOnly_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindControl_ForBlueprintOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlElement, METADATA_PARAMS(nullptr, 0) }; // 682711063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09* Returns control element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()\n\x09* @param InKey The key of the control element to retrieve. \n\x09*/" },
		{ "DisplayName", "Find Control" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "FindControl" },
		{ "ToolTip", "Returns control element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()\n@param InKey The key of the control element to retrieve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "FindControl_ForBlueprintOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::RigHierarchy_eventFindControl_ForBlueprintOnly_Parms), Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics
	{
		struct RigHierarchy_eventFindNull_ForBlueprintOnly_Parms
		{
			FRigElementKey InKey;
			FRigNullElement ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindNull_ForBlueprintOnly_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventFindNull_ForBlueprintOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigNullElement, METADATA_PARAMS(nullptr, 0) }; // 1830296859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09* Returns null element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()\n\x09* @param InKey The key of the null element to retrieve. \n\x09*/" },
		{ "DisplayName", "Find Null" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "FindNull" },
		{ "ToolTip", "Returns null element for a given key, for scripting purpose only, for cpp usage, use Find<FRigControlElement>()\n@param InKey The key of the null element to retrieve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "FindNull_ForBlueprintOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::RigHierarchy_eventFindNull_ForBlueprintOnly_Parms), Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics
	{
		struct RigHierarchy_eventGetAllKeys_ForBlueprint_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetAllKeys_ForBlueprint_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetAllKeys_ForBlueprint_Parms), &Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetAllKeys_ForBlueprint_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all element keys of this hierarchy\n\x09 * @param bTraverse If set to true the keys will be returned by depth first traversal\n\x09 * @return The keys of all elements\n\x09 */" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get All Keys" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetAllKeys" },
		{ "ToolTip", "Returns all element keys of this hierarchy\n@param bTraverse If set to true the keys will be returned by depth first traversal\n@return The keys of all elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetAllKeys_ForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::RigHierarchy_eventGetAllKeys_ForBlueprint_Parms), Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics
	{
		struct RigHierarchy_eventGetBoneKeys_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetBoneKeys_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetBoneKeys_Parms), &Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoneKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all Bone elements\n\x09 * @param bTraverse Returns the elements in order of a depth first traversal\n\x09 */" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get Bones" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetBones" },
		{ "ToolTip", "Returns all Bone elements\n@param bTraverse Returns the elements in order of a depth first traversal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetBoneKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::RigHierarchy_eventGetBoneKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetBoneKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetBoneKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetBoolArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<bool> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoolArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoolArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoolArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of bool array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of bool array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetBoolArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::RigHierarchy_eventGetBoolArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics
	{
		struct RigHierarchy_eventGetBoolMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			bool DefaultValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoolMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetBoolMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetBoolMetadata_Parms*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetBoolMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetBoolMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetBoolMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of bool metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of bool metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetBoolMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::RigHierarchy_eventGetBoolMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetBoolMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetBoolMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetChildren_Statics
	{
		struct RigHierarchy_eventGetChildren_Parms
		{
			FRigElementKey InKey;
			bool bRecursive;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetChildren_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetChildren_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetChildren_Parms), &Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the child elements of a given element key\n\x09 * @param InKey The key of the element to retrieve the children for\n\x09 * @param bRecursive If set to true grand-children will also be returned etc\n\x09 * @return Returns the child elements\n\x09 */" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the child elements of a given element key\n@param InKey The key of the element to retrieve the children for\n@param bRecursive If set to true grand-children will also be returned etc\n@return Returns the child elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::RigHierarchy_eventGetChildren_Parms), Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics
	{
		struct RigHierarchy_eventGetControlKeys_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetControlKeys_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetControlKeys_Parms), &Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all Control elements\n\x09 * @param bTraverse Returns the elements in order of a depth first traversal\n\x09 */" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get Controls" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetControls" },
		{ "ToolTip", "Returns all Control elements\n@param bTraverse Returns the elements in order of a depth first traversal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetControlKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::RigHierarchy_eventGetControlKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetControlKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetControlKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetController_Statics
	{
		struct RigHierarchy_eventGetController_Parms
		{
			bool bCreateIfNeeded;
			URigHierarchyController* ReturnValue;
		};
		static void NewProp_bCreateIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNeeded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_bCreateIfNeeded_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetController_Parms*)Obj)->bCreateIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_bCreateIfNeeded = { "bCreateIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetController_Parms), &Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_bCreateIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetController_Parms, ReturnValue), Z_Construct_UClass_URigHierarchyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_bCreateIfNeeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a controller for this hierarchy.\n\x09 * Note: If the controller is not available this will return nullptr \n\x09 * even if the bCreateIfNeeded flag is set to true. You can check the \n\x09 * controller's availability with IsControllerAvailable().\n\x09 * @param bCreateIfNeeded Creates a controller if needed\n\x09 * @return The Controller for this hierarchy\n\x09 */" },
		{ "CPP_Default_bCreateIfNeeded", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a controller for this hierarchy.\nNote: If the controller is not available this will return nullptr\neven if the bCreateIfNeeded flag is set to true. You can check the\ncontroller's availability with IsControllerAvailable().\n@param bCreateIfNeeded Creates a controller if needed\n@return The Controller for this hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetController_Statics::RigHierarchy_eventGetController_Parms), Z_Construct_UFunction_URigHierarchy_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics
	{
		struct RigHierarchy_eventGetControlPreferredRotator_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlPreferredRotator_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetControlPreferredRotator_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetControlPreferredRotator_Parms), &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlPreferredRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a control's preferred rotator (local transform rotation)\n\x09 * @param InKey The key of the element to retrieve the current value for\n\x09 * @param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n\x09 * @return Returns the current preferred rotator\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a control's preferred rotator (local transform rotation)\n@param InKey The key of the element to retrieve the current value for\n@param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n@return Returns the current preferred rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetControlPreferredRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::RigHierarchy_eventGetControlPreferredRotator_Parms), Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics
	{
		struct RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a control's preferred rotator (local transform rotation)\n\x09 * @param InElementIndex The element index to look up\n\x09 * @param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n\x09 * @return Returns the current preferred rotator\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a control's preferred rotator (local transform rotation)\n@param InElementIndex The element index to look up\n@param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n@return Returns the current preferred rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetControlPreferredRotatorByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::RigHierarchy_eventGetControlPreferredRotatorByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics
	{
		struct RigHierarchy_eventGetControlValue_Parms
		{
			FRigElementKey InKey;
			ERigControlValueType InValueType;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValueType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValue_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InValueType = { "InValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValue_Parms, InValueType), Z_Construct_UEnum_ControlRig_ERigControlValueType, METADATA_PARAMS(nullptr, 0) }; // 334306411
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_InValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a control's current value given its key\n\x09 * @param InKey The key of the element to retrieve the current value for\n\x09 * @param InValueType The type of value to return\n\x09 * @return Returns the current value of the control\n\x09 */" },
		{ "CPP_Default_InValueType", "Current" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a control's current value given its key\n@param InKey The key of the element to retrieve the current value for\n@param InValueType The type of value to return\n@return Returns the current value of the control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::RigHierarchy_eventGetControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics
	{
		struct RigHierarchy_eventGetControlValueByIndex_Parms
		{
			int32 InElementIndex;
			ERigControlValueType InValueType;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValueType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValueByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InValueType = { "InValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValueByIndex_Parms, InValueType), Z_Construct_UEnum_ControlRig_ERigControlValueType, METADATA_PARAMS(nullptr, 0) }; // 334306411
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetControlValueByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_InValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a control's current value given its index\n\x09 * @param InElementIndex The index of the element to retrieve the current value for\n\x09 * @param InValueType The type of value to return\n\x09 * @return Returns the current value of the control\n\x09 */" },
		{ "CPP_Default_InValueType", "Current" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a control's current value given its index\n@param InElementIndex The index of the element to retrieve the current value for\n@param InValueType The type of value to return\n@return Returns the current value of the control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetControlValueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::RigHierarchy_eventGetControlValueByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics
	{
		struct RigHierarchy_eventGetCurveKeys_Parms
		{
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetCurveKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all Curve elements\n\x09 */" },
		{ "DisplayName", "Get Curves" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetCurves" },
		{ "ToolTip", "Returns all Curve elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetCurveKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::RigHierarchy_eventGetCurveKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetCurveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetCurveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics
	{
		struct RigHierarchy_eventGetCurveValue_Parms
		{
			FRigElementKey InKey;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetCurveValue_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetCurveValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a curve's value given its key\n\x09 * @param InKey The key of the element to retrieve the value for\n\x09 * @return Returns the value of the curve\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a curve's value given its key\n@param InKey The key of the element to retrieve the value for\n@return Returns the value of the curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::RigHierarchy_eventGetCurveValue_Parms), Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics
	{
		struct RigHierarchy_eventGetCurveValueByIndex_Parms
		{
			int32 InElementIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetCurveValueByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetCurveValueByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a curve's value given its index\n\x09 * @param InElementIndex The index of the element to retrieve the value for\n\x09 * @return Returns the value of the curve\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a curve's value given its index\n@param InElementIndex The index of the element to retrieve the value for\n@return Returns the value of the curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetCurveValueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::RigHierarchy_eventGetCurveValueByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics
	{
		struct RigHierarchy_eventGetDefaultParent_Parms
		{
			FRigElementKey InKey;
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetDefaultParent_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetDefaultParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the default parent element's key of a given child key\n\x09 * @param InKey The key of the element to retrieve the parent for\n\x09 * @return Returns the default parent element key\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the default parent element's key of a given child key\n@param InKey The key of the element to retrieve the parent for\n@return Returns the default parent element key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetDefaultParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::RigHierarchy_eventGetDefaultParent_Parms), Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetDefaultParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetDefaultParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics
	{
		struct RigHierarchy_eventGetEulerTransformFromControlValue_Parms
		{
			FRigControlValue InValue;
			FEulerTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetEulerTransformFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetEulerTransformFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FEulerTransform value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FEulerTransform value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FEulerTransform value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FEulerTransform value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetEulerTransformFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::RigHierarchy_eventGetEulerTransformFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics
	{
		struct RigHierarchy_eventGetFirstParent_Parms
		{
			FRigElementKey InKey;
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFirstParent_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFirstParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the first parent element of a given element key\n\x09 * @param InKey The key of the element to retrieve the parents for\n\x09 * @return Returns the first parent element\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the first parent element of a given element key\n@param InKey The key of the element to retrieve the parents for\n@return Returns the first parent element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetFirstParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::RigHierarchy_eventGetFirstParent_Parms), Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetFirstParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetFirstParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetFloatArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of float array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of float array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetFloatArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::RigHierarchy_eventGetFloatArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics
	{
		struct RigHierarchy_eventGetFloatFromControlValue_Parms
		{
			FRigControlValue InValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatFromControlValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained float value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted float value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained float value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted float value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetFloatFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::RigHierarchy_eventGetFloatFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics
	{
		struct RigHierarchy_eventGetFloatMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			float DefaultValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatMetadata_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetFloatMetadata_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of float metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of float metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetFloatMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::RigHierarchy_eventGetFloatMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetFloatMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetFloatMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics
	{
		struct RigHierarchy_eventGetGlobalControlOffsetTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlOffsetTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalControlOffsetTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalControlOffsetTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlOffsetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global offset transform for a given control element.\n\x09 * @param InKey The key of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global offset transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global offset transform for a given control element.\n@param InKey The key of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global offset transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalControlOffsetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::RigHierarchy_eventGetGlobalControlOffsetTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global offset transform for a given control element.\n\x09 * @param InElementIndex The index of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global offset transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global offset transform for a given control element.\n@param InElementIndex The index of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global offset transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalControlOffsetTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::RigHierarchy_eventGetGlobalControlOffsetTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics
	{
		struct RigHierarchy_eventGetGlobalControlShapeTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlShapeTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalControlShapeTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalControlShapeTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlShapeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global shape transform for a given control element.\n\x09 * @param InKey The key of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global shape transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global shape transform for a given control element.\n@param InKey The key of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global shape transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalControlShapeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::RigHierarchy_eventGetGlobalControlShapeTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global shape transform for a given control element.\n\x09 * @param InElementIndex The index of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global shape transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global shape transform for a given control element.\n@param InElementIndex The index of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global shape transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalControlShapeTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::RigHierarchy_eventGetGlobalControlShapeTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics
	{
		struct RigHierarchy_eventGetGlobalTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global current or initial value for a given key.\n\x09 * If the key is invalid FTransform::Identity will be returned.\n\x09 * @param InKey The key to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global current or initial value for a given key.\nIf the key is invalid FTransform::Identity will be returned.\n@param InKey The key to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::RigHierarchy_eventGetGlobalTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetGlobalTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetGlobalTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetGlobalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetGlobalTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global current or initial value for a element index.\n\x09 * If the index is invalid FTransform::Identity will be returned.\n\x09 * @param InElementIndex The index to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The global current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global current or initial value for a element index.\nIf the index is invalid FTransform::Identity will be returned.\n@param InElementIndex The index to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The global current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetGlobalTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::RigHierarchy_eventGetGlobalTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics
	{
		struct RigHierarchy_eventGetIndex_ForBlueprint_Parms
		{
			FRigElementKey InKey;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetIndex_ForBlueprint_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetIndex_ForBlueprint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the index of an element given its key\n\x09 * @param InKey The key of the element to retrieve the index for\n\x09 * @return The index of the element or INDEX_NONE\n\x09 */" },
		{ "DisplayName", "Get Index" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetIndex" },
		{ "ToolTip", "Returns the index of an element given its key\n@param InKey The key of the element to retrieve the index for\n@return The index of the element or INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetIndex_ForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::RigHierarchy_eventGetIndex_ForBlueprint_Parms), Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetInt32ArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32ArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32ArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32ArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of int32 array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of int32 array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetInt32ArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::RigHierarchy_eventGetInt32ArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics
	{
		struct RigHierarchy_eventGetInt32Metadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			int32 DefaultValue;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32Metadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32Metadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32Metadata_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetInt32Metadata_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of int32 metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of int32 metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetInt32Metadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::RigHierarchy_eventGetInt32Metadata_Parms), Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetInt32Metadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetInt32Metadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics
	{
		struct RigHierarchy_eventGetIntFromControlValue_Parms
		{
			FRigControlValue InValue;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetIntFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetIntFromControlValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained int32 value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted int32 value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained int32 value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted int32 value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetIntFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::RigHierarchy_eventGetIntFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetKey_Statics
	{
		struct RigHierarchy_eventGetKey_Parms
		{
			int32 InElementIndex;
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetKey_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetKey_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKey_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the key of an element given its index\n\x09 * @param InElementIndex The index of the element to retrieve the key for\n\x09 * @return The key of an element given its index\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the key of an element given its index\n@param InElementIndex The index of the element to retrieve the key for\n@return The key of an element given its index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetKey_Statics::RigHierarchy_eventGetKey_Parms), Z_Construct_UFunction_URigHierarchy_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetKeys_Statics
	{
		struct RigHierarchy_eventGetKeys_Parms
		{
			TArray<int32> InElementIndices;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InElementIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices_Inner = { "InElementIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices = { "InElementIndices", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetKeys_Parms, InElementIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_InElementIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the keys of an array of indices\n\x09 * @param InElementIndices The indices to retrieve the keys for\n\x09 * @return The keys of the elements given the indices\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the keys of an array of indices\n@param InElementIndices The indices to retrieve the keys for\n@return The keys of the elements given the indices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::RigHierarchy_eventGetKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetLinearColorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FLinearColor array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FLinearColor array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLinearColorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::RigHierarchy_eventGetLinearColorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics
	{
		struct RigHierarchy_eventGetLinearColorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FLinearColor DefaultValue;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLinearColorMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FLinearColor metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FLinearColor metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLinearColorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::RigHierarchy_eventGetLinearColorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics
	{
		struct RigHierarchy_eventGetLocalControlShapeTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalControlShapeTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetLocalControlShapeTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetLocalControlShapeTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalControlShapeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the local shape transform for a given control element.\n\x09 * @param InKey The key of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The local shape transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the local shape transform for a given control element.\n@param InKey The key of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The local shape transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLocalControlShapeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::RigHierarchy_eventGetLocalControlShapeTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the local shape transform for a given control element.\n\x09 * @param InElementIndex The index of the control to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The local shape transform\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the local shape transform for a given control element.\n@param InElementIndex The index of the control to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The local shape transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLocalControlShapeTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::RigHierarchy_eventGetLocalControlShapeTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics
	{
		struct RigHierarchy_eventGetLocalIndex_ForBlueprint_Parms
		{
			FRigElementKey InKey;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalIndex_ForBlueprint_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalIndex_ForBlueprint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the index of an element given its key within its default parent (or root)\n\x09 * @param InKey The key of the element to retrieve the index for\n\x09 * @return The index of the element or INDEX_NONE\n\x09 */" },
		{ "DisplayName", "Get Local Index" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetLocalIndex" },
		{ "ToolTip", "Returns the index of an element given its key within its default parent (or root)\n@param InKey The key of the element to retrieve the index for\n@return The index of the element or INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLocalIndex_ForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::RigHierarchy_eventGetLocalIndex_ForBlueprint_Parms), Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics
	{
		struct RigHierarchy_eventGetLocalTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetLocalTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetLocalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the local current or initial value for a given key.\n\x09 * If the key is invalid FTransform::Identity will be returned.\n\x09 * @param InKey The key to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The local current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the local current or initial value for a given key.\nIf the key is invalid FTransform::Identity will be returned.\n@param InKey The key to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The local current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::RigHierarchy_eventGetLocalTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetLocalTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetLocalTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetLocalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetLocalTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the local current or initial value for a element index.\n\x09 * If the index is invalid FTransform::Identity will be returned.\n\x09 * @param InElementIndex The index to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The local current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the local current or initial value for a element index.\nIf the index is invalid FTransform::Identity will be returned.\n@param InElementIndex The index to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The local current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetLocalTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::RigHierarchy_eventGetLocalTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics
	{
		struct RigHierarchy_eventGetMetadataNames_Parms
		{
			FRigElementKey InItem;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetMetadataNames_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetMetadataNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the name of metadata for a given element\n\x09 * @param InItem The element key to return the metadata keys for\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the name of metadata for a given element\n@param InItem The element key to return the metadata keys for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetMetadataNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::RigHierarchy_eventGetMetadataNames_Parms), Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetMetadataNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetMetadataNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics
	{
		struct RigHierarchy_eventGetMetadataType_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			ERigMetadataType ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetMetadataType_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetMetadataType_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetMetadataType_Parms, ReturnValue), Z_Construct_UEnum_ControlRig_ERigMetadataType, METADATA_PARAMS(nullptr, 0) }; // 3385505354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the type of metadata given its name the item it is stored under\n\x09 * @param InItem The element key to return the metadata type for\n\x09 * @param InMetadataName The name of the metadata to return the type for\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the type of metadata given its name the item it is stored under\n@param InItem The element key to return the metadata type for\n@param InMetadataName The name of the metadata to return the type for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetMetadataType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::RigHierarchy_eventGetMetadataType_Parms), Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetMetadataType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetMetadataType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetNameArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FName array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FName array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetNameArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::RigHierarchy_eventGetNameArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics
	{
		struct RigHierarchy_eventGetNameMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FName DefaultValue;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameMetadata_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNameMetadata_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FName metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FName metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetNameMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::RigHierarchy_eventGetNameMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetNameMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetNameMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics
	{
		struct RigHierarchy_eventGetNullKeys_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetNullKeys_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetNullKeys_Parms), &Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNullKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09* Returns all Null elements\n\x09* @param bTraverse Returns the elements in order of a depth first traversal\n\x09*/" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get Nulls" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetNulls" },
		{ "ToolTip", "Returns all Null elements\n@param bTraverse Returns the elements in order of a depth first traversal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetNullKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::RigHierarchy_eventGetNullKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetNullKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetNullKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics
	{
		struct RigHierarchy_eventGetNumberOfParents_Parms
		{
			FRigElementKey InKey;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNumberOfParents_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetNumberOfParents_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the number of parents of an element\n\x09 * @param InKey The key of the element to retrieve the number of parents for\n\x09 * @return Returns the number of parents of an element\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the number of parents of an element\n@param InKey The key of the element to retrieve the number of parents for\n@return Returns the number of parents of an element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetNumberOfParents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::RigHierarchy_eventGetNumberOfParents_Parms), Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetNumberOfParents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetNumberOfParents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetParents_Statics
	{
		struct RigHierarchy_eventGetParents_Parms
		{
			FRigElementKey InKey;
			bool bRecursive;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParents_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetParents_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetParents_Parms), &Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetParents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetParents_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the parent elements of a given element key\n\x09 * @param InKey The key of the element to retrieve the parents for\n\x09 * @param bRecursive If set to true parents of parents will also be returned\n\x09 * @return Returns the parent elements\n\x09 */" },
		{ "CPP_Default_bRecursive", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the parent elements of a given element key\n@param InKey The key of the element to retrieve the parents for\n@param bRecursive If set to true parents of parents will also be returned\n@return Returns the parent elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetParents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetParents_Statics::RigHierarchy_eventGetParents_Parms), Z_Construct_UFunction_URigHierarchy_GetParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetParents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetParents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetParents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics
	{
		struct RigHierarchy_eventGetParentTransform_Parms
		{
			FRigElementKey InKey;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetParentTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetParentTransform_Parms), &Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global current or initial value for a given key.\n\x09 * If the element does not have a parent FTransform::Identity will be returned.\n\x09 * @param InKey The key of the element to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The element's parent's global current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global current or initial value for a given key.\nIf the element does not have a parent FTransform::Identity will be returned.\n@param InKey The key of the element to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The element's parent's global current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetParentTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::RigHierarchy_eventGetParentTransform_Parms), Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetParentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetParentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics
	{
		struct RigHierarchy_eventGetParentTransformByIndex_Parms
		{
			int32 InElementIndex;
			bool bInitial;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetParentTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetParentTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentTransformByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the global current or initial value for a given element index.\n\x09 * If the element does not have a parent FTransform::Identity will be returned.\n\x09 * @param InElementIndex The index of the element to retrieve the transform for\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @return The element's parent's global current or initial transform's value.\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the global current or initial value for a given element index.\nIf the element does not have a parent FTransform::Identity will be returned.\n@param InElementIndex The index of the element to retrieve the transform for\n@param bInitial If true the initial transform will be used\n@return The element's parent's global current or initial transform's value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetParentTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::RigHierarchy_eventGetParentTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics
	{
		struct RigHierarchy_eventGetParentWeight_Parms
		{
			FRigElementKey InChild;
			FRigElementKey InParent;
			bool bInitial;
			FRigElementWeight ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentWeight_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentWeight_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetParentWeight_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetParentWeight_Parms), &Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentWeight_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the weight of a parent below a multi parent element\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param InParent The key of the parent to look up the weight for\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @return Returns the weight of a parent below a multi parent element, or FLT_MAX if the parent is invalid\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the weight of a parent below a multi parent element\n@param InChild The key of the multi parented element\n@param InParent The key of the parent to look up the weight for\n@param bInitial If true the initial weights will be used\n@return Returns the weight of a parent below a multi parent element, or FLT_MAX if the parent is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetParentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::RigHierarchy_eventGetParentWeight_Parms), Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetParentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetParentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics
	{
		struct RigHierarchy_eventGetParentWeightArray_Parms
		{
			FRigElementKey InChild;
			bool bInitial;
			TArray<FRigElementWeight> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentWeightArray_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetParentWeightArray_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetParentWeightArray_Parms), &Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetParentWeightArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the weights of all parents below a multi parent element\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @return Returns the weight of a parent below a multi parent element, or FLT_MAX if the parent is invalid\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the weights of all parents below a multi parent element\n@param InChild The key of the multi parented element\n@param bInitial If true the initial weights will be used\n@return Returns the weight of a parent below a multi parent element, or FLT_MAX if the parent is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetParentWeightArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::RigHierarchy_eventGetParentWeightArray_Parms), Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetParentWeightArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetParentWeightArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetPose_Statics
	{
		struct RigHierarchy_eventGetPose_Parms
		{
			bool bInitial;
			FRigPose ReturnValue;
		};
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetPose_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetPose_Parms), &Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(nullptr, 0) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the current / initial pose of the hierarchy\n\x09 * @param bInitial If set to true the initial pose will be returned\n\x09 * @return The pose of the hierarchy\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the current / initial pose of the hierarchy\n@param bInitial If set to true the initial pose will be returned\n@return The pose of the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetPose_Statics::RigHierarchy_eventGetPose_Parms), Z_Construct_UFunction_URigHierarchy_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics
	{
		struct RigHierarchy_eventGetPreviousName_Parms
		{
			FRigElementKey InKey;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetPreviousName_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetPreviousName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the previous name of an element prior to a rename operation\n\x09 * @param InKey The key of the element to request the old name for\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the previous name of an element prior to a rename operation\n@param InKey The key of the element to request the old name for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetPreviousName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::RigHierarchy_eventGetPreviousName_Parms), Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetPreviousName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetPreviousName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics
	{
		struct RigHierarchy_eventGetPreviousParent_Parms
		{
			FRigElementKey InKey;
			FRigElementKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetPreviousParent_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetPreviousParent_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the previous parent of an element prior to a reparent operation\n\x09 * @param InKey The key of the element to request the old parent  for\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the previous parent of an element prior to a reparent operation\n@param InKey The key of the element to request the old parent  for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetPreviousParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::RigHierarchy_eventGetPreviousParent_Parms), Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetPreviousParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetPreviousParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetQuatArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FQuat> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FQuat array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FQuat array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetQuatArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::RigHierarchy_eventGetQuatArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics
	{
		struct RigHierarchy_eventGetQuatMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FQuat DefaultValue;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetQuatMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FQuat metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FQuat metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetQuatMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::RigHierarchy_eventGetQuatMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetQuatMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetQuatMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics
	{
		struct RigHierarchy_eventGetReferenceKeys_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetReferenceKeys_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetReferenceKeys_Parms), &Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetReferenceKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all references\n\x09 * @param bTraverse Returns the elements in order of a depth first traversal\n\x09 */" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get References" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetReferences" },
		{ "ToolTip", "Returns all references\n@param bTraverse Returns the elements in order of a depth first traversal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetReferenceKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::RigHierarchy_eventGetReferenceKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetReferenceKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetReferenceKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetRigElementKeyArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FRigElementKey array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FRigElementKey array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRigElementKeyArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::RigHierarchy_eventGetRigElementKeyArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics
	{
		struct RigHierarchy_eventGetRigElementKeyMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FRigElementKey DefaultValue;
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigElementKeyMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FRigElementKey metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FRigElementKey metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRigElementKeyMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::RigHierarchy_eventGetRigElementKeyMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics
	{
		struct RigHierarchy_eventGetRigidBodyKeys_Parms
		{
			bool bTraverse;
			TArray<FRigElementKey> ReturnValue;
		};
		static void NewProp_bTraverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_bTraverse_SetBit(void* Obj)
	{
		((RigHierarchy_eventGetRigidBodyKeys_Parms*)Obj)->bTraverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_bTraverse = { "bTraverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventGetRigidBodyKeys_Parms), &Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_bTraverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRigidBodyKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_bTraverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all RigidBody elements\n\x09 * @param bTraverse Returns the elements in order of a depth first traversal\n\x09 */" },
		{ "CPP_Default_bTraverse", "true" },
		{ "DisplayName", "Get RigidBodies" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetRigidBodies" },
		{ "ToolTip", "Returns all RigidBody elements\n@param bTraverse Returns the elements in order of a depth first traversal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRigidBodyKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::RigHierarchy_eventGetRigidBodyKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics
	{
		struct RigHierarchy_eventGetRootElementKeys_Parms
		{
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRootElementKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns all root element keys\n\x09 */" },
		{ "DisplayName", "Get Root Elements" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "GetRootElements" },
		{ "ToolTip", "Returns all root element keys" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRootElementKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::RigHierarchy_eventGetRootElementKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRootElementKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRootElementKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetRotatorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FRotator> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FRotator array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FRotator array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRotatorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::RigHierarchy_eventGetRotatorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics
	{
		struct RigHierarchy_eventGetRotatorFromControlValue_Parms
		{
			FRigControlValue InValue;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FRotator value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FRotator value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FRotator value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FRotator value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRotatorFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::RigHierarchy_eventGetRotatorFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics
	{
		struct RigHierarchy_eventGetRotatorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FRotator DefaultValue;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetRotatorMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FRotator metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FRotator metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetRotatorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::RigHierarchy_eventGetRotatorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics
	{
		struct RigHierarchy_eventGetSelectedKeys_Parms
		{
			ERigElementType InTypeFilter;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTypeFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTypeFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_InTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_InTypeFilter = { "InTypeFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetSelectedKeys_Parms, InTypeFilter), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(nullptr, 0) }; // 3496922284
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetSelectedKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_InTypeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_InTypeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the keys of selected elements\n\x09 * @InTypeFilter The types to retrieve the selection for\n\x09 * @return An array of the currently selected elements\n\x09 */" },
		{ "CPP_Default_InTypeFilter", "All" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the keys of selected elements\n@InTypeFilter The types to retrieve the selection for\n@return An array of the currently selected elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetSelectedKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::RigHierarchy_eventGetSelectedKeys_Parms), Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetSelectedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetSelectedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetTags_Statics
	{
		struct RigHierarchy_eventGetTags_Parms
		{
			FRigElementKey InItem;
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTags_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/*\n\x09 * Returns the tags for a given item\n\x09 * @param InItem The item to return the tags for\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "* Returns the tags for a given item\n* @param InItem The item to return the tags for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetTags_Statics::RigHierarchy_eventGetTags_Parms), Z_Construct_UFunction_URigHierarchy_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetTransformArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FTransform array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FTransform array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetTransformArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::RigHierarchy_eventGetTransformArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics
	{
		struct RigHierarchy_eventGetTransformFromControlValue_Parms
		{
			FRigControlValue InValue;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FTransform value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FTransform value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FTransform value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FTransform value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetTransformFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::RigHierarchy_eventGetTransformFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics
	{
		struct RigHierarchy_eventGetTransformMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FTransform DefaultValue;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FTransform metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FTransform metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetTransformMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::RigHierarchy_eventGetTransformMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetTransformMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetTransformMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics
	{
		struct RigHierarchy_eventGetTransformNoScaleFromControlValue_Parms
		{
			FRigControlValue InValue;
			FTransformNoScale ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformNoScaleFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetTransformNoScaleFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FTransformNoScale value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FTransformNoScale value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FTransformNoScale value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FTransformNoScale value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetTransformNoScaleFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::RigHierarchy_eventGetTransformNoScaleFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics
	{
		struct RigHierarchy_eventGetVector2DFromControlValue_Parms
		{
			FRigControlValue InValue;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVector2DFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVector2DFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FVector2D value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FVector2D value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FVector2D value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FVector2D value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetVector2DFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::RigHierarchy_eventGetVector2DFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics
	{
		struct RigHierarchy_eventGetVectorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorArrayMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FVector array metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FVector array metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetVectorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::RigHierarchy_eventGetVectorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics
	{
		struct RigHierarchy_eventGetVectorFromControlValue_Parms
		{
			FRigControlValue InValue;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorFromControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorFromControlValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the contained FVector value from a a Rig Control Value\n\x09 * @param InValue The Rig Control value to convert from\n\x09 * @return The converted FVector value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the contained FVector value from a a Rig Control Value\n@param InValue The Rig Control value to convert from\n@return The converted FVector value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetVectorFromControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::RigHierarchy_eventGetVectorFromControlValue_Parms), Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics
	{
		struct RigHierarchy_eventGetVectorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FVector DefaultValue;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorMetadata_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventGetVectorMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Queries and returns the value of FVector metadata\n\x09 * @param InItem The element key to return the metadata for\n\x09 * @param InMetadataName The name of the metadata to query\n\x09 * @param DefaultValue The default value to fall back on\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Queries and returns the value of FVector metadata\n@param InItem The element key to return the metadata for\n@param InMetadataName The name of the metadata to query\n@param DefaultValue The default value to fall back on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "GetVectorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::RigHierarchy_eventGetVectorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_GetVectorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_GetVectorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_HasTag_Statics
	{
		struct RigHierarchy_eventHasTag_Parms
		{
			FRigElementKey InItem;
			FName InTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventHasTag_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventHasTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventHasTag_Parms), &Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_HasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/*\n\x09 * Returns true if a given item has a certain tag\n\x09 * @param InItem The item to return the tags for\n\x09 * @param InTag The tag to check\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "* Returns true if a given item has a certain tag\n* @param InItem The item to return the tags for\n* @param InTag The tag to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "HasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_HasTag_Statics::RigHierarchy_eventHasTag_Parms), Z_Construct_UFunction_URigHierarchy_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics
	{
		struct RigHierarchy_eventIsControllerAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsControllerAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsControllerAvailable_Parms), &Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if the hierarchy controller is currently available\n\x09 * The controller may not be available during certain events.\n\x09 * If the controller is not available then GetController() will return nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if the hierarchy controller is currently available\nThe controller may not be available during certain events.\nIf the controller is not available then GetController() will return nullptr." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsControllerAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::RigHierarchy_eventIsControllerAvailable_Parms), Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsControllerAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsControllerAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics
	{
		struct RigHierarchy_eventIsCurveValueSet_Parms
		{
			FRigElementKey InKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsCurveValueSet_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsCurveValueSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsCurveValueSet_Parms), &Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns whether a curve's value is set, given its key\n\x09 * @param InKey The key of the element to retrieve the value for\n\x09 * @return Returns true if the value is set, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns whether a curve's value is set, given its key\n@param InKey The key of the element to retrieve the value for\n@return Returns true if the value is set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsCurveValueSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::RigHierarchy_eventIsCurveValueSet_Parms), Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsCurveValueSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsCurveValueSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics
	{
		struct RigHierarchy_eventIsCurveValueSetByIndex_Parms
		{
			int32 InElementIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsCurveValueSetByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsCurveValueSetByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsCurveValueSetByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns a curve's value given its index\n\x09 * @param InElementIndex The index of the element to retrieve the value for\n\x09 * @return Returns true if the value is set, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns a curve's value given its index\n@param InElementIndex The index of the element to retrieve the value for\n@return Returns true if the value is set, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsCurveValueSetByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::RigHierarchy_eventIsCurveValueSetByIndex_Parms), Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics
	{
		struct RigHierarchy_eventIsParentedTo_Parms
		{
			FRigElementKey InChild;
			FRigElementKey InParent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsParentedTo_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsParentedTo_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsParentedTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsParentedTo_Parms), &Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if an element is parented to another element\n\x09 * @param InChild The key of the child element to check for a parent\n\x09 * @param InParent The key of the parent element to check for\n\x09 * @return True if the given parent and given child have a parent-child relationship\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if an element is parented to another element\n@param InChild The key of the child element to check for a parent\n@param InParent The key of the parent element to check for\n@return True if the given parent and given child have a parent-child relationship" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsParentedTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::RigHierarchy_eventIsParentedTo_Parms), Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsParentedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsParentedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics
	{
		struct RigHierarchy_eventIsProcedural_Parms
		{
			FRigElementKey InKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsProcedural_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_InKey_MetaData)) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsProcedural_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsProcedural_Parms), &Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if the provided element is procedural.\n\x09 * @param InKey The key to validate\n\x09 * @return Returns true if the element is procedural\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if the provided element is procedural.\n@param InKey The key to validate\n@return Returns true if the element is procedural" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsProcedural", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::RigHierarchy_eventIsProcedural_Parms), Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsProcedural()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsProcedural_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsSelected_Statics
	{
		struct RigHierarchy_eventIsSelected_Parms
		{
			FRigElementKey InKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsSelected_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsSelected_Parms), &Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if a given element is selected\n\x09 * @param InKey The key to check\n\x09 * @return true if a given element is selected\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if a given element is selected\n@param InKey The key to check\n@return true if a given element is selected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::RigHierarchy_eventIsSelected_Parms), Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics
	{
		struct RigHierarchy_eventIsSelectedByIndex_Parms
		{
			int32 InIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsSelectedByIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsSelectedByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsSelectedByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if a given element is selected\n\x09 * @param InIndex The index to check\n\x09 * @return true if a given element is selected\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if a given element is selected\n@param InIndex The index to check\n@return true if a given element is selected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsSelectedByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::RigHierarchy_eventIsSelectedByIndex_Parms), Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics
	{
		struct RigHierarchy_eventIsValidIndex_Parms
		{
			int32 InElementIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventIsValidIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventIsValidIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventIsValidIndex_Parms), &Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns true if the provided element index is valid\n\x09 * @param InElementIndex The index to validate\n\x09 * @return Returns true if the provided element index is valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns true if the provided element index is valid\n@param InElementIndex The index to validate\n@return Returns true if the provided element index is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "IsValidIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::RigHierarchy_eventIsValidIndex_Parms), Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_IsValidIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_IsValidIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromBool_Parms
		{
			bool InValue;
			FRigControlValue ReturnValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventMakeControlValueFromBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventMakeControlValueFromBool_Parms), &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a bool value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a bool value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::RigHierarchy_eventMakeControlValueFromBool_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromEulerTransform_Parms
		{
			FEulerTransform InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromEulerTransform_Parms, InValue), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromEulerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FEulerTransform value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FEulerTransform value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromEulerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::RigHierarchy_eventMakeControlValueFromEulerTransform_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromFloat_Parms
		{
			float InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a float value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a float value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::RigHierarchy_eventMakeControlValueFromFloat_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromInt_Parms
		{
			int32 InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a int32 value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a int32 value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::RigHierarchy_eventMakeControlValueFromInt_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromRotator_Parms
		{
			FRotator InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FRotator value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FRotator value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::RigHierarchy_eventMakeControlValueFromRotator_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromTransform_Parms
		{
			FTransform InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FTransform value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FTransform value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::RigHierarchy_eventMakeControlValueFromTransform_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromTransformNoScale_Parms
		{
			FTransformNoScale InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromTransformNoScale_Parms, InValue), Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromTransformNoScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FTransformNoScale value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FTransformNoScale value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromTransformNoScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::RigHierarchy_eventMakeControlValueFromTransformNoScale_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromVector_Parms
		{
			FVector InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FVector value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FVector value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::RigHierarchy_eventMakeControlValueFromVector_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics
	{
		struct RigHierarchy_eventMakeControlValueFromVector2D_Parms
		{
			FVector2D InValue;
			FRigControlValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromVector2D_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventMakeControlValueFromVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Creates a rig control value from a FVector2D value\n\x09 * @param InValue The value to create the rig control value from\n\x09 * @return The converted control rig val ue\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Creates a rig control value from a FVector2D value\n@param InValue The value to create the rig control value from\n@return The converted control rig val ue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "MakeControlValueFromVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::RigHierarchy_eventMakeControlValueFromVector2D_Parms), Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_Num_Statics
	{
		struct RigHierarchy_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Returns the number of elements in the Hierarchy.\n\x09 * @return The number of elements in the Hierarchy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Returns the number of elements in the Hierarchy.\n@return The number of elements in the Hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "Num", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_Num_Statics::RigHierarchy_eventNum_Parms), Z_Construct_UFunction_URigHierarchy_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics
	{
		struct RigHierarchy_eventRemoveAllMetadata_Parms
		{
			FRigElementKey InItem;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventRemoveAllMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventRemoveAllMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventRemoveAllMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n     * Removes all of the metadata under a given item \n\x09 * @param InItem The element key to search under\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Removes all of the metadata under a given item\n@param InItem The element key to search under" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "RemoveAllMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::RigHierarchy_eventRemoveAllMetadata_Parms), Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics
	{
		struct RigHierarchy_eventRemoveMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventRemoveMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventRemoveMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventRemoveMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventRemoveMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Removes the metadata under a given element \n\x09 * @param InItem The element key to search under\n\x09 * @param InMetadataName The name of the metadata to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Removes the metadata under a given element\n@param InItem The element key to search under\n@param InMetadataName The name of the metadata to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "RemoveMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::RigHierarchy_eventRemoveMetadata_Parms), Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_RemoveMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_RemoveMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Clears the whole hierarchy and removes all elements.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Clears the whole hierarchy and removes all elements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Resets all curves to 0.0\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Resets all curves to 0.0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "ResetCurveValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_ResetCurveValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_ResetCurveValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics
	{
		struct RigHierarchy_eventResetPoseToInitial_Parms
		{
			ERigElementType InTypeFilter;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTypeFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTypeFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::NewProp_InTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::NewProp_InTypeFilter = { "InTypeFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventResetPoseToInitial_Parms, InTypeFilter), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(nullptr, 0) }; // 3496922284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::NewProp_InTypeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::NewProp_InTypeFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Resets the current pose of a filtered list of elements to the initial / ref pose.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Resets the current pose of a filtered list of elements to the initial / ref pose." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "ResetPoseToInitial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::RigHierarchy_eventResetPoseToInitial_Parms), Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Resets the hierarchy to the state of its default. This refers to the\n\x09 * hierarchy on the default object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Resets the hierarchy to the state of its default. This refers to the\nhierarchy on the default object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics
	{
		struct RigHierarchy_eventSendAutoKeyEvent_Parms
		{
			FRigElementKey InElement;
			float InOffsetInSeconds;
			bool bAsynchronous;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElement;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOffsetInSeconds;
		static void NewProp_bAsynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsynchronous;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSendAutoKeyEvent_Parms, InElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_InOffsetInSeconds = { "InOffsetInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSendAutoKeyEvent_Parms, InOffsetInSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_bAsynchronous_SetBit(void* Obj)
	{
		((RigHierarchy_eventSendAutoKeyEvent_Parms*)Obj)->bAsynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_bAsynchronous = { "bAsynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSendAutoKeyEvent_Parms), &Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_bAsynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_InElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_InOffsetInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::NewProp_bAsynchronous,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09* Sends an autokey event from the hierarchy to the world\n\x09* @param InElement The element to send the autokey for\n\x09* @param InOffsetInSeconds The time offset in seconds\n\x09* @param bAsynchronous If set to true the event will go on a thread safe queue\n\x09*/" },
		{ "CPP_Default_bAsynchronous", "true" },
		{ "CPP_Default_InOffsetInSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sends an autokey event from the hierarchy to the world\n@param InElement The element to send the autokey for\n@param InOffsetInSeconds The time offset in seconds\n@param bAsynchronous If set to true the event will go on a thread safe queue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SendAutoKeyEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::RigHierarchy_eventSendAutoKeyEvent_Parms), Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetBoolArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<bool> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetBoolArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetBoolArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetBoolArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetBoolArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetBoolArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a bool array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a bool array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetBoolArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::RigHierarchy_eventSetBoolArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics
	{
		struct RigHierarchy_eventSetBoolMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			bool InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetBoolMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetBoolMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetBoolMetadata_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetBoolMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetBoolMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetBoolMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a bool value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a bool value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetBoolMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::RigHierarchy_eventSetBoolMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetBoolMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetBoolMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics
	{
		struct RigHierarchy_eventSetControlOffsetTransform_Parms
		{
			FRigElementKey InKey;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlOffsetTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlOffsetTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransform_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransform_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransform_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the offset transform for a given control element by key\n\x09 * @param InKey The key of the control element to set the offset transform for\n\x09 * @param InTransform The new offset transform value to set\n\x09 * @param bInitial If true the initial value will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the offset transform for a given control element by key\n@param InKey The key of the control element to set the offset transform for\n@param InTransform The new offset transform value to set\n@param bInitial If true the initial value will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlOffsetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::RigHierarchy_eventSetControlOffsetTransform_Parms), Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics
	{
		struct RigHierarchy_eventSetControlOffsetTransformByIndex_Parms
		{
			int32 InElementIndex;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransformByIndex_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransformByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlOffsetTransformByIndex_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlOffsetTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the local offset transform for a given control element by index\n\x09 * @param InElementIndex The index of the control element to set the offset transform for\n \x09 * @param InTransform The new local offset transform value to set\n\x09 * @param bInitial If true the initial value will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the local offset transform for a given control element by index\n@param InElementIndex The index of the control element to set the offset transform for\n@param InTransform The new local offset transform value to set\n@param bInitial If true the initial value will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlOffsetTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::RigHierarchy_eventSetControlOffsetTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics
	{
		struct RigHierarchy_eventSetControlPreferredRotator_Parms
		{
			FRigElementKey InKey;
			FRotator InValue;
			bool bInitial;
			bool bFixEulerFlips;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bFixEulerFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixEulerFlips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlPreferredRotator_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlPreferredRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlPreferredRotator_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlPreferredRotator_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bFixEulerFlips_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlPreferredRotator_Parms*)Obj)->bFixEulerFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bFixEulerFlips = { "bFixEulerFlips", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlPreferredRotator_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bFixEulerFlips_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::NewProp_bFixEulerFlips,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's preferred rotator (local transform rotation)\n\x09 * @param InKey The key of the element to retrieve the current value for\n\x09 * @param InValue The new preferred rotator to set\n\x09 * @param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n\x09 * @param bFixEulerFlips If true the new rotator value will use the shortest path\n\x09 */" },
		{ "CPP_Default_bFixEulerFlips", "false" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's preferred rotator (local transform rotation)\n@param InKey The key of the element to retrieve the current value for\n@param InValue The new preferred rotator to set\n@param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n@param bFixEulerFlips If true the new rotator value will use the shortest path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlPreferredRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::RigHierarchy_eventSetControlPreferredRotator_Parms), Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics
	{
		struct RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms
		{
			int32 InElementIndex;
			FRotator InValue;
			bool bInitial;
			bool bFixEulerFlips;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bFixEulerFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixEulerFlips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bFixEulerFlips_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms*)Obj)->bFixEulerFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bFixEulerFlips = { "bFixEulerFlips", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bFixEulerFlips_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::NewProp_bFixEulerFlips,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's preferred rotator (local transform rotation)\n\x09 * @param InElementIndex The element index to look up\n\x09 * @param InValue The new preferred rotator to set\n\x09 * @param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n\x09 * @param bFixEulerFlips If true the new rotator value will use the shortest path\n\x09 */" },
		{ "CPP_Default_bFixEulerFlips", "false" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's preferred rotator (local transform rotation)\n@param InElementIndex The element index to look up\n@param InValue The new preferred rotator to set\n@param bInitial If true we'll return the preferred rotator for the initial - otherwise current transform\n@param bFixEulerFlips If true the new rotator value will use the shortest path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlPreferredRotatorByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::RigHierarchy_eventSetControlPreferredRotatorByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics
	{
		struct RigHierarchy_eventSetControlSettings_Parms
		{
			FRigElementKey InKey;
			FRigControlSettings InSettings;
			bool bSetupUndo;
			bool bForce;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlSettings_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlSettings_Parms, InSettings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(nullptr, 0) }; // 2264367978
	void Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettings_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettings_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettings_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettings_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettings_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettings_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the control settings for a given control element by key\n\x09 * @param InKey The key of the control element to set the settings for\n\x09 * @param InSettings The new control settings value to set\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the control settings for a given control element by key\n@param InKey The key of the control element to set the settings for\n@param InSettings The new control settings value to set\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::RigHierarchy_eventSetControlSettings_Parms), Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics
	{
		struct RigHierarchy_eventSetControlSettingsByIndex_Parms
		{
			int32 InElementIndex;
			FRigControlSettings InSettings;
			bool bSetupUndo;
			bool bForce;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlSettingsByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlSettingsByIndex_Parms, InSettings), Z_Construct_UScriptStruct_FRigControlSettings, METADATA_PARAMS(nullptr, 0) }; // 2264367978
	void Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettingsByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettingsByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettingsByIndex_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettingsByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlSettingsByIndex_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlSettingsByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the control settings for a given control element by index\n\x09 * @param InElementIndex The index of the control element to set the settings for\n\x09 * @param InSettings The new control settings value to set\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the control settings for a given control element by index\n@param InElementIndex The index of the control element to set the settings for\n@param InSettings The new control settings value to set\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlSettingsByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::RigHierarchy_eventSetControlSettingsByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics
	{
		struct RigHierarchy_eventSetControlShapeTransform_Parms
		{
			FRigElementKey InKey;
			FTransform InTransform;
			bool bInitial;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlShapeTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlShapeTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlShapeTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlShapeTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlShapeTransform_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlShapeTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the shape transform for a given control element by key\n\x09 * @param InKey The key of the control element to set the shape transform for\n\x09 * @param InTransform The new shape transform value to set\n\x09 * @param bInitial If true the initial value will be used\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the shape transform for a given control element by key\n@param InKey The key of the control element to set the shape transform for\n@param InTransform The new shape transform value to set\n@param bInitial If true the initial value will be used\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlShapeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::RigHierarchy_eventSetControlShapeTransform_Parms), Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics
	{
		struct RigHierarchy_eventSetControlShapeTransformByIndex_Parms
		{
			int32 InElementIndex;
			FTransform InTransform;
			bool bInitial;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlShapeTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlShapeTransformByIndex_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlShapeTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlShapeTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlShapeTransformByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlShapeTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the local shape transform for a given control element by index\n\x09 * @param InElementIndex The index of the control element to set the shape transform for\n\x09 * @param InTransform The new local shape transform value to set\n\x09 * @param bInitial If true the initial value will be used\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the local shape transform for a given control element by index\n@param InElementIndex The index of the control element to set the shape transform for\n@param InTransform The new local shape transform value to set\n@param bInitial If true the initial value will be used\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlShapeTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::RigHierarchy_eventSetControlShapeTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics
	{
		struct RigHierarchy_eventSetControlValue_Parms
		{
			FRigElementKey InKey;
			FRigControlValue InValue;
			ERigControlValueType InValueType;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValueType;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValue_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValue_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValueType = { "InValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValue_Parms, InValueType), Z_Construct_UEnum_ControlRig_ERigControlValueType, METADATA_PARAMS(nullptr, 0) }; // 334306411
	void Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlValue_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlValue_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlValue_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlValue_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_InValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's current value given its key\n\x09 * @param InKey The key of the element to set the current value for\n\x09 * @param InValue The value to set on the control\n\x09 * @param InValueType The type of value to set\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InValueType", "Current" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's current value given its key\n@param InKey The key of the element to set the current value for\n@param InValue The value to set on the control\n@param InValueType The type of value to set\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::RigHierarchy_eventSetControlValue_Parms), Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics
	{
		struct RigHierarchy_eventSetControlValueByIndex_Parms
		{
			int32 InElementIndex;
			FRigControlValue InValue;
			ERigControlValueType InValueType;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValueType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValueType;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValueByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValueByIndex_Parms, InValue), Z_Construct_UScriptStruct_FRigControlValue, METADATA_PARAMS(nullptr, 0) }; // 526117509
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValueType = { "InValueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlValueByIndex_Parms, InValueType), Z_Construct_UEnum_ControlRig_ERigControlValueType, METADATA_PARAMS(nullptr, 0) }; // 334306411
	void Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlValueByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlValueByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlValueByIndex_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlValueByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_InValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's current value given its index\n\x09 * @param InElementIndex The index of the element to set the current value for\n\x09 * @param InValue The value to set on the control\n\x09 * @param InValueType The type of value to set\n  \x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "CPP_Default_InValueType", "Current" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's current value given its index\n@param InElementIndex The index of the element to set the current value for\n@param InValue The value to set on the control\n@param InValueType The type of value to set\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlValueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::RigHierarchy_eventSetControlValueByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics
	{
		struct RigHierarchy_eventSetControlVisibility_Parms
		{
			FRigElementKey InKey;
			bool bVisibility;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlVisibility_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlVisibility_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's current visibility based on a key\n\x09 * @param InKey The key of the element to set the visibility for\n\x09 * @param bVisibility The visibility to set on the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's current visibility based on a key\n@param InKey The key of the element to set the visibility for\n@param bVisibility The visibility to set on the control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::RigHierarchy_eventSetControlVisibility_Parms), Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics
	{
		struct RigHierarchy_eventSetControlVisibilityByIndex_Parms
		{
			int32 InElementIndex;
			bool bVisibility;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetControlVisibilityByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetControlVisibilityByIndex_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetControlVisibilityByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a control's current visibility based on a key\n\x09 * @param InElementIndex The index of the element to set the visibility for\n\x09 * @param bVisibility The visibility to set on the control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a control's current visibility based on a key\n@param InElementIndex The index of the element to set the visibility for\n@param bVisibility The visibility to set on the control" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetControlVisibilityByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::RigHierarchy_eventSetControlVisibilityByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics
	{
		struct RigHierarchy_eventSetCurveValue_Parms
		{
			FRigElementKey InKey;
			float InValue;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetCurveValue_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetCurveValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetCurveValue_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetCurveValue_Parms), &Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a curve's value given its key\n\x09 * @param InKey The key of the element to set the value for\n\x09 * @param InValue The value to set on the curve\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a curve's value given its key\n@param InKey The key of the element to set the value for\n@param InValue The value to set on the curve\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::RigHierarchy_eventSetCurveValue_Parms), Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics
	{
		struct RigHierarchy_eventSetCurveValueByIndex_Parms
		{
			int32 InElementIndex;
			float InValue;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetCurveValueByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetCurveValueByIndex_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetCurveValueByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetCurveValueByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a curve's value given its index\n\x09 * @param InElementIndex The index of the element to set the value for\n\x09 * @param InValue The value to set on the curve\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a curve's value given its index\n@param InElementIndex The index of the element to set the value for\n@param InValue The value to set on the curve\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetCurveValueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::RigHierarchy_eventSetCurveValueByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetFloatArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<float> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetFloatArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetFloatArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a float array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a float array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetFloatArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::RigHierarchy_eventSetFloatArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics
	{
		struct RigHierarchy_eventSetFloatMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			float InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetFloatMetadata_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetFloatMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetFloatMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a float value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a float value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetFloatMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::RigHierarchy_eventSetFloatMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetFloatMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetFloatMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics
	{
		struct RigHierarchy_eventSetGlobalTransform_Parms
		{
			FRigElementKey InKey;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommand;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetGlobalTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetGlobalTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransform_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransform_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransform_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::NewProp_bPrintPythonCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the global current or initial transform for a given key.\n\x09 * @param InKey The key to set the transform for\n\x09 * @param InTransform The new transform value to set\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the global current or initial transform for a given key.\n@param InKey The key to set the transform for\n@param InTransform The new transform value to set\n@param bInitial If true the initial transform will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::RigHierarchy_eventSetGlobalTransform_Parms), Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics
	{
		struct RigHierarchy_eventSetGlobalTransformByIndex_Parms
		{
			int32 InElementIndex;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommand;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetGlobalTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetGlobalTransformByIndex_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransformByIndex_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransformByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bPrintPythonCommand_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetGlobalTransformByIndex_Parms*)Obj)->bPrintPythonCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bPrintPythonCommand = { "bPrintPythonCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetGlobalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bPrintPythonCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::NewProp_bPrintPythonCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the global current or initial transform for a given element index.\n\x09 * @param InElementIndex The index of the element to set the transform for\n\x09 * @param InTransform The new transform value to set\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommand", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the global current or initial transform for a given element index.\n@param InElementIndex The index of the element to set the transform for\n@param InTransform The new transform value to set\n@param bInitial If true the initial transform will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetGlobalTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::RigHierarchy_eventSetGlobalTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetInt32ArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<int32> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32ArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32ArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32ArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetInt32ArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetInt32ArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a int32 array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a int32 array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetInt32ArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::RigHierarchy_eventSetInt32ArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics
	{
		struct RigHierarchy_eventSetInt32Metadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			int32 InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32Metadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32Metadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetInt32Metadata_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetInt32Metadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetInt32Metadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a int32 value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a int32 value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetInt32Metadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::RigHierarchy_eventSetInt32Metadata_Parms), Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetInt32Metadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetInt32Metadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetLinearColorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FLinearColor> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLinearColorArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLinearColorArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FLinearColor array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FLinearColor array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetLinearColorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::RigHierarchy_eventSetLinearColorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics
	{
		struct RigHierarchy_eventSetLinearColorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FLinearColor InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLinearColorMetadata_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLinearColorMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLinearColorMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FLinearColor value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FLinearColor value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetLinearColorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::RigHierarchy_eventSetLinearColorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics
	{
		struct RigHierarchy_eventSetLocalTransform_Parms
		{
			FRigElementKey InKey;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLocalTransform_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLocalTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransform_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransform_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransform_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransform_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransform_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the local current or initial transform for a given key.\n\x09 * @param InKey The key to set the transform for\n\x09 * @param InTransform The new transform value to set\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the local current or initial transform for a given key.\n@param InKey The key to set the transform for\n@param InTransform The new transform value to set\n@param bInitial If true the initial transform will be used\n@param bSetupUndo If true the transform stack will be setup for undo / redo\n@param bAffectChildren If set to false children will not move (maintain global)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::RigHierarchy_eventSetLocalTransform_Parms), Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics
	{
		struct RigHierarchy_eventSetLocalTransformByIndex_Parms
		{
			int32 InElementIndex;
			FTransform InTransform;
			bool bInitial;
			bool bAffectChildren;
			bool bSetupUndo;
			bool bPrintPythonCommands;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static void NewProp_bPrintPythonCommands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintPythonCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLocalTransformByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetLocalTransformByIndex_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransformByIndex_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransformByIndex_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransformByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bPrintPythonCommands_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetLocalTransformByIndex_Parms*)Obj)->bPrintPythonCommands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bPrintPythonCommands = { "bPrintPythonCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetLocalTransformByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bPrintPythonCommands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bSetupUndo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::NewProp_bPrintPythonCommands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the local current or initial transform for a given element index.\n\x09 * @param InElementIndex The index of the element to set the transform for\n\x09 * @param InTransform The new transform value to set\n\x09 * @param bInitial If true the initial transform will be used\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "CPP_Default_bPrintPythonCommands", "false" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the local current or initial transform for a given element index.\n@param InElementIndex The index of the element to set the transform for\n@param InTransform The new transform value to set\n@param bInitial If true the initial transform will be used\n@param bSetupUndo If true the transform stack will be setup for undo / redo\n@param bAffectChildren If set to false children will not move (maintain global)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetLocalTransformByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::RigHierarchy_eventSetLocalTransformByIndex_Parms), Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetNameArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FName> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetNameArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetNameArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FName array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FName array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetNameArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::RigHierarchy_eventSetNameArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics
	{
		struct RigHierarchy_eventSetNameMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FName InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetNameMetadata_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetNameMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetNameMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FName value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FName value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetNameMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::RigHierarchy_eventSetNameMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetNameMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetNameMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics
	{
		struct RigHierarchy_eventSetParentWeight_Parms
		{
			FRigElementKey InChild;
			FRigElementKey InParent;
			FRigElementWeight InWeight;
			bool bInitial;
			bool bAffectChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWeight;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetParentWeight_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetParentWeight_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetParentWeight_Parms, InWeight), Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	void Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeight_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeight_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeight_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeight_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeight_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_InWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the weight of a parent below a multi parent element\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param InParent The key of the parent to look up the weight for\n\x09 * @param InWeight The new weight to set for the parent\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @return Returns true if changing the weight was successful\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the weight of a parent below a multi parent element\n@param InChild The key of the multi parented element\n@param InParent The key of the parent to look up the weight for\n@param InWeight The new weight to set for the parent\n@param bInitial If true the initial weights will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@return Returns true if changing the weight was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetParentWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::RigHierarchy_eventSetParentWeight_Parms), Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetParentWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetParentWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics
	{
		struct RigHierarchy_eventSetParentWeightArray_Parms
		{
			FRigElementKey InChild;
			TArray<FRigElementWeight> InWeights;
			bool bInitial;
			bool bAffectChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWeights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InWeights;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetParentWeightArray_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InWeights_Inner = { "InWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InWeights = { "InWeights", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetParentWeightArray_Parms, InWeights), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4235111560
	void Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeightArray_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeightArray_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeightArray_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeightArray_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetParentWeightArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetParentWeightArray_Parms), &Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_InWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the all of the weights of the parents of a multi parent element\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param InWeights The new weights to set for the parents\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @return Returns true if changing the weight was successful\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the all of the weights of the parents of a multi parent element\n@param InChild The key of the multi parented element\n@param InWeights The new weights to set for the parents\n@param bInitial If true the initial weights will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@return Returns true if changing the weight was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetParentWeightArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::RigHierarchy_eventSetParentWeightArray_Parms), Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetParentWeightArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetParentWeightArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics
	{
		struct RigHierarchy_eventSetPose_ForBlueprint_Parms
		{
			FRigPose InPose;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::NewProp_InPose = { "InPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetPose_ForBlueprint_Parms, InPose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(nullptr, 0) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::NewProp_InPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the current / initial pose of the hierarchy\n\x09 * @param InPose The pose to set on the hierarchy\n\x09 */" },
		{ "DisplayName", "Set Pose" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ScriptName", "SetPose" },
		{ "ToolTip", "Sets the current / initial pose of the hierarchy\n@param InPose The pose to set on the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetPose_ForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::RigHierarchy_eventSetPose_ForBlueprint_Parms), Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetQuatArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FQuat> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetQuatArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetQuatArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FQuat array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FQuat array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetQuatArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::RigHierarchy_eventSetQuatArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics
	{
		struct RigHierarchy_eventSetQuatMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FQuat InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetQuatMetadata_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetQuatMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetQuatMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FQuat value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FQuat value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetQuatMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::RigHierarchy_eventSetQuatMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetQuatMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetQuatMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FRigElementKey> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FRigElementKey array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FRigElementKey array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetRigElementKeyArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::RigHierarchy_eventSetRigElementKeyArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics
	{
		struct RigHierarchy_eventSetRigElementKeyMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FRigElementKey InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRigElementKeyMetadata_Parms, InValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetRigElementKeyMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetRigElementKeyMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FRigElementKey value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FRigElementKey value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetRigElementKeyMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::RigHierarchy_eventSetRigElementKeyMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetRotatorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FRotator> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetRotatorArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetRotatorArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FRotator array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FRotator array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetRotatorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::RigHierarchy_eventSetRotatorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics
	{
		struct RigHierarchy_eventSetRotatorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FRotator InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetRotatorMetadata_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetRotatorMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetRotatorMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FRotator value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FRotator value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetRotatorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::RigHierarchy_eventSetRotatorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetTag_Statics
	{
		struct RigHierarchy_eventSetTag_Parms
		{
			FRigElementKey InItem;
			FName InTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTag_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetTag_Parms), &Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/*\n     * Sets a tag on an element in the hierarchy\n     * @param InItem The item to set the tag for\n     * @param InTag The tag to set\n     */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "* Sets a tag on an element in the hierarchy\n* @param InItem The item to set the tag for\n* @param InTag The tag to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetTag_Statics::RigHierarchy_eventSetTag_Parms), Z_Construct_UFunction_URigHierarchy_SetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetTransformArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FTransform> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetTransformArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetTransformArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FTransform array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FTransform array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetTransformArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::RigHierarchy_eventSetTransformArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics
	{
		struct RigHierarchy_eventSetTransformMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FTransform InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetTransformMetadata_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetTransformMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetTransformMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FTransform value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FTransform value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetTransformMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::RigHierarchy_eventSetTransformMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetTransformMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetTransformMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics
	{
		struct RigHierarchy_eventSetVectorArrayMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			TArray<FVector> InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorArrayMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorArrayMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorArrayMetadata_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetVectorArrayMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetVectorArrayMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FVector array value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FVector array value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetVectorArrayMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::RigHierarchy_eventSetVectorArrayMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics
	{
		struct RigHierarchy_eventSetVectorMetadata_Parms
		{
			FRigElementKey InItem;
			FName InMetadataName;
			FVector InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadataName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorMetadata_Parms, InItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InMetadataName = { "InMetadataName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorMetadata_Parms, InMetadataName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSetVectorMetadata_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSetVectorMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSetVectorMetadata_Parms), &Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InMetadataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets the metadata to a FVector value\n\x09 * @param InItem The element key to set the metadata for\n\x09 * @param InMetadataName The name of the metadata to set\n\x09 * @param InValue The value to set\n\x09 * @return Returns true if setting the metadata was successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets the metadata to a FVector value\n@param InItem The element key to set the metadata for\n@param InMetadataName The name of the metadata to set\n@param InValue The value to set\n@return Returns true if setting the metadata was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SetVectorMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::RigHierarchy_eventSetVectorMetadata_Parms), Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SetVectorMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SetVectorMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SortKeys_Statics
	{
		struct RigHierarchy_eventSortKeys_Parms
		{
			TArray<FRigElementKey> InKeys;
			TArray<FRigElementKey> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys_Inner = { "InKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys = { "InKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSortKeys_Parms, InKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSortKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_InKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sorts the input key list by traversing the hierarchy\n\x09 * @param InKeys The keys to sort\n\x09 * @return The sorted keys\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sorts the input key list by traversing the hierarchy\n@param InKeys The keys to sort\n@return The sorted keys" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SortKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::RigHierarchy_eventSortKeys_Parms), Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SortKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SortKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics
	{
		struct RigHierarchy_eventSwitchToDefaultParent_Parms
		{
			FRigElementKey InChild;
			bool bInitial;
			bool bAffectChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSwitchToDefaultParent_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToDefaultParent_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToDefaultParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToDefaultParent_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToDefaultParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToDefaultParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToDefaultParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Switches a multi parent element to its first parent\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @return Returns true if changing the weight was successful\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Switches a multi parent element to its first parent\n@param InChild The key of the multi parented element\n@param bInitial If true the initial weights will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@return Returns true if changing the weight was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SwitchToDefaultParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::RigHierarchy_eventSwitchToDefaultParent_Parms), Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics
	{
		struct RigHierarchy_eventSwitchToParent_Parms
		{
			FRigElementKey InChild;
			FRigElementKey InParent;
			bool bInitial;
			bool bAffectChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParent;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSwitchToParent_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSwitchToParent_Parms, InParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToParent_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToParent_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToParent_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Switches a multi parent element to a single parent.\n\x09 * This sets the new parent's weight to 1.0 and disables\n\x09 * weights for all other potential parents.\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param InParent The key of the parent to look up the weight for\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @return Returns true if changing the weight was successful\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Switches a multi parent element to a single parent.\nThis sets the new parent's weight to 1.0 and disables\nweights for all other potential parents.\n@param InChild The key of the multi parented element\n@param InParent The key of the parent to look up the weight for\n@param bInitial If true the initial weights will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@return Returns true if changing the weight was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SwitchToParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::RigHierarchy_eventSwitchToParent_Parms), Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SwitchToParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SwitchToParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics
	{
		struct RigHierarchy_eventSwitchToWorldSpace_Parms
		{
			FRigElementKey InChild;
			bool bInitial;
			bool bAffectChildren;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChild;
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static void NewProp_bAffectChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventSwitchToWorldSpace_Parms, InChild), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToWorldSpace_Parms*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToWorldSpace_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bAffectChildren_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToWorldSpace_Parms*)Obj)->bAffectChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bAffectChildren = { "bAffectChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToWorldSpace_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bAffectChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigHierarchy_eventSwitchToWorldSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventSwitchToWorldSpace_Parms), &Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_bAffectChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Switches a multi parent element to world space.\n\x09 * This injects a world space reference.\n\x09 * @param InChild The key of the multi parented element\n\x09 * @param bInitial If true the initial weights will be used\n\x09 * @param bAffectChildren If set to false children will not move (maintain global).\n\x09 * @return Returns true if changing the weight was successful\n\x09 */" },
		{ "CPP_Default_bAffectChildren", "true" },
		{ "CPP_Default_bInitial", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Switches a multi parent element to world space.\nThis injects a world space reference.\n@param InChild The key of the multi parented element\n@param bInitial If true the initial weights will be used\n@param bAffectChildren If set to false children will not move (maintain global).\n@return Returns true if changing the weight was successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "SwitchToWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::RigHierarchy_eventSwitchToWorldSpace_Parms), Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics
	{
		struct RigHierarchy_eventUnsetCurveValue_Parms
		{
			FRigElementKey InKey;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventUnsetCurveValue_Parms, InKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	void Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventUnsetCurveValue_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventUnsetCurveValue_Parms), &Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a curve's value given its key\n\x09 * @param InKey The key of the element to set the value for\n\x09 * @param InValue The value to set on the curve\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a curve's value given its key\n@param InKey The key of the element to set the value for\n@param InValue The value to set on the curve\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "UnsetCurveValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::RigHierarchy_eventUnsetCurveValue_Parms), Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_UnsetCurveValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_UnsetCurveValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics
	{
		struct RigHierarchy_eventUnsetCurveValueByIndex_Parms
		{
			int32 InElementIndex;
			bool bSetupUndo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InElementIndex;
		static void NewProp_bSetupUndo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_InElementIndex = { "InElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigHierarchy_eventUnsetCurveValueByIndex_Parms, InElementIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
	{
		((RigHierarchy_eventUnsetCurveValueByIndex_Parms*)Obj)->bSetupUndo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigHierarchy_eventUnsetCurveValueByIndex_Parms), &Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_InElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::NewProp_bSetupUndo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "URigHierarchy" },
		{ "Comment", "/**\n\x09 * Sets a curve's value given its index\n\x09 * @param InElementIndex The index of the element to set the value for\n\x09 * @param InValue The value to set on the curve\n\x09 * @param bSetupUndo If true the transform stack will be setup for undo / redo\n\x09 */" },
		{ "CPP_Default_bSetupUndo", "false" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "Sets a curve's value given its index\n@param InElementIndex The index of the element to set the value for\n@param InValue The value to set on the curve\n@param bSetupUndo If true the transform stack will be setup for undo / redo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigHierarchy, nullptr, "UnsetCurveValueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::RigHierarchy_eventUnsetCurveValueByIndex_Parms), Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigHierarchy);
	UClass* Z_Construct_UClass_URigHierarchy_NoRegister()
	{
		return URigHierarchy::StaticClass();
	}
	struct Z_Construct_UClass_URigHierarchy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopologyVersion_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TopologyVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MetadataVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataTagVersion_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MetadataTagVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDirtyPropagation_MetaData[];
#endif
		static void NewProp_bEnableDirtyPropagation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDirtyPropagation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformStackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransformStackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HierarchyController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousNameMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PreviousNameMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyForCacheValidation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HierarchyForCacheValidation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigHierarchy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigHierarchy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigHierarchy_Contains_ForBlueprint, "Contains_ForBlueprint" }, // 2745872055
		{ &Z_Construct_UFunction_URigHierarchy_CopyHierarchy, "CopyHierarchy" }, // 4129410225
		{ &Z_Construct_UFunction_URigHierarchy_CopyPose, "CopyPose" }, // 2019912050
		{ &Z_Construct_UFunction_URigHierarchy_FindBone_ForBlueprintOnly, "FindBone_ForBlueprintOnly" }, // 1466114802
		{ &Z_Construct_UFunction_URigHierarchy_FindControl_ForBlueprintOnly, "FindControl_ForBlueprintOnly" }, // 3020474069
		{ &Z_Construct_UFunction_URigHierarchy_FindNull_ForBlueprintOnly, "FindNull_ForBlueprintOnly" }, // 3335063308
		{ &Z_Construct_UFunction_URigHierarchy_GetAllKeys_ForBlueprint, "GetAllKeys_ForBlueprint" }, // 220666938
		{ &Z_Construct_UFunction_URigHierarchy_GetBoneKeys, "GetBoneKeys" }, // 1952527519
		{ &Z_Construct_UFunction_URigHierarchy_GetBoolArrayMetadata, "GetBoolArrayMetadata" }, // 2744146748
		{ &Z_Construct_UFunction_URigHierarchy_GetBoolMetadata, "GetBoolMetadata" }, // 2921438632
		{ &Z_Construct_UFunction_URigHierarchy_GetChildren, "GetChildren" }, // 122459794
		{ &Z_Construct_UFunction_URigHierarchy_GetControlKeys, "GetControlKeys" }, // 1263821808
		{ &Z_Construct_UFunction_URigHierarchy_GetController, "GetController" }, // 3552718117
		{ &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotator, "GetControlPreferredRotator" }, // 2272042408
		{ &Z_Construct_UFunction_URigHierarchy_GetControlPreferredRotatorByIndex, "GetControlPreferredRotatorByIndex" }, // 951436985
		{ &Z_Construct_UFunction_URigHierarchy_GetControlValue, "GetControlValue" }, // 3133034149
		{ &Z_Construct_UFunction_URigHierarchy_GetControlValueByIndex, "GetControlValueByIndex" }, // 2959332230
		{ &Z_Construct_UFunction_URigHierarchy_GetCurveKeys, "GetCurveKeys" }, // 1103181143
		{ &Z_Construct_UFunction_URigHierarchy_GetCurveValue, "GetCurveValue" }, // 3388676948
		{ &Z_Construct_UFunction_URigHierarchy_GetCurveValueByIndex, "GetCurveValueByIndex" }, // 1994039873
		{ &Z_Construct_UFunction_URigHierarchy_GetDefaultParent, "GetDefaultParent" }, // 1768642886
		{ &Z_Construct_UFunction_URigHierarchy_GetEulerTransformFromControlValue, "GetEulerTransformFromControlValue" }, // 1626206525
		{ &Z_Construct_UFunction_URigHierarchy_GetFirstParent, "GetFirstParent" }, // 3690934085
		{ &Z_Construct_UFunction_URigHierarchy_GetFloatArrayMetadata, "GetFloatArrayMetadata" }, // 1524569821
		{ &Z_Construct_UFunction_URigHierarchy_GetFloatFromControlValue, "GetFloatFromControlValue" }, // 1572805561
		{ &Z_Construct_UFunction_URigHierarchy_GetFloatMetadata, "GetFloatMetadata" }, // 1107537254
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransform, "GetGlobalControlOffsetTransform" }, // 742066486
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalControlOffsetTransformByIndex, "GetGlobalControlOffsetTransformByIndex" }, // 2333348085
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransform, "GetGlobalControlShapeTransform" }, // 2802559245
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalControlShapeTransformByIndex, "GetGlobalControlShapeTransformByIndex" }, // 2193660829
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalTransform, "GetGlobalTransform" }, // 1986353367
		{ &Z_Construct_UFunction_URigHierarchy_GetGlobalTransformByIndex, "GetGlobalTransformByIndex" }, // 1509579700
		{ &Z_Construct_UFunction_URigHierarchy_GetIndex_ForBlueprint, "GetIndex_ForBlueprint" }, // 48146765
		{ &Z_Construct_UFunction_URigHierarchy_GetInt32ArrayMetadata, "GetInt32ArrayMetadata" }, // 3806388547
		{ &Z_Construct_UFunction_URigHierarchy_GetInt32Metadata, "GetInt32Metadata" }, // 2868762117
		{ &Z_Construct_UFunction_URigHierarchy_GetIntFromControlValue, "GetIntFromControlValue" }, // 1978727294
		{ &Z_Construct_UFunction_URigHierarchy_GetKey, "GetKey" }, // 4114816316
		{ &Z_Construct_UFunction_URigHierarchy_GetKeys, "GetKeys" }, // 4005842067
		{ &Z_Construct_UFunction_URigHierarchy_GetLinearColorArrayMetadata, "GetLinearColorArrayMetadata" }, // 2466649450
		{ &Z_Construct_UFunction_URigHierarchy_GetLinearColorMetadata, "GetLinearColorMetadata" }, // 868709430
		{ &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransform, "GetLocalControlShapeTransform" }, // 3437048152
		{ &Z_Construct_UFunction_URigHierarchy_GetLocalControlShapeTransformByIndex, "GetLocalControlShapeTransformByIndex" }, // 1447077333
		{ &Z_Construct_UFunction_URigHierarchy_GetLocalIndex_ForBlueprint, "GetLocalIndex_ForBlueprint" }, // 768295542
		{ &Z_Construct_UFunction_URigHierarchy_GetLocalTransform, "GetLocalTransform" }, // 3304320533
		{ &Z_Construct_UFunction_URigHierarchy_GetLocalTransformByIndex, "GetLocalTransformByIndex" }, // 2346518794
		{ &Z_Construct_UFunction_URigHierarchy_GetMetadataNames, "GetMetadataNames" }, // 95021301
		{ &Z_Construct_UFunction_URigHierarchy_GetMetadataType, "GetMetadataType" }, // 400610648
		{ &Z_Construct_UFunction_URigHierarchy_GetNameArrayMetadata, "GetNameArrayMetadata" }, // 133970790
		{ &Z_Construct_UFunction_URigHierarchy_GetNameMetadata, "GetNameMetadata" }, // 1346905985
		{ &Z_Construct_UFunction_URigHierarchy_GetNullKeys, "GetNullKeys" }, // 2010360173
		{ &Z_Construct_UFunction_URigHierarchy_GetNumberOfParents, "GetNumberOfParents" }, // 2256755788
		{ &Z_Construct_UFunction_URigHierarchy_GetParents, "GetParents" }, // 965288318
		{ &Z_Construct_UFunction_URigHierarchy_GetParentTransform, "GetParentTransform" }, // 3951720348
		{ &Z_Construct_UFunction_URigHierarchy_GetParentTransformByIndex, "GetParentTransformByIndex" }, // 813089830
		{ &Z_Construct_UFunction_URigHierarchy_GetParentWeight, "GetParentWeight" }, // 400954125
		{ &Z_Construct_UFunction_URigHierarchy_GetParentWeightArray, "GetParentWeightArray" }, // 325017927
		{ &Z_Construct_UFunction_URigHierarchy_GetPose, "GetPose" }, // 4131081492
		{ &Z_Construct_UFunction_URigHierarchy_GetPreviousName, "GetPreviousName" }, // 917862520
		{ &Z_Construct_UFunction_URigHierarchy_GetPreviousParent, "GetPreviousParent" }, // 3045143090
		{ &Z_Construct_UFunction_URigHierarchy_GetQuatArrayMetadata, "GetQuatArrayMetadata" }, // 115134153
		{ &Z_Construct_UFunction_URigHierarchy_GetQuatMetadata, "GetQuatMetadata" }, // 1463904923
		{ &Z_Construct_UFunction_URigHierarchy_GetReferenceKeys, "GetReferenceKeys" }, // 1267532090
		{ &Z_Construct_UFunction_URigHierarchy_GetRigElementKeyArrayMetadata, "GetRigElementKeyArrayMetadata" }, // 1888145043
		{ &Z_Construct_UFunction_URigHierarchy_GetRigElementKeyMetadata, "GetRigElementKeyMetadata" }, // 1098622783
		{ &Z_Construct_UFunction_URigHierarchy_GetRigidBodyKeys, "GetRigidBodyKeys" }, // 2803535678
		{ &Z_Construct_UFunction_URigHierarchy_GetRootElementKeys, "GetRootElementKeys" }, // 3129765484
		{ &Z_Construct_UFunction_URigHierarchy_GetRotatorArrayMetadata, "GetRotatorArrayMetadata" }, // 3855016297
		{ &Z_Construct_UFunction_URigHierarchy_GetRotatorFromControlValue, "GetRotatorFromControlValue" }, // 3510877431
		{ &Z_Construct_UFunction_URigHierarchy_GetRotatorMetadata, "GetRotatorMetadata" }, // 2205120326
		{ &Z_Construct_UFunction_URigHierarchy_GetSelectedKeys, "GetSelectedKeys" }, // 4191570922
		{ &Z_Construct_UFunction_URigHierarchy_GetTags, "GetTags" }, // 133423103
		{ &Z_Construct_UFunction_URigHierarchy_GetTransformArrayMetadata, "GetTransformArrayMetadata" }, // 2663778630
		{ &Z_Construct_UFunction_URigHierarchy_GetTransformFromControlValue, "GetTransformFromControlValue" }, // 714094304
		{ &Z_Construct_UFunction_URigHierarchy_GetTransformMetadata, "GetTransformMetadata" }, // 3577116842
		{ &Z_Construct_UFunction_URigHierarchy_GetTransformNoScaleFromControlValue, "GetTransformNoScaleFromControlValue" }, // 3322045350
		{ &Z_Construct_UFunction_URigHierarchy_GetVector2DFromControlValue, "GetVector2DFromControlValue" }, // 555294447
		{ &Z_Construct_UFunction_URigHierarchy_GetVectorArrayMetadata, "GetVectorArrayMetadata" }, // 3194260886
		{ &Z_Construct_UFunction_URigHierarchy_GetVectorFromControlValue, "GetVectorFromControlValue" }, // 4760414
		{ &Z_Construct_UFunction_URigHierarchy_GetVectorMetadata, "GetVectorMetadata" }, // 995816048
		{ &Z_Construct_UFunction_URigHierarchy_HasTag, "HasTag" }, // 4135945538
		{ &Z_Construct_UFunction_URigHierarchy_IsControllerAvailable, "IsControllerAvailable" }, // 1581464346
		{ &Z_Construct_UFunction_URigHierarchy_IsCurveValueSet, "IsCurveValueSet" }, // 873608379
		{ &Z_Construct_UFunction_URigHierarchy_IsCurveValueSetByIndex, "IsCurveValueSetByIndex" }, // 3538322796
		{ &Z_Construct_UFunction_URigHierarchy_IsParentedTo, "IsParentedTo" }, // 325581437
		{ &Z_Construct_UFunction_URigHierarchy_IsProcedural, "IsProcedural" }, // 3715371662
		{ &Z_Construct_UFunction_URigHierarchy_IsSelected, "IsSelected" }, // 3131882563
		{ &Z_Construct_UFunction_URigHierarchy_IsSelectedByIndex, "IsSelectedByIndex" }, // 3098230901
		{ &Z_Construct_UFunction_URigHierarchy_IsValidIndex, "IsValidIndex" }, // 625304280
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromBool, "MakeControlValueFromBool" }, // 3470515468
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromEulerTransform, "MakeControlValueFromEulerTransform" }, // 646352955
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromFloat, "MakeControlValueFromFloat" }, // 1897552007
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromInt, "MakeControlValueFromInt" }, // 1666009890
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromRotator, "MakeControlValueFromRotator" }, // 1626324907
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransform, "MakeControlValueFromTransform" }, // 480785235
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromTransformNoScale, "MakeControlValueFromTransformNoScale" }, // 1100523247
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector, "MakeControlValueFromVector" }, // 1466106134
		{ &Z_Construct_UFunction_URigHierarchy_MakeControlValueFromVector2D, "MakeControlValueFromVector2D" }, // 3104038076
		{ &Z_Construct_UFunction_URigHierarchy_Num, "Num" }, // 196307798
		{ &Z_Construct_UFunction_URigHierarchy_RemoveAllMetadata, "RemoveAllMetadata" }, // 1262482703
		{ &Z_Construct_UFunction_URigHierarchy_RemoveMetadata, "RemoveMetadata" }, // 4007243898
		{ &Z_Construct_UFunction_URigHierarchy_Reset, "Reset" }, // 1794014316
		{ &Z_Construct_UFunction_URigHierarchy_ResetCurveValues, "ResetCurveValues" }, // 1160913044
		{ &Z_Construct_UFunction_URigHierarchy_ResetPoseToInitial, "ResetPoseToInitial" }, // 214330733
		{ &Z_Construct_UFunction_URigHierarchy_ResetToDefault, "ResetToDefault" }, // 2396733267
		{ &Z_Construct_UFunction_URigHierarchy_SendAutoKeyEvent, "SendAutoKeyEvent" }, // 2633859991
		{ &Z_Construct_UFunction_URigHierarchy_SetBoolArrayMetadata, "SetBoolArrayMetadata" }, // 3947446831
		{ &Z_Construct_UFunction_URigHierarchy_SetBoolMetadata, "SetBoolMetadata" }, // 3790817878
		{ &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransform, "SetControlOffsetTransform" }, // 371186504
		{ &Z_Construct_UFunction_URigHierarchy_SetControlOffsetTransformByIndex, "SetControlOffsetTransformByIndex" }, // 2562266418
		{ &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotator, "SetControlPreferredRotator" }, // 342382432
		{ &Z_Construct_UFunction_URigHierarchy_SetControlPreferredRotatorByIndex, "SetControlPreferredRotatorByIndex" }, // 4275180448
		{ &Z_Construct_UFunction_URigHierarchy_SetControlSettings, "SetControlSettings" }, // 150031763
		{ &Z_Construct_UFunction_URigHierarchy_SetControlSettingsByIndex, "SetControlSettingsByIndex" }, // 646718126
		{ &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransform, "SetControlShapeTransform" }, // 2039851737
		{ &Z_Construct_UFunction_URigHierarchy_SetControlShapeTransformByIndex, "SetControlShapeTransformByIndex" }, // 3376778318
		{ &Z_Construct_UFunction_URigHierarchy_SetControlValue, "SetControlValue" }, // 1846908439
		{ &Z_Construct_UFunction_URigHierarchy_SetControlValueByIndex, "SetControlValueByIndex" }, // 4103253183
		{ &Z_Construct_UFunction_URigHierarchy_SetControlVisibility, "SetControlVisibility" }, // 3629536449
		{ &Z_Construct_UFunction_URigHierarchy_SetControlVisibilityByIndex, "SetControlVisibilityByIndex" }, // 2950730651
		{ &Z_Construct_UFunction_URigHierarchy_SetCurveValue, "SetCurveValue" }, // 3673129147
		{ &Z_Construct_UFunction_URigHierarchy_SetCurveValueByIndex, "SetCurveValueByIndex" }, // 784440288
		{ &Z_Construct_UFunction_URigHierarchy_SetFloatArrayMetadata, "SetFloatArrayMetadata" }, // 1762673091
		{ &Z_Construct_UFunction_URigHierarchy_SetFloatMetadata, "SetFloatMetadata" }, // 2512350309
		{ &Z_Construct_UFunction_URigHierarchy_SetGlobalTransform, "SetGlobalTransform" }, // 3100230694
		{ &Z_Construct_UFunction_URigHierarchy_SetGlobalTransformByIndex, "SetGlobalTransformByIndex" }, // 1438030178
		{ &Z_Construct_UFunction_URigHierarchy_SetInt32ArrayMetadata, "SetInt32ArrayMetadata" }, // 2460690613
		{ &Z_Construct_UFunction_URigHierarchy_SetInt32Metadata, "SetInt32Metadata" }, // 207387921
		{ &Z_Construct_UFunction_URigHierarchy_SetLinearColorArrayMetadata, "SetLinearColorArrayMetadata" }, // 2977070973
		{ &Z_Construct_UFunction_URigHierarchy_SetLinearColorMetadata, "SetLinearColorMetadata" }, // 1967004191
		{ &Z_Construct_UFunction_URigHierarchy_SetLocalTransform, "SetLocalTransform" }, // 4057268878
		{ &Z_Construct_UFunction_URigHierarchy_SetLocalTransformByIndex, "SetLocalTransformByIndex" }, // 2511048645
		{ &Z_Construct_UFunction_URigHierarchy_SetNameArrayMetadata, "SetNameArrayMetadata" }, // 2400776346
		{ &Z_Construct_UFunction_URigHierarchy_SetNameMetadata, "SetNameMetadata" }, // 2690199285
		{ &Z_Construct_UFunction_URigHierarchy_SetParentWeight, "SetParentWeight" }, // 1944181951
		{ &Z_Construct_UFunction_URigHierarchy_SetParentWeightArray, "SetParentWeightArray" }, // 532697420
		{ &Z_Construct_UFunction_URigHierarchy_SetPose_ForBlueprint, "SetPose_ForBlueprint" }, // 185871232
		{ &Z_Construct_UFunction_URigHierarchy_SetQuatArrayMetadata, "SetQuatArrayMetadata" }, // 3707561441
		{ &Z_Construct_UFunction_URigHierarchy_SetQuatMetadata, "SetQuatMetadata" }, // 637372655
		{ &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyArrayMetadata, "SetRigElementKeyArrayMetadata" }, // 1834239221
		{ &Z_Construct_UFunction_URigHierarchy_SetRigElementKeyMetadata, "SetRigElementKeyMetadata" }, // 1222017787
		{ &Z_Construct_UFunction_URigHierarchy_SetRotatorArrayMetadata, "SetRotatorArrayMetadata" }, // 1648875988
		{ &Z_Construct_UFunction_URigHierarchy_SetRotatorMetadata, "SetRotatorMetadata" }, // 3205352630
		{ &Z_Construct_UFunction_URigHierarchy_SetTag, "SetTag" }, // 3750186225
		{ &Z_Construct_UFunction_URigHierarchy_SetTransformArrayMetadata, "SetTransformArrayMetadata" }, // 2505103329
		{ &Z_Construct_UFunction_URigHierarchy_SetTransformMetadata, "SetTransformMetadata" }, // 1341601733
		{ &Z_Construct_UFunction_URigHierarchy_SetVectorArrayMetadata, "SetVectorArrayMetadata" }, // 3084358945
		{ &Z_Construct_UFunction_URigHierarchy_SetVectorMetadata, "SetVectorMetadata" }, // 2278907775
		{ &Z_Construct_UFunction_URigHierarchy_SortKeys, "SortKeys" }, // 502415744
		{ &Z_Construct_UFunction_URigHierarchy_SwitchToDefaultParent, "SwitchToDefaultParent" }, // 1981461676
		{ &Z_Construct_UFunction_URigHierarchy_SwitchToParent, "SwitchToParent" }, // 212899021
		{ &Z_Construct_UFunction_URigHierarchy_SwitchToWorldSpace, "SwitchToWorldSpace" }, // 2262976892
		{ &Z_Construct_UFunction_URigHierarchy_UnsetCurveValue, "UnsetCurveValue" }, // 3881014548
		{ &Z_Construct_UFunction_URigHierarchy_UnsetCurveValueByIndex, "UnsetCurveValueByIndex" }, // 3439240647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rigs/RigHierarchy.h" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_TopologyVersion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The topology version of the hierarchy changes when elements are\n\x09 * added, removed, re-parented or renamed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "The topology version of the hierarchy changes when elements are\nadded, removed, re-parented or renamed." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_TopologyVersion = { "TopologyVersion", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, TopologyVersion), METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_TopologyVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_TopologyVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataVersion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The metadata version of the hierarchy changes when metadata is being\n\x09 * created or removed (not when the metadata values changes)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "The metadata version of the hierarchy changes when metadata is being\ncreated or removed (not when the metadata values changes)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataVersion = { "MetadataVersion", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, MetadataVersion), METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataTagVersion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The metadata version of the hierarchy changes when metadata is being\n\x09 * created or removed (not when the metadata values changes)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "The metadata version of the hierarchy changes when metadata is being\ncreated or removed (not when the metadata values changes)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataTagVersion = { "MetadataTagVersion", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, MetadataTagVersion), METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataTagVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataTagVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to false the dirty flag propagation will be disabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "If set to false the dirty flag propagation will be disabled" },
	};
#endif
	void Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_SetBit(void* Obj)
	{
		((URigHierarchy*)Obj)->bEnableDirtyPropagation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation = { "bEnableDirtyPropagation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigHierarchy), &Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_TransformStackIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * The index identifying where we stand with the stack\n\x09 */" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "The index identifying where we stand with the stack" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_TransformStackIndex = { "TransformStackIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, TransformStackIndex), METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_TransformStackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_TransformStackIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyController = { "HierarchyController", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, HierarchyController), Z_Construct_UClass_URigHierarchyController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyController_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_ValueProp = { "PreviousNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_Key_KeyProp = { "PreviousNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_MetaData[] = {
		{ "Comment", "/*We save this so Sequencer can remap this after load*/" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
		{ "ToolTip", "We save this so Sequencer can remap this after load" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap = { "PreviousNameMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, PreviousNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_MetaData)) }; // 2461395651 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyForCacheValidation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyForCacheValidation = { "HierarchyForCacheValidation", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigHierarchy, HierarchyForCacheValidation), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyForCacheValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyForCacheValidation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_TopologyVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_MetadataTagVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_bEnableDirtyPropagation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_TransformStackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_PreviousNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigHierarchy_Statics::NewProp_HierarchyForCacheValidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigHierarchy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigHierarchy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigHierarchy_Statics::ClassParams = {
		&URigHierarchy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigHierarchy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigHierarchy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigHierarchy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigHierarchy()
	{
		if (!Z_Registration_Info_UClass_URigHierarchy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigHierarchy.OuterSingleton, Z_Construct_UClass_URigHierarchy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigHierarchy.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<URigHierarchy>()
	{
		return URigHierarchy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigHierarchy);
	URigHierarchy::~URigHierarchy() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchy)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::EnumInfo[] = {
		{ ERigTransformStackEntryType_StaticEnum, TEXT("ERigTransformStackEntryType"), &Z_Registration_Info_UEnum_ERigTransformStackEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4019443428U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigTransformStackEntry::StaticStruct, Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics::NewStructOps, TEXT("RigTransformStackEntry"), &Z_Registration_Info_UScriptStruct_RigTransformStackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTransformStackEntry), 854637185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigHierarchy, URigHierarchy::StaticClass, TEXT("URigHierarchy"), &Z_Registration_Info_UClass_URigHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigHierarchy), 2299976860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_1348803064(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
