// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MockHTN.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockHTN() {}
// Cross Module References
	HTNPLANNER_API UClass* Z_Construct_UClass_UHTNBrainComponent();
	HTNTESTSUITE_API UClass* Z_Construct_UClass_UMockHTNComponent();
	HTNTESTSUITE_API UClass* Z_Construct_UClass_UMockHTNComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HTNTestSuite();
// End Cross Module References
	void UMockHTNComponent::StaticRegisterNativesUMockHTNComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockHTNComponent);
	UClass* Z_Construct_UClass_UMockHTNComponent_NoRegister()
	{
		return UMockHTNComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockHTNComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockHTNComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHTNBrainComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HTNTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockHTNComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "MockHTN.h" },
		{ "ModuleRelativePath", "Private/MockHTN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockHTNComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockHTNComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockHTNComponent_Statics::ClassParams = {
		&UMockHTNComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockHTNComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockHTNComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockHTNComponent()
	{
		if (!Z_Registration_Info_UClass_UMockHTNComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockHTNComponent.OuterSingleton, Z_Construct_UClass_UMockHTNComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockHTNComponent.OuterSingleton;
	}
	template<> HTNTESTSUITE_API UClass* StaticClass<UMockHTNComponent>()
	{
		return UMockHTNComponent::StaticClass();
	}
	UMockHTNComponent::UMockHTNComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockHTNComponent);
	UMockHTNComponent::~UMockHTNComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNTestSuite_Private_MockHTN_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNTestSuite_Private_MockHTN_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockHTNComponent, UMockHTNComponent::StaticClass, TEXT("UMockHTNComponent"), &Z_Registration_Info_UClass_UMockHTNComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockHTNComponent), 418307223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNTestSuite_Private_MockHTN_h_3814794(TEXT("/Script/HTNTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNTestSuite_Private_MockHTN_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_HTNPlanner_Source_HTNTestSuite_Private_MockHTN_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
