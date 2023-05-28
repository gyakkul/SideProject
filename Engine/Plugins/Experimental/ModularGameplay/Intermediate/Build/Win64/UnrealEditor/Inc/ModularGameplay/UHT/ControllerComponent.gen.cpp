// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerComponent() {}
// Cross Module References
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	void UControllerComponent::StaticRegisterNativesUControllerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControllerComponent);
	UClass* Z_Construct_UClass_UControllerComponent_NoRegister()
	{
		return UControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ControllerComponent is an actor component made for AController and receives controller events.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ControllerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ControllerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ControllerComponent is an actor component made for AController and receives controller events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControllerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControllerComponent_Statics::ClassParams = {
		&UControllerComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControllerComponent()
	{
		if (!Z_Registration_Info_UClass_UControllerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControllerComponent.OuterSingleton, Z_Construct_UClass_UControllerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControllerComponent.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UControllerComponent>()
	{
		return UControllerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControllerComponent);
	UControllerComponent::~UControllerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControllerComponent, UControllerComponent::StaticClass, TEXT("UControllerComponent"), &Z_Registration_Info_UClass_UControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControllerComponent), 4046663622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_843265702(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_ControllerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
