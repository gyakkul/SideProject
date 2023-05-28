// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPhaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPhaseComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void UTestPhaseComponent::StaticRegisterNativesUTestPhaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestPhaseComponent);
	UClass* Z_Construct_UClass_UTestPhaseComponent_NoRegister()
	{
		return UTestPhaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTestPhaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestPhaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "TestPhaseComponent.h" },
		{ "ModuleRelativePath", "Classes/TestPhaseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestPhaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPhaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams = {
		&UTestPhaseComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestPhaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestPhaseComponent()
	{
		if (!Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton, Z_Construct_UClass_UTestPhaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestPhaseComponent.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UTestPhaseComponent>()
	{
		return UTestPhaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPhaseComponent);
	UTestPhaseComponent::~UTestPhaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestPhaseComponent, UTestPhaseComponent::StaticClass, TEXT("UTestPhaseComponent"), &Z_Registration_Info_UClass_UTestPhaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestPhaseComponent), 2614999971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_2133063617(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TestPhaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
