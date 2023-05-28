// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkSkeletonStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkSkeletonStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData;
class UScriptStruct* FLiveLinkSkeletonStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSkeletonStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSkeletonStaticData>()
{
	return FLiveLinkSkeletonStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Animation purposes. Contains data about bones that shouldn't change every frame.\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Static data for Animation purposes. Contains data about bones that shouldn't change every frame." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSkeletonStaticData>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Names of each bone in the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Parent Indices: For each bone it specifies the index of its parent\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSkeletonStaticData, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewProp_BoneParents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
		&NewStructOps,
		"LiveLinkSkeletonStaticData",
		sizeof(FLiveLinkSkeletonStaticData),
		alignof(FLiveLinkSkeletonStaticData),
		Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkAnimationFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkAnimationFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData;
class UScriptStruct* FLiveLinkAnimationFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkAnimationFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkAnimationFrameData>()
{
	return FLiveLinkAnimationFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Animation purposes. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Dynamic data for Animation purposes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkAnimationFrameData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Array of transforms for each bone of the skeleton\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationTypes.h" },
		{ "ToolTip", "Array of transforms for each bone of the skeleton" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkAnimationFrameData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewProp_Transforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"LiveLinkAnimationFrameData",
		sizeof(FLiveLinkAnimationFrameData),
		alignof(FLiveLinkAnimationFrameData),
		Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSkeletonStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewStructOps, TEXT("LiveLinkSkeletonStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkSkeletonStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSkeletonStaticData), 1026825743U) },
		{ FLiveLinkAnimationFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewStructOps, TEXT("LiveLinkAnimationFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkAnimationFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkAnimationFrameData), 574786297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_135599984(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
