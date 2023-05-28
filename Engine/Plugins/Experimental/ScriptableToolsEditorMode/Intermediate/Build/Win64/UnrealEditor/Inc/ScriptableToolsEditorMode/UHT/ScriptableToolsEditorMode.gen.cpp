// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptableToolsEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableToolsEditorMode() {}
// Cross Module References
	EDITORSCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolSet_NoRegister();
	SCRIPTABLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UScriptableToolsEditorMode();
	SCRIPTABLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UScriptableToolsEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UPackage* Z_Construct_UPackage__Script_ScriptableToolsEditorMode();
// End Cross Module References
	void UScriptableToolsEditorMode::StaticRegisterNativesUScriptableToolsEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableToolsEditorMode);
	UClass* Z_Construct_UClass_UScriptableToolsEditorMode_NoRegister()
	{
		return UScriptableToolsEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableToolsEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptableTools_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptableTools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableToolsEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableToolsEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScriptableToolsEditorMode.h" },
		{ "ModuleRelativePath", "Public/ScriptableToolsEditorMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableToolsEditorMode_Statics::NewProp_ScriptableTools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScriptableToolsEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableToolsEditorMode_Statics::NewProp_ScriptableTools = { "ScriptableTools", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableToolsEditorMode, ScriptableTools), Z_Construct_UClass_UScriptableToolSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableToolsEditorMode_Statics::NewProp_ScriptableTools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolsEditorMode_Statics::NewProp_ScriptableTools_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptableToolsEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableToolsEditorMode_Statics::NewProp_ScriptableTools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableToolsEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableToolsEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableToolsEditorMode_Statics::ClassParams = {
		&UScriptableToolsEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScriptableToolsEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolsEditorMode_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableToolsEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolsEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableToolsEditorMode()
	{
		if (!Z_Registration_Info_UClass_UScriptableToolsEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableToolsEditorMode.OuterSingleton, Z_Construct_UClass_UScriptableToolsEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableToolsEditorMode.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSEDITORMODE_API UClass* StaticClass<UScriptableToolsEditorMode>()
	{
		return UScriptableToolsEditorMode::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptableToolsEditorMode, UScriptableToolsEditorMode::StaticClass, TEXT("UScriptableToolsEditorMode"), &Z_Registration_Info_UClass_UScriptableToolsEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableToolsEditorMode), 133560830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorMode_h_4260759061(TEXT("/Script/ScriptableToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
