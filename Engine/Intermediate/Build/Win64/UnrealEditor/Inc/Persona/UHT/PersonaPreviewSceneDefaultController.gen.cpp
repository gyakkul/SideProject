// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PersonaPreviewSceneDefaultController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneDefaultController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneDefaultController::StaticRegisterNativesUPersonaPreviewSceneDefaultController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaPreviewSceneDefaultController);
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController_NoRegister()
	{
		return UPersonaPreviewSceneDefaultController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Default" },
		{ "IncludePath", "PersonaPreviewSceneDefaultController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDefaultController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneDefaultController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::ClassParams = {
		&UPersonaPreviewSceneDefaultController::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDefaultController()
	{
		if (!Z_Registration_Info_UClass_UPersonaPreviewSceneDefaultController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaPreviewSceneDefaultController.OuterSingleton, Z_Construct_UClass_UPersonaPreviewSceneDefaultController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaPreviewSceneDefaultController.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneDefaultController>()
	{
		return UPersonaPreviewSceneDefaultController::StaticClass();
	}
	UPersonaPreviewSceneDefaultController::UPersonaPreviewSceneDefaultController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneDefaultController);
	UPersonaPreviewSceneDefaultController::~UPersonaPreviewSceneDefaultController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaPreviewSceneDefaultController, UPersonaPreviewSceneDefaultController::StaticClass, TEXT("UPersonaPreviewSceneDefaultController"), &Z_Registration_Info_UClass_UPersonaPreviewSceneDefaultController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaPreviewSceneDefaultController), 1016931565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_3691334294(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDefaultController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
