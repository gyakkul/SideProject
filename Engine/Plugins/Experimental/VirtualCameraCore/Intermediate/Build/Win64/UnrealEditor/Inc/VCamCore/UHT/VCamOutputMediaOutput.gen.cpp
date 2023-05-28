// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Output/VCamOutputMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamOutputMediaOutput() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputMediaOutput();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputMediaOutput_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
// End Cross Module References
	void UVCamOutputMediaOutput::StaticRegisterNativesUVCamOutputMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamOutputMediaOutput);
	UClass* Z_Construct_UClass_UVCamOutputMediaOutput_NoRegister()
	{
		return UVCamOutputMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVCamOutputMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComposureOutputProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromComposureOutputProviderIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamOutputMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Media Output Provider" },
		{ "IncludePath", "Output/VCamOutputMediaOutput.h" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputMediaOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_OutputConfig_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Media Output configuration asset */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputMediaOutput.h" },
		{ "ToolTip", "Media Output configuration asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_OutputConfig = { "OutputConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputMediaOutput, OutputConfig), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_OutputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_OutputConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_FromComposureOutputProviderIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If using the output from a Composure Output Provider, specify it here */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputMediaOutput.h" },
		{ "ToolTip", "If using the output from a Composure Output Provider, specify it here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_FromComposureOutputProviderIndex = { "FromComposureOutputProviderIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputMediaOutput, FromComposureOutputProviderIndex), METADATA_PARAMS(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_FromComposureOutputProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_FromComposureOutputProviderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_MediaCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Output/VCamOutputMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_MediaCapture = { "MediaCapture", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputMediaOutput, MediaCapture), Z_Construct_UClass_UMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_MediaCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_MediaCapture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamOutputMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_OutputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_FromComposureOutputProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputMediaOutput_Statics::NewProp_MediaCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamOutputMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamOutputMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamOutputMediaOutput_Statics::ClassParams = {
		&UVCamOutputMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamOutputMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamOutputMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UVCamOutputMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamOutputMediaOutput.OuterSingleton, Z_Construct_UClass_UVCamOutputMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamOutputMediaOutput.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamOutputMediaOutput>()
	{
		return UVCamOutputMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamOutputMediaOutput);
	UVCamOutputMediaOutput::~UVCamOutputMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamOutputMediaOutput, UVCamOutputMediaOutput::StaticClass, TEXT("UVCamOutputMediaOutput"), &Z_Registration_Info_UClass_UVCamOutputMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamOutputMediaOutput), 4019448076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_3816654845(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
