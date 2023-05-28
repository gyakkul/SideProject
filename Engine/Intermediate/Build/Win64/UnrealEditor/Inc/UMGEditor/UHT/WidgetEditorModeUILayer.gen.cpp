// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ToolPalette/WidgetEditorModeUILayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetEditorModeUILayer() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetEditorModeUISubsystem();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetEditorModeUISubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetEditorModeUISubsystem::StaticRegisterNativesUWidgetEditorModeUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetEditorModeUISubsystem);
	UClass* Z_Construct_UClass_UWidgetEditorModeUISubsystem_NoRegister()
	{
		return UWidgetEditorModeUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolPalette/WidgetEditorModeUILayer.h" },
		{ "ModuleRelativePath", "Private/ToolPalette/WidgetEditorModeUILayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetEditorModeUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::ClassParams = {
		&UWidgetEditorModeUISubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetEditorModeUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UWidgetEditorModeUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetEditorModeUISubsystem.OuterSingleton, Z_Construct_UClass_UWidgetEditorModeUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetEditorModeUISubsystem.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetEditorModeUISubsystem>()
	{
		return UWidgetEditorModeUISubsystem::StaticClass();
	}
	UWidgetEditorModeUISubsystem::UWidgetEditorModeUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetEditorModeUISubsystem);
	UWidgetEditorModeUISubsystem::~UWidgetEditorModeUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetEditorModeUISubsystem, UWidgetEditorModeUISubsystem::StaticClass, TEXT("UWidgetEditorModeUISubsystem"), &Z_Registration_Info_UClass_UWidgetEditorModeUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetEditorModeUISubsystem), 829795312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_3475560255(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_ToolPalette_WidgetEditorModeUILayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
