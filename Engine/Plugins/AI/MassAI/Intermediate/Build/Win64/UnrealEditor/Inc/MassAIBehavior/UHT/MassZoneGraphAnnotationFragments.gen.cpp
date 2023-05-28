// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassZoneGraphAnnotationFragments.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphAnnotationFragments() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// End Cross Module References

static_assert(std::is_polymorphic<FMassZoneGraphAnnotationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassZoneGraphAnnotationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment;
class UScriptStruct* FMassZoneGraphAnnotationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphAnnotationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphAnnotationFragment>()
{
	return FMassZoneGraphAnnotationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphAnnotationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphAnnotationFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "/** Behavior tags for current lane */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphAnnotationFragments.h" },
		{ "ToolTip", "Behavior tags for current lane" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassZoneGraphAnnotationFragment, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewProp_Tags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassZoneGraphAnnotationFragment",
		sizeof(FMassZoneGraphAnnotationFragment),
		alignof(FMassZoneGraphAnnotationFragment),
		Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassZoneGraphAnnotationVariableTickChunkFragment>() == std::is_polymorphic<FMassChunkFragment>(), "USTRUCT FMassZoneGraphAnnotationVariableTickChunkFragment cannot be polymorphic unless super FMassChunkFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment;
class UScriptStruct* FMassZoneGraphAnnotationVariableTickChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassZoneGraphAnnotationVariableTickChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassZoneGraphAnnotationVariableTickChunkFragment>()
{
	return FMassZoneGraphAnnotationVariableTickChunkFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphAnnotationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassZoneGraphAnnotationVariableTickChunkFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassChunkFragment,
		&NewStructOps,
		"MassZoneGraphAnnotationVariableTickChunkFragment",
		sizeof(FMassZoneGraphAnnotationVariableTickChunkFragment),
		alignof(FMassZoneGraphAnnotationVariableTickChunkFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassZoneGraphAnnotationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationFragment_Statics::NewStructOps, TEXT("MassZoneGraphAnnotationFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphAnnotationFragment), 1169671736U) },
		{ FMassZoneGraphAnnotationVariableTickChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassZoneGraphAnnotationVariableTickChunkFragment_Statics::NewStructOps, TEXT("MassZoneGraphAnnotationVariableTickChunkFragment"), &Z_Registration_Info_UScriptStruct_MassZoneGraphAnnotationVariableTickChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassZoneGraphAnnotationVariableTickChunkFragment), 2093039501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationFragments_h_3209155470(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
