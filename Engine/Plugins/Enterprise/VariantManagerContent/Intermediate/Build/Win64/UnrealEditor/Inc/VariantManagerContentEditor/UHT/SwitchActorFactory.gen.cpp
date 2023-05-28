// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContentEditor();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_USwitchActorFactory();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_USwitchActorFactory_NoRegister();
// End Cross Module References
	void USwitchActorFactory::StaticRegisterNativesUSwitchActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwitchActorFactory);
	UClass* Z_Construct_UClass_USwitchActorFactory_NoRegister()
	{
		return USwitchActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_USwitchActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContentEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchActorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// The only purpose of this class is to trigger a slightly different code path within\n// FLevelEditorViewportClient::TryPlacingActorFromObject when dragging and dropping a SwitchActor into the\n// viewport, so that the SwitchActor labels get sanitized by FActorLabelUtilities::SetActorLabelUnique\n// and don't repeatedly increment\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SwitchActorFactory.h" },
		{ "ModuleRelativePath", "Public/SwitchActorFactory.h" },
		{ "ToolTip", "The only purpose of this class is to trigger a slightly different code path within\nFLevelEditorViewportClient::TryPlacingActorFromObject when dragging and dropping a SwitchActor into the\nviewport, so that the SwitchActor labels get sanitized by FActorLabelUtilities::SetActorLabelUnique\nand don't repeatedly increment" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwitchActorFactory_Statics::ClassParams = {
		&USwitchActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_USwitchActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchActorFactory()
	{
		if (!Z_Registration_Info_UClass_USwitchActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwitchActorFactory.OuterSingleton, Z_Construct_UClass_USwitchActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwitchActorFactory.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<USwitchActorFactory>()
	{
		return USwitchActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchActorFactory);
	USwitchActorFactory::~USwitchActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwitchActorFactory, USwitchActorFactory::StaticClass, TEXT("USwitchActorFactory"), &Z_Registration_Info_UClass_USwitchActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwitchActorFactory), 1310971501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_2467798550(TEXT("/Script/VariantManagerContentEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_SwitchActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
