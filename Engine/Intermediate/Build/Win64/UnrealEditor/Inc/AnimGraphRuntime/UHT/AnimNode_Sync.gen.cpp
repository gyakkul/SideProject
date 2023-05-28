// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_Sync.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Sync() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Sync();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Sync>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Sync cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Sync;
class UScriptStruct* FAnimNode_Sync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Sync, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Sync"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Sync>()
{
	return FAnimNode_Sync::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Sync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Sync>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Sync, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The group name that we synchronize with. All nodes employing sync beyond this in the anim graph will implicitly use this sync group.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
		{ "ToolTip", "The group name that we synchronize with. All nodes employing sync beyond this in the anim graph will implicitly use this sync group." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Sync, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The role this player can assume within the group\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
		{ "ToolTip", "The role this player can assume within the group" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Sync, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Sync",
		sizeof(FAnimNode_Sync),
		alignof(FAnimNode_Sync),
		Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Sync()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_Sync::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewStructOps, TEXT("AnimNode_Sync"), &Z_Registration_Info_UScriptStruct_AnimNode_Sync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Sync), 242159214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_586884783(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
