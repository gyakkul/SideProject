// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Interfaces/IPhysicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPhysicsComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsComponent::StaticRegisterNativesUPhysicsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsComponent);
	UClass* Z_Construct_UClass_UPhysicsComponent_NoRegister()
	{
		return UPhysicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Interfaces/IPhysicsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPhysicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams = {
		&UPhysicsComponent::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton, Z_Construct_UClass_UPhysicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsComponent>()
	{
		return UPhysicsComponent::StaticClass();
	}
	UPhysicsComponent::UPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsComponent);
	UPhysicsComponent::~UPhysicsComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsComponent, UPhysicsComponent::StaticClass, TEXT("UPhysicsComponent"), &Z_Registration_Info_UClass_UPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsComponent), 1909457497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_1824470975(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
