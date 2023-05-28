// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/EditorBrushBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorBrushBuilder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorBrushBuilder::StaticRegisterNativesUEditorBrushBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorBrushBuilder);
	UClass* Z_Construct_UClass_UEditorBrushBuilder_NoRegister()
	{
		return UEditorBrushBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorBrushBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorBrushBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/EditorBrushBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/EditorBrushBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorBrushBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorBrushBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorBrushBuilder_Statics::ClassParams = {
		&UEditorBrushBuilder::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorBrushBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditorBrushBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorBrushBuilder.OuterSingleton, Z_Construct_UClass_UEditorBrushBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorBrushBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorBrushBuilder>()
	{
		return UEditorBrushBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorBrushBuilder);
	UEditorBrushBuilder::~UEditorBrushBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorBrushBuilder, UEditorBrushBuilder::StaticClass, TEXT("UEditorBrushBuilder"), &Z_Registration_Info_UClass_UEditorBrushBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorBrushBuilder), 3554808488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_800702395(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
