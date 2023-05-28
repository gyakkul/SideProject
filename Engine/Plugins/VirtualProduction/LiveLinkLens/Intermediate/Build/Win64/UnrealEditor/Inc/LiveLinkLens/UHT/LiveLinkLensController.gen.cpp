// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkLensController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLensController() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensController();
	LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkLens();
// End Cross Module References
	void ULiveLinkLensController::StaticRegisterNativesULiveLinkLensController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkLensController);
	UClass* Z_Construct_UClass_ULiveLinkLensController_NoRegister()
	{
		return ULiveLinkLensController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkLensController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensDistortionHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensDistortionHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionProducerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionProducerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleOverscan_MetaData[];
#endif
		static void NewProp_bScaleOverscan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleOverscan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkLensController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkLens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LiveLink Controller for the LensRole to drive lens distortion data \n */" },
		{ "IncludePath", "LiveLinkLensController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkLensController.h" },
		{ "ToolTip", "LiveLink Controller for the LensRole to drive lens distortion data" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_LensDistortionHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkLensController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_LensDistortionHandler = { "LensDistortionHandler", nullptr, (EPropertyFlags)0x0024080820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkLensController, LensDistortionHandler_DEPRECATED), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_LensDistortionHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_LensDistortionHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_DistortionProducerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkLensController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_DistortionProducerID = { "DistortionProducerID", nullptr, (EPropertyFlags)0x0020080820200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkLensController, DistortionProducerID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_DistortionProducerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_DistortionProducerID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkLensController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan_SetBit(void* Obj)
	{
		((ULiveLinkLensController*)Obj)->bScaleOverscan_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan = { "bScaleOverscan", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkLensController), &Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_OverscanMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkLensController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_OverscanMultiplier = { "OverscanMultiplier", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkLensController, OverscanMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_OverscanMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_OverscanMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkLensController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_LensDistortionHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_DistortionProducerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_bScaleOverscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLensController_Statics::NewProp_OverscanMultiplier,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkLensController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLensController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLensController_Statics::ClassParams = {
		&ULiveLinkLensController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULiveLinkLensController_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLensController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLensController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkLensController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkLensController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkLensController.OuterSingleton, Z_Construct_UClass_ULiveLinkLensController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkLensController.OuterSingleton;
	}
	template<> LIVELINKLENS_API UClass* StaticClass<ULiveLinkLensController>()
	{
		return ULiveLinkLensController::StaticClass();
	}
	ULiveLinkLensController::ULiveLinkLensController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLensController);
	ULiveLinkLensController::~ULiveLinkLensController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkLensController, ULiveLinkLensController::StaticClass, TEXT("ULiveLinkLensController"), &Z_Registration_Info_UClass_ULiveLinkLensController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkLensController), 2562755386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_2756295170(TEXT("/Script/LiveLinkLens"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkLens_Source_LiveLinkLens_Public_LiveLinkLensController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
