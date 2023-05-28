// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargetAnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetAnimInstanceProxy() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	IKRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FIKRetargetAnimInstanceProxy>() == std::is_polymorphic<FAnimPreviewInstanceProxy>(), "USTRUCT FIKRetargetAnimInstanceProxy cannot be polymorphic unless super FAnimPreviewInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy;
class UScriptStruct* FIKRetargetAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_IKRigEditor(), TEXT("IKRetargetAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.OuterSingleton;
}
template<> IKRIGEDITOR_API UScriptStruct* StaticStruct<FIKRetargetAnimInstanceProxy>()
{
	return FIKRetargetAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRetargetAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"IKRetargetAnimInstanceProxy",
		sizeof(FIKRetargetAnimInstanceProxy),
		alignof(FIKRetargetAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FIKRetargetAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FIKRetargetAnimInstanceProxy_Statics::NewStructOps, TEXT("IKRetargetAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_IKRetargetAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRetargetAnimInstanceProxy), 587957182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstanceProxy_h_821856915(TEXT("/Script/IKRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
