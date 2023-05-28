// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInputLibrary.h"
#include "EnhancedActionKeyMapping.h"
#include "InputActionValue.h"
#include "PlayerMappableKeySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLibrary();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLibrary_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeySlot();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetFourthPlayerMappableKeySlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetThirdPlayerMappableKeySlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetSecondPlayerMappableKeySlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetFirstPlayerMappableKeySlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerMappableKeySlot*)Z_Param__Result=UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToString)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToString(Z_Param_ActionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis3D)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_ActionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(Z_Param_ActionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis2D)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToAxis1D)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execConv_InputActionValueToBool)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEnhancedInputLibrary::Conv_InputActionValueToBool(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetBoundActionValue)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::GetBoundActionValue(Z_Param_Actor,Z_Param_Action);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execIsActionKeyMappingPlayerMappable)
	{
		P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(Z_Param_Out_ActionKeyMapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetMappingName)
	{
		P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UEnhancedInputLibrary::GetMappingName(Z_Param_Out_ActionKeyMapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execGetPlayerMappableKeySettings)
	{
		P_GET_STRUCT_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionKeyMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlayerMappableKeySettings**)Z_Param__Result=UEnhancedInputLibrary::GetPlayerMappableKeySettings(Z_Param_Out_ActionKeyMapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execMakeInputActionValue)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_X);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Y);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_MatchValueType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::MakeInputActionValue(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Out_MatchValueType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execMakeInputActionValueOfType)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_X);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Y);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
		P_GET_ENUM(EInputActionValueType,Z_Param_ValueType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionValue*)Z_Param__Result=UEnhancedInputLibrary::MakeInputActionValueOfType(Z_Param_X,Z_Param_Y,Z_Param_Z,EInputActionValueType(Z_Param_ValueType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execBreakInputActionValue)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_InActionValue);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_X);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Y);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Z);
		P_GET_ENUM_REF(EInputActionValueType,Z_Param_Out_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEnhancedInputLibrary::BreakInputActionValue(Z_Param_InActionValue,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Z,(EInputActionValueType&)(Z_Param_Out_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputLibrary::execRequestRebuildControlMappingsUsingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_GET_UBOOL(Z_Param_bForceImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(Z_Param_Context,Z_Param_bForceImmediately);
		P_NATIVE_END;
	}
	void UEnhancedInputLibrary::StaticRegisterNativesUEnhancedInputLibrary()
	{
		UClass* Class = UEnhancedInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakInputActionValue", &UEnhancedInputLibrary::execBreakInputActionValue },
			{ "Conv_InputActionValueToAxis1D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis1D },
			{ "Conv_InputActionValueToAxis2D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis2D },
			{ "Conv_InputActionValueToAxis3D", &UEnhancedInputLibrary::execConv_InputActionValueToAxis3D },
			{ "Conv_InputActionValueToBool", &UEnhancedInputLibrary::execConv_InputActionValueToBool },
			{ "Conv_InputActionValueToString", &UEnhancedInputLibrary::execConv_InputActionValueToString },
			{ "GetBoundActionValue", &UEnhancedInputLibrary::execGetBoundActionValue },
			{ "GetFirstPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetFirstPlayerMappableKeySlot },
			{ "GetFourthPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetFourthPlayerMappableKeySlot },
			{ "GetMappingName", &UEnhancedInputLibrary::execGetMappingName },
			{ "GetPlayerMappableKeySettings", &UEnhancedInputLibrary::execGetPlayerMappableKeySettings },
			{ "GetSecondPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetSecondPlayerMappableKeySlot },
			{ "GetThirdPlayerMappableKeySlot", &UEnhancedInputLibrary::execGetThirdPlayerMappableKeySlot },
			{ "IsActionKeyMappingPlayerMappable", &UEnhancedInputLibrary::execIsActionKeyMappingPlayerMappable },
			{ "MakeInputActionValue", &UEnhancedInputLibrary::execMakeInputActionValue },
			{ "MakeInputActionValueOfType", &UEnhancedInputLibrary::execMakeInputActionValueOfType },
			{ "RequestRebuildControlMappingsUsingContext", &UEnhancedInputLibrary::execRequestRebuildControlMappingsUsingContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics
	{
		struct EnhancedInputLibrary_eventBreakInputActionValue_Parms
		{
			FInputActionValue InActionValue;
			double X;
			double Y;
			double Z;
			EInputActionValueType Type;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InActionValue;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_InActionValue = { "InActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, InActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventBreakInputActionValue_Parms, Type), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(nullptr, 0) }; // 554781252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_InActionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Breaks an ActionValue into X, Y, Z. Axes not supported by value type will be 0. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks an ActionValue into X, Y, Z. Axes not supported by value type will be 0." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "BreakInputActionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::EnhancedInputLibrary_eventBreakInputActionValue_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics
	{
		struct EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms
		{
			FInputActionValue InValue;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 1D axis (double) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 1D axis (double) input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis1D_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics
	{
		struct EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms
		{
			FInputActionValue InValue;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 2D axis (Vector2D) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 2D axis (Vector2D) input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis2D_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics
	{
		struct EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms
		{
			FInputActionValue ActionValue;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ActionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a 3D axis (Vector) input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a 3D axis (Vector) input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToAxis3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::EnhancedInputLibrary_eventConv_InputActionValueToAxis3D_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics
	{
		struct EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms
		{
			FInputActionValue InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms, InValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	void Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret an InputActionValue as a boolean input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Interpret an InputActionValue as a boolean input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::EnhancedInputLibrary_eventConv_InputActionValueToBool_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics
	{
		struct EnhancedInputLibrary_eventConv_InputActionValueToString_Parms
		{
			FInputActionValue ActionValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ActionValue = { "ActionValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToString_Parms, ActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventConv_InputActionValueToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ActionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts a FInputActionValue to a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (InputActionValue)" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Converts a FInputActionValue to a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "Conv_InputActionValueToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::EnhancedInputLibrary_eventConv_InputActionValueToString_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics
	{
		struct EnhancedInputLibrary_eventGetBoundActionValue_Parms
		{
			AActor* Actor;
			const UInputAction* Action;
			FInputActionValue ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetBoundActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// GetInputActionvalue internal accessor function for actions that have been bound to from a UEnhancedInputComponent\n" },
		{ "HidePin", "Action" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "GetInputActionvalue internal accessor function for actions that have been bound to from a UEnhancedInputComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetBoundActionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::EnhancedInputLibrary_eventGetBoundActionValue_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics
	{
		struct EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms
		{
			FPlayerMappableKeySlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(nullptr, 0) }; // 1767934072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "First Player Mappable Key Slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetFirstPlayerMappableKeySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFirstPlayerMappableKeySlot_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics
	{
		struct EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms
		{
			FPlayerMappableKeySlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(nullptr, 0) }; // 1767934072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Fourth Player Mappable Key Slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetFourthPlayerMappableKeySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetFourthPlayerMappableKeySlot_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics
	{
		struct EnhancedInputLibrary_eventGetMappingName_Parms
		{
			FEnhancedActionKeyMapping ActionKeyMapping;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetMappingName_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping_MetaData)) }; // 2762654059
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetMappingName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ActionKeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Returns the name of the mapping based on setting behavior used. If no name is found in the Mappable Key Settings it will return the name set in Player Mappable Options if bIsPlayerMappable is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Mapping Name" },
		{ "ToolTip", "Returns the name of the mapping based on setting behavior used. If no name is found in the Mappable Key Settings it will return the name set in Player Mappable Options if bIsPlayerMappable is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetMappingName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::EnhancedInputLibrary_eventGetMappingName_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics
	{
		struct EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms
		{
			FEnhancedActionKeyMapping ActionKeyMapping;
			UPlayerMappableKeySettings* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping_MetaData)) }; // 2762654059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms, ReturnValue), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ActionKeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Returns the Player Mappable Key Settings owned by the Action Key Mapping or by the referenced Input Action, or nothing based of the Setting Behavior.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Player Mappable Key Settings" },
		{ "ToolTip", "Returns the Player Mappable Key Settings owned by the Action Key Mapping or by the referenced Input Action, or nothing based of the Setting Behavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetPlayerMappableKeySettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::EnhancedInputLibrary_eventGetPlayerMappableKeySettings_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics
	{
		struct EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms
		{
			FPlayerMappableKeySlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(nullptr, 0) }; // 1767934072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Second Player Mappable Key Slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetSecondPlayerMappableKeySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetSecondPlayerMappableKeySlot_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics
	{
		struct EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms
		{
			FPlayerMappableKeySlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappableKeySlot, METADATA_PARAMS(nullptr, 0) }; // 1767934072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Third Player Mappable Key Slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "GetThirdPlayerMappableKeySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::EnhancedInputLibrary_eventGetThirdPlayerMappableKeySlot_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics
	{
		struct EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms
		{
			FEnhancedActionKeyMapping ActionKeyMapping;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping = { "ActionKeyMapping", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms, ActionKeyMapping), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping_MetaData)) }; // 2762654059
	void Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ActionKeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Returns true if this Action Key Mapping either holds a Player Mappable Key Settings or is set bIsPlayerMappable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ReturnDisplayName", "Is Player Mappable" },
		{ "ToolTip", "Returns true if this Action Key Mapping either holds a Player Mappable Key Settings or is set bIsPlayerMappable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "IsActionKeyMappingPlayerMappable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::EnhancedInputLibrary_eventIsActionKeyMappingPlayerMappable_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics
	{
		struct EnhancedInputLibrary_eventMakeInputActionValue_Parms
		{
			double X;
			double Y;
			double Z;
			FInputActionValue MatchValueType;
			FInputActionValue ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchValueType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, Z), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType = { "MatchValueType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, MatchValueType), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType_MetaData)) }; // 2388133963
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_MatchValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "This version of MakeInputActionValue has been deprecated, please use MakeInputActionValueOfType" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "MakeInputActionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::EnhancedInputLibrary_eventMakeInputActionValue_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics
	{
		struct EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms
		{
			double X;
			double Y;
			double Z;
			EInputActionValueType ValueType;
			FInputActionValue ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_X;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Y;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, ValueType), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_MetaData)) }; // 554781252
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Builds an ActionValue from X, Y, Z. Inherits type from an existing ActionValue. Ignores axis values unused by the provided value type.\n\x09 * @note Intended for use in Input Modifier Modify Raw overloads to modify an existing Input Action Value.\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Builds an ActionValue from X, Y, Z. Inherits type from an existing ActionValue. Ignores axis values unused by the provided value type.\n@note Intended for use in Input Modifier Modify Raw overloads to modify an existing Input Action Value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "MakeInputActionValueOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::EnhancedInputLibrary_eventMakeInputActionValueOfType_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics
	{
		struct EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms
		{
			const UInputMappingContext* Context;
			bool bForceImmediately;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_bForceImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context_MetaData)) };
	void Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately_SetBit(void* Obj)
	{
		((EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms*)Obj)->bForceImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately = { "bForceImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms), &Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::NewProp_bForceImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Flag all enhanced input subsystems making use of the mapping context for reapplication of all control mappings at the end of this frame.\n\x09 * @param Context\x09\x09\x09\x09Mappings will be rebuilt for all subsystems utilizing this context.\n\x09 * @param bForceImmediately\x09\x09The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame.\n\x09 */" },
		{ "CPP_Default_bForceImmediately", "false" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
		{ "ToolTip", "Flag all enhanced input subsystems making use of the mapping context for reapplication of all control mappings at the end of this frame.\n@param Context                               Mappings will be rebuilt for all subsystems utilizing this context.\n@param bForceImmediately             The mapping changes will be applied synchronously, rather than at the end of the frame, making them available to the input system on the same frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLibrary, nullptr, "RequestRebuildControlMappingsUsingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::EnhancedInputLibrary_eventRequestRebuildControlMappingsUsingContext_Parms), Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputLibrary);
	UClass* Z_Construct_UClass_UEnhancedInputLibrary_NoRegister()
	{
		return UEnhancedInputLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnhancedInputLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_BreakInputActionValue, "BreakInputActionValue" }, // 1976396381
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis1D, "Conv_InputActionValueToAxis1D" }, // 2513174287
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis2D, "Conv_InputActionValueToAxis2D" }, // 1747303407
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToAxis3D, "Conv_InputActionValueToAxis3D" }, // 1411975067
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToBool, "Conv_InputActionValueToBool" }, // 3068653000
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_Conv_InputActionValueToString, "Conv_InputActionValueToString" }, // 2785304029
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetBoundActionValue, "GetBoundActionValue" }, // 1700030290
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot, "GetFirstPlayerMappableKeySlot" }, // 2987495709
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot, "GetFourthPlayerMappableKeySlot" }, // 4278962834
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetMappingName, "GetMappingName" }, // 982418216
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetPlayerMappableKeySettings, "GetPlayerMappableKeySettings" }, // 805098775
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot, "GetSecondPlayerMappableKeySlot" }, // 3791367688
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot, "GetThirdPlayerMappableKeySlot" }, // 3801333235
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable, "IsActionKeyMappingPlayerMappable" }, // 628608321
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValue, "MakeInputActionValue" }, // 1959032355
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_MakeInputActionValueOfType, "MakeInputActionValueOfType" }, // 1217728689
		{ &Z_Construct_UFunction_UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext, "RequestRebuildControlMappingsUsingContext" }, // 2464340982
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnhancedInputLibrary.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputLibrary_Statics::ClassParams = {
		&UEnhancedInputLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputLibrary()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton, Z_Construct_UClass_UEnhancedInputLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputLibrary.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputLibrary>()
	{
		return UEnhancedInputLibrary::StaticClass();
	}
	UEnhancedInputLibrary::UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputLibrary);
	UEnhancedInputLibrary::~UEnhancedInputLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputLibrary, UEnhancedInputLibrary::StaticClass, TEXT("UEnhancedInputLibrary"), &Z_Registration_Info_UClass_UEnhancedInputLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputLibrary), 2739462136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_4209039373(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
