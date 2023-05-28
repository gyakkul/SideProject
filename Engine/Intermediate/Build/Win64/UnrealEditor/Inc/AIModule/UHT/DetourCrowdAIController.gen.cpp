// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/DetourCrowdAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetourCrowdAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_ADetourCrowdAIController();
	AIMODULE_API UClass* Z_Construct_UClass_ADetourCrowdAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void ADetourCrowdAIController::StaticRegisterNativesADetourCrowdAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADetourCrowdAIController);
	UClass* Z_Construct_UClass_ADetourCrowdAIController_NoRegister()
	{
		return ADetourCrowdAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADetourCrowdAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADetourCrowdAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DetourCrowdAIController.h" },
		{ "ModuleRelativePath", "Classes/DetourCrowdAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADetourCrowdAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetourCrowdAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADetourCrowdAIController_Statics::ClassParams = {
		&ADetourCrowdAIController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADetourCrowdAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADetourCrowdAIController()
	{
		if (!Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton, Z_Construct_UClass_ADetourCrowdAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADetourCrowdAIController.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<ADetourCrowdAIController>()
	{
		return ADetourCrowdAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADetourCrowdAIController);
	ADetourCrowdAIController::~ADetourCrowdAIController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADetourCrowdAIController, ADetourCrowdAIController::StaticClass, TEXT("ADetourCrowdAIController"), &Z_Registration_Info_UClass_ADetourCrowdAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADetourCrowdAIController), 3740877754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h_1709221217(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DetourCrowdAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
