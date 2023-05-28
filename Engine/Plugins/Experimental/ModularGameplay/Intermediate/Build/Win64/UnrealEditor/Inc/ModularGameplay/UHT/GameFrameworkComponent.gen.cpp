// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GameFrameworkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFrameworkComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	void UGameFrameworkComponent::StaticRegisterNativesUGameFrameworkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFrameworkComponent);
	UClass* Z_Construct_UClass_UGameFrameworkComponent_NoRegister()
	{
		return UGameFrameworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameFrameworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFrameworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFrameworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GameFrameworkComponent is a base class for actor components made for the basic game framework classes.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GameFrameworkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "GameFrameworkComponent is a base class for actor components made for the basic game framework classes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFrameworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFrameworkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFrameworkComponent_Statics::ClassParams = {
		&UGameFrameworkComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameFrameworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFrameworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFrameworkComponent()
	{
		if (!Z_Registration_Info_UClass_UGameFrameworkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFrameworkComponent.OuterSingleton, Z_Construct_UClass_UGameFrameworkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFrameworkComponent.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UGameFrameworkComponent>()
	{
		return UGameFrameworkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFrameworkComponent);
	UGameFrameworkComponent::~UGameFrameworkComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFrameworkComponent, UGameFrameworkComponent::StaticClass, TEXT("UGameFrameworkComponent"), &Z_Registration_Info_UClass_UGameFrameworkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFrameworkComponent), 4064005791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponent_h_1225233733(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
