// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PersonaPreviewSceneAnimationController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneAnimationController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneAnimationController::StaticRegisterNativesUPersonaPreviewSceneAnimationController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaPreviewSceneAnimationController);
	UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController_NoRegister()
	{
		return UPersonaPreviewSceneAnimationController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Use Specific Animation" },
		{ "IncludePath", "PersonaPreviewSceneAnimationController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneAnimationController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The preview animation to use */" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneAnimationController.h" },
		{ "ToolTip", "The preview animation to use" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneAnimationController, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneAnimationController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::ClassParams = {
		&UPersonaPreviewSceneAnimationController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneAnimationController()
	{
		if (!Z_Registration_Info_UClass_UPersonaPreviewSceneAnimationController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaPreviewSceneAnimationController.OuterSingleton, Z_Construct_UClass_UPersonaPreviewSceneAnimationController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaPreviewSceneAnimationController.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneAnimationController>()
	{
		return UPersonaPreviewSceneAnimationController::StaticClass();
	}
	UPersonaPreviewSceneAnimationController::UPersonaPreviewSceneAnimationController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneAnimationController);
	UPersonaPreviewSceneAnimationController::~UPersonaPreviewSceneAnimationController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaPreviewSceneAnimationController, UPersonaPreviewSceneAnimationController::StaticClass, TEXT("UPersonaPreviewSceneAnimationController"), &Z_Registration_Info_UClass_UPersonaPreviewSceneAnimationController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaPreviewSceneAnimationController), 1690308981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_3922277489(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneAnimationController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
