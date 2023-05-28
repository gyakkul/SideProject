// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamPixelStreamingSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamPixelStreamingSession() {}
// Cross Module References
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaCapture_NoRegister();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UVCamPixelStreamingSession();
	PIXELSTREAMINGVCAM_API UClass* Z_Construct_UClass_UVCamPixelStreamingSession_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingVCam();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
// End Cross Module References
	void UVCamPixelStreamingSession::StaticRegisterNativesUVCamPixelStreamingSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamPixelStreamingSession);
	UClass* Z_Construct_UClass_UVCamPixelStreamingSession_NoRegister()
	{
		return UVCamPixelStreamingSession::StaticClass();
	}
	struct Z_Construct_UClass_UVCamPixelStreamingSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComposureOutputProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromComposureOutputProviderIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRemoteResolution_MetaData[];
#endif
		static void NewProp_bMatchRemoteResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRemoteResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableARKitTracking_MetaData[];
#endif
		static void NewProp_EnableARKitTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableARKitTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreventEditorIdle_MetaData[];
#endif
		static void NewProp_PreventEditorIdle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreventEditorIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLiveLinkSubject_MetaData[];
#endif
		static void NewProp_bAutoSetLiveLinkSubject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLiveLinkSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamPixelStreamingSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingVCam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pixel Streaming Provider" },
		{ "IncludePath", "VCamPixelStreamingSession.h" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// If using the output from a Composure Output Provider, specify it here\n" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If using the output from a Composure Output Provider, specify it here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex = { "FromComposureOutputProviderIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamPixelStreamingSession, FromComposureOutputProviderIndex), METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// If true the streamed UE viewport will match the resolution of the remote device.\n" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If true the streamed UE viewport will match the resolution of the remote device." },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->bMatchRemoteResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution = { "bMatchRemoteResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// Check this if you wish to control the corresponding CineCamera with transform data received from the LiveLink app\n" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "Check this if you wish to control the corresponding CineCamera with transform data received from the LiveLink app" },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->EnableARKitTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking = { "EnableARKitTracking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// If not selected, when the editor is not the foreground application, input through the vcam session may seem sluggish or unresponsive.\n" },
		{ "DisplayPriority", "13" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If not selected, when the editor is not the foreground application, input through the vcam session may seem sluggish or unresponsive." },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->PreventEditorIdle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle = { "PreventEditorIdle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// If true then the Live Link Subject of the owning VCam Component will be set to the subject created by this Output Provider when the Provider is enabled\n" },
		{ "DisplayPriority", "14" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "If true then the Live Link Subject of the owning VCam Component will be set to the subject created by this Output Provider when the Provider is enabled" },
	};
#endif
	void Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_SetBit(void* Obj)
	{
		((UVCamPixelStreamingSession*)Obj)->bAutoSetLiveLinkSubject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject = { "bAutoSetLiveLinkSubject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamPixelStreamingSession), &Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// Set the name of this stream to be reported to the signalling server. If none is supplied a default will be used. If ids are not unique issues can occur.\n" },
		{ "DisplayPriority", "15" },
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
		{ "ToolTip", "Set the name of this stream to be reported to the signalling server. If none is supplied a default will be used. If ids are not unique issues can occur." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamPixelStreamingSession, StreamerId), METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamPixelStreamingSession, MediaOutput), Z_Construct_UClass_UPixelStreamingMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamPixelStreamingSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaCapture = { "MediaCapture", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamPixelStreamingSession, MediaCapture), Z_Construct_UClass_UPixelStreamingMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaCapture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_FromComposureOutputProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bMatchRemoteResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_EnableARKitTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_PreventEditorIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_bAutoSetLiveLinkSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPixelStreamingSession_Statics::NewProp_MediaCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamPixelStreamingSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamPixelStreamingSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamPixelStreamingSession_Statics::ClassParams = {
		&UVCamPixelStreamingSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPixelStreamingSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamPixelStreamingSession()
	{
		if (!Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton, Z_Construct_UClass_UVCamPixelStreamingSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamPixelStreamingSession.OuterSingleton;
	}
	template<> PIXELSTREAMINGVCAM_API UClass* StaticClass<UVCamPixelStreamingSession>()
	{
		return UVCamPixelStreamingSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamPixelStreamingSession);
	UVCamPixelStreamingSession::~UVCamPixelStreamingSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamPixelStreamingSession, UVCamPixelStreamingSession::StaticClass, TEXT("UVCamPixelStreamingSession"), &Z_Registration_Info_UClass_UVCamPixelStreamingSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamPixelStreamingSession), 3138252504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSession_h_85551199(TEXT("/Script/PixelStreamingVCam"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_PixelStreamingVCam_Public_VCamPixelStreamingSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
