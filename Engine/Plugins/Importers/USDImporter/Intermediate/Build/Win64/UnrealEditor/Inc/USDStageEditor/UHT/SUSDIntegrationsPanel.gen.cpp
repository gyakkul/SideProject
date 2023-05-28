// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/SUSDIntegrationsPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSUSDIntegrationsPanel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDStageEditor();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_NoRegister();
// End Cross Module References
	void UUsdIntegrationsPanelPropertyDummy::StaticRegisterNativesUUsdIntegrationsPanelPropertyDummy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdIntegrationsPanelPropertyDummy);
	UClass* Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_NoRegister()
	{
		return UUsdIntegrationsPanelPropertyDummy::StaticClass();
	}
	struct Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBPProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimBPProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRigProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// We need an actual UObject and UPROPERTY to use the property editor module and generate one of the\n// standard object picker widgets, so we'll be using the CDO of this class to do that\n" },
		{ "IncludePath", "Widgets/SUSDIntegrationsPanel.h" },
		{ "ModuleRelativePath", "Private/Widgets/SUSDIntegrationsPanel.h" },
		{ "ToolTip", "We need an actual UObject and UPROPERTY to use the property editor module and generate one of the\nstandard object picker widgets, so we'll be using the CDO of this class to do that" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_AnimBPProperty_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimBlueprint" },
		{ "Category", "Dummy" },
		{ "Comment", "// Ideally these would be FSoftObjectPaths, but FPropertyEditorModule doesn't support generating\n// widgets for those properties yet\n" },
		{ "ModuleRelativePath", "Private/Widgets/SUSDIntegrationsPanel.h" },
		{ "ToolTip", "Ideally these would be FSoftObjectPaths, but FPropertyEditorModule doesn't support generating\nwidgets for those properties yet" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_AnimBPProperty = { "AnimBPProperty", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdIntegrationsPanelPropertyDummy, AnimBPProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_AnimBPProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_AnimBPProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_ControlRigProperty_MetaData[] = {
		{ "AllowedClasses", "/Script/ControlRigDeveloper.ControlRigBlueprint" },
		{ "Category", "Dummy" },
		{ "ModuleRelativePath", "Private/Widgets/SUSDIntegrationsPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_ControlRigProperty = { "ControlRigProperty", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdIntegrationsPanelPropertyDummy, ControlRigProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_ControlRigProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_ControlRigProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_AnimBPProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::NewProp_ControlRigProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdIntegrationsPanelPropertyDummy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::ClassParams = {
		&UUsdIntegrationsPanelPropertyDummy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::PropPointers),
		0,
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy()
	{
		if (!Z_Registration_Info_UClass_UUsdIntegrationsPanelPropertyDummy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdIntegrationsPanelPropertyDummy.OuterSingleton, Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdIntegrationsPanelPropertyDummy.OuterSingleton;
	}
	template<> USDSTAGEEDITOR_API UClass* StaticClass<UUsdIntegrationsPanelPropertyDummy>()
	{
		return UUsdIntegrationsPanelPropertyDummy::StaticClass();
	}
	UUsdIntegrationsPanelPropertyDummy::UUsdIntegrationsPanelPropertyDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdIntegrationsPanelPropertyDummy);
	UUsdIntegrationsPanelPropertyDummy::~UUsdIntegrationsPanelPropertyDummy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_Widgets_SUSDIntegrationsPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_Widgets_SUSDIntegrationsPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdIntegrationsPanelPropertyDummy, UUsdIntegrationsPanelPropertyDummy::StaticClass, TEXT("UUsdIntegrationsPanelPropertyDummy"), &Z_Registration_Info_UClass_UUsdIntegrationsPanelPropertyDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdIntegrationsPanelPropertyDummy), 3781188177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_Widgets_SUSDIntegrationsPanel_h_1850234858(TEXT("/Script/USDStageEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_Widgets_SUSDIntegrationsPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_Widgets_SUSDIntegrationsPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
