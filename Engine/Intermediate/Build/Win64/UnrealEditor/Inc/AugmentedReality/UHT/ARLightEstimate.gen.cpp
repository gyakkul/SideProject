// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARLightEstimate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLightEstimate() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	void UARLightEstimate::StaticRegisterNativesUARLightEstimate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARLightEstimate);
	UClass* Z_Construct_UClass_UARLightEstimate_NoRegister()
	{
		return UARLightEstimate::StaticClass();
	}
	struct Z_Construct_UClass_UARLightEstimate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARLightEstimate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ARLightEstimate.h" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARLightEstimate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARLightEstimate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARLightEstimate_Statics::ClassParams = {
		&UARLightEstimate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARLightEstimate()
	{
		if (!Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton, Z_Construct_UClass_UARLightEstimate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARLightEstimate>()
	{
		return UARLightEstimate::StaticClass();
	}
	UARLightEstimate::UARLightEstimate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLightEstimate);
	UARLightEstimate::~UARLightEstimate() {}
	DEFINE_FUNCTION(UARBasicLightEstimate::execGetAmbientColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetAmbientColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBasicLightEstimate::execGetAmbientColorTemperatureKelvin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAmbientColorTemperatureKelvin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBasicLightEstimate::execGetAmbientIntensityLumens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAmbientIntensityLumens();
		P_NATIVE_END;
	}
	void UARBasicLightEstimate::StaticRegisterNativesUARBasicLightEstimate()
	{
		UClass* Class = UARBasicLightEstimate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmbientColor", &UARBasicLightEstimate::execGetAmbientColor },
			{ "GetAmbientColorTemperatureKelvin", &UARBasicLightEstimate::execGetAmbientColorTemperatureKelvin },
			{ "GetAmbientIntensityLumens", &UARBasicLightEstimate::execGetAmbientIntensityLumens },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::ARBasicLightEstimate_eventGetAmbientColor_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientColorTemperatureKelvin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientIntensityLumens", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARBasicLightEstimate);
	UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister()
	{
		return UARBasicLightEstimate::StaticClass();
	}
	struct Z_Construct_UClass_UARBasicLightEstimate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensityLumens_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensityLumens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientColorTemperatureKelvin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientColorTemperatureKelvin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBasicLightEstimate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARLightEstimate,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARBasicLightEstimate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor, "GetAmbientColor" }, // 2997958088
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin, "GetAmbientColorTemperatureKelvin" }, // 3829080848
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens, "GetAmbientIntensityLumens" }, // 333932506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "IncludePath", "ARLightEstimate.h" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens = { "AmbientIntensityLumens", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARBasicLightEstimate, AmbientIntensityLumens), METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin = { "AmbientColorTemperatureKelvin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARBasicLightEstimate, AmbientColorTemperatureKelvin), METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor = { "AmbientColor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARBasicLightEstimate, AmbientColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBasicLightEstimate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBasicLightEstimate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARBasicLightEstimate_Statics::ClassParams = {
		&UARBasicLightEstimate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBasicLightEstimate()
	{
		if (!Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton, Z_Construct_UClass_UARBasicLightEstimate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBasicLightEstimate>()
	{
		return UARBasicLightEstimate::StaticClass();
	}
	UARBasicLightEstimate::UARBasicLightEstimate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBasicLightEstimate);
	UARBasicLightEstimate::~UARBasicLightEstimate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARLightEstimate, UARLightEstimate::StaticClass, TEXT("UARLightEstimate"), &Z_Registration_Info_UClass_UARLightEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARLightEstimate), 1190503298U) },
		{ Z_Construct_UClass_UARBasicLightEstimate, UARBasicLightEstimate::StaticClass, TEXT("UARBasicLightEstimate"), &Z_Registration_Info_UClass_UARBasicLightEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARBasicLightEstimate), 3180039597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_3016640327(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
