// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleToolsEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleToolsEditorMode() {}
// Cross Module References
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_USampleToolsEditorMode();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_USampleToolsEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_SampleToolsEditorMode();
// End Cross Module References
	void USampleToolsEditorMode::StaticRegisterNativesUSampleToolsEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USampleToolsEditorMode);
	UClass* Z_Construct_UClass_USampleToolsEditorMode_NoRegister()
	{
		return USampleToolsEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_USampleToolsEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USampleToolsEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USampleToolsEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which \n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
		{ "IncludePath", "SampleToolsEditorMode.h" },
		{ "ModuleRelativePath", "Public/SampleToolsEditorMode.h" },
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USampleToolsEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USampleToolsEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USampleToolsEditorMode_Statics::ClassParams = {
		&USampleToolsEditorMode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USampleToolsEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USampleToolsEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USampleToolsEditorMode()
	{
		if (!Z_Registration_Info_UClass_USampleToolsEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USampleToolsEditorMode.OuterSingleton, Z_Construct_UClass_USampleToolsEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USampleToolsEditorMode.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<USampleToolsEditorMode>()
	{
		return USampleToolsEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USampleToolsEditorMode);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Public_SampleToolsEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Public_SampleToolsEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USampleToolsEditorMode, USampleToolsEditorMode::StaticClass, TEXT("USampleToolsEditorMode"), &Z_Registration_Info_UClass_USampleToolsEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USampleToolsEditorMode), 2728979292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Public_SampleToolsEditorMode_h_3178598255(TEXT("/Script/SampleToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Public_SampleToolsEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Public_SampleToolsEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
