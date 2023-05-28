// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorAnimSegment.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimSegment() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimSegment();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimSegment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorAnimSegment::StaticRegisterNativesUEditorAnimSegment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAnimSegment);
	UClass* Z_Construct_UClass_UEditorAnimSegment_NoRegister()
	{
		return UEditorAnimSegment::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimSegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSegment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSegment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorAnimBaseObj,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimSegment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/EditorAnimSegment.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimSegment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimSegment_Statics::NewProp_AnimSegment_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Default blend in time. */" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimSegment.h" },
		{ "ToolTip", "Default blend in time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimSegment_Statics::NewProp_AnimSegment = { "AnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorAnimSegment, AnimSegment), Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimSegment_Statics::NewProp_AnimSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimSegment_Statics::NewProp_AnimSegment_MetaData)) }; // 246920623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorAnimSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimSegment_Statics::NewProp_AnimSegment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimSegment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimSegment_Statics::ClassParams = {
		&UEditorAnimSegment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorAnimSegment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimSegment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimSegment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimSegment()
	{
		if (!Z_Registration_Info_UClass_UEditorAnimSegment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAnimSegment.OuterSingleton, Z_Construct_UClass_UEditorAnimSegment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAnimSegment.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorAnimSegment>()
	{
		return UEditorAnimSegment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimSegment);
	UEditorAnimSegment::~UEditorAnimSegment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAnimSegment, UEditorAnimSegment::StaticClass, TEXT("UEditorAnimSegment"), &Z_Registration_Info_UClass_UEditorAnimSegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAnimSegment), 641633954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_2387783328(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
