// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureAction::StaticRegisterNativesUGameFeatureAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction);
	UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister()
	{
		return UGameFeatureAction::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents an action to be taken when a game feature is activated */" },
		{ "IncludePath", "GameFeatureAction.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction.h" },
		{ "ToolTip", "Represents an action to be taken when a game feature is activated" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_Statics::ClassParams = {
		&UGameFeatureAction::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction>()
	{
		return UGameFeatureAction::StaticClass();
	}
	UGameFeatureAction::UGameFeatureAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction);
	UGameFeatureAction::~UGameFeatureAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction, UGameFeatureAction::StaticClass, TEXT("UGameFeatureAction"), &Z_Registration_Info_UClass_UGameFeatureAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction), 1034073213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_796529589(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
