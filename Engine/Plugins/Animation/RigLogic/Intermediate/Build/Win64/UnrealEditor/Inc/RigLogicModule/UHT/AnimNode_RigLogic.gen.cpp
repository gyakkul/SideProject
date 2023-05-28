// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_RigLogic.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigLogic() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigLogic();
	UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RigLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RigLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RigLogic;
class UScriptStruct* FAnimNode_RigLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigLogic, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("AnimNode_RigLogic"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FAnimNode_RigLogic>()
{
	return FAnimNode_RigLogic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RigLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigLogic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_RigLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigLogic, AnimSequence), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewProp_AnimSequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RigLogic",
		sizeof(FAnimNode_RigLogic),
		alignof(FAnimNode_RigLogic),
		Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigLogic()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RigLogic.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RigLogic::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RigLogic_Statics::NewStructOps, TEXT("AnimNode_RigLogic"), &Z_Registration_Info_UScriptStruct_AnimNode_RigLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RigLogic), 1529471048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_1907681856(TEXT("/Script/RigLogicModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_AnimNode_RigLogic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
