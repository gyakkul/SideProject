// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnComponent() {}
// Cross Module References
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	void UPawnComponent::StaticRegisterNativesUPawnComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnComponent);
	UClass* Z_Construct_UClass_UPawnComponent_NoRegister()
	{
		return UPawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PawnComponent is an actor component made for APawn and receives pawn events.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PawnComponent.h" },
		{ "ModuleRelativePath", "Public/Components/PawnComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "PawnComponent is an actor component made for APawn and receives pawn events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnComponent_Statics::ClassParams = {
		&UPawnComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnComponent()
	{
		if (!Z_Registration_Info_UClass_UPawnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnComponent.OuterSingleton, Z_Construct_UClass_UPawnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnComponent.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UPawnComponent>()
	{
		return UPawnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnComponent);
	UPawnComponent::~UPawnComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnComponent, UPawnComponent::StaticClass, TEXT("UPawnComponent"), &Z_Registration_Info_UClass_UPawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnComponent), 697276120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_1684082241(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_PawnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
