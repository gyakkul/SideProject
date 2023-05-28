// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCDIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCDIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CCDIKChainLink;
class UScriptStruct* FCCDIKChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CCDIKChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CCDIKChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCCDIKChainLink, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("CCDIKChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_CCDIKChainLink.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FCCDIKChainLink>()
{
	return FCCDIKChainLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCCDIKChainLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transient structure for CCDIK node evaluation */" },
		{ "ModuleRelativePath", "Public/CCDIK.h" },
		{ "ToolTip", "Transient structure for CCDIK node evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCCDIKChainLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"CCDIKChainLink",
		sizeof(FCCDIKChainLink),
		alignof(FCCDIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCCDIKChainLink()
	{
		if (!Z_Registration_Info_UScriptStruct_CCDIKChainLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CCDIKChainLink.InnerSingleton, Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CCDIKChainLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h_Statics::ScriptStructInfo[] = {
		{ FCCDIKChainLink::StaticStruct, Z_Construct_UScriptStruct_FCCDIKChainLink_Statics::NewStructOps, TEXT("CCDIKChainLink"), &Z_Registration_Info_UScriptStruct_CCDIKChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCCDIKChainLink), 3069445452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h_396521875(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CCDIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
