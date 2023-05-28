// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorModeUILayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorModeUILayer() {}
// Cross Module References
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorUISubsystem();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_NoRegister();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UChaosClothAssetEditorUISubsystem::StaticRegisterNativesUChaosClothAssetEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetEditorUISubsystem);
	UClass* Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_NoRegister()
	{
		return UChaosClothAssetEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Interchange layer to manage built in tab locations within the editor's layout. **/" },
		{ "IncludePath", "ChaosClothAsset/ClothEditorModeUILayer.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorModeUILayer.h" },
		{ "ToolTip", "Interchange layer to manage built in tab locations within the editor's layout. *" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAssetEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::ClassParams = {
		&UChaosClothAssetEditorUISubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothAssetEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UChaosClothAssetEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetEditorUISubsystem.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UChaosClothAssetEditorUISubsystem>()
	{
		return UChaosClothAssetEditorUISubsystem::StaticClass();
	}
	UChaosClothAssetEditorUISubsystem::UChaosClothAssetEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetEditorUISubsystem);
	UChaosClothAssetEditorUISubsystem::~UChaosClothAssetEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorModeUILayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorModeUILayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetEditorUISubsystem, UChaosClothAssetEditorUISubsystem::StaticClass, TEXT("UChaosClothAssetEditorUISubsystem"), &Z_Registration_Info_UClass_UChaosClothAssetEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetEditorUISubsystem), 27463586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorModeUILayer_h_3305526624(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorModeUILayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorModeUILayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
