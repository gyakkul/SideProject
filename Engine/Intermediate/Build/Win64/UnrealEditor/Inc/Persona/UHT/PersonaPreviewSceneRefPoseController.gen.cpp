// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PersonaPreviewSceneRefPoseController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneRefPoseController() {}
// Cross Module References
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneRefPoseController::StaticRegisterNativesUPersonaPreviewSceneRefPoseController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaPreviewSceneRefPoseController);
	UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_NoRegister()
	{
		return UPersonaPreviewSceneRefPoseController::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetBoneTransforms_MetaData[];
#endif
		static void NewProp_bResetBoneTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetBoneTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reference Pose" },
		{ "IncludePath", "PersonaPreviewSceneRefPoseController.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneRefPoseController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData[] = {
		{ "Comment", "/** Whether to reset bone transforms when the refpose is set */" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneRefPoseController.h" },
		{ "ToolTip", "Whether to reset bone transforms when the refpose is set" },
	};
#endif
	void Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_SetBit(void* Obj)
	{
		((UPersonaPreviewSceneRefPoseController*)Obj)->bResetBoneTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms = { "bResetBoneTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPersonaPreviewSceneRefPoseController), &Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::NewProp_bResetBoneTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneRefPoseController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::ClassParams = {
		&UPersonaPreviewSceneRefPoseController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneRefPoseController()
	{
		if (!Z_Registration_Info_UClass_UPersonaPreviewSceneRefPoseController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaPreviewSceneRefPoseController.OuterSingleton, Z_Construct_UClass_UPersonaPreviewSceneRefPoseController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaPreviewSceneRefPoseController.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneRefPoseController>()
	{
		return UPersonaPreviewSceneRefPoseController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneRefPoseController);
	UPersonaPreviewSceneRefPoseController::~UPersonaPreviewSceneRefPoseController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneRefPoseController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneRefPoseController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaPreviewSceneRefPoseController, UPersonaPreviewSceneRefPoseController::StaticClass, TEXT("UPersonaPreviewSceneRefPoseController"), &Z_Registration_Info_UClass_UPersonaPreviewSceneRefPoseController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaPreviewSceneRefPoseController), 599169332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneRefPoseController_h_3303613781(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneRefPoseController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneRefPoseController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
