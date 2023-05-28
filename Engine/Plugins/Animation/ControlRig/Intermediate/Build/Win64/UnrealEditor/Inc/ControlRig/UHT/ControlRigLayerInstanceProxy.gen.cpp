// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/ControlRigLayerInstanceProxy.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigLayerInstanceProxy() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ControlRigInputPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ControlRigInputPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose;
class UScriptStruct* FAnimNode_ControlRigInputPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimNode_ControlRigInputPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimNode_ControlRigInputPose>()
{
	return FAnimNode_ControlRigInputPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom internal Input Pose node that handles any AnimInstance */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Custom internal Input Pose node that handles any AnimInstance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ControlRigInputPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRigInputPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ControlRigInputPose",
		sizeof(FAnimNode_ControlRigInputPose),
		alignof(FAnimNode_ControlRigInputPose),
		Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton;
	}

static_assert(std::is_polymorphic<FControlRigLayerInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FControlRigLayerInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy;
class UScriptStruct* FControlRigLayerInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigLayerInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigLayerInstanceProxy>()
{
	return FControlRigLayerInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigLayerInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"ControlRigLayerInstanceProxy",
		sizeof(FControlRigLayerInstanceProxy),
		alignof(FControlRigLayerInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ControlRigInputPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewStructOps, TEXT("AnimNode_ControlRigInputPose"), &Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ControlRigInputPose), 1721200476U) },
		{ FControlRigLayerInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::NewStructOps, TEXT("ControlRigLayerInstanceProxy"), &Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigLayerInstanceProxy), 2643120705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_1044213344(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
