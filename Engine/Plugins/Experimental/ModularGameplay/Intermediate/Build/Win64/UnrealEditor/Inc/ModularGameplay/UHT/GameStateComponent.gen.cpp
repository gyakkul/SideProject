// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GameStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateComponent() {}
// Cross Module References
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	void UGameStateComponent::StaticRegisterNativesUGameStateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStateComponent);
	UClass* Z_Construct_UClass_UGameStateComponent_NoRegister()
	{
		return UGameStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameStateComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameStateComponent is an actor component made for AGameStateBase and receives GameState events.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GameStateComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GameStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "GameStateComponent is an actor component made for AGameStateBase and receives GameState events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStateComponent_Statics::ClassParams = {
		&UGameStateComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameStateComponent()
	{
		if (!Z_Registration_Info_UClass_UGameStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStateComponent.OuterSingleton, Z_Construct_UClass_UGameStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameStateComponent.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UGameStateComponent>()
	{
		return UGameStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStateComponent);
	UGameStateComponent::~UGameStateComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStateComponent, UGameStateComponent::StaticClass, TEXT("UGameStateComponent"), &Z_Registration_Info_UClass_UGameStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStateComponent), 3257604369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_3106447655(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
