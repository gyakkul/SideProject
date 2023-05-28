// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseCorrectivesAnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseCorrectivesAnimInstanceProxy() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	POSECORRECTIVESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy();
	POSECORRECTIVESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectivesEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FPoseCorrectivesAnimInstanceProxy>() == std::is_polymorphic<FAnimPreviewInstanceProxy>(), "USTRUCT FPoseCorrectivesAnimInstanceProxy cannot be polymorphic unless super FAnimPreviewInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy;
class UScriptStruct* FPoseCorrectivesAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_PoseCorrectivesEditor(), TEXT("PoseCorrectivesAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.OuterSingleton;
}
template<> POSECORRECTIVESEDITOR_API UScriptStruct* StaticStruct<FPoseCorrectivesAnimInstanceProxy>()
{
	return FPoseCorrectivesAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseCorrectivesAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"PoseCorrectivesAnimInstanceProxy",
		sizeof(FPoseCorrectivesAnimInstanceProxy),
		alignof(FPoseCorrectivesAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseCorrectivesAnimSourceInstanceProxy>() == std::is_polymorphic<FAnimPreviewInstanceProxy>(), "USTRUCT FPoseCorrectivesAnimSourceInstanceProxy cannot be polymorphic unless super FAnimPreviewInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy;
class UScriptStruct* FPoseCorrectivesAnimSourceInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy, (UObject*)Z_Construct_UPackage__Script_PoseCorrectivesEditor(), TEXT("PoseCorrectivesAnimSourceInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.OuterSingleton;
}
template<> POSECORRECTIVESEDITOR_API UScriptStruct* StaticStruct<FPoseCorrectivesAnimSourceInstanceProxy>()
{
	return FPoseCorrectivesAnimSourceInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseCorrectivesAnimSourceInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"PoseCorrectivesAnimSourceInstanceProxy",
		sizeof(FPoseCorrectivesAnimSourceInstanceProxy),
		alignof(FPoseCorrectivesAnimSourceInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FPoseCorrectivesAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FPoseCorrectivesAnimInstanceProxy_Statics::NewStructOps, TEXT("PoseCorrectivesAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseCorrectivesAnimInstanceProxy), 1837184484U) },
		{ FPoseCorrectivesAnimSourceInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FPoseCorrectivesAnimSourceInstanceProxy_Statics::NewStructOps, TEXT("PoseCorrectivesAnimSourceInstanceProxy"), &Z_Registration_Info_UScriptStruct_PoseCorrectivesAnimSourceInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseCorrectivesAnimSourceInstanceProxy), 2104669824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstanceProxy_h_1699613424(TEXT("/Script/PoseCorrectivesEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
