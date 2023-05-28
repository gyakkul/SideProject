// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleVirtualCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVirtualCamera() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_ASimpleVirtualCamera();
	VCAMCORE_API UClass* Z_Construct_UClass_ASimpleVirtualCamera_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
// End Cross Module References
	void ASimpleVirtualCamera::StaticRegisterNativesASimpleVirtualCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimpleVirtualCamera);
	UClass* Z_Construct_UClass_ASimpleVirtualCamera_NoRegister()
	{
		return ASimpleVirtualCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleVirtualCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VCamComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleVirtualCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVirtualCamera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple native virtual camera actor\n */" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "SimpleVirtualCamera.h" },
		{ "ModuleRelativePath", "Public/SimpleVirtualCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A simple native virtual camera actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleVirtualCamera_Statics::NewProp_VCamComponent_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASimpleVirtualCamera_Statics::NewProp_VCamComponent = { "VCamComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASimpleVirtualCamera, VCamComponent), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimpleVirtualCamera_Statics::NewProp_VCamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVirtualCamera_Statics::NewProp_VCamComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleVirtualCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleVirtualCamera_Statics::NewProp_VCamComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleVirtualCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleVirtualCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleVirtualCamera_Statics::ClassParams = {
		&ASimpleVirtualCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASimpleVirtualCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVirtualCamera_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASimpleVirtualCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleVirtualCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleVirtualCamera()
	{
		if (!Z_Registration_Info_UClass_ASimpleVirtualCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleVirtualCamera.OuterSingleton, Z_Construct_UClass_ASimpleVirtualCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimpleVirtualCamera.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<ASimpleVirtualCamera>()
	{
		return ASimpleVirtualCamera::StaticClass();
	}
	ASimpleVirtualCamera::ASimpleVirtualCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleVirtualCamera);
	ASimpleVirtualCamera::~ASimpleVirtualCamera() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_SimpleVirtualCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_SimpleVirtualCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleVirtualCamera, ASimpleVirtualCamera::StaticClass, TEXT("ASimpleVirtualCamera"), &Z_Registration_Info_UClass_ASimpleVirtualCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleVirtualCamera), 2455561589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_SimpleVirtualCamera_h_3319032039(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_SimpleVirtualCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_SimpleVirtualCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
