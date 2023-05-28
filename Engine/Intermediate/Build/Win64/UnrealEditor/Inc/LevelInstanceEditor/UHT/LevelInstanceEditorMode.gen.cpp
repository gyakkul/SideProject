// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LevelInstanceEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorMode() {}
// Cross Module References
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorMode();
	LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_LevelInstanceEditor();
// End Cross Module References
	void ULevelInstanceEditorMode::StaticRegisterNativesULevelInstanceEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceEditorMode);
	UClass* Z_Construct_UClass_ULevelInstanceEditorMode_NoRegister()
	{
		return ULevelInstanceEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelInstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstanceEditorMode.h" },
		{ "ModuleRelativePath", "Private/LevelInstanceEditorMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceEditorMode_Statics::ClassParams = {
		&ULevelInstanceEditorMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceEditorMode()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceEditorMode.OuterSingleton, Z_Construct_UClass_ULevelInstanceEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceEditorMode.OuterSingleton;
	}
	template<> LEVELINSTANCEEDITOR_API UClass* StaticClass<ULevelInstanceEditorMode>()
	{
		return ULevelInstanceEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceEditorMode);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceEditorMode, ULevelInstanceEditorMode::StaticClass, TEXT("ULevelInstanceEditorMode"), &Z_Registration_Info_UClass_ULevelInstanceEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceEditorMode), 1900693833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_176148306(TEXT("/Script/LevelInstanceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelInstanceEditor_Private_LevelInstanceEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
