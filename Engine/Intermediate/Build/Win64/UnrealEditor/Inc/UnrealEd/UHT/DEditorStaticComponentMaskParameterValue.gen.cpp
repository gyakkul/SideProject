// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorStaticComponentMaskParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDComponentMaskParameter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DComponentMaskParameter;
class UScriptStruct* FDComponentMaskParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DComponentMaskParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DComponentMaskParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDComponentMaskParameter, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("DComponentMaskParameter"));
	}
	return Z_Registration_Info_UScriptStruct_DComponentMaskParameter.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDComponentMaskParameter>()
{
	return FDComponentMaskParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDComponentMaskParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DComponentMaskParameter",
		sizeof(FDComponentMaskParameter),
		alignof(FDComponentMaskParameter),
		Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDComponentMaskParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_DComponentMaskParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DComponentMaskParameter.InnerSingleton, Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DComponentMaskParameter.InnerSingleton;
	}
	void UDEditorStaticComponentMaskParameterValue::StaticRegisterNativesUDEditorStaticComponentMaskParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorStaticComponentMaskParameterValue);
	UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister()
	{
		return UDEditorStaticComponentMaskParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics
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
	UObject* (*const Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorStaticComponentMaskParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorStaticComponentMaskParameterValue, ParameterValue), Z_Construct_UScriptStruct_FDComponentMaskParameter, METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData)) }; // 1982455464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorStaticComponentMaskParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::ClassParams = {
		&UDEditorStaticComponentMaskParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorStaticComponentMaskParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorStaticComponentMaskParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorStaticComponentMaskParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorStaticComponentMaskParameterValue>()
	{
		return UDEditorStaticComponentMaskParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorStaticComponentMaskParameterValue);
	UDEditorStaticComponentMaskParameterValue::~UDEditorStaticComponentMaskParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ScriptStructInfo[] = {
		{ FDComponentMaskParameter::StaticStruct, Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewStructOps, TEXT("DComponentMaskParameter"), &Z_Registration_Info_UScriptStruct_DComponentMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDComponentMaskParameter), 1982455464U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue, UDEditorStaticComponentMaskParameterValue::StaticClass, TEXT("UDEditorStaticComponentMaskParameterValue"), &Z_Registration_Info_UClass_UDEditorStaticComponentMaskParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorStaticComponentMaskParameterValue), 242212326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_2719625999(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorStaticComponentMaskParameterValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
