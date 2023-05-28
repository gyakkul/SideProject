// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorTutorialSettings.h"
#include "EditorTutorial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorialSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialSettings();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialSettings_NoRegister();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContext();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialContext;
class UScriptStruct* FTutorialContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContext, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContext"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialContext.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContext>()
{
	return FTutorialContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrowserFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BrowserFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttractTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttractTutorial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchTutorial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Named context that corresponds to a particular tutorial */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Named context that corresponds to a particular tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** The context that this tutorial is used in */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The context that this tutorial is used in" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContext, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** The filter string to apply to the tutorials browser when launched from this context */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The filter string to apply to the tutorials browser when launched from this context" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter = { "BrowserFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContext, BrowserFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** The tutorial to use in this context to let the user know there is a tutorial available */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The tutorial to use in this context to let the user know there is a tutorial available" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial = { "AttractTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContext, AttractTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** The tutorial to use in this context when the user chooses to launch */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The tutorial to use in this context when the user chooses to launch" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial = { "LaunchTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContext, LaunchTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContext",
		sizeof(FTutorialContext),
		alignof(FTutorialContext),
		Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContext()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialContext.InnerSingleton, Z_Construct_UScriptStruct_FTutorialContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialContext.InnerSingleton;
	}
	void UEditorTutorialSettings::StaticRegisterNativesUEditorTutorialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTutorialSettings);
	UClass* Z_Construct_UClass_UEditorTutorialSettings_NoRegister()
	{
		return UEditorTutorialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAllTutorialAlerts_MetaData[];
#endif
		static void NewProp_bDisableAllTutorialAlerts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAllTutorialAlerts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupTutorial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TutorialContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TutorialContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TutorialContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor-wide tutorial settings */" },
		{ "IncludePath", "EditorTutorialSettings.h" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Editor-wide tutorial settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Disable the pulsing alert that indicates a new tutorial is available. */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Disable the pulsing alert that indicates a new tutorial is available." },
	};
#endif
	void Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_SetBit(void* Obj)
	{
		((UEditorTutorialSettings*)Obj)->bDisableAllTutorialAlerts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts = { "bDisableAllTutorialAlerts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorTutorialSettings), &Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialCategory, METADATA_PARAMS(nullptr, 0) }; // 3105601252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Categories for tutorials */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Categories for tutorials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorialSettings, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData)) }; // 3105601252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Tutorial to start on Editor startup */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Tutorial to start on Editor startup" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial = { "StartupTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorialSettings, StartupTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_Inner = { "TutorialContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialContext, METADATA_PARAMS(nullptr, 0) }; // 4029160163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "Comment", "/** Tutorials used in various contexts - e.g. the various asset editors */" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Tutorials used in various contexts - e.g. the various asset editors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts = { "TutorialContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorialSettings, TutorialContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData)) }; // 4029160163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorialSettings_Statics::ClassParams = {
		&UEditorTutorialSettings::StaticClass,
		"GuidedTutorials",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorialSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorTutorialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTutorialSettings.OuterSingleton, Z_Construct_UClass_UEditorTutorialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTutorialSettings.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorialSettings>()
	{
		return UEditorTutorialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorialSettings);
	UEditorTutorialSettings::~UEditorTutorialSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ScriptStructInfo[] = {
		{ FTutorialContext::StaticStruct, Z_Construct_UScriptStruct_FTutorialContext_Statics::NewStructOps, TEXT("TutorialContext"), &Z_Registration_Info_UScriptStruct_TutorialContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialContext), 4029160163U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTutorialSettings, UEditorTutorialSettings::StaticClass, TEXT("UEditorTutorialSettings"), &Z_Registration_Info_UClass_UEditorTutorialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTutorialSettings), 2969093065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_2864158660(TEXT("/Script/IntroTutorials"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
