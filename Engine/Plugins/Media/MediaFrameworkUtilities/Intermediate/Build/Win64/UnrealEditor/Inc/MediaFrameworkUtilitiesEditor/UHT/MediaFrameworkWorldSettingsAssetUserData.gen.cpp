// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaFrameworkWorldSettingsAssetUserData.h"
#include "MediaCapture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaFrameworkWorldSettingsAssetUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo;
class UScriptStruct* FMediaFrameworkCaptureCurrentViewportOutputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo, (UObject*)Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor(), TEXT("MediaFrameworkCaptureCurrentViewportOutputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.OuterSingleton;
}
template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* StaticStruct<FMediaFrameworkCaptureCurrentViewportOutputInfo>()
{
	return FMediaFrameworkCaptureCurrentViewportOutputInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FMediaFrameworkCaptureCurrentViewportOutputInfo\n */" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "FMediaFrameworkCaptureCurrentViewportOutputInfo" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaFrameworkCaptureCurrentViewportOutputInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "MediaViewportCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCurrentViewportOutputInfo, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_CaptureOptions_MetaData[] = {
		{ "Category", "MediaViewportCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCurrentViewportOutputInfo, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_CaptureOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_CaptureOptions_MetaData)) }; // 2657660499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_ViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCurrentViewportOutputInfo, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_ViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_ViewMode_MetaData)) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewProp_ViewMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
		nullptr,
		&NewStructOps,
		"MediaFrameworkCaptureCurrentViewportOutputInfo",
		sizeof(FMediaFrameworkCaptureCurrentViewportOutputInfo),
		alignof(FMediaFrameworkCaptureCurrentViewportOutputInfo),
		Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.InnerSingleton, Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo;
class UScriptStruct* FMediaFrameworkCaptureCameraViewportCameraOutputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo, (UObject*)Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor(), TEXT("MediaFrameworkCaptureCameraViewportCameraOutputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.OuterSingleton;
}
template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* StaticStruct<FMediaFrameworkCaptureCameraViewportCameraOutputInfo>()
{
	return FMediaFrameworkCaptureCameraViewportCameraOutputInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LockedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LockedCameraActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedCameraActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedCameraActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FMediaFrameworkCaptureCameraViewportCameraOutputInfo\n */" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "FMediaFrameworkCaptureCameraViewportCameraOutputInfo" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaFrameworkCaptureCameraViewportCameraOutputInfo>();
	}
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors_Inner = { "LockedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors_MetaData[] = {
		{ "Category", "MediaViewportCapture" },
		{ "DisplayName", "Cameras" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors = { "LockedActors", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCameraViewportCameraOutputInfo, LockedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "MediaViewportCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCameraViewportCameraOutputInfo, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData[] = {
		{ "Category", "MediaViewportCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCameraViewportCameraOutputInfo, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData)) }; // 2657660499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_ViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCameraViewportCameraOutputInfo, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_ViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_ViewMode_MetaData)) }; // 1054163023
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors_Inner = { "LockedCameraActors", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors_MetaData[] = {
		{ "Comment", "//DEPRECATED 4.21 The type of LockedCameraActors has changed and will be removed from the code base in a future release. Use LockedActors.\n" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "DEPRECATED 4.21 The type of LockedCameraActors has changed and will be removed from the code base in a future release. Use LockedActors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors = { "LockedCameraActors", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureCameraViewportCameraOutputInfo, LockedCameraActors_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewProp_LockedCameraActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
		nullptr,
		&NewStructOps,
		"MediaFrameworkCaptureCameraViewportCameraOutputInfo",
		sizeof(FMediaFrameworkCaptureCameraViewportCameraOutputInfo),
		alignof(FMediaFrameworkCaptureCameraViewportCameraOutputInfo),
		Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.InnerSingleton, Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo;
class UScriptStruct* FMediaFrameworkCaptureRenderTargetCameraOutputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo, (UObject*)Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor(), TEXT("MediaFrameworkCaptureRenderTargetCameraOutputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.OuterSingleton;
}
template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UScriptStruct* StaticStruct<FMediaFrameworkCaptureRenderTargetCameraOutputInfo>()
{
	return FMediaFrameworkCaptureRenderTargetCameraOutputInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FMediaFrameworkCaptureRenderTargetCameraOutputInfo\n */" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "FMediaFrameworkCaptureRenderTargetCameraOutputInfo" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaFrameworkCaptureRenderTargetCameraOutputInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "MediaRenderTargetCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureRenderTargetCameraOutputInfo, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "MediaRenderTargetCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureRenderTargetCameraOutputInfo, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData[] = {
		{ "Category", "MediaRenderTargetCapture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaFrameworkCaptureRenderTargetCameraOutputInfo, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_CaptureOptions_MetaData)) }; // 2657660499
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewProp_CaptureOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
		nullptr,
		&NewStructOps,
		"MediaFrameworkCaptureRenderTargetCameraOutputInfo",
		sizeof(FMediaFrameworkCaptureRenderTargetCameraOutputInfo),
		alignof(FMediaFrameworkCaptureRenderTargetCameraOutputInfo),
		Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.InnerSingleton, Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo.InnerSingleton;
	}
	void UMediaFrameworkWorldSettingsAssetUserData::StaticRegisterNativesUMediaFrameworkWorldSettingsAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkWorldSettingsAssetUserData);
	UClass* Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_NoRegister()
	{
		return UMediaFrameworkWorldSettingsAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetCaptures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetCaptures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTargetCaptures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportCaptures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportCaptures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewportCaptures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentViewportMediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentViewportMediaOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMediaFrameworkCaptureCameraViewportAssetUserData\n */" },
		{ "IncludePath", "MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "UMediaFrameworkCaptureCameraViewportAssetUserData" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures_Inner = { "RenderTargetCaptures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo, METADATA_PARAMS(nullptr, 0) }; // 268722805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures_MetaData[] = {
		{ "Category", "Media Render Target Capture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures = { "RenderTargetCaptures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkWorldSettingsAssetUserData, RenderTargetCaptures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures_MetaData)) }; // 268722805
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures_Inner = { "ViewportCaptures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo, METADATA_PARAMS(nullptr, 0) }; // 334946180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures_MetaData[] = {
		{ "Category", "Media Viewport Capture" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures = { "ViewportCaptures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkWorldSettingsAssetUserData, ViewportCaptures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures_MetaData)) }; // 334946180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_CurrentViewportMediaOutput_MetaData[] = {
		{ "Category", "Media Current Viewport Capture" },
		{ "Comment", "/**\n\x09 * Capture the current viewport. It may be the level editor active viewport or a PIE instance launch with \"New Editor Window PIE\".\n\x09 * @note The behavior is different from MediaCapture.CaptureActiveSceneViewport. Here we can capture the editor viewport (since we are in the editor).\n\x09 * @note If the viewport is the level editor active viewport, then all inputs will be disabled and the viewport will always rendered.\n\x09 */" },
		{ "DisplayName", "Current Viewport" },
		{ "ModuleRelativePath", "Private/MediaFrameworkWorldSettingsAssetUserData.h" },
		{ "ToolTip", "Capture the current viewport. It may be the level editor active viewport or a PIE instance launch with \"New Editor Window PIE\".\n@note The behavior is different from MediaCapture.CaptureActiveSceneViewport. Here we can capture the editor viewport (since we are in the editor).\n@note If the viewport is the level editor active viewport, then all inputs will be disabled and the viewport will always rendered." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_CurrentViewportMediaOutput = { "CurrentViewportMediaOutput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaFrameworkWorldSettingsAssetUserData, CurrentViewportMediaOutput), Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_CurrentViewportMediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_CurrentViewportMediaOutput_MetaData)) }; // 3949267135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_RenderTargetCaptures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_ViewportCaptures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::NewProp_CurrentViewportMediaOutput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkWorldSettingsAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::ClassParams = {
		&UMediaFrameworkWorldSettingsAssetUserData::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::PropPointers),
		0,
		0x002810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkWorldSettingsAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkWorldSettingsAssetUserData.OuterSingleton, Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkWorldSettingsAssetUserData.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkWorldSettingsAssetUserData>()
	{
		return UMediaFrameworkWorldSettingsAssetUserData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkWorldSettingsAssetUserData);
	UMediaFrameworkWorldSettingsAssetUserData::~UMediaFrameworkWorldSettingsAssetUserData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMediaFrameworkWorldSettingsAssetUserData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ScriptStructInfo[] = {
		{ FMediaFrameworkCaptureCurrentViewportOutputInfo::StaticStruct, Z_Construct_UScriptStruct_FMediaFrameworkCaptureCurrentViewportOutputInfo_Statics::NewStructOps, TEXT("MediaFrameworkCaptureCurrentViewportOutputInfo"), &Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCurrentViewportOutputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaFrameworkCaptureCurrentViewportOutputInfo), 3949267135U) },
		{ FMediaFrameworkCaptureCameraViewportCameraOutputInfo::StaticStruct, Z_Construct_UScriptStruct_FMediaFrameworkCaptureCameraViewportCameraOutputInfo_Statics::NewStructOps, TEXT("MediaFrameworkCaptureCameraViewportCameraOutputInfo"), &Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureCameraViewportCameraOutputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaFrameworkCaptureCameraViewportCameraOutputInfo), 334946180U) },
		{ FMediaFrameworkCaptureRenderTargetCameraOutputInfo::StaticStruct, Z_Construct_UScriptStruct_FMediaFrameworkCaptureRenderTargetCameraOutputInfo_Statics::NewStructOps, TEXT("MediaFrameworkCaptureRenderTargetCameraOutputInfo"), &Z_Registration_Info_UScriptStruct_MediaFrameworkCaptureRenderTargetCameraOutputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaFrameworkCaptureRenderTargetCameraOutputInfo), 268722805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData, UMediaFrameworkWorldSettingsAssetUserData::StaticClass, TEXT("UMediaFrameworkWorldSettingsAssetUserData"), &Z_Registration_Info_UClass_UMediaFrameworkWorldSettingsAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkWorldSettingsAssetUserData), 3796470058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_1290762835(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_MediaFrameworkWorldSettingsAssetUserData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
