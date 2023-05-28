// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_Tag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Tag() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Tag();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimSubsystem_Tag>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_Tag cannot be polymorphic unless super FAnimSubsystem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag;
class UScriptStruct* FAnimSubsystem_Tag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_Tag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_Tag"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_Tag>()
{
	return FAnimSubsystem_Tag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndices_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeIndices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Allows anim nodes to be tagged by name at edit time and retrieved by tag at runtime */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_Tag.h" },
		{ "ToolTip", "Allows anim nodes to be tagged by name at edit time and retrieved by tag at runtime" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_Tag>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_ValueProp = { "NodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_Key_KeyProp = { "NodeIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_MetaData[] = {
		{ "Comment", "// Map of name->node index\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_Tag.h" },
		{ "ToolTip", "Map of name->node index" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices = { "NodeIndices", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSubsystem_Tag, NodeIndices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewProp_NodeIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimSubsystem,
		&NewStructOps,
		"AnimSubsystem_Tag",
		sizeof(FAnimSubsystem_Tag),
		alignof(FAnimSubsystem_Tag),
		Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Tag()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h_Statics::ScriptStructInfo[] = {
		{ FAnimSubsystem_Tag::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_Tag_Statics::NewStructOps, TEXT("AnimSubsystem_Tag"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_Tag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_Tag), 861941745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h_3026466218(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Tag_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
