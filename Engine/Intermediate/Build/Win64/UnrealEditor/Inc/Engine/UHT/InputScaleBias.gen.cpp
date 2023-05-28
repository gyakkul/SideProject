// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputScaleBias() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputClampConstants();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputClampState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBias;
class UScriptStruct* FInputScaleBias::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBias"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBias>()
{
	return FInputScaleBias::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputScaleBias_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with scaling and biasing\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with scaling and biasing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBias>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBias, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBias, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBias",
		sizeof(FInputScaleBias),
		alignof(FInputScaleBias),
		Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias()
	{
		if (!Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBias_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputRange;
class UScriptStruct* FInputRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRange, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputRange"));
	}
	return Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputRange>()
{
	return FInputRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputRange",
		sizeof(FInputRange),
		alignof(FInputRange),
		Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputRange()
	{
		if (!Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton, Z_Construct_UScriptStruct_FInputRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClamp;
class UScriptStruct* FInputScaleBiasClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClamp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClamp"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClamp>()
{
	return FInputScaleBiasClamp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with remapping, scaling, biasing, clamping, and interpolation\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with remapping, scaling, biasing, clamping, and interpolation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClamp*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBiasClamp",
		sizeof(FInputScaleBiasClamp),
		alignof(FInputScaleBiasClamp),
		Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp()
	{
		if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputClampConstants;
class UScriptStruct* FInputClampConstants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputClampConstants, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputClampConstants"));
	}
	return Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputClampConstants>()
{
	return FInputClampConstants::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputClampConstants_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with clamping and interpolation\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with clamping and interpolation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputClampConstants>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FInputClampConstants*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputClampConstants), &Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FInputClampConstants*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputClampConstants), &Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputClampConstants, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputClampConstants, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputClampConstants, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputClampConstants, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputClampConstants",
		sizeof(FInputClampConstants),
		alignof(FInputClampConstants),
		Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampConstants_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputClampConstants()
	{
		if (!Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton, Z_Construct_UScriptStruct_FInputClampConstants_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputClampState;
class UScriptStruct* FInputClampState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputClampState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputClampState"));
	}
	return Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputClampState>()
{
	return FInputClampState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputClampState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputClampState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mutable state struct to be used with FInputClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Mutable state struct to be used with FInputClampConstants" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputClampState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputClampState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputClampState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputClampState",
		sizeof(FInputClampState),
		alignof(FInputClampState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputClampState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputClampState()
	{
		if (!Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton, Z_Construct_UScriptStruct_FInputClampState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants;
class UScriptStruct* FInputScaleBiasClampConstants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClampConstants"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClampConstants>()
{
	return FInputScaleBiasClampConstants::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClampConstants>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FInputScaleBiasClampConstants*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClampConstants*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FInputScaleBiasClampConstants*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange_MetaData)) }; // 1771925650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputScaleBiasClampConstants, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBiasClampConstants",
		sizeof(FInputScaleBiasClampConstants),
		alignof(FInputScaleBiasClampConstants),
		Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants()
	{
		if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClampState;
class UScriptStruct* FInputScaleBiasClampState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClampState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClampState"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClampState>()
{
	return FInputScaleBiasClampState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mutable state struct to be used with FInputScaleBiasClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Mutable state struct to be used with FInputScaleBiasClampConstants" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClampState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputScaleBiasClampState",
		sizeof(FInputScaleBiasClampState),
		alignof(FInputScaleBiasClampState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState()
	{
		if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimAlphaInputType;
	static UEnum* EAnimAlphaInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAlphaInputType"));
		}
		return Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimAlphaInputType>()
	{
		return EAnimAlphaInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enumerators[] = {
		{ "EAnimAlphaInputType::Float", (int64)EAnimAlphaInputType::Float },
		{ "EAnimAlphaInputType::Bool", (int64)EAnimAlphaInputType::Bool },
		{ "EAnimAlphaInputType::Curve", (int64)EAnimAlphaInputType::Curve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.DisplayName", "Bool Value" },
		{ "Bool.Name", "EAnimAlphaInputType::Bool" },
		{ "Comment", "// AnimNodes using an Alpha can choose how it is driven.\n" },
		{ "Curve.DisplayName", "Anim Curve Value" },
		{ "Curve.Name", "EAnimAlphaInputType::Curve" },
		{ "Float.DisplayName", "Float Value" },
		{ "Float.Name", "EAnimAlphaInputType::Float" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "AnimNodes using an Alpha can choose how it is driven." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimAlphaInputType",
		"EAnimAlphaInputType",
		Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType()
	{
		if (!Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend;
class UScriptStruct* FInputAlphaBoolBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAlphaBoolBlend, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAlphaBoolBlend"));
	}
	return Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAlphaBoolBlend>()
{
	return FInputAlphaBoolBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_MetaData)) }; // 3066902676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FInputAlphaBoolBlend*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputAlphaBoolBlend), &Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAlphaBoolBlend, AlphaBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend_MetaData)) }; // 3900153020
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAlphaBoolBlend",
		sizeof(FInputAlphaBoolBlend),
		alignof(FInputAlphaBoolBlend),
		Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::EnumInfo[] = {
		{ EAnimAlphaInputType_StaticEnum, TEXT("EAnimAlphaInputType"), &Z_Registration_Info_UEnum_EAnimAlphaInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572332242U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::ScriptStructInfo[] = {
		{ FInputScaleBias::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps, TEXT("InputScaleBias"), &Z_Registration_Info_UScriptStruct_InputScaleBias, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBias), 4124520036U) },
		{ FInputRange::StaticStruct, Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps, TEXT("InputRange"), &Z_Registration_Info_UScriptStruct_InputRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputRange), 1771925650U) },
		{ FInputScaleBiasClamp::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps, TEXT("InputScaleBiasClamp"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClamp), 1479025939U) },
		{ FInputClampConstants::StaticStruct, Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewStructOps, TEXT("InputClampConstants"), &Z_Registration_Info_UScriptStruct_InputClampConstants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputClampConstants), 1464509394U) },
		{ FInputClampState::StaticStruct, Z_Construct_UScriptStruct_FInputClampState_Statics::NewStructOps, TEXT("InputClampState"), &Z_Registration_Info_UScriptStruct_InputClampState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputClampState), 4286454937U) },
		{ FInputScaleBiasClampConstants::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewStructOps, TEXT("InputScaleBiasClampConstants"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClampConstants), 1771317247U) },
		{ FInputScaleBiasClampState::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::NewStructOps, TEXT("InputScaleBiasClampState"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClampState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClampState), 3156838055U) },
		{ FInputAlphaBoolBlend::StaticStruct, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps, TEXT("InputAlphaBoolBlend"), &Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAlphaBoolBlend), 3565619021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_3333190482(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
