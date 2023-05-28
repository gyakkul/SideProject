// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorStaticSwitchParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorStaticSwitchParameterValue::StaticRegisterNativesUDEditorStaticSwitchParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorStaticSwitchParameterValue);
	UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue_NoRegister()
	{
		return UDEditorStaticSwitchParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorStaticSwitchParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorStaticSwitchParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((UDEditorStaticSwitchParameterValue*)Obj)->ParameterValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDEditorStaticSwitchParameterValue), &Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorStaticSwitchParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::ClassParams = {
		&UDEditorStaticSwitchParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorStaticSwitchParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorStaticSwitchParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorStaticSwitchParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorStaticSwitchParameterValue>()
	{
		return UDEditorStaticSwitchParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorStaticSwitchParameterValue);
	UDEditorStaticSwitchParameterValue::~UDEditorStaticSwitchParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticSwitchParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticSwitchParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorStaticSwitchParameterValue, UDEditorStaticSwitchParameterValue::StaticClass, TEXT("UDEditorStaticSwitchParameterValue"), &Z_Registration_Info_UClass_UDEditorStaticSwitchParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorStaticSwitchParameterValue), 1841160077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticSwitchParameterValue_h_51175144(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticSwitchParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticSwitchParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
