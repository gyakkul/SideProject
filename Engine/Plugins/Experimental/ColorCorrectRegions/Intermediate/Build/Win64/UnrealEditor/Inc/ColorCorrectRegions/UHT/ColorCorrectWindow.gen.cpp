// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorCorrectWindow.h"
#include "StageActor/DisplayClusterPositionalParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorCorrectWindow() {}
// Cross Module References
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionWindow();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionWindow_NoRegister();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectRegion();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow();
	COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_NoRegister();
	COLORCORRECTREGIONS_API UEnum* Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterPositionalParams();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ColorCorrectRegions();
// End Cross Module References
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetPositionalParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDisplayClusterPositionalParams*)Z_Param__Result=P_THIS->GetPositionalParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetPositionalParams)
	{
		P_GET_STRUCT_REF(FDisplayClusterPositionalParams,Z_Param_Out_InParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionalParams(Z_Param_Out_InParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetOrigin)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrigin(Z_Param_Out_InOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetScale)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_Out_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetRadialOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetRadialOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetRadialOffset)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadialOffset(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetYaw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetYaw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetYaw)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYaw(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetPitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetPitch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetPitch)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetSpin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetSpin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetSpin)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpin(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetDistanceFromCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetDistanceFromCenter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetDistanceFromCenter)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceFromCenter(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetLatitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetLatitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetLatitude)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLatitude(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execGetLongitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetLongitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AColorCorrectionWindow::execSetLongitude)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongitude(Z_Param_InValue);
		P_NATIVE_END;
	}
	void AColorCorrectionWindow::StaticRegisterNativesAColorCorrectionWindow()
	{
		UClass* Class = AColorCorrectionWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistanceFromCenter", &AColorCorrectionWindow::execGetDistanceFromCenter },
			{ "GetLatitude", &AColorCorrectionWindow::execGetLatitude },
			{ "GetLongitude", &AColorCorrectionWindow::execGetLongitude },
			{ "GetOrigin", &AColorCorrectionWindow::execGetOrigin },
			{ "GetPitch", &AColorCorrectionWindow::execGetPitch },
			{ "GetPositionalParams", &AColorCorrectionWindow::execGetPositionalParams },
			{ "GetRadialOffset", &AColorCorrectionWindow::execGetRadialOffset },
			{ "GetScale", &AColorCorrectionWindow::execGetScale },
			{ "GetSpin", &AColorCorrectionWindow::execGetSpin },
			{ "GetYaw", &AColorCorrectionWindow::execGetYaw },
			{ "SetDistanceFromCenter", &AColorCorrectionWindow::execSetDistanceFromCenter },
			{ "SetLatitude", &AColorCorrectionWindow::execSetLatitude },
			{ "SetLongitude", &AColorCorrectionWindow::execSetLongitude },
			{ "SetOrigin", &AColorCorrectionWindow::execSetOrigin },
			{ "SetPitch", &AColorCorrectionWindow::execSetPitch },
			{ "SetPositionalParams", &AColorCorrectionWindow::execSetPositionalParams },
			{ "SetRadialOffset", &AColorCorrectionWindow::execSetRadialOffset },
			{ "SetScale", &AColorCorrectionWindow::execSetScale },
			{ "SetSpin", &AColorCorrectionWindow::execSetSpin },
			{ "SetYaw", &AColorCorrectionWindow::execSetYaw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics
	{
		struct ColorCorrectionWindow_eventGetDistanceFromCenter_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetDistanceFromCenter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetDistanceFromCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::ColorCorrectionWindow_eventGetDistanceFromCenter_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics
	{
		struct ColorCorrectionWindow_eventGetLatitude_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetLatitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetLatitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::ColorCorrectionWindow_eventGetLatitude_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics
	{
		struct ColorCorrectionWindow_eventGetLongitude_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetLongitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetLongitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::ColorCorrectionWindow_eventGetLongitude_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics
	{
		struct ColorCorrectionWindow_eventGetOrigin_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::ColorCorrectionWindow_eventGetOrigin_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics
	{
		struct ColorCorrectionWindow_eventGetPitch_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::ColorCorrectionWindow_eventGetPitch_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics
	{
		struct ColorCorrectionWindow_eventGetPositionalParams_Parms
		{
			FDisplayClusterPositionalParams ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetPositionalParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams, METADATA_PARAMS(nullptr, 0) }; // 2794287409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetPositionalParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::ColorCorrectionWindow_eventGetPositionalParams_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics
	{
		struct ColorCorrectionWindow_eventGetRadialOffset_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetRadialOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetRadialOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::ColorCorrectionWindow_eventGetRadialOffset_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics
	{
		struct ColorCorrectionWindow_eventGetScale_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::ColorCorrectionWindow_eventGetScale_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics
	{
		struct ColorCorrectionWindow_eventGetSpin_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetSpin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetSpin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::ColorCorrectionWindow_eventGetSpin_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetSpin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetSpin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics
	{
		struct ColorCorrectionWindow_eventGetYaw_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventGetYaw_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "GetYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::ColorCorrectionWindow_eventGetYaw_Parms), Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_GetYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_GetYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics
	{
		struct ColorCorrectionWindow_eventSetDistanceFromCenter_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetDistanceFromCenter_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetDistanceFromCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::ColorCorrectionWindow_eventSetDistanceFromCenter_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics
	{
		struct ColorCorrectionWindow_eventSetLatitude_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetLatitude_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetLatitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::ColorCorrectionWindow_eventSetLatitude_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics
	{
		struct ColorCorrectionWindow_eventSetLongitude_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetLongitude_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "Comment", "// ~Begin IDisplayClusterStageActor interface\n" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
		{ "ToolTip", "~Begin IDisplayClusterStageActor interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetLongitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::ColorCorrectionWindow_eventSetLongitude_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics
	{
		struct ColorCorrectionWindow_eventSetOrigin_Parms
		{
			FTransform InOrigin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::NewProp_InOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::NewProp_InOrigin = { "InOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetOrigin_Parms, InOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::NewProp_InOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::NewProp_InOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::NewProp_InOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::ColorCorrectionWindow_eventSetOrigin_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics
	{
		struct ColorCorrectionWindow_eventSetPitch_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetPitch_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::ColorCorrectionWindow_eventSetPitch_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics
	{
		struct ColorCorrectionWindow_eventSetPositionalParams_Parms
		{
			FDisplayClusterPositionalParams InParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetPositionalParams_Parms, InParams), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::NewProp_InParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::NewProp_InParams_MetaData)) }; // 2794287409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::NewProp_InParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetPositionalParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::ColorCorrectionWindow_eventSetPositionalParams_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics
	{
		struct ColorCorrectionWindow_eventSetRadialOffset_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetRadialOffset_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetRadialOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::ColorCorrectionWindow_eventSetRadialOffset_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics
	{
		struct ColorCorrectionWindow_eventSetScale_Parms
		{
			FVector2D InScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::NewProp_InScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::NewProp_InScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::NewProp_InScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::ColorCorrectionWindow_eventSetScale_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics
	{
		struct ColorCorrectionWindow_eventSetSpin_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetSpin_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetSpin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::ColorCorrectionWindow_eventSetSpin_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetSpin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetSpin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics
	{
		struct ColorCorrectionWindow_eventSetYaw_Parms
		{
			double InValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorCorrectionWindow_eventSetYaw_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorCorrectionWindow, nullptr, "SetYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::ColorCorrectionWindow_eventSetYaw_Parms), Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorCorrectionWindow_SetYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorCorrectionWindow_SetYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorCorrectionWindow);
	UClass* Z_Construct_UClass_AColorCorrectionWindow_NoRegister()
	{
		return AColorCorrectionWindow::StaticClass();
	}
	struct Z_Construct_UClass_AColorCorrectionWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionalParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionalParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorCorrectionWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AColorCorrectRegion,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AColorCorrectionWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetDistanceFromCenter, "GetDistanceFromCenter" }, // 3394636301
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetLatitude, "GetLatitude" }, // 3525071634
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetLongitude, "GetLongitude" }, // 994722920
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetOrigin, "GetOrigin" }, // 4203634632
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetPitch, "GetPitch" }, // 408645472
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetPositionalParams, "GetPositionalParams" }, // 2242586430
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetRadialOffset, "GetRadialOffset" }, // 2380804294
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetScale, "GetScale" }, // 1192990080
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetSpin, "GetSpin" }, // 1169360084
		{ &Z_Construct_UFunction_AColorCorrectionWindow_GetYaw, "GetYaw" }, // 1556666933
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetDistanceFromCenter, "SetDistanceFromCenter" }, // 388597177
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetLatitude, "SetLatitude" }, // 1966099592
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetLongitude, "SetLongitude" }, // 2134135342
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetOrigin, "SetOrigin" }, // 865558489
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetPitch, "SetPitch" }, // 3049068192
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetPositionalParams, "SetPositionalParams" }, // 2767314025
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetRadialOffset, "SetRadialOffset" }, // 1868342100
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetScale, "SetScale" }, // 4239993487
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetSpin, "SetSpin" }, // 3016257037
		{ &Z_Construct_UFunction_AColorCorrectionWindow_SetYaw, "SetYaw" }, // 1579926998
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionWindow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Color Correction Window that functions the same way as Color Correction Regions except it modifies anything that is behind it.\n * Color Correction Windows do not have Priority property and instead are sorted based on the distance from the camera.\n */" },
		{ "IncludePath", "ColorCorrectWindow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
		{ "ToolTip", "A Color Correction Window that functions the same way as Color Correction Regions except it modifies anything that is behind it.\nColor Correction Windows do not have Priority property and instead are sorted based on the distance from the camera." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectionWindow, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType_MetaData[] = {
		{ "Category", "Color Correction" },
		{ "Comment", "/** Region type. */" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
		{ "ToolTip", "Region type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectionWindow, WindowType), Z_Construct_UEnum_ColorCorrectRegions_EColorCorrectWindowType, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType_MetaData)) }; // 2061992170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_PositionalParams_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_PositionalParams = { "PositionalParams", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectionWindow, PositionalParams), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_PositionalParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_PositionalParams_MetaData)) }; // 2794287409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_Origin_MetaData[] = {
		{ "BlueprintGetter", "GetOrigin" },
		{ "BlueprintSetter", "SetOrigin" },
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorCorrectionWindow, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorCorrectionWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_WindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_PositionalParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorCorrectionWindow_Statics::NewProp_Origin,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AColorCorrectionWindow_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayClusterStageActor_NoRegister, (int32)VTABLE_OFFSET(AColorCorrectionWindow, IDisplayClusterStageActor), false },  // 1221229347
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorCorrectionWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorCorrectionWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorCorrectionWindow_Statics::ClassParams = {
		&AColorCorrectionWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AColorCorrectionWindow_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AColorCorrectionWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AColorCorrectionWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColorCorrectionWindow()
	{
		if (!Z_Registration_Info_UClass_AColorCorrectionWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorCorrectionWindow.OuterSingleton, Z_Construct_UClass_AColorCorrectionWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorCorrectionWindow.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<AColorCorrectionWindow>()
	{
		return AColorCorrectionWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorCorrectionWindow);
	void ADEPRECATED_ColorCorrectWindow::StaticRegisterNativesADEPRECATED_ColorCorrectWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADEPRECATED_ColorCorrectWindow);
	UClass* Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_NoRegister()
	{
		return ADEPRECATED_ColorCorrectWindow::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AColorCorrectionWindow,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorCorrectRegions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeprecationMessage", "This is a deprecated version of Color Correct Window. Please re-create Color Correct Window to remove this warning." },
		{ "IncludePath", "ColorCorrectWindow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ColorCorrectWindow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_ColorCorrectWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::ClassParams = {
		&ADEPRECATED_ColorCorrectWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x029002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow()
	{
		if (!Z_Registration_Info_UClass_ADEPRECATED_ColorCorrectWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADEPRECATED_ColorCorrectWindow.OuterSingleton, Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADEPRECATED_ColorCorrectWindow.OuterSingleton;
	}
	template<> COLORCORRECTREGIONS_API UClass* StaticClass<ADEPRECATED_ColorCorrectWindow>()
	{
		return ADEPRECATED_ColorCorrectWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_ColorCorrectWindow);
	ADEPRECATED_ColorCorrectWindow::~ADEPRECATED_ColorCorrectWindow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AColorCorrectionWindow, AColorCorrectionWindow::StaticClass, TEXT("AColorCorrectionWindow"), &Z_Registration_Info_UClass_AColorCorrectionWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorCorrectionWindow), 41970172U) },
		{ Z_Construct_UClass_ADEPRECATED_ColorCorrectWindow, ADEPRECATED_ColorCorrectWindow::StaticClass, TEXT("ADEPRECATED_ColorCorrectWindow"), &Z_Registration_Info_UClass_ADEPRECATED_ColorCorrectWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADEPRECATED_ColorCorrectWindow), 490993098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_2594687245(TEXT("/Script/ColorCorrectRegions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
