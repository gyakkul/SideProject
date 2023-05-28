// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_RelevantAssetPlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RelevantAssetPlayerBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_AssetPlayerRelevancyBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase;
class UScriptStruct* FAnimNode_AssetPlayerRelevancyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerRelevancyBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_AssetPlayerRelevancyBase>()
{
	return FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Base class for any asset playing anim node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_RelevantAssetPlayerBase.h" },
		{ "ToolTip", "Base class for any asset playing anim node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerRelevancyBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_AssetPlayerRelevancyBase",
		sizeof(FAnimNode_AssetPlayerRelevancyBase),
		alignof(FAnimNode_AssetPlayerRelevancyBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AssetPlayerRelevancyBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::NewStructOps, TEXT("AnimNode_AssetPlayerRelevancyBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerRelevancyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AssetPlayerRelevancyBase), 1645241379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_2749219951(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
