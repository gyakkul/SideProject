// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PlayerStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateComponent() {}
// Cross Module References
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerStateComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerStateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	void UPlayerStateComponent::StaticRegisterNativesUPlayerStateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStateComponent);
	UClass* Z_Construct_UClass_UPlayerStateComponent_NoRegister()
	{
		return UPlayerStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PlayerStateComponent is an actor component made for APlayerState and receives PlayerState events.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PlayerStateComponent.h" },
		{ "ModuleRelativePath", "Public/Components/PlayerStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "PlayerStateComponent is an actor component made for APlayerState and receives PlayerState events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateComponent_Statics::ClassParams = {
		&UPlayerStateComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStateComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStateComponent.OuterSingleton, Z_Construct_UClass_UPlayerStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerStateComponent.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UPlayerStateComponent>()
	{
		return UPlayerStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateComponent);
	UPlayerStateComponent::~UPlayerStateComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStateComponent, UPlayerStateComponent::StaticClass, TEXT("UPlayerStateComponent"), &Z_Registration_Info_UClass_UPlayerStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStateComponent), 1747260575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_749547508(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PlayerStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
