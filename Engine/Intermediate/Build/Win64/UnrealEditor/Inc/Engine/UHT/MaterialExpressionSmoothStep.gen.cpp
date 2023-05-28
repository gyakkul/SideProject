// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSmoothStep.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSmoothStep() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSmoothStep::StaticRegisterNativesUMaterialExpressionSmoothStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSmoothStep);
	UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep_NoRegister()
	{
		return UMaterialExpressionSmoothStep::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSmoothStep.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstMin' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstMax' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstValue' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Min is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Min" },
		{ "ToolTip", "only used if Min is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin = { "ConstMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Max is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Max" },
		{ "ToolTip", "only used if Max is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax = { "ConstMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData[] = {
		{ "Category", "MaterialExpressionSmoothStep" },
		{ "Comment", "/** only used if Value is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSmoothStep.h" },
		{ "OverridingInputProperty", "Value" },
		{ "ToolTip", "only used if Value is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue = { "ConstValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSmoothStep, ConstValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::NewProp_ConstValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSmoothStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::ClassParams = {
		&UMaterialExpressionSmoothStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSmoothStep()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSmoothStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSmoothStep.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSmoothStep>()
	{
		return UMaterialExpressionSmoothStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSmoothStep);
	UMaterialExpressionSmoothStep::~UMaterialExpressionSmoothStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSmoothStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSmoothStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSmoothStep, UMaterialExpressionSmoothStep::StaticClass, TEXT("UMaterialExpressionSmoothStep"), &Z_Registration_Info_UClass_UMaterialExpressionSmoothStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSmoothStep), 1858934142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSmoothStep_h_3159621118(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSmoothStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSmoothStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
