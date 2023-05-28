// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableSolverThreading.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverThreading() {}
// Cross Module References
	CHAOSFLESHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDeformableEndTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References

static_assert(std::is_polymorphic<FDeformableEndTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FDeformableEndTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeformableEndTickFunction;
class UScriptStruct* FDeformableEndTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeformableEndTickFunction, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("DeformableEndTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.OuterSingleton;
}
template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<FDeformableEndTickFunction>()
{
	return FDeformableEndTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Tick function that does post physics work on deformable components. This executes in EndPhysics (after physics is done)\n**/" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableSolverThreading.h" },
		{ "ToolTip", "Tick function that does post physics work on deformable components. This executes in EndPhysics (after physics is done)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeformableEndTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"DeformableEndTickFunction",
		sizeof(FDeformableEndTickFunction),
		alignof(FDeformableEndTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeformableEndTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeformableEndTickFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverThreading_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverThreading_h_Statics::ScriptStructInfo[] = {
		{ FDeformableEndTickFunction::StaticStruct, Z_Construct_UScriptStruct_FDeformableEndTickFunction_Statics::NewStructOps, TEXT("DeformableEndTickFunction"), &Z_Registration_Info_UScriptStruct_DeformableEndTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeformableEndTickFunction), 297233043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverThreading_h_4119364848(TEXT("/Script/ChaosFleshEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverThreading_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverThreading_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
