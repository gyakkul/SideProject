// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/EditorScriptableClickDragTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorScriptableClickDragTool() {}
// Cross Module References
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableClickDragTool();
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorScriptableClickDragTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableClickDragTool();
	UPackage* Z_Construct_UPackage__Script_EditorScriptableToolsFramework();
// End Cross Module References
	void UEditorScriptableClickDragTool::StaticRegisterNativesUEditorScriptableClickDragTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorScriptableClickDragTool);
	UClass* Z_Construct_UClass_UEditorScriptableClickDragTool_NoRegister()
	{
		return UEditorScriptableClickDragTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditorScriptableClickDragTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptableClickDragTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptableToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Editor-Only variant of UScriptableClickDragTool, which gives access to Editor-Only BP functions\n */" },
		{ "IncludePath", "BaseTools/EditorScriptableClickDragTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseTools/EditorScriptableClickDragTool.h" },
		{ "ToolTip", "Editor-Only variant of UScriptableClickDragTool, which gives access to Editor-Only BP functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorScriptableClickDragTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::ClassParams = {
		&UEditorScriptableClickDragTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorScriptableClickDragTool()
	{
		if (!Z_Registration_Info_UClass_UEditorScriptableClickDragTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorScriptableClickDragTool.OuterSingleton, Z_Construct_UClass_UEditorScriptableClickDragTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorScriptableClickDragTool.OuterSingleton;
	}
	template<> EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UEditorScriptableClickDragTool>()
	{
		return UEditorScriptableClickDragTool::StaticClass();
	}
	UEditorScriptableClickDragTool::UEditorScriptableClickDragTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorScriptableClickDragTool);
	UEditorScriptableClickDragTool::~UEditorScriptableClickDragTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableClickDragTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableClickDragTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorScriptableClickDragTool, UEditorScriptableClickDragTool::StaticClass, TEXT("UEditorScriptableClickDragTool"), &Z_Registration_Info_UClass_UEditorScriptableClickDragTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorScriptableClickDragTool), 1594951753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableClickDragTool_h_2248051443(TEXT("/Script/EditorScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableClickDragTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_EditorScriptableToolsFramework_Public_BaseTools_EditorScriptableClickDragTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
