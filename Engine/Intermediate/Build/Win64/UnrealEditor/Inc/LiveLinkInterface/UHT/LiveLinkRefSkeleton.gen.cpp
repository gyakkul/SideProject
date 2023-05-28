// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkRefSkeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton;
class UScriptStruct* FLiveLinkRefSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkRefSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkRefSkeleton>()
{
	return FLiveLinkRefSkeleton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Comment", "// Names of each bone in the skeleton\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData[] = {
		{ "Comment", "// Parent Indices: For each bone it specifies the index of its parent\n" },
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
		{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkRefSkeleton",
		sizeof(FLiveLinkRefSkeleton),
		alignof(FLiveLinkRefSkeleton),
		Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkRefSkeleton::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewStructOps, TEXT("LiveLinkRefSkeleton"), &Z_Registration_Info_UScriptStruct_LiveLinkRefSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRefSkeleton), 3254312841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_1315023834(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
