// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/CustomizableObjectEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorSettings();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectEditorSettings::StaticRegisterNativesUCustomizableObjectEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectEditorSettings);
	UClass* Z_Construct_UClass_UCustomizableObjectEditorSettings_NoRegister()
	{
		return UCustomizableObjectEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMutableCompileInEditor_MetaData[];
#endif
		static void NewProp_bDisableMutableCompileInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMutableCompileInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCompilation_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCompilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCompilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileObjectsSynchronously_MetaData[];
#endif
		static void NewProp_bCompileObjectsSynchronously_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileObjectsSynchronously;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileRootObjectsOnStartPIE_MetaData[];
#endif
		static void NewProp_bCompileRootObjectsOnStartPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileRootObjectsOnStartPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/CustomizableObjectEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor_MetaData[] = {
		{ "Category", "Compilation" },
		{ "Comment", "/** If true, Mutable won't compile any COs in the Editor. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectEditorSettings.h" },
		{ "ToolTip", "If true, Mutable won't compile any COs in the Editor." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor_SetBit(void* Obj)
	{
		((UCustomizableObjectEditorSettings*)Obj)->bDisableMutableCompileInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor = { "bDisableMutableCompileInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectEditorSettings), &Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation_MetaData[] = {
		{ "Category", "AutomaticCompilation" },
		{ "Comment", "/**\x09If true, Mutable will automatically compile, if needed, COs being used by Actors. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectEditorSettings.h" },
		{ "ToolTip", "If true, Mutable will automatically compile, if needed, COs being used by Actors." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation_SetBit(void* Obj)
	{
		((UCustomizableObjectEditorSettings*)Obj)->bEnableAutomaticCompilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation = { "bEnableAutomaticCompilation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectEditorSettings), &Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously_MetaData[] = {
		{ "Category", "AutomaticCompilation" },
		{ "Comment", "/**\x09If true, AutomaticCompilation will happen synchronously. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectEditorSettings.h" },
		{ "ToolTip", "If true, AutomaticCompilation will happen synchronously." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously_SetBit(void* Obj)
	{
		((UCustomizableObjectEditorSettings*)Obj)->bCompileObjectsSynchronously = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously = { "bCompileObjectsSynchronously", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectEditorSettings), &Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE_MetaData[] = {
		{ "Category", "AutomaticCompilation" },
		{ "Comment", "/** If true, Root Customizable Objects in memory will be compiled, if needed, before starting a PIE session. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectEditorSettings.h" },
		{ "ToolTip", "If true, Root Customizable Objects in memory will be compiled, if needed, before starting a PIE session." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE_SetBit(void* Obj)
	{
		((UCustomizableObjectEditorSettings*)Obj)->bCompileRootObjectsOnStartPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE = { "bCompileRootObjectsOnStartPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectEditorSettings), &Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bDisableMutableCompileInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bEnableAutomaticCompilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileObjectsSynchronously,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::NewProp_bCompileRootObjectsOnStartPIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::ClassParams = {
		&UCustomizableObjectEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectEditorSettings.OuterSingleton, Z_Construct_UClass_UCustomizableObjectEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectEditorSettings.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectEditorSettings>()
	{
		return UCustomizableObjectEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectEditorSettings);
	UCustomizableObjectEditorSettings::~UCustomizableObjectEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectEditorSettings, UCustomizableObjectEditorSettings::StaticClass, TEXT("UCustomizableObjectEditorSettings"), &Z_Registration_Info_UClass_UCustomizableObjectEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectEditorSettings), 1477326654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectEditorSettings_h_2598479037(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
