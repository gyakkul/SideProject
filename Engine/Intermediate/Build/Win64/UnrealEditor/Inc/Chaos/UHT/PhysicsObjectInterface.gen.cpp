// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/PhysicsObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsObjectInterface() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult;
class UScriptStruct* FClosestPhysicsObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ClosestPhysicsObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FClosestPhysicsObjectResult>()
{
	return FClosestPhysicsObjectResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/PhysicsObjectInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClosestPhysicsObjectResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"ClosestPhysicsObjectResult",
		sizeof(FClosestPhysicsObjectResult),
		alignof(FClosestPhysicsObjectResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics::ScriptStructInfo[] = {
		{ FClosestPhysicsObjectResult::StaticStruct, Z_Construct_UScriptStruct_FClosestPhysicsObjectResult_Statics::NewStructOps, TEXT("ClosestPhysicsObjectResult"), &Z_Registration_Info_UScriptStruct_ClosestPhysicsObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClosestPhysicsObjectResult), 1923849362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_1947629766(TEXT("/Script/Chaos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_PhysicsObjectInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
