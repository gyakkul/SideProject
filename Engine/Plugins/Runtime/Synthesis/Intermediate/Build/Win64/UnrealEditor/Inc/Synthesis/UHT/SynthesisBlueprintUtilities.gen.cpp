// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SynthesisBlueprintUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthesisBlueprintUtilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	DEFINE_FUNCTION(USynthesisUtilitiesBlueprintFunctionLibrary::execGetLinearFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLogFrequencyValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDomainMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDomainMax);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(Z_Param_InLogFrequencyValue,Z_Param_InDomainMin,Z_Param_InDomainMax,Z_Param_InRangeMin,Z_Param_InRangeMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthesisUtilitiesBlueprintFunctionLibrary::execGetLogFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLinearValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDomainMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDomainMax);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(Z_Param_InLinearValue,Z_Param_InDomainMin,Z_Param_InDomainMax,Z_Param_InRangeMin,Z_Param_InRangeMax);
		P_NATIVE_END;
	}
	void USynthesisUtilitiesBlueprintFunctionLibrary::StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary()
	{
		UClass* Class = USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLinearFrequency", &USynthesisUtilitiesBlueprintFunctionLibrary::execGetLinearFrequency },
			{ "GetLogFrequency", &USynthesisUtilitiesBlueprintFunctionLibrary::execGetLogFrequency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics
	{
		struct SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms
		{
			float InLogFrequencyValue;
			float InDomainMin;
			float InDomainMax;
			float InRangeMin;
			float InRangeMax;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLogFrequencyValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDomainMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDomainMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InLogFrequencyValue = { "InLogFrequencyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, InLogFrequencyValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InDomainMin = { "InDomainMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, InDomainMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InDomainMax = { "InDomainMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, InDomainMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InRangeMin = { "InRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, InRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InRangeMax = { "InRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, InRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InLogFrequencyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InDomainMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InDomainMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_InRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synthesis Utilities Library" },
		{ "Comment", "// Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)\n" },
		{ "ModuleRelativePath", "Public/SynthesisBlueprintUtilities.h" },
		{ "ToolTip", "Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary, nullptr, "GetLinearFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLinearFrequency_Parms), Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics
	{
		struct SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms
		{
			float InLinearValue;
			float InDomainMin;
			float InDomainMax;
			float InRangeMin;
			float InRangeMax;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLinearValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDomainMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDomainMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InLinearValue = { "InLinearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, InLinearValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InDomainMin = { "InDomainMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, InDomainMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InDomainMax = { "InDomainMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, InDomainMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InRangeMin = { "InRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, InRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InRangeMax = { "InRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, InRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InLinearValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InDomainMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InDomainMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_InRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synthesis Utilities Library" },
		{ "Comment", "// Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)\n" },
		{ "ModuleRelativePath", "Public/SynthesisBlueprintUtilities.h" },
		{ "ToolTip", "Returns the log frequency of the input value. Maps linear domain and range values to log output (good for linear slider controlling frequency)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary, nullptr, "GetLogFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::SynthesisUtilitiesBlueprintFunctionLibrary_eventGetLogFrequency_Parms), Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthesisUtilitiesBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister()
	{
		return USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency, "GetLinearFrequency" }, // 2272494074
		{ &Z_Construct_UFunction_USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency, "GetLogFrequency" }, // 3386402652
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Synthesis Utilities Blueprint Function Library\n*  A library of synthesis related functions for use in Blueprints\n*/" },
		{ "IncludePath", "SynthesisBlueprintUtilities.h" },
		{ "ModuleRelativePath", "Public/SynthesisBlueprintUtilities.h" },
		{ "ToolTip", "Synthesis Utilities Blueprint Function Library\nA library of synthesis related functions for use in Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthesisUtilitiesBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::ClassParams = {
		&USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USynthesisUtilitiesBlueprintFunctionLibrary>()
	{
		return USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass();
	}
	USynthesisUtilitiesBlueprintFunctionLibrary::USynthesisUtilitiesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthesisUtilitiesBlueprintFunctionLibrary);
	USynthesisUtilitiesBlueprintFunctionLibrary::~USynthesisUtilitiesBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary, USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass, TEXT("USynthesisUtilitiesBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthesisUtilitiesBlueprintFunctionLibrary), 3967896367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_1089590924(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
