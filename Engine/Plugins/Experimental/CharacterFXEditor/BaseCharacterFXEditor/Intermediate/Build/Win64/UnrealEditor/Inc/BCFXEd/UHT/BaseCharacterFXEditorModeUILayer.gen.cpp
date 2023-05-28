// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseCharacterFXEditorModeUILayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterFXEditorModeUILayer() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem();
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_NoRegister();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	UPackage* Z_Construct_UPackage__Script_BaseCharacterFXEditor();
// End Cross Module References
	void UBaseCharacterFXEditorUISubsystem::StaticRegisterNativesUBaseCharacterFXEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterFXEditorUISubsystem);
	UClass* Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_NoRegister()
	{
		return UBaseCharacterFXEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BaseCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Interchange layer to manage built in tab locations within the editor's layout. \n */" },
		{ "IncludePath", "BaseCharacterFXEditorModeUILayer.h" },
		{ "ModuleRelativePath", "Public/BaseCharacterFXEditorModeUILayer.h" },
		{ "ToolTip", "Interchange layer to manage built in tab locations within the editor's layout." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterFXEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::ClassParams = {
		&UBaseCharacterFXEditorUISubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UBaseCharacterFXEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterFXEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCharacterFXEditorUISubsystem.OuterSingleton;
	}
	template<> BASECHARACTERFXEDITOR_API UClass* StaticClass<UBaseCharacterFXEditorUISubsystem>()
	{
		return UBaseCharacterFXEditorUISubsystem::StaticClass();
	}
	UBaseCharacterFXEditorUISubsystem::UBaseCharacterFXEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterFXEditorUISubsystem);
	UBaseCharacterFXEditorUISubsystem::~UBaseCharacterFXEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorModeUILayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorModeUILayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem, UBaseCharacterFXEditorUISubsystem::StaticClass, TEXT("UBaseCharacterFXEditorUISubsystem"), &Z_Registration_Info_UClass_UBaseCharacterFXEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterFXEditorUISubsystem), 855747115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorModeUILayer_h_2262088393(TEXT("/Script/BaseCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorModeUILayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditorModeUILayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
