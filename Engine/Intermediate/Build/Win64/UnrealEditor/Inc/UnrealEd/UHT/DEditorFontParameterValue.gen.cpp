// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorFontParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorFontParameterValue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorFontParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorFontParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDFontParameters();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DFontParameters;
class UScriptStruct* FDFontParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DFontParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DFontParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDFontParameters, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("DFontParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DFontParameters.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDFontParameters>()
{
	return FDFontParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDFontParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDFontParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDFontParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "DFontParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDFontParameters, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "DFontParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDFontParameters, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDFontParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DFontParameters",
		sizeof(FDFontParameters),
		alignof(FDFontParameters),
		Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDFontParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DFontParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DFontParameters.InnerSingleton, Z_Construct_UScriptStruct_FDFontParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DFontParameters.InnerSingleton;
	}
	void UDEditorFontParameterValue::StaticRegisterNativesUDEditorFontParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorFontParameterValue);
	UClass* Z_Construct_UClass_UDEditorFontParameterValue_NoRegister()
	{
		return UDEditorFontParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorFontParameterValue_Statics
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
	UObject* (*const Z_Construct_UClass_UDEditorFontParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorFontParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorFontParameterValue, ParameterValue), Z_Construct_UScriptStruct_FDFontParameters, METADATA_PARAMS(Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData)) }; // 1695405816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorFontParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorFontParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorFontParameterValue_Statics::ClassParams = {
		&UDEditorFontParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorFontParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorFontParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorFontParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorFontParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorFontParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorFontParameterValue>()
	{
		return UDEditorFontParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorFontParameterValue);
	UDEditorFontParameterValue::~UDEditorFontParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ScriptStructInfo[] = {
		{ FDFontParameters::StaticStruct, Z_Construct_UScriptStruct_FDFontParameters_Statics::NewStructOps, TEXT("DFontParameters"), &Z_Registration_Info_UScriptStruct_DFontParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDFontParameters), 1695405816U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorFontParameterValue, UDEditorFontParameterValue::StaticClass, TEXT("UDEditorFontParameterValue"), &Z_Registration_Info_UClass_UDEditorFontParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorFontParameterValue), 992147834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_1967502643(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
