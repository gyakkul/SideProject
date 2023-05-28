// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments;
class UScriptStruct* FCurveAtlasColorAdjustments::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveAtlasColorAdjustments"));
	}
	return Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveAtlasColorAdjustments>()
{
	return FCurveAtlasColorAdjustments::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[];
#endif
		static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveAtlasColorAdjustments>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
	{
		((FCurveAtlasColorAdjustments*)Obj)->bChromaKeyTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCurveAtlasColorAdjustments), &Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustVibrance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustRGBCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustHue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveAtlasColorAdjustments",
		sizeof(FCurveAtlasColorAdjustments),
		alignof(FCurveAtlasColorAdjustments),
		Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton, Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton;
	}
	DEFINE_FUNCTION(UCurveLinearColorAtlas::execGetCurvePosition)
	{
		P_GET_OBJECT(UCurveLinearColor,Z_Param_InCurve);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurvePosition(Z_Param_InCurve,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	void UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas()
	{
		UClass* Class = UCurveLinearColorAtlas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurvePosition", &UCurveLinearColorAtlas::execGetCurvePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics
	{
		struct CurveLinearColorAtlas_eventGetCurvePosition_Parms
		{
			UCurveLinearColor* InCurve;
			float Position;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCurve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, InCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CurveLinearColorAtlas_eventGetCurvePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColorAtlas, nullptr, "GetCurvePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::CurveLinearColorAtlas_eventGetCurvePosition_Parms), Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColorAtlas);
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSquareResolution_MetaData[];
#endif
		static void NewProp_bSquareResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSquareResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureHeight;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GradientCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GradientCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GradientCurves;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAllAdjustments_MetaData[];
#endif
		static void NewProp_bDisableAllAdjustments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAllAdjustments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCachedColorAdjustments_MetaData[];
#endif
		static void NewProp_bHasCachedColorAdjustments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCachedColorAdjustments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorAdjustments_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorAdjustments;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColorAtlas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition, "GetCurvePosition" }, // 394730846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Curves/CurveLinearColorAtlas.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bIsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "DisplayName", "Texture Width" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Set texture height equal to texture width. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Set texture height equal to texture width." },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bSquareResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution = { "bSquareResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "Category", "Curves" },
		{ "EditCondition", "!bSquareResolution" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureHeight), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner = { "GradientCurves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// Height of the lookup textures\n" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Height of the lookup textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves = { "GradientCurves", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled." },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bDisableAllAdjustments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments = { "bDisableAllAdjustments", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bHasCachedColorAdjustments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments = { "bHasCachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments = { "CachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, CachedColorAdjustments), Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments_MetaData)) }; // 2158503340
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlas>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams = {
		&UCurveLinearColorAtlas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas()
	{
		if (!Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton, Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveLinearColorAtlas>()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlas);
	UCurveLinearColorAtlas::~UCurveLinearColorAtlas() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ScriptStructInfo[] = {
		{ FCurveAtlasColorAdjustments::StaticStruct, Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewStructOps, TEXT("CurveAtlasColorAdjustments"), &Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveAtlasColorAdjustments), 2158503340U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColorAtlas, UCurveLinearColorAtlas::StaticClass, TEXT("UCurveLinearColorAtlas"), &Z_Registration_Info_UClass_UCurveLinearColorAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColorAtlas), 2839224591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_1014350222(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
