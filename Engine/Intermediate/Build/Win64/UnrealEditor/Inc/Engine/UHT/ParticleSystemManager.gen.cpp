// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystemManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FParticleSystemWorldManagerTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FParticleSystemWorldManagerTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction;
class UScriptStruct* FParticleSystemWorldManagerTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemWorldManagerTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemWorldManagerTickFunction>()
{
	return FParticleSystemWorldManagerTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemWorldManagerTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ParticleSystemWorldManagerTickFunction",
		sizeof(FParticleSystemWorldManagerTickFunction),
		alignof(FParticleSystemWorldManagerTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics::ScriptStructInfo[] = {
		{ FParticleSystemWorldManagerTickFunction::StaticStruct, Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::NewStructOps, TEXT("ParticleSystemWorldManagerTickFunction"), &Z_Registration_Info_UScriptStruct_ParticleSystemWorldManagerTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSystemWorldManagerTickFunction), 3037674481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_3868630519(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
