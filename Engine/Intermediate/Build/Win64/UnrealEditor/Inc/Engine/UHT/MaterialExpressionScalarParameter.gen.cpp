// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionScalarParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScalarParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionScalarParameter::StaticRegisterNativesUMaterialExpressionScalarParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionScalarParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister()
	{
		return UMaterialExpressionScalarParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPrimitiveData_MetaData[];
#endif
		static void NewProp_bUseCustomPrimitiveData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPrimitiveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveDataIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionScalarParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit(void* Obj)
	{
		((UMaterialExpressionScalarParameter*)Obj)->bUseCustomPrimitiveData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData = { "bUseCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionScalarParameter), &Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex = { "PrimitiveDataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, PrimitiveDataIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the lower bound for the slider on this parameter in the material instance editor. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the lower bound for the slider on this parameter in the material instance editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin = { "SliderMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the upper bound for the slider on this parameter in the material instance editor. \n\x09 * The slider will be disabled if SliderMax <= SliderMin.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the upper bound for the slider on this parameter in the material instance editor.\nThe slider will be disabled if SliderMax <= SliderMin." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax = { "SliderMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionScalarParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams = {
		&UMaterialExpressionScalarParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionScalarParameter>()
	{
		return UMaterialExpressionScalarParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScalarParameter);
	UMaterialExpressionScalarParameter::~UMaterialExpressionScalarParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionScalarParameter, UMaterialExpressionScalarParameter::StaticClass, TEXT("UMaterialExpressionScalarParameter"), &Z_Registration_Info_UClass_UMaterialExpressionScalarParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionScalarParameter), 2516548826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_711919668(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
