// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Output/VCamOutputComposure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamOutputComposure() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputComposure();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputComposure_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
// End Cross Module References
	void UVCamOutputComposure::StaticRegisterNativesUVCamOutputComposure()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamOutputComposure);
	UClass* Z_Construct_UClass_UVCamOutputComposure_NoRegister()
	{
		return UVCamOutputComposure::StaticClass();
	}
	struct Z_Construct_UClass_UVCamOutputComposure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LayerTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalOutputRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FinalOutputRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamOutputComposure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputComposure_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Composure Output Provider" },
		{ "IncludePath", "Output/VCamOutputComposure.h" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputComposure.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets_Inner = { "LayerTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** List of Composure stack Compositing Elements to render the requested UMG into */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputComposure.h" },
		{ "ToolTip", "List of Composure stack Compositing Elements to render the requested UMG into" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets = { "LayerTargets", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputComposure, LayerTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_FinalOutputRenderTarget_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** TextureRenderTarget2D asset that contains the final output */" },
		{ "ModuleRelativePath", "Public/Output/VCamOutputComposure.h" },
		{ "ToolTip", "TextureRenderTarget2D asset that contains the final output" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_FinalOutputRenderTarget = { "FinalOutputRenderTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamOutputComposure, FinalOutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_FinalOutputRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_FinalOutputRenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamOutputComposure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_LayerTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamOutputComposure_Statics::NewProp_FinalOutputRenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamOutputComposure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamOutputComposure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamOutputComposure_Statics::ClassParams = {
		&UVCamOutputComposure::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamOutputComposure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputComposure_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamOutputComposure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamOutputComposure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamOutputComposure()
	{
		if (!Z_Registration_Info_UClass_UVCamOutputComposure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamOutputComposure.OuterSingleton, Z_Construct_UClass_UVCamOutputComposure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamOutputComposure.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamOutputComposure>()
	{
		return UVCamOutputComposure::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamOutputComposure);
	UVCamOutputComposure::~UVCamOutputComposure() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamOutputComposure, UVCamOutputComposure::StaticClass, TEXT("UVCamOutputComposure"), &Z_Registration_Info_UClass_UVCamOutputComposure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamOutputComposure), 3028970201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_1422586809(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Output_VCamOutputComposure_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
