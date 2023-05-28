// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionRotateAboutAxis.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotateAboutAxis() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionRotateAboutAxis::StaticRegisterNativesUMaterialExpressionRotateAboutAxis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRotateAboutAxis);
	UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister()
	{
		return UMaterialExpressionRotateAboutAxis::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedRotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedRotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotateAboutAxis.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis = { "NormalizedRotationAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, NormalizedRotationAxis), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, RotationAngle), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, PivotPoint), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionRotateAboutAxis" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Period), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotateAboutAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams = {
		&UMaterialExpressionRotateAboutAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRotateAboutAxis>()
	{
		return UMaterialExpressionRotateAboutAxis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotateAboutAxis);
	UMaterialExpressionRotateAboutAxis::~UMaterialExpressionRotateAboutAxis() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRotateAboutAxis, UMaterialExpressionRotateAboutAxis::StaticClass, TEXT("UMaterialExpressionRotateAboutAxis"), &Z_Registration_Info_UClass_UMaterialExpressionRotateAboutAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRotateAboutAxis), 2306323713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_1509382518(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotateAboutAxis_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
