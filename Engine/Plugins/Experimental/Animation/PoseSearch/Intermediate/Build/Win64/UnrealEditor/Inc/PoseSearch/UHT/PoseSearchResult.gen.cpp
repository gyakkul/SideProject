// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchResult() {}
// Cross Module References
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder;
class UScriptStruct* FPoseSearchFeatureVectorBuilder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchFeatureVectorBuilder"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchFeatureVectorBuilder>()
{
	return FPoseSearchFeatureVectorBuilder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Schema;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* float buffer of features according to a UPoseSearchSchema layout.\n* FFeatureVectorBuilder is used to build search queries at runtime and for adding samples during search index construction.\n*/" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchResult.h" },
		{ "ToolTip", "float buffer of features according to a UPoseSearchSchema layout.\nFFeatureVectorBuilder is used to build search queries at runtime and for adding samples during search index construction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchFeatureVectorBuilder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewProp_Schema_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchResult.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSearchFeatureVectorBuilder, Schema), Z_Construct_UClass_UPoseSearchSchema_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewProp_Schema_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewProp_Schema_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewProp_Schema,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchFeatureVectorBuilder",
		sizeof(FPoseSearchFeatureVectorBuilder),
		alignof(FPoseSearchFeatureVectorBuilder),
		Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchFeatureVectorBuilder::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchFeatureVectorBuilder_Statics::NewStructOps, TEXT("PoseSearchFeatureVectorBuilder"), &Z_Registration_Info_UScriptStruct_PoseSearchFeatureVectorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchFeatureVectorBuilder), 3908586263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h_185317886(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
