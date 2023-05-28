// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Output/VCamOutputRemoteSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamOutputRemoteSession() {}
// Cross Module References
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputRemoteSession();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputRemoteSession_NoRegister();
// End Cross Module References
	void UVCamOutputRemoteSession::StaticRegisterNativesUVCamOutputRemoteSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamOutputRemoteSession);
	UClass* Z_Construct_UClass_UVCamOutputRemoteSession_NoRegister()
	{
		return UVCamOutputRemoteSession::StaticClass();
	}
	struct Z_Construct_UClass_UVCamOutputRemoteSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PortNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComposureOutputProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromComposureOutputProviderIndex;
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
	UObject* (*const Z_Construct_UClass_UVCamOutputRemoteSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputRemoteSession_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Unreal Remote Output Provider" },
		{ "IncludePath", "Output/VCamOutputRemoteSession.h" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputRemoteSession.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Network port number - change this only if connecting multiple RemoteSession devices to the same PC */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputRemoteSession.h" },
		{ "ToolTip", "Network port number - change this only if connecting multiple RemoteSession devices to the same PC" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputRemoteSession, PortNumber), METADATA_PARAMS(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_PortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_PortNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If using the output from a Composure Output Provider, specify it here */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputRemoteSession.h" },
		{ "ToolTip", "If using the output from a Composure Output Provider, specify it here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_FromComposureOutputProviderIndex = { "FromComposureOutputProviderIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputRemoteSession, FromComposureOutputProviderIndex), METADATA_PARAMS(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_FromComposureOutputProviderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputRemoteSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputRemoteSession, MediaOutput), Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputRemoteSession.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaCapture = { "MediaCapture", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputRemoteSession, MediaCapture), Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaCapture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamOutputRemoteSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_PortNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_FromComposureOutputProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputRemoteSession_Statics::NewProp_MediaCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamOutputRemoteSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamOutputRemoteSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamOutputRemoteSession_Statics::ClassParams = {
		&UVCamOutputRemoteSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamOutputRemoteSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputRemoteSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamOutputRemoteSession()
	{
		if (!Z_Registration_Info_UClass_UVCamOutputRemoteSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamOutputRemoteSession.OuterSingleton, Z_Construct_UClass_UVCamOutputRemoteSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamOutputRemoteSession.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamOutputRemoteSession>()
	{
		return UVCamOutputRemoteSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamOutputRemoteSession);
	UVCamOutputRemoteSession::~UVCamOutputRemoteSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamOutputRemoteSession, UVCamOutputRemoteSession::StaticClass, TEXT("UVCamOutputRemoteSession"), &Z_Registration_Info_UClass_UVCamOutputRemoteSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamOutputRemoteSession), 314738146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_2301158003(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputRemoteSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
