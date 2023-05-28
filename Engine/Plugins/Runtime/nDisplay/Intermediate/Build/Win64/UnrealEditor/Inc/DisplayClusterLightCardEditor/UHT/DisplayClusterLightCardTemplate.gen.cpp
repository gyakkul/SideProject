// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LightCardTemplates/DisplayClusterLightCardTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLightCardTemplate() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardTemplate();
	DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLightCardTemplate_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorTemplate();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLightCardEditor();
// End Cross Module References
	void UDisplayClusterLightCardTemplate::StaticRegisterNativesUDisplayClusterLightCardTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLightCardTemplate);
	UClass* Z_Construct_UClass_UDisplayClusterLightCardTemplate_NoRegister()
	{
		return UDisplayClusterLightCardTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightCardActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterStageActorTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A template asset to store appearance settings from Light Card actors.\n */" },
		{ "IncludePath", "LightCardTemplates/DisplayClusterLightCardTemplate.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/LightCardTemplates/DisplayClusterLightCardTemplate.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A template asset to store appearance settings from Light Card actors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::NewProp_LightCardActor_MetaData[] = {
		{ "Category", "Template" },
		{ "Comment", "/** The instanced template object containing user settings for the light card. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LightCardTemplates/DisplayClusterLightCardTemplate.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The instanced template object containing user settings for the light card." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::NewProp_LightCardActor = { "LightCardActor", nullptr, (EPropertyFlags)0x00160000020a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLightCardTemplate, LightCardActor), Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::NewProp_LightCardActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::NewProp_LightCardActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::NewProp_LightCardActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLightCardTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::ClassParams = {
		&UDisplayClusterLightCardTemplate::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::PropPointers),
		0,
		0x008006A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLightCardTemplate()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLightCardTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLightCardTemplate.OuterSingleton, Z_Construct_UClass_UDisplayClusterLightCardTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLightCardTemplate.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLIGHTCARDEDITOR_API UClass* StaticClass<UDisplayClusterLightCardTemplate>()
	{
		return UDisplayClusterLightCardTemplate::StaticClass();
	}
	UDisplayClusterLightCardTemplate::UDisplayClusterLightCardTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLightCardTemplate);
	UDisplayClusterLightCardTemplate::~UDisplayClusterLightCardTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_LightCardTemplates_DisplayClusterLightCardTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_LightCardTemplates_DisplayClusterLightCardTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLightCardTemplate, UDisplayClusterLightCardTemplate::StaticClass, TEXT("UDisplayClusterLightCardTemplate"), &Z_Registration_Info_UClass_UDisplayClusterLightCardTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLightCardTemplate), 2825293383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_LightCardTemplates_DisplayClusterLightCardTemplate_h_3798500374(TEXT("/Script/DisplayClusterLightCardEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_LightCardTemplates_DisplayClusterLightCardTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterLightCardEditor_Private_LightCardTemplates_DisplayClusterLightCardTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
