// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorConfigBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorConfigBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorConfig();
// End Cross Module References
	void UEditorConfigBase::StaticRegisterNativesUEditorConfigBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorConfigBase);
	UClass* Z_Construct_UClass_UEditorConfigBase_NoRegister()
	{
		return UEditorConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UEditorConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorConfigBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Inherit from this class to simplify saving and loading properties from editor configs. */" },
		{ "IncludePath", "EditorConfigBase.h" },
		{ "ModuleRelativePath", "Public/EditorConfigBase.h" },
		{ "ToolTip", "Inherit from this class to simplify saving and loading properties from editor configs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorConfigBase_Statics::ClassParams = {
		&UEditorConfigBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorConfigBase()
	{
		if (!Z_Registration_Info_UClass_UEditorConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorConfigBase.OuterSingleton, Z_Construct_UClass_UEditorConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorConfigBase.OuterSingleton;
	}
	template<> EDITORCONFIG_API UClass* StaticClass<UEditorConfigBase>()
	{
		return UEditorConfigBase::StaticClass();
	}
	UEditorConfigBase::UEditorConfigBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorConfigBase);
	UEditorConfigBase::~UEditorConfigBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorConfigBase, UEditorConfigBase::StaticClass, TEXT("UEditorConfigBase"), &Z_Registration_Info_UClass_UEditorConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorConfigBase), 2678930547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_3524361020(TEXT("/Script/EditorConfig"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
