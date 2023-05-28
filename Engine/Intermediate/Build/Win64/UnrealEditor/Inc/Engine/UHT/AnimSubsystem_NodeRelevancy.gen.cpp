// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_NodeRelevancy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_NodeRelevancy() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimSubsystemInstance_NodeRelevancy>() == std::is_polymorphic<FAnimSubsystemInstance>(), "USTRUCT FAnimSubsystemInstance_NodeRelevancy cannot be polymorphic unless super FAnimSubsystemInstance is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy;
class UScriptStruct* FAnimSubsystemInstance_NodeRelevancy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystemInstance_NodeRelevancy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystemInstance_NodeRelevancy>()
{
	return FAnimSubsystemInstance_NodeRelevancy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Allows anim node's relevancy (when they receive and lose weight in the graph) to be tracked */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_NodeRelevancy.h" },
		{ "ToolTip", "Allows anim node's relevancy (when they receive and lose weight in the graph) to be tracked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystemInstance_NodeRelevancy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimSubsystemInstance,
		&NewStructOps,
		"AnimSubsystemInstance_NodeRelevancy",
		sizeof(FAnimSubsystemInstance_NodeRelevancy),
		alignof(FAnimSubsystemInstance_NodeRelevancy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics::ScriptStructInfo[] = {
		{ FAnimSubsystemInstance_NodeRelevancy::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy_Statics::NewStructOps, TEXT("AnimSubsystemInstance_NodeRelevancy"), &Z_Registration_Info_UScriptStruct_AnimSubsystemInstance_NodeRelevancy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystemInstance_NodeRelevancy), 2160035962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_1954490009(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_NodeRelevancy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
