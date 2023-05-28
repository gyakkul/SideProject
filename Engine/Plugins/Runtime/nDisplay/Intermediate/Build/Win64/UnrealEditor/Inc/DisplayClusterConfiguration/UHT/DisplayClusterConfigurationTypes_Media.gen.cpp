// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Media.h"
#include "DisplayClusterConfigurationTypes_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Media() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia;
class UScriptStruct* FDisplayClusterConfigurationMedia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMedia"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMedia>()
{
	return FDisplayClusterConfigurationMedia::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSharingNode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaSharingNode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media settings for viewports and backbuffer\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media settings for viewports and backbuffer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMedia>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Enable/disable media */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Enable/disable media" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationMedia*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationMedia), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media source to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media source to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode = { "MediaSharingNode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMedia, MediaSharingNode_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaOutput,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewProp_MediaSharingNode,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMedia",
		sizeof(FDisplayClusterConfigurationMedia),
		alignof(FDisplayClusterConfigurationMedia),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup;
class UScriptStruct* FDisplayClusterConfigurationMediaInputGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaInputGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaInputGroup>()
{
	return FDisplayClusterConfigurationMediaInputGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterNodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Input media group\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Input media group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaInputGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData[] = {
		{ "Category", "Media" },
		{ "ClusterItemType", "ClusterNodes" },
		{ "Comment", "/** Cluster nodes that use media source below */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Cluster nodes that use media source below" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes = { "ClusterNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaInputGroup, ClusterNodes), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes_MetaData)) }; // 4190804730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media source to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media source to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaInputGroup, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_MediaSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_ClusterNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewProp_MediaSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaInputGroup",
		sizeof(FDisplayClusterConfigurationMediaInputGroup),
		alignof(FDisplayClusterConfigurationMediaInputGroup),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup;
class UScriptStruct* FDisplayClusterConfigurationMediaOutputGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaOutputGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaOutputGroup>()
{
	return FDisplayClusterConfigurationMediaOutputGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterNodes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Output media group\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Output media group" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaOutputGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData[] = {
		{ "Category", "Media" },
		{ "ClusterItemType", "ClusterNodes" },
		{ "Comment", "/** Cluster nodes that export media via MediaOutput below */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Cluster nodes that export media via MediaOutput below" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes = { "ClusterNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaOutputGroup, ClusterNodes), Z_Construct_UScriptStruct_FDisplayClusterConfigurationClusterItemReferenceList, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes_MetaData)) }; // 4190804730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output to use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaOutputGroup, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_MediaOutput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_ClusterNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewProp_MediaOutput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaOutputGroup",
		sizeof(FDisplayClusterConfigurationMediaOutputGroup),
		alignof(FDisplayClusterConfigurationMediaOutputGroup),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX;
class UScriptStruct* FDisplayClusterConfigurationMediaICVFX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationMediaICVFX"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationMediaICVFX>()
{
	return FDisplayClusterConfigurationMediaICVFX::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaOutputGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaOutputGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaInputGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaInputGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Media settings for ICVFX cameras\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Media settings for ICVFX cameras" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationMediaICVFX>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Enable/disable media */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Enable/disable media" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationMediaICVFX*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationMediaICVFX), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_Inner = { "MediaOutputGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup, METADATA_PARAMS(nullptr, 0) }; // 3879291336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media output mapping */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media output mapping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups = { "MediaOutputGroups", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaICVFX, MediaOutputGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_MetaData)) }; // 3879291336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_Inner = { "MediaInputGroups", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup, METADATA_PARAMS(nullptr, 0) }; // 3062689694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Media input mapping */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media input mapping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups = { "MediaInputGroups", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationMediaICVFX, MediaInputGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_MetaData)) }; // 3062689694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaOutputGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewProp_MediaInputGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationMediaICVFX",
		sizeof(FDisplayClusterConfigurationMediaICVFX),
		alignof(FDisplayClusterConfigurationMediaICVFX),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings;
class UScriptStruct* FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationGlobalMediaSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationGlobalMediaSettings>()
{
	return FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Latency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Global media settings\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "* Global media settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationGlobalMediaSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData[] = {
		{ "Category", "Media" },
		{ "ClampMax", "9" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Media latency */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Media.h" },
		{ "ToolTip", "Media latency" },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency = { "Latency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationGlobalMediaSettings, Latency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewProp_Latency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationGlobalMediaSettings",
		sizeof(FDisplayClusterConfigurationGlobalMediaSettings),
		alignof(FDisplayClusterConfigurationGlobalMediaSettings),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationMedia::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMedia_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMedia"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMedia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMedia), 535632961U) },
		{ FDisplayClusterConfigurationMediaInputGroup::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaInputGroup_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaInputGroup"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaInputGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaInputGroup), 3062689694U) },
		{ FDisplayClusterConfigurationMediaOutputGroup::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaOutputGroup_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaOutputGroup"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaOutputGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaOutputGroup), 3879291336U) },
		{ FDisplayClusterConfigurationMediaICVFX::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationMediaICVFX_Statics::NewStructOps, TEXT("DisplayClusterConfigurationMediaICVFX"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationMediaICVFX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationMediaICVFX), 2244197886U) },
		{ FDisplayClusterConfigurationGlobalMediaSettings::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationGlobalMediaSettings_Statics::NewStructOps, TEXT("DisplayClusterConfigurationGlobalMediaSettings"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationGlobalMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationGlobalMediaSettings), 3208822241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_3275300093(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Media_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
