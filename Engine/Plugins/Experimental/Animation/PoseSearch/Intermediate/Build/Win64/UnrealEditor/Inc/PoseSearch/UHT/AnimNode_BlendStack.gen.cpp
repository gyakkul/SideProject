// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/AnimNode_BlendStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStack() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer;
class UScriptStruct* FPoseSearchAnimPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchAnimPlayer, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchAnimPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchAnimPlayer>()
{
	return FPoseSearchAnimPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchAnimPlayer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchAnimPlayer",
		sizeof(FPoseSearchAnimPlayer),
		alignof(FPoseSearchAnimPlayer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendStack>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_BlendStack cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendStack;
class UScriptStruct* FAnimNode_BlendStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_BlendStack"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_BlendStack>()
{
	return FAnimNode_BlendStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendStack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_BlendStack",
		sizeof(FAnimNode_BlendStack),
		alignof(FAnimNode_BlendStack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchAnimPlayer::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::NewStructOps, TEXT("PoseSearchAnimPlayer"), &Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchAnimPlayer), 2460664785U) },
		{ FAnimNode_BlendStack::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewStructOps, TEXT("AnimNode_BlendStack"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendStack), 1513769030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_3513067485(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
