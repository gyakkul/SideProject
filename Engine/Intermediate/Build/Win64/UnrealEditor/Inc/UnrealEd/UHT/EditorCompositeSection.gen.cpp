// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorCompositeSection.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorCompositeSection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UNREALED_API UClass* Z_Construct_UClass_UEditorCompositeSection();
	UNREALED_API UClass* Z_Construct_UClass_UEditorCompositeSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorCompositeSection::StaticRegisterNativesUEditorCompositeSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorCompositeSection);
	UClass* Z_Construct_UClass_UEditorCompositeSection_NoRegister()
	{
		return UEditorCompositeSection::StaticClass();
	}
	struct Z_Construct_UClass_UEditorCompositeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeSection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompositeSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorCompositeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorAnimBaseObj,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorCompositeSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/EditorCompositeSection.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorCompositeSection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorCompositeSection_Statics::NewProp_CompositeSection_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Default blend in time. */" },
		{ "ModuleRelativePath", "Classes/Animation/EditorCompositeSection.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default blend in time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorCompositeSection_Statics::NewProp_CompositeSection = { "CompositeSection", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorCompositeSection, CompositeSection), Z_Construct_UScriptStruct_FCompositeSection, METADATA_PARAMS(Z_Construct_UClass_UEditorCompositeSection_Statics::NewProp_CompositeSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompositeSection_Statics::NewProp_CompositeSection_MetaData)) }; // 2306930693
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCompositeSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCompositeSection_Statics::NewProp_CompositeSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorCompositeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCompositeSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCompositeSection_Statics::ClassParams = {
		&UEditorCompositeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorCompositeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompositeSection_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorCompositeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompositeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorCompositeSection()
	{
		if (!Z_Registration_Info_UClass_UEditorCompositeSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCompositeSection.OuterSingleton, Z_Construct_UClass_UEditorCompositeSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorCompositeSection.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorCompositeSection>()
	{
		return UEditorCompositeSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCompositeSection);
	UEditorCompositeSection::~UEditorCompositeSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorCompositeSection, UEditorCompositeSection::StaticClass, TEXT("UEditorCompositeSection"), &Z_Registration_Info_UClass_UEditorCompositeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCompositeSection), 141807704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_3318866712(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
