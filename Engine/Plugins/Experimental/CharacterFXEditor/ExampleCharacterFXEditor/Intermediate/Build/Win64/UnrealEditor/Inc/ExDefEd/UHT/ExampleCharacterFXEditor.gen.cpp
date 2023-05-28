// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExampleCharacterFXEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleCharacterFXEditor() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditor();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditor();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExampleCharacterFXEditor();
// End Cross Module References
	void UExampleCharacterFXEditor::StaticRegisterNativesUExampleCharacterFXEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleCharacterFXEditor);
	UClass* Z_Construct_UClass_UExampleCharacterFXEditor_NoRegister()
	{
		return UExampleCharacterFXEditor::StaticClass();
	}
	struct Z_Construct_UClass_UExampleCharacterFXEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleCharacterFXEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_ExampleCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleCharacterFXEditor.h" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleCharacterFXEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleCharacterFXEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleCharacterFXEditor_Statics::ClassParams = {
		&UExampleCharacterFXEditor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleCharacterFXEditor()
	{
		if (!Z_Registration_Info_UClass_UExampleCharacterFXEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleCharacterFXEditor.OuterSingleton, Z_Construct_UClass_UExampleCharacterFXEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleCharacterFXEditor.OuterSingleton;
	}
	template<> EXAMPLECHARACTERFXEDITOR_API UClass* StaticClass<UExampleCharacterFXEditor>()
	{
		return UExampleCharacterFXEditor::StaticClass();
	}
	UExampleCharacterFXEditor::UExampleCharacterFXEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleCharacterFXEditor);
	UExampleCharacterFXEditor::~UExampleCharacterFXEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleCharacterFXEditor, UExampleCharacterFXEditor::StaticClass, TEXT("UExampleCharacterFXEditor"), &Z_Registration_Info_UClass_UExampleCharacterFXEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleCharacterFXEditor), 3038876765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditor_h_3683073353(TEXT("/Script/ExampleCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
