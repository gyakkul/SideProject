// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SLevelEditorToolBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLevelEditorToolBox() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorUISubsystem();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorUISubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelEditor();
// End Cross Module References
	void ULevelEditorUISubsystem::StaticRegisterNativesULevelEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorUISubsystem);
	UClass* Z_Construct_UClass_ULevelEditorUISubsystem_NoRegister()
	{
		return ULevelEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLevelEditorToolBox.h" },
		{ "ModuleRelativePath", "Private/SLevelEditorToolBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorUISubsystem_Statics::ClassParams = {
		&ULevelEditorUISubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorUISubsystem.OuterSingleton, Z_Construct_UClass_ULevelEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorUISubsystem.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULevelEditorUISubsystem>()
	{
		return ULevelEditorUISubsystem::StaticClass();
	}
	ULevelEditorUISubsystem::ULevelEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorUISubsystem);
	ULevelEditorUISubsystem::~ULevelEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelEditorUISubsystem, ULevelEditorUISubsystem::StaticClass, TEXT("ULevelEditorUISubsystem"), &Z_Registration_Info_UClass_ULevelEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorUISubsystem), 2776236808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_2704919746(TEXT("/Script/LevelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
