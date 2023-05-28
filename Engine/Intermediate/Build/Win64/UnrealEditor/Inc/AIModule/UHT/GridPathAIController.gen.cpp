// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/GridPathAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void AGridPathAIController::StaticRegisterNativesAGridPathAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridPathAIController);
	UClass* Z_Construct_UClass_AGridPathAIController_NoRegister()
	{
		return AGridPathAIController::StaticClass();
	}
	struct Z_Construct_UClass_AGridPathAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridPathAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GridPathAIController.h" },
		{ "ModuleRelativePath", "Classes/GridPathAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridPathAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPathAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridPathAIController_Statics::ClassParams = {
		&AGridPathAIController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridPathAIController()
	{
		if (!Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton, Z_Construct_UClass_AGridPathAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridPathAIController.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<AGridPathAIController>()
	{
		return AGridPathAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPathAIController);
	AGridPathAIController::~AGridPathAIController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridPathAIController, AGridPathAIController::StaticClass, TEXT("AGridPathAIController"), &Z_Registration_Info_UClass_AGridPathAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridPathAIController), 2631756337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_1445381834(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GridPathAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
