// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageActor/DisplayClusterStageActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterStageActorTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorTemplate();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLightCardExtender();
// End Cross Module References
	void UDisplayClusterStageActorTemplate::StaticRegisterNativesUDisplayClusterStageActorTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterStageActorTemplate);
	UClass* Z_Construct_UClass_UDisplayClusterStageActorTemplate_NoRegister()
	{
		return UDisplayClusterStageActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorite_MetaData[];
#endif
		static void NewProp_bIsFavorite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardExtender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StageActor/DisplayClusterStageActorTemplate.h" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterStageActorTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite_MetaData[] = {
		{ "Comment", "/** If the user has marked this a favorite template. */" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterStageActorTemplate.h" },
		{ "ToolTip", "If the user has marked this a favorite template." },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite_SetBit(void* Obj)
	{
		((UDisplayClusterStageActorTemplate*)Obj)->bIsFavorite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite = { "bIsFavorite", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterStageActorTemplate), &Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::NewProp_bIsFavorite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterStageActorTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::ClassParams = {
		&UDisplayClusterStageActorTemplate::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::PropPointers),
		0,
		0x001004A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterStageActorTemplate()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterStageActorTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterStageActorTemplate.OuterSingleton, Z_Construct_UClass_UDisplayClusterStageActorTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterStageActorTemplate.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* StaticClass<UDisplayClusterStageActorTemplate>()
	{
		return UDisplayClusterStageActorTemplate::StaticClass();
	}
	UDisplayClusterStageActorTemplate::UDisplayClusterStageActorTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterStageActorTemplate);
	UDisplayClusterStageActorTemplate::~UDisplayClusterStageActorTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterStageActorTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterStageActorTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterStageActorTemplate, UDisplayClusterStageActorTemplate::StaticClass, TEXT("UDisplayClusterStageActorTemplate"), &Z_Registration_Info_UClass_UDisplayClusterStageActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterStageActorTemplate), 3542989826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterStageActorTemplate_h_177994845(TEXT("/Script/DisplayClusterLightCardExtender"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterStageActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterStageActorTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
