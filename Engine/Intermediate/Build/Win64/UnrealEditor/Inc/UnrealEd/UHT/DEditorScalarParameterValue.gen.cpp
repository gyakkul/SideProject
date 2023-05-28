// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorScalarParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorScalarParameterValue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorScalarParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData;
class UScriptStruct* FScalarParameterAtlasData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterAtlasData, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ScalarParameterAtlasData"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FScalarParameterAtlasData>()
{
	return FScalarParameterAtlasData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsAtlasPosition_MetaData[];
#endif
		static void NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsAtlasPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Atlas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterAtlasData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj)
	{
		((FScalarParameterAtlasData*)Obj)->bIsUsedAsAtlasPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition = { "bIsUsedAsAtlasPosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScalarParameterAtlasData), &Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalarParameterAtlasData, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalarParameterAtlasData, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ScalarParameterAtlasData",
		sizeof(FScalarParameterAtlasData),
		alignof(FScalarParameterAtlasData),
		Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasData()
	{
		if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData.InnerSingleton;
	}
	void UDEditorScalarParameterValue::StaticRegisterNativesUDEditorScalarParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorScalarParameterValue);
	UClass* Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister()
	{
		return UDEditorScalarParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorScalarParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorScalarParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorScalarParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData = { "AtlasData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorScalarParameterValue, AtlasData), Z_Construct_UScriptStruct_FScalarParameterAtlasData, METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData)) }; // 496641194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorScalarParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorScalarParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::ClassParams = {
		&UDEditorScalarParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorScalarParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorScalarParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorScalarParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorScalarParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorScalarParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorScalarParameterValue>()
	{
		return UDEditorScalarParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorScalarParameterValue);
	UDEditorScalarParameterValue::~UDEditorScalarParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ScriptStructInfo[] = {
		{ FScalarParameterAtlasData::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewStructOps, TEXT("ScalarParameterAtlasData"), &Z_Registration_Info_UScriptStruct_ScalarParameterAtlasData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterAtlasData), 496641194U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorScalarParameterValue, UDEditorScalarParameterValue::StaticClass, TEXT("UDEditorScalarParameterValue"), &Z_Registration_Info_UClass_UDEditorScalarParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorScalarParameterValue), 2019792545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_1150805199(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
