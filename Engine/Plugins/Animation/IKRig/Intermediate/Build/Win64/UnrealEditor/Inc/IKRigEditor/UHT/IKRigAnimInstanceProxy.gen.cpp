// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigAnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigAnimInstanceProxy() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	IKRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FIKRigAnimInstanceProxy>() == std::is_polymorphic<FAnimPreviewInstanceProxy>(), "USTRUCT FIKRigAnimInstanceProxy cannot be polymorphic unless super FAnimPreviewInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy;
class UScriptStruct* FIKRigAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_IKRigEditor(), TEXT("IKRigAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.OuterSingleton;
}
template<> IKRIGEDITOR_API UScriptStruct* StaticStruct<FIKRigAnimInstanceProxy>()
{
	return FIKRigAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"IKRigAnimInstanceProxy",
		sizeof(FIKRigAnimInstanceProxy),
		alignof(FIKRigAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FIKRigAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FIKRigAnimInstanceProxy_Statics::NewStructOps, TEXT("IKRigAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_IKRigAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigAnimInstanceProxy), 373566447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstanceProxy_h_3295376579(TEXT("/Script/IKRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
