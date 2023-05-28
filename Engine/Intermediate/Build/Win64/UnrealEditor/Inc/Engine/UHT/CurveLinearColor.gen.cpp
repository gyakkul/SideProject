// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor;
class UScriptStruct* FRuntimeCurveLinearColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeCurveLinearColor"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeCurveLinearColor>()
{
	return FRuntimeCurveLinearColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeCurveLinearColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves = { "ColorCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ColorCurves, FRuntimeCurveLinearColor), nullptr, nullptr, STRUCT_OFFSET(FRuntimeCurveLinearColor, ColorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeCurveLinearColor, ExternalCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ColorCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewProp_ExternalCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeCurveLinearColor",
		sizeof(FRuntimeCurveLinearColor),
		alignof(FRuntimeCurveLinearColor),
		Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor.InnerSingleton;
	}
	DEFINE_FUNCTION(UCurveLinearColor::execGetUnadjustedLinearColorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetUnadjustedLinearColorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCurveLinearColor::execGetClampedLinearColorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetClampedLinearColorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCurveLinearColor::execGetLinearColorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearColorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	void UCurveLinearColor::StaticRegisterNativesUCurveLinearColor()
	{
		UClass* Class = UCurveLinearColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClampedLinearColorValue", &UCurveLinearColor::execGetClampedLinearColorValue },
			{ "GetLinearColorValue", &UCurveLinearColor::execGetLinearColorValue },
			{ "GetUnadjustedLinearColorValue", &UCurveLinearColor::execGetUnadjustedLinearColorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics
	{
		struct CurveLinearColor_eventGetClampedLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetClampedLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetClampedLinearColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::CurveLinearColor_eventGetClampedLinearColorValue_Parms), Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics
	{
		struct CurveLinearColor_eventGetLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetLinearColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::CurveLinearColor_eventGetLinearColorValue_Parms), Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics
	{
		struct CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms
		{
			float InTime;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColor, nullptr, "GetUnadjustedLinearColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::CurveLinearColor_eventGetUnadjustedLinearColorValue_Parms), Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColor);
	UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister()
	{
		return UCurveLinearColor::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColor_GetClampedLinearColorValue, "GetClampedLinearColorValue" }, // 555513312
		{ &Z_Construct_UFunction_UCurveLinearColor_GetLinearColorValue, "GetLinearColorValue" }, // 1272395254
		{ &Z_Construct_UFunction_UCurveLinearColor_GetUnadjustedLinearColorValue, "GetUnadjustedLinearColorValue" }, // 551412060
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "FilePath" },
		{ "IncludePath", "Curves/CurveLinearColor.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Keyframe data, one curve for red, green, blue, and alpha */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Keyframe data, one curve for red, green, blue, and alpha" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, UCurveLinearColor), nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "359.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Properties for adjusting the color of the gradient\n" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
		{ "ToolTip", "Properties for adjusting the color of the gradient" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustHue), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustSaturation), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightness), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustVibrance), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColor, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_FloatCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustHue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustBrightnessCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustVibrance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMinAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColor_Statics::NewProp_AdjustMaxAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams = {
		&UCurveLinearColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColor()
	{
		if (!Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton, Z_Construct_UClass_UCurveLinearColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveLinearColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveLinearColor>()
	{
		return UCurveLinearColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColor);
	UCurveLinearColor::~UCurveLinearColor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveLinearColor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeCurveLinearColor::StaticStruct, Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics::NewStructOps, TEXT("RuntimeCurveLinearColor"), &Z_Registration_Info_UScriptStruct_RuntimeCurveLinearColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeCurveLinearColor), 262933288U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColor, UCurveLinearColor::StaticClass, TEXT("UCurveLinearColor"), &Z_Registration_Info_UClass_UCurveLinearColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColor), 2928670415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_1203360553(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
