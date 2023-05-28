// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/EditorAnimCompositeSegment.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimCompositeSegment() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCompositeSegment();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorAnimCompositeSegment::StaticRegisterNativesUEditorAnimCompositeSegment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorAnimCompositeSegment);
	UClass* Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister()
	{
		return UEditorAnimCompositeSegment::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimCompositeSegment_Statics
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
	UObject* (*const Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorAnimBaseObj,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/EditorAnimCompositeSegment.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCompositeSegment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Default blend in time. */" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCompositeSegment.h" },
		{ "ToolTip", "Default blend in time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment = { "AnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorAnimCompositeSegment, AnimSegment), Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData)) }; // 246920623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimCompositeSegment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::ClassParams = {
		&UEditorAnimCompositeSegment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimCompositeSegment()
	{
		if (!Z_Registration_Info_UClass_UEditorAnimCompositeSegment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorAnimCompositeSegment.OuterSingleton, Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorAnimCompositeSegment.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorAnimCompositeSegment>()
	{
		return UEditorAnimCompositeSegment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimCompositeSegment);
	UEditorAnimCompositeSegment::~UEditorAnimCompositeSegment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorAnimCompositeSegment, UEditorAnimCompositeSegment::StaticClass, TEXT("UEditorAnimCompositeSegment"), &Z_Registration_Info_UClass_UEditorAnimCompositeSegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorAnimCompositeSegment), 2054127529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_3125648359(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
