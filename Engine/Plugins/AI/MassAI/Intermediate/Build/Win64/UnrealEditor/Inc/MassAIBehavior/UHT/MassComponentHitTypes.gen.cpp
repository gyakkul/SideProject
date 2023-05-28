// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassComponentHitTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassComponentHitTypes() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassHitResult();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassHitResult;
class UScriptStruct* FMassHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassHitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassHitResult, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassHitResult"));
	}
	return Z_Registration_Info_UScriptStruct_MassHitResult.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassHitResult>()
{
	return FMassHitResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassHitResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassHitResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassComponentHitTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassHitResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassHitResult",
		sizeof(FMassHitResult),
		alignof(FMassHitResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassHitResult()
	{
		if (!Z_Registration_Info_UScriptStruct_MassHitResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassHitResult.InnerSingleton, Z_Construct_UScriptStruct_FMassHitResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassHitResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassHitResult::StaticStruct, Z_Construct_UScriptStruct_FMassHitResult_Statics::NewStructOps, TEXT("MassHitResult"), &Z_Registration_Info_UScriptStruct_MassHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassHitResult), 1679787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitTypes_h_851364226(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassComponentHitTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
