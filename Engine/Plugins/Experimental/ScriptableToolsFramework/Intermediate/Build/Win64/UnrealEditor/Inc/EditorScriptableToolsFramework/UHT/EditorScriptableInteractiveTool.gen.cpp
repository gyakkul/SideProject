// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorScriptableInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorScriptableInteractiveTool() {}
// Cross Module References
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableInteractiveTool();
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableInteractiveTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool();
	UPackage* Z_Construct_UPackage__Script_EditorScriptableToolsFramework();
// End Cross Module References
	void UEditorScriptableInteractiveTool::StaticRegisterNativesUEditorScriptableInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorScriptableInteractiveTool);
	UClass* Z_Construct_UClass_UEditorScriptableInteractiveTool_NoRegister()
	{
		return UEditorScriptableInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptableInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptableToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Editor-Only variant of UScriptableInteractiveTool, which gives access to Editor-Only BP functions\n */" },
		{ "IncludePath", "EditorScriptableInteractiveTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorScriptableInteractiveTool.h" },
		{ "ToolTip", "Editor-Only variant of UScriptableInteractiveTool, which gives access to Editor-Only BP functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorScriptableInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::ClassParams = {
		&UEditorScriptableInteractiveTool::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorScriptableInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UEditorScriptableInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorScriptableInteractiveTool.OuterSingleton, Z_Construct_UClass_UEditorScriptableInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorScriptableInteractiveTool.OuterSingleton;
	}
	template<> EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UEditorScriptableInteractiveTool>()
	{
		return UEditorScriptableInteractiveTool::StaticClass();
	}
	UEditorScriptableInteractiveTool::UEditorScriptableInteractiveTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorScriptableInteractiveTool);
	UEditorScriptableInteractiveTool::~UEditorScriptableInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_EditorScriptableInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_EditorScriptableInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorScriptableInteractiveTool, UEditorScriptableInteractiveTool::StaticClass, TEXT("UEditorScriptableInteractiveTool"), &Z_Registration_Info_UClass_UEditorScriptableInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorScriptableInteractiveTool), 10740455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_EditorScriptableInteractiveTool_h_2212192859(TEXT("/Script/EditorScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_EditorScriptableInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_EditorScriptableInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
