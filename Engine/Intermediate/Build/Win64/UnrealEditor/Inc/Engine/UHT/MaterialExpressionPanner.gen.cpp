// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPanner.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPanner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPanner::StaticRegisterNativesUMaterialExpressionPanner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPanner);
	UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister()
	{
		return UMaterialExpressionPanner::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPanner_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFractionalPart_MetaData[];
#endif
		static void NewProp_bFractionalPart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFractionalPart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPanner.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Game Time if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Vector2 speed scale, if specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, Speed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "OverridingInputProperty", "Speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX = { "SpeedX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "OverridingInputProperty", "Speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY = { "SpeedY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "Comment", "/** only used if Coordinate is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "OverridingInputProperty", "Coordinate" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPanner, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "Comment", "// Output only the fractional part of the pan calculation for greater precision.\n// Output is greater than or equal to 0 and less than 1.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "ToolTip", "Output only the fractional part of the pan calculation for greater precision.\nOutput is greater than or equal to 0 and less than 1." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_SetBit(void* Obj)
	{
		((UMaterialExpressionPanner*)Obj)->bFractionalPart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart = { "bFractionalPart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionPanner), &Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPanner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::ClassParams = {
		&UMaterialExpressionPanner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPanner()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPanner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPanner.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPanner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPanner.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPanner>()
	{
		return UMaterialExpressionPanner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPanner);
	UMaterialExpressionPanner::~UMaterialExpressionPanner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPanner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPanner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPanner, UMaterialExpressionPanner::StaticClass, TEXT("UMaterialExpressionPanner"), &Z_Registration_Info_UClass_UMaterialExpressionPanner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPanner), 2411638831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPanner_h_3528192684(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPanner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPanner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
