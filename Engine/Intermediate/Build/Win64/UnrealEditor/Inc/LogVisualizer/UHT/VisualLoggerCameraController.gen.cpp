// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Private/VisualLoggerCameraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerCameraController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerCameraController();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerCameraController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void AVisualLoggerCameraController::StaticRegisterNativesAVisualLoggerCameraController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualLoggerCameraController);
	UClass* Z_Construct_UClass_AVisualLoggerCameraController_NoRegister()
	{
		return AVisualLoggerCameraController::StaticClass();
	}
	struct Z_Construct_UClass_AVisualLoggerCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PickedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualLoggerCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VisualLoggerCameraController.h" },
		{ "ModuleRelativePath", "Private/VisualLoggerCameraController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualLoggerCameraController_Statics::NewProp_PickedActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/VisualLoggerCameraController.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AVisualLoggerCameraController_Statics::NewProp_PickedActor = { "PickedActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVisualLoggerCameraController, PickedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerCameraController_Statics::NewProp_PickedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerCameraController_Statics::NewProp_PickedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVisualLoggerCameraController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVisualLoggerCameraController_Statics::NewProp_PickedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualLoggerCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualLoggerCameraController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualLoggerCameraController_Statics::ClassParams = {
		&AVisualLoggerCameraController::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVisualLoggerCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerCameraController_Statics::PropPointers),
		0,
		0x048002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVisualLoggerCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualLoggerCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualLoggerCameraController()
	{
		if (!Z_Registration_Info_UClass_AVisualLoggerCameraController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualLoggerCameraController.OuterSingleton, Z_Construct_UClass_AVisualLoggerCameraController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualLoggerCameraController.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<AVisualLoggerCameraController>()
	{
		return AVisualLoggerCameraController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualLoggerCameraController);
	AVisualLoggerCameraController::~AVisualLoggerCameraController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualLoggerCameraController, AVisualLoggerCameraController::StaticClass, TEXT("AVisualLoggerCameraController"), &Z_Registration_Info_UClass_AVisualLoggerCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualLoggerCameraController), 3350799422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_3034872298(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerCameraController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
