// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorConfigSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorConfigSubsystem() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigSubsystem();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorConfig();
// End Cross Module References
	void UEditorConfigSubsystem::StaticRegisterNativesUEditorConfigSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorConfigSubsystem);
	UClass* Z_Construct_UClass_UEditorConfigSubsystem_NoRegister()
	{
		return UEditorConfigSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorConfigSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorConfigSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorConfigSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorConfigSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorConfigSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorConfigSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorConfigSubsystem_Statics::ClassParams = {
		&UEditorConfigSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorConfigSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorConfigSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorConfigSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorConfigSubsystem.OuterSingleton, Z_Construct_UClass_UEditorConfigSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorConfigSubsystem.OuterSingleton;
	}
	template<> EDITORCONFIG_API UClass* StaticClass<UEditorConfigSubsystem>()
	{
		return UEditorConfigSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorConfigSubsystem);
	UEditorConfigSubsystem::~UEditorConfigSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorConfigSubsystem, UEditorConfigSubsystem::StaticClass, TEXT("UEditorConfigSubsystem"), &Z_Registration_Info_UClass_UEditorConfigSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorConfigSubsystem), 1691128551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_3235224652(TEXT("/Script/EditorConfig"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
