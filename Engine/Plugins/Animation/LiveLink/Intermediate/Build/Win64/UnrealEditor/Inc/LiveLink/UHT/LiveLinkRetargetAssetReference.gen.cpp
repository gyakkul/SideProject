// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkRetargetAssetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRetargetAssetReference() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference;
class UScriptStruct* FLiveLinkRetargetAssetReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRetargetAssetReference"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRetargetAssetReference>()
{
	return FLiveLinkRetargetAssetReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// References a live link retarget asset and handles recreation when\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRetargetAssetReference.h" },
		{ "ToolTip", "References a live link retarget asset and handles recreation when" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRetargetAssetReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		&NewStructOps,
		"LiveLinkRetargetAssetReference",
		sizeof(FLiveLinkRetargetAssetReference),
		alignof(FLiveLinkRetargetAssetReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkRetargetAssetReference::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRetargetAssetReference_Statics::NewStructOps, TEXT("LiveLinkRetargetAssetReference"), &Z_Registration_Info_UScriptStruct_LiveLinkRetargetAssetReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRetargetAssetReference), 2671516273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_2165283997(TEXT("/Script/LiveLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkRetargetAssetReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
