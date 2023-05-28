// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FuncTestRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuncTestRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void UFuncTestRenderingComponent::StaticRegisterNativesUFuncTestRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFuncTestRenderingComponent);
	UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister()
	{
		return UFuncTestRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFuncTestRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFuncTestRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "FuncTestRenderingComponent.h" },
		{ "ModuleRelativePath", "Classes/FuncTestRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFuncTestRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuncTestRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams = {
		&UFuncTestRenderingComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFuncTestRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFuncTestRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton, Z_Construct_UClass_UFuncTestRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFuncTestRenderingComponent.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFuncTestRenderingComponent>()
	{
		return UFuncTestRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFuncTestRenderingComponent);
	UFuncTestRenderingComponent::~UFuncTestRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFuncTestRenderingComponent, UFuncTestRenderingComponent::StaticClass, TEXT("UFuncTestRenderingComponent"), &Z_Registration_Info_UClass_UFuncTestRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuncTestRenderingComponent), 551211059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_3043382389(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FuncTestRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
