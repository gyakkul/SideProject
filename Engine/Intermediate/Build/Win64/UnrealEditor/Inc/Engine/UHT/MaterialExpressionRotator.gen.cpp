// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionRotator.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionRotator::StaticRegisterNativesUMaterialExpressionRotator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRotator);
	UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister()
	{
		return UMaterialExpressionRotator::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotator.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Game Time if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, CenterX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, CenterY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Speed), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "Comment", "/** only used if Coordinate is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "OverridingInputProperty", "Coordinate" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams = {
		&UMaterialExpressionRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRotator()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRotator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRotator>()
	{
		return UMaterialExpressionRotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotator);
	UMaterialExpressionRotator::~UMaterialExpressionRotator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRotator, UMaterialExpressionRotator::StaticClass, TEXT("UMaterialExpressionRotator"), &Z_Registration_Info_UClass_UMaterialExpressionRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRotator), 243349814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_61155753(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
