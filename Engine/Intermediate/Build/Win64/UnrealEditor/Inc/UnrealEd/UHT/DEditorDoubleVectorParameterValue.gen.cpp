// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorDoubleVectorParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorDoubleVectorParameterValue() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorDoubleVectorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorDoubleVectorParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorDoubleVectorParameterValue::StaticRegisterNativesUDEditorDoubleVectorParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorDoubleVectorParameterValue);
	UClass* Z_Construct_UClass_UDEditorDoubleVectorParameterValue_NoRegister()
	{
		return UDEditorDoubleVectorParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorDoubleVectorParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorDoubleVectorParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorDoubleVectorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorDoubleVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorDoubleVectorParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::ClassParams = {
		&UDEditorDoubleVectorParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorDoubleVectorParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorDoubleVectorParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorDoubleVectorParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorDoubleVectorParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorDoubleVectorParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorDoubleVectorParameterValue>()
	{
		return UDEditorDoubleVectorParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorDoubleVectorParameterValue);
	UDEditorDoubleVectorParameterValue::~UDEditorDoubleVectorParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorDoubleVectorParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorDoubleVectorParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorDoubleVectorParameterValue, UDEditorDoubleVectorParameterValue::StaticClass, TEXT("UDEditorDoubleVectorParameterValue"), &Z_Registration_Info_UClass_UDEditorDoubleVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorDoubleVectorParameterValue), 4197876023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorDoubleVectorParameterValue_h_1647655192(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorDoubleVectorParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorDoubleVectorParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
