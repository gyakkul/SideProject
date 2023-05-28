// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SCameraShakePreviewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCameraShakePreviewer() {}
// Cross Module References
	CAMERASHAKEPREVIEWER_API UClass* Z_Construct_UClass_APreviewPlayerCameraManager();
	CAMERASHAKEPREVIEWER_API UClass* Z_Construct_UClass_APreviewPlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_CameraShakePreviewer();
// End Cross Module References
	void APreviewPlayerCameraManager::StaticRegisterNativesAPreviewPlayerCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreviewPlayerCameraManager);
	UClass* Z_Construct_UClass_APreviewPlayerCameraManager_NoRegister()
	{
		return APreviewPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_APreviewPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreviewPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraShakePreviewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SCameraShakePreviewer.h" },
		{ "ModuleRelativePath", "Private/SCameraShakePreviewer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreviewPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreviewPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreviewPlayerCameraManager_Statics::ClassParams = {
		&APreviewPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APreviewPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APreviewPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_APreviewPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreviewPlayerCameraManager.OuterSingleton, Z_Construct_UClass_APreviewPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreviewPlayerCameraManager.OuterSingleton;
	}
	template<> CAMERASHAKEPREVIEWER_API UClass* StaticClass<APreviewPlayerCameraManager>()
	{
		return APreviewPlayerCameraManager::StaticClass();
	}
	APreviewPlayerCameraManager::APreviewPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreviewPlayerCameraManager);
	APreviewPlayerCameraManager::~APreviewPlayerCameraManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_CameraShakePreviewer_Source_CameraShakePreviewer_Private_SCameraShakePreviewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_CameraShakePreviewer_Source_CameraShakePreviewer_Private_SCameraShakePreviewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreviewPlayerCameraManager, APreviewPlayerCameraManager::StaticClass, TEXT("APreviewPlayerCameraManager"), &Z_Registration_Info_UClass_APreviewPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreviewPlayerCameraManager), 2549184045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_CameraShakePreviewer_Source_CameraShakePreviewer_Private_SCameraShakePreviewer_h_1811145438(TEXT("/Script/CameraShakePreviewer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_CameraShakePreviewer_Source_CameraShakePreviewer_Private_SCameraShakePreviewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_CameraShakePreviewer_Source_CameraShakePreviewer_Private_SCameraShakePreviewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
