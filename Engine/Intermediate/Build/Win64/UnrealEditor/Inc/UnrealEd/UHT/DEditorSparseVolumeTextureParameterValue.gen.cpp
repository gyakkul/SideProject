// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorSparseVolumeTextureParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorSparseVolumeTextureParameterValue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorSparseVolumeTextureParameterValue::StaticRegisterNativesUDEditorSparseVolumeTextureParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorSparseVolumeTextureParameterValue);
	UClass* Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_NoRegister()
	{
		return UDEditorSparseVolumeTextureParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorSparseVolumeTextureParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorSparseVolumeTextureParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorSparseVolumeTextureParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorSparseVolumeTextureParameterValue, ParameterValue), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorSparseVolumeTextureParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::ClassParams = {
		&UDEditorSparseVolumeTextureParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorSparseVolumeTextureParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorSparseVolumeTextureParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorSparseVolumeTextureParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorSparseVolumeTextureParameterValue>()
	{
		return UDEditorSparseVolumeTextureParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorSparseVolumeTextureParameterValue);
	UDEditorSparseVolumeTextureParameterValue::~UDEditorSparseVolumeTextureParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorSparseVolumeTextureParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorSparseVolumeTextureParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorSparseVolumeTextureParameterValue, UDEditorSparseVolumeTextureParameterValue::StaticClass, TEXT("UDEditorSparseVolumeTextureParameterValue"), &Z_Registration_Info_UClass_UDEditorSparseVolumeTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorSparseVolumeTextureParameterValue), 4092183039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorSparseVolumeTextureParameterValue_h_2974340826(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorSparseVolumeTextureParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorSparseVolumeTextureParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
