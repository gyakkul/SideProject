// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/EditorScriptableSingleClickTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorScriptableSingleClickTool() {}
// Cross Module References
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableSingleClickTool();
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableSingleClickTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableSingleClickTool();
	UPackage* Z_Construct_UPackage__Script_EditorScriptableToolsFramework();
// End Cross Module References
	void UEditorScriptableSingleClickTool::StaticRegisterNativesUEditorScriptableSingleClickTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorScriptableSingleClickTool);
	UClass* Z_Construct_UClass_UEditorScriptableSingleClickTool_NoRegister()
	{
		return UEditorScriptableSingleClickTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptableSingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptableToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Editor-Only variant of UScriptableSingleClickTool, which gives access to Editor-Only BP functions\n */" },
		{ "IncludePath", "BaseTools/EditorScriptableSingleClickTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseTools/EditorScriptableSingleClickTool.h" },
		{ "ToolTip", "Editor-Only variant of UScriptableSingleClickTool, which gives access to Editor-Only BP functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorScriptableSingleClickTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::ClassParams = {
		&UEditorScriptableSingleClickTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorScriptableSingleClickTool()
	{
		if (!Z_Registration_Info_UClass_UEditorScriptableSingleClickTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorScriptableSingleClickTool.OuterSingleton, Z_Construct_UClass_UEditorScriptableSingleClickTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorScriptableSingleClickTool.OuterSingleton;
	}
	template<> EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UEditorScriptableSingleClickTool>()
	{
		return UEditorScriptableSingleClickTool::StaticClass();
	}
	UEditorScriptableSingleClickTool::UEditorScriptableSingleClickTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorScriptableSingleClickTool);
	UEditorScriptableSingleClickTool::~UEditorScriptableSingleClickTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableSingleClickTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableSingleClickTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorScriptableSingleClickTool, UEditorScriptableSingleClickTool::StaticClass, TEXT("UEditorScriptableSingleClickTool"), &Z_Registration_Info_UClass_UEditorScriptableSingleClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorScriptableSingleClickTool), 2585644447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableSingleClickTool_h_3015365160(TEXT("/Script/EditorScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableSingleClickTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableSingleClickTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
