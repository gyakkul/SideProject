// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/HTNBrainComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTNBrainComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	HTNPLANNER_API UClass* Z_Construct_UClass_UHTNBrainComponent();
	HTNPLANNER_API UClass* Z_Construct_UClass_UHTNBrainComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HTNPlanner();
// End Cross Module References
	void UHTNBrainComponent::StaticRegisterNativesUHTNBrainComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTNBrainComponent);
	UClass* Z_Construct_UClass_UHTNBrainComponent_NoRegister()
	{
		return UHTNBrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHTNBrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTNBrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrainComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HTNPlanner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTNBrainComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "AI/HTNBrainComponent.h" },
		{ "ModuleRelativePath", "Public/AI/HTNBrainComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTNBrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTNBrainComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTNBrainComponent_Statics::ClassParams = {
		&UHTNBrainComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHTNBrainComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTNBrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTNBrainComponent()
	{
		if (!Z_Registration_Info_UClass_UHTNBrainComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTNBrainComponent.OuterSingleton, Z_Construct_UClass_UHTNBrainComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHTNBrainComponent.OuterSingleton;
	}
	template<> HTNPLANNER_API UClass* StaticClass<UHTNBrainComponent>()
	{
		return UHTNBrainComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTNBrainComponent);
	UHTNBrainComponent::~UHTNBrainComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHTNBrainComponent, UHTNBrainComponent::StaticClass, TEXT("UHTNBrainComponent"), &Z_Registration_Info_UClass_UHTNBrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTNBrainComponent), 521988136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_2844130170(TEXT("/Script/HTNPlanner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNPlanner_Public_AI_HTNBrainComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
