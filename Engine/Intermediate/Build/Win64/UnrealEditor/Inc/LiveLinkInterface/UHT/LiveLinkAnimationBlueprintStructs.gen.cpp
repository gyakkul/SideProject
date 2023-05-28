// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationBlueprintStructs() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubjectMetadata;
class UScriptStruct* FSubjectMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectMetadata, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_SubjectMetadata.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectMetadata>()
{
	return FSubjectMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubjectMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMetadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StringMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneTimecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneFramerate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneFramerate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectMetadata>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp = { "StringMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp = { "StringMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata = { "StringMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubjectMetadata, StringMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode = { "SceneTimecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubjectMetadata, SceneTimecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate = { "SceneFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubjectMetadata, SceneFramerate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_StringMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewProp_SceneFramerate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"SubjectMetadata",
		sizeof(FSubjectMetadata),
		alignof(FSubjectMetadata),
		Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton, Z_Construct_UScriptStruct_FSubjectMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubjectMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedSubjectFrame;
class UScriptStruct* FCachedSubjectFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedSubjectFrame, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("CachedSubjectFrame"));
	}
	return Z_Registration_Info_UScriptStruct_CachedSubjectFrame.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FCachedSubjectFrame>()
{
	return FCachedSubjectFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedSubjectFrame>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"CachedSubjectFrame",
		sizeof(FCachedSubjectFrame),
		alignof(FCachedSubjectFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedSubjectFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton, Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedSubjectFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransform;
class UScriptStruct* FLiveLinkTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransform, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransform"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransform.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransform>()
{
	return FLiveLinkTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTransform",
		sizeof(FLiveLinkTransform),
		alignof(FLiveLinkTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTransform.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSubjectFrameHandle>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FSubjectFrameHandle cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubjectFrameHandle;
class UScriptStruct* FSubjectFrameHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectFrameHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("SubjectFrameHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SubjectFrameHandle.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FSubjectFrameHandle>()
{
	return FSubjectFrameHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationBlueprintStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectFrameHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"SubjectFrameHandle",
		sizeof(FSubjectFrameHandle),
		alignof(FSubjectFrameHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton, Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubjectFrameHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics::ScriptStructInfo[] = {
		{ FSubjectMetadata::StaticStruct, Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewStructOps, TEXT("SubjectMetadata"), &Z_Registration_Info_UScriptStruct_SubjectMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubjectMetadata), 1368164541U) },
		{ FCachedSubjectFrame::StaticStruct, Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::NewStructOps, TEXT("CachedSubjectFrame"), &Z_Registration_Info_UScriptStruct_CachedSubjectFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedSubjectFrame), 723217484U) },
		{ FLiveLinkTransform::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::NewStructOps, TEXT("LiveLinkTransform"), &Z_Registration_Info_UScriptStruct_LiveLinkTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransform), 362415573U) },
		{ FSubjectFrameHandle::StaticStruct, Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::NewStructOps, TEXT("SubjectFrameHandle"), &Z_Registration_Info_UScriptStruct_SubjectFrameHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubjectFrameHandle), 872459058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_2115743482(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
