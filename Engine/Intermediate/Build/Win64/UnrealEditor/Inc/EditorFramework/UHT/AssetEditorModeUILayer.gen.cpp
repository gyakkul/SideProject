// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Toolkits/AssetEditorModeUILayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorModeUILayer() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	void UAssetEditorUISubsystem::StaticRegisterNativesUAssetEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetEditorUISubsystem);
	UClass* Z_Construct_UClass_UAssetEditorUISubsystem_NoRegister()
	{
		return UAssetEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkits/AssetEditorModeUILayer.h" },
		{ "ModuleRelativePath", "Public/Toolkits/AssetEditorModeUILayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetEditorUISubsystem_Statics::ClassParams = {
		&UAssetEditorUISubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UAssetEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UAssetEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetEditorUISubsystem.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UAssetEditorUISubsystem>()
	{
		return UAssetEditorUISubsystem::StaticClass();
	}
	UAssetEditorUISubsystem::UAssetEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetEditorUISubsystem);
	UAssetEditorUISubsystem::~UAssetEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetEditorUISubsystem, UAssetEditorUISubsystem::StaticClass, TEXT("UAssetEditorUISubsystem"), &Z_Registration_Info_UClass_UAssetEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetEditorUISubsystem), 2351872941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_3199578037(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Toolkits_AssetEditorModeUILayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
