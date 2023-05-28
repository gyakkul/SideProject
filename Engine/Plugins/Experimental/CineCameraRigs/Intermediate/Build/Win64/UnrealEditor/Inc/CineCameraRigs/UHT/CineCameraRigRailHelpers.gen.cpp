// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraRigRailHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraRigRailHelpers() {}
// Cross Module References
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineCameraRigRailHelpers();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineCameraRigRailHelpers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	DEFINE_FUNCTION(UCineCameraRigRailHelpers::execCreateOrUpdateSplineHeatmapTexture)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_GET_TARRAY_REF(float,Z_Param_Out_DataValues);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LowValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AverageValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HighValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCineCameraRigRailHelpers::CreateOrUpdateSplineHeatmapTexture(Z_Param_Out_Texture,Z_Param_Out_DataValues,Z_Param_LowValue,Z_Param_AverageValue,Z_Param_HighValue);
		P_NATIVE_END;
	}
	void UCineCameraRigRailHelpers::StaticRegisterNativesUCineCameraRigRailHelpers()
	{
		UClass* Class = UCineCameraRigRailHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateOrUpdateSplineHeatmapTexture", &UCineCameraRigRailHelpers::execCreateOrUpdateSplineHeatmapTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics
	{
		struct CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms
		{
			UTexture2D* Texture;
			TArray<float> DataValues;
			float LowValue;
			float AverageValue;
			float HighValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues_Inner = { "DataValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues = { "DataValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms, DataValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_LowValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_LowValue = { "LowValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms, LowValue), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_LowValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_LowValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_AverageValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_AverageValue = { "AverageValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms, AverageValue), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_AverageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_AverageValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_HighValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_HighValue = { "HighValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms, HighValue), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_HighValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_HighValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_DataValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_LowValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_AverageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::NewProp_HighValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineCameraRigRail" },
		{ "Comment", "/* Create a transient heatmap texture from data values*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRailHelpers.h" },
		{ "ToolTip", "Create a transient heatmap texture from data values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraRigRailHelpers, nullptr, "CreateOrUpdateSplineHeatmapTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::CineCameraRigRailHelpers_eventCreateOrUpdateSplineHeatmapTexture_Parms), Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCameraRigRailHelpers);
	UClass* Z_Construct_UClass_UCineCameraRigRailHelpers_NoRegister()
	{
		return UCineCameraRigRailHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UCineCameraRigRailHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineCameraRigRailHelpers_CreateOrUpdateSplineHeatmapTexture, "CreateOrUpdateSplineHeatmapTexture" }, // 4266634554
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CineCameraRigRailHelpers.h" },
		{ "ModuleRelativePath", "Public/CineCameraRigRailHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraRigRailHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::ClassParams = {
		&UCineCameraRigRailHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineCameraRigRailHelpers()
	{
		if (!Z_Registration_Info_UClass_UCineCameraRigRailHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCameraRigRailHelpers.OuterSingleton, Z_Construct_UClass_UCineCameraRigRailHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineCameraRigRailHelpers.OuterSingleton;
	}
	template<> CINECAMERARIGS_API UClass* StaticClass<UCineCameraRigRailHelpers>()
	{
		return UCineCameraRigRailHelpers::StaticClass();
	}
	UCineCameraRigRailHelpers::UCineCameraRigRailHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraRigRailHelpers);
	UCineCameraRigRailHelpers::~UCineCameraRigRailHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRailHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRailHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineCameraRigRailHelpers, UCineCameraRigRailHelpers::StaticClass, TEXT("UCineCameraRigRailHelpers"), &Z_Registration_Info_UClass_UCineCameraRigRailHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCameraRigRailHelpers), 533825558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRailHelpers_h_3846714403(TEXT("/Script/CineCameraRigs"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRailHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRailHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
