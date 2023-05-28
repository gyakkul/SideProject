// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeFragments() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeSharedFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References

static_assert(std::is_polymorphic<FMassStateTreeInstanceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassStateTreeInstanceFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment;
class UScriptStruct* FMassStateTreeInstanceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeInstanceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeInstanceFragment>()
{
	return FMassStateTreeInstanceFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeInstanceFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassStateTreeInstanceFragment",
		sizeof(FMassStateTreeInstanceFragment),
		alignof(FMassStateTreeInstanceFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassStateTreeSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassStateTreeSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment;
class UScriptStruct* FMassStateTreeSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeSharedFragment>()
{
	return FMassStateTreeSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeSharedFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewProp_StateTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeFragments.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStateTreeSharedFragment, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewProp_StateTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewProp_StateTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewProp_StateTree,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassStateTreeSharedFragment",
		sizeof(FMassStateTreeSharedFragment),
		alignof(FMassStateTreeSharedFragment),
		Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassStateTreeInstanceFragment::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeInstanceFragment_Statics::NewStructOps, TEXT("MassStateTreeInstanceFragment"), &Z_Registration_Info_UScriptStruct_MassStateTreeInstanceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeInstanceFragment), 3500357383U) },
		{ FMassStateTreeSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeSharedFragment_Statics::NewStructOps, TEXT("MassStateTreeSharedFragment"), &Z_Registration_Info_UScriptStruct_MassStateTreeSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeSharedFragment), 1958325356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeFragments_h_754840947(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
