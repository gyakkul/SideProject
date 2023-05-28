// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExampleCharacterFXEditorUISubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleCharacterFXEditorUISubsystem() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem();
	EXAMPLECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExampleCharacterFXEditor();
// End Cross Module References
	void UExampleCharacterFXEditorUISubsystem::StaticRegisterNativesUExampleCharacterFXEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleCharacterFXEditorUISubsystem);
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_NoRegister()
	{
		return UExampleCharacterFXEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ExampleCharacterFXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleCharacterFXEditorUISubsystem.h" },
		{ "ModuleRelativePath", "Public/ExampleCharacterFXEditorUISubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleCharacterFXEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::ClassParams = {
		&UExampleCharacterFXEditorUISubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UExampleCharacterFXEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleCharacterFXEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleCharacterFXEditorUISubsystem.OuterSingleton;
	}
	template<> EXAMPLECHARACTERFXEDITOR_API UClass* StaticClass<UExampleCharacterFXEditorUISubsystem>()
	{
		return UExampleCharacterFXEditorUISubsystem::StaticClass();
	}
	UExampleCharacterFXEditorUISubsystem::UExampleCharacterFXEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleCharacterFXEditorUISubsystem);
	UExampleCharacterFXEditorUISubsystem::~UExampleCharacterFXEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorUISubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorUISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleCharacterFXEditorUISubsystem, UExampleCharacterFXEditorUISubsystem::StaticClass, TEXT("UExampleCharacterFXEditorUISubsystem"), &Z_Registration_Info_UClass_UExampleCharacterFXEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleCharacterFXEditorUISubsystem), 665469546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorUISubsystem_h_2020970166(TEXT("/Script/ExampleCharacterFXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CharacterFXEditor_ExampleCharacterFXEditor_Source_ExampleCharacterFXEditor_Public_ExampleCharacterFXEditorUISubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
