// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuOwner() {}
// Cross Module References
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuOwner;
class UScriptStruct* FToolMenuOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuOwner, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuOwner"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuOwner>()
{
	return FToolMenuOwner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuOwner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/ToolMenus.ToolMenuEntryExtensions.BreakToolMenuOwner" },
		{ "HasNativeMake", "/Script/ToolMenus.ToolMenuEntryExtensions.MakeToolMenuOwner" },
		{ "ModuleRelativePath", "Public/ToolMenuOwner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuOwner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuOwner>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuOwner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuOwner",
		sizeof(FToolMenuOwner),
		alignof(FToolMenuOwner),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuOwner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuOwner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuOwner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics::ScriptStructInfo[] = {
		{ FToolMenuOwner::StaticStruct, Z_Construct_UScriptStruct_FToolMenuOwner_Statics::NewStructOps, TEXT("ToolMenuOwner"), &Z_Registration_Info_UScriptStruct_ToolMenuOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuOwner), 4112241390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_1149165164(TEXT("/Script/ToolMenus"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
