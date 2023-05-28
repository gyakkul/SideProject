// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LightEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULightEditorSubsystem();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULightEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelEditor();
// End Cross Module References
	void ULightEditorSubsystem::StaticRegisterNativesULightEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightEditorSubsystem);
	UClass* Z_Construct_UClass_ULightEditorSubsystem_NoRegister()
	{
		return ULightEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULightEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightEditorSubsystem.h" },
		{ "ModuleRelativePath", "Private/LightEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightEditorSubsystem_Statics::ClassParams = {
		&ULightEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULightEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULightEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightEditorSubsystem.OuterSingleton, Z_Construct_UClass_ULightEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightEditorSubsystem.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULightEditorSubsystem>()
	{
		return ULightEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightEditorSubsystem);
	ULightEditorSubsystem::~ULightEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightEditorSubsystem, ULightEditorSubsystem::StaticClass, TEXT("ULightEditorSubsystem"), &Z_Registration_Info_UClass_ULightEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightEditorSubsystem), 3096500889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_2093515942(TEXT("/Script/LevelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
