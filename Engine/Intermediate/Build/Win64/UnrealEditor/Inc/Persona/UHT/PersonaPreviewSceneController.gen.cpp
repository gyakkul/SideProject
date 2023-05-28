// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonaPreviewSceneController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneController::StaticRegisterNativesUPersonaPreviewSceneController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaPreviewSceneController);
	UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister()
	{
		return UPersonaPreviewSceneController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for preview scene controller (controls what the preview scene in persona does) \n" },
		{ "IncludePath", "PersonaPreviewSceneController.h" },
		{ "ModuleRelativePath", "Public/PersonaPreviewSceneController.h" },
		{ "ToolTip", "Base class for preview scene controller (controls what the preview scene in persona does)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneController_Statics::ClassParams = {
		&UPersonaPreviewSceneController::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneController()
	{
		if (!Z_Registration_Info_UClass_UPersonaPreviewSceneController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaPreviewSceneController.OuterSingleton, Z_Construct_UClass_UPersonaPreviewSceneController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaPreviewSceneController.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneController>()
	{
		return UPersonaPreviewSceneController::StaticClass();
	}
	UPersonaPreviewSceneController::UPersonaPreviewSceneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneController);
	UPersonaPreviewSceneController::~UPersonaPreviewSceneController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaPreviewSceneController, UPersonaPreviewSceneController::StaticClass, TEXT("UPersonaPreviewSceneController"), &Z_Registration_Info_UClass_UPersonaPreviewSceneController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaPreviewSceneController), 2719761626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_3701077985(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaPreviewSceneController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
