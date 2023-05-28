// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Output/VCamOutputViewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamOutputViewport() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputViewport();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputViewport_NoRegister();
// End Cross Module References
	void UVCamOutputViewport::StaticRegisterNativesUVCamOutputViewport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamOutputViewport);
	UClass* Z_Construct_UClass_UVCamOutputViewport_NoRegister()
	{
		return UVCamOutputViewport::StaticClass();
	}
	struct Z_Construct_UClass_UVCamOutputViewport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamOutputViewport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputViewport_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Adds a widget on top of the viewport locally. */" },
		{ "DisplayName", "Viewport Output Provider" },
		{ "IncludePath", "Output/VCamOutputViewport.h" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputViewport.h" },
		{ "ToolTip", "Adds a widget on top of the viewport locally." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamOutputViewport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamOutputViewport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamOutputViewport_Statics::ClassParams = {
		&UVCamOutputViewport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamOutputViewport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputViewport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamOutputViewport()
	{
		if (!Z_Registration_Info_UClass_UVCamOutputViewport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamOutputViewport.OuterSingleton, Z_Construct_UClass_UVCamOutputViewport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamOutputViewport.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamOutputViewport>()
	{
		return UVCamOutputViewport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamOutputViewport);
	UVCamOutputViewport::~UVCamOutputViewport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamOutputViewport, UVCamOutputViewport::StaticClass, TEXT("UVCamOutputViewport"), &Z_Registration_Info_UClass_UVCamOutputViewport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamOutputViewport), 3953332860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_3875957850(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputViewport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
