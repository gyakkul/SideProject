// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tools/UAssetEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAssetEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAssetEditor::StaticRegisterNativesUAssetEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetEditor);
	UClass* Z_Construct_UClass_UAssetEditor_NoRegister()
	{
		return UAssetEditor::StaticClass();
	}
	struct Z_Construct_UClass_UAssetEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all asset editors.\n */" },
		{ "IncludePath", "Tools/UAssetEditor.h" },
		{ "ModuleRelativePath", "Public/Tools/UAssetEditor.h" },
		{ "ToolTip", "Base class for all asset editors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetEditor_Statics::ClassParams = {
		&UAssetEditor::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetEditor()
	{
		if (!Z_Registration_Info_UClass_UAssetEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetEditor.OuterSingleton, Z_Construct_UClass_UAssetEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetEditor.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetEditor>()
	{
		return UAssetEditor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetEditor);
	UAssetEditor::~UAssetEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetEditor, UAssetEditor::StaticClass, TEXT("UAssetEditor"), &Z_Registration_Info_UClass_UAssetEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetEditor), 1865519535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_2855741061(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
