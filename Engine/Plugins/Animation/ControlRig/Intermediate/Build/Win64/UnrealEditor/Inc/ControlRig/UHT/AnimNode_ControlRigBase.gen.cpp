// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_ControlRigBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRigBase() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigAnimNodeEventName();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigIOSettings();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigIOSettings;
class UScriptStruct* FControlRigIOSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigIOSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigIOSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigIOSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigIOSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigIOSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigIOSettings>()
{
	return FControlRigIOSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigIOSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePose_MetaData[];
#endif
		static void NewProp_bUpdatePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateCurves_MetaData[];
#endif
		static void NewProp_bUpdateCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining the settings to override when driving a control rig */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "Struct defining the settings to override when driving a control rig" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigIOSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_SetBit(void* Obj)
	{
		((FControlRigIOSettings*)Obj)->bUpdatePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose = { "bUpdatePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControlRigIOSettings), &Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_SetBit(void* Obj)
	{
		((FControlRigIOSettings*)Obj)->bUpdateCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves = { "bUpdateCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControlRigIOSettings), &Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdatePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewProp_bUpdateCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigIOSettings",
		sizeof(FControlRigIOSettings),
		alignof(FControlRigIOSettings),
		Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigIOSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigIOSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigIOSettings.InnerSingleton, Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigIOSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName;
class UScriptStruct* FControlRigAnimNodeEventName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigAnimNodeEventName"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigAnimNodeEventName>()
{
	return FControlRigAnimNodeEventName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigAnimNodeEventName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigAnimNodeEventName, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewProp_EventName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigAnimNodeEventName",
		sizeof(FControlRigAnimNodeEventName),
		alignof(FControlRigAnimNodeEventName),
		Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigAnimNodeEventName()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.InnerSingleton, Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ControlRigBase>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_ControlRigBase cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase;
class UScriptStruct* FAnimNode_ControlRigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimNode_ControlRigBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimNode_ControlRigBase>()
{
	return FAnimNode_ControlRigBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetInputPoseToInitial_MetaData[];
#endif
		static void NewProp_bResetInputPoseToInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInputPoseToInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransferInputPose_MetaData[];
#endif
		static void NewProp_bTransferInputPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferInputPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransferInputCurves_MetaData[];
#endif
		static void NewProp_bTransferInputCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferInputCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransferPoseInGlobalSpace_MetaData[];
#endif
		static void NewProp_bTransferPoseInGlobalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferPoseInGlobalSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBonesToTransfer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBonesToTransfer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBonesToTransfer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMappingContainer_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NodeMappingContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecute_MetaData[];
#endif
		static void NewProp_bExecute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows animation ControlRig output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "Animation node that allows animation ControlRig output to be used in an animation graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ControlRigBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * If this is checked the rig's pose needs to be reset to its initial\n\x09 * prior to evaluating the rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "If this is checked the rig's pose needs to be reset to its initial\nprior to evaluating the rig." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_SetBit(void* Obj)
	{
		((FAnimNode_ControlRigBase*)Obj)->bResetInputPoseToInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial = { "bResetInputPoseToInitial", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ControlRigBase), &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * If this is checked the bone pose coming from the AnimBP will be\n\x09 * transferred into the Control Rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "If this is checked the bone pose coming from the AnimBP will be\ntransferred into the Control Rig." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_SetBit(void* Obj)
	{
		((FAnimNode_ControlRigBase*)Obj)->bTransferInputPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose = { "bTransferInputPose", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ControlRigBase), &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * If this is checked the curves coming from the AnimBP will be\n\x09 * transferred into the Control Rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "If this is checked the curves coming from the AnimBP will be\ntransferred into the Control Rig." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_SetBit(void* Obj)
	{
		((FAnimNode_ControlRigBase*)Obj)->bTransferInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves = { "bTransferInputCurves", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ControlRigBase), &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Transferring the pose in global space guarantees a global pose match,\n\x09 * while transferring in local space ensures a match of the local transforms.\n\x09 * In general transforms only differ if the hierarchy topology differs\n\x09 * between the Control Rig and the skeleton used in the AnimBP.\n\x09 * Note: Turning this off can potentially improve performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "Transferring the pose in global space guarantees a global pose match,\nwhile transferring in local space ensures a match of the local transforms.\nIn general transforms only differ if the hierarchy topology differs\nbetween the Control Rig and the skeleton used in the AnimBP.\nNote: Turning this off can potentially improve performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace_SetBit(void* Obj)
	{
		((FAnimNode_ControlRigBase*)Obj)->bTransferPoseInGlobalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace = { "bTransferPoseInGlobalSpace", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ControlRigBase), &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer_Inner = { "InputBonesToTransfer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * An inclusive list of bones to transfer as part\n\x09 * of the input pose transfer phase.\n\x09 * If this list is empty all bones will be transferred.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "An inclusive list of bones to transfer as part\nof the input pose transfer phase.\nIf this list is empty all bones will be transferred." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer = { "InputBonesToTransfer", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, InputBonesToTransfer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_NodeMappingContainer_MetaData[] = {
		{ "Comment", "/** Node Mapping Container */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "Node Mapping Container" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_NodeMappingContainer = { "NodeMappingContainer", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, NodeMappingContainer), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_NodeMappingContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_NodeMappingContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputSettings = { "InputSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, InputSettings), Z_Construct_UScriptStruct_FControlRigIOSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputSettings_MetaData)) }; // 2094364064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_OutputSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_OutputSettings = { "OutputSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, OutputSettings), Z_Construct_UScriptStruct_FControlRigIOSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_OutputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_OutputSettings_MetaData)) }; // 2094364064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_SetBit(void* Obj)
	{
		((FAnimNode_ControlRigBase*)Obj)->bExecute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute = { "bExecute", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ControlRigBase), &Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue_Inner = { "EventQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigAnimNodeEventName, METADATA_PARAMS(nullptr, 0) }; // 409075547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The customized event queue to run\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRigBase.h" },
		{ "ToolTip", "The customized event queue to run" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue = { "EventQueue", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigBase, EventQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue_MetaData)) }; // 409075547
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bResetInputPoseToInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferInputCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bTransferPoseInGlobalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputBonesToTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_NodeMappingContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_InputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_OutputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_bExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewProp_EventQueue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_ControlRigBase",
		sizeof(FAnimNode_ControlRigBase),
		alignof(FAnimNode_ControlRigBase),
		Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h_Statics::ScriptStructInfo[] = {
		{ FControlRigIOSettings::StaticStruct, Z_Construct_UScriptStruct_FControlRigIOSettings_Statics::NewStructOps, TEXT("ControlRigIOSettings"), &Z_Registration_Info_UScriptStruct_ControlRigIOSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigIOSettings), 2094364064U) },
		{ FControlRigAnimNodeEventName::StaticStruct, Z_Construct_UScriptStruct_FControlRigAnimNodeEventName_Statics::NewStructOps, TEXT("ControlRigAnimNodeEventName"), &Z_Registration_Info_UScriptStruct_ControlRigAnimNodeEventName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigAnimNodeEventName), 409075547U) },
		{ FAnimNode_ControlRigBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ControlRigBase_Statics::NewStructOps, TEXT("AnimNode_ControlRigBase"), &Z_Registration_Info_UScriptStruct_AnimNode_ControlRigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ControlRigBase), 109434522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h_2564160220(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRigBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
