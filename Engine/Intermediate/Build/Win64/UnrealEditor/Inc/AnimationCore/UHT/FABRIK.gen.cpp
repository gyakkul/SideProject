// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FABRIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFABRIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFABRIKChainLink();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FABRIKChainLink;
class UScriptStruct* FFABRIKChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FABRIKChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FABRIKChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFABRIKChainLink, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("FABRIKChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_FABRIKChainLink.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FFABRIKChainLink>()
{
	return FFABRIKChainLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFABRIKChainLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transient structure for FABRIK node evaluation */" },
		{ "ModuleRelativePath", "Public/FABRIK.h" },
		{ "ToolTip", "Transient structure for FABRIK node evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFABRIKChainLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"FABRIKChainLink",
		sizeof(FFABRIKChainLink),
		alignof(FFABRIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFABRIKChainLink()
	{
		if (!Z_Registration_Info_UScriptStruct_FABRIKChainLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FABRIKChainLink.InnerSingleton, Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FABRIKChainLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h_Statics::ScriptStructInfo[] = {
		{ FFABRIKChainLink::StaticStruct, Z_Construct_UScriptStruct_FFABRIKChainLink_Statics::NewStructOps, TEXT("FABRIKChainLink"), &Z_Registration_Info_UScriptStruct_FABRIKChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFABRIKChainLink), 820746939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h_3189123541(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_FABRIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
