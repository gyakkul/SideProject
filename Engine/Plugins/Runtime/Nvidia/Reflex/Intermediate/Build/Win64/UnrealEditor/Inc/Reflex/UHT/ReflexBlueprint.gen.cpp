// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/ReflexBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflexBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	REFLEX_API UClass* Z_Construct_UClass_UReflexBlueprintLibrary();
	REFLEX_API UClass* Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister();
	REFLEX_API UEnum* Z_Construct_UEnum_Reflex_EReflexMode();
	UPackage* Z_Construct_UPackage__Script_Reflex();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflexMode;
	static UEnum* EReflexMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflexMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflexMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Reflex_EReflexMode, (UObject*)Z_Construct_UPackage__Script_Reflex(), TEXT("EReflexMode"));
		}
		return Z_Registration_Info_UEnum_EReflexMode.OuterSingleton;
	}
	template<> REFLEX_API UEnum* StaticEnum<EReflexMode>()
	{
		return EReflexMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Reflex_EReflexMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enumerators[] = {
		{ "EReflexMode::Disabled", (int64)EReflexMode::Disabled },
		{ "EReflexMode::Enabled", (int64)EReflexMode::Enabled },
		{ "EReflexMode::EnabledPlusBoost", (int64)EReflexMode::EnabledPlusBoost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EReflexMode::Disabled" },
		{ "Enabled.DisplayName", "Enabled" },
		{ "Enabled.Name", "EReflexMode::Enabled" },
		{ "EnabledPlusBoost.DisplayName", "Enabled + Boost" },
		{ "EnabledPlusBoost.Name", "EReflexMode::EnabledPlusBoost" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Reflex_EReflexMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Reflex,
		nullptr,
		"EReflexMode",
		"EReflexMode",
		Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Reflex_EReflexMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Reflex_EReflexMode()
	{
		if (!Z_Registration_Info_UEnum_EReflexMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflexMode.InnerSingleton, Z_Construct_UEnum_Reflex_EReflexMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflexMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UReflexBlueprintLibrary::GetRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetGameLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UReflexBlueprintLibrary::GetGameLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetGameToRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UReflexBlueprintLibrary::GetGameToRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetFlashIndicatorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReflexBlueprintLibrary::GetFlashIndicatorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execSetFlashIndicatorEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReflexBlueprintLibrary::SetFlashIndicatorEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetReflexMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EReflexMode*)Z_Param__Result=UReflexBlueprintLibrary::GetReflexMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execSetReflexMode)
	{
		P_GET_ENUM(EReflexMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReflexBlueprintLibrary::SetReflexMode(EReflexMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReflexBlueprintLibrary::execGetReflexAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReflexBlueprintLibrary::GetReflexAvailable();
		P_NATIVE_END;
	}
	void UReflexBlueprintLibrary::StaticRegisterNativesUReflexBlueprintLibrary()
	{
		UClass* Class = UReflexBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFlashIndicatorEnabled", &UReflexBlueprintLibrary::execGetFlashIndicatorEnabled },
			{ "GetGameLatencyInMs", &UReflexBlueprintLibrary::execGetGameLatencyInMs },
			{ "GetGameToRenderLatencyInMs", &UReflexBlueprintLibrary::execGetGameToRenderLatencyInMs },
			{ "GetReflexAvailable", &UReflexBlueprintLibrary::execGetReflexAvailable },
			{ "GetReflexMode", &UReflexBlueprintLibrary::execGetReflexMode },
			{ "GetRenderLatencyInMs", &UReflexBlueprintLibrary::execGetRenderLatencyInMs },
			{ "SetFlashIndicatorEnabled", &UReflexBlueprintLibrary::execSetFlashIndicatorEnabled },
			{ "SetReflexMode", &UReflexBlueprintLibrary::execSetReflexMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics
	{
		struct ReflexBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReflexBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReflexBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms), &Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetFlashIndicatorEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::ReflexBlueprintLibrary_eventGetFlashIndicatorEnabled_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics
	{
		struct ReflexBlueprintLibrary_eventGetGameLatencyInMs_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReflexBlueprintLibrary_eventGetGameLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetGameLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::ReflexBlueprintLibrary_eventGetGameLatencyInMs_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics
	{
		struct ReflexBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReflexBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetGameToRenderLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::ReflexBlueprintLibrary_eventGetGameToRenderLatencyInMs_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics
	{
		struct ReflexBlueprintLibrary_eventGetReflexAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReflexBlueprintLibrary_eventGetReflexAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReflexBlueprintLibrary_eventGetReflexAvailable_Parms), &Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetReflexAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::ReflexBlueprintLibrary_eventGetReflexAvailable_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics
	{
		struct ReflexBlueprintLibrary_eventGetReflexMode_Parms
		{
			EReflexMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReflexBlueprintLibrary_eventGetReflexMode_Parms, ReturnValue), Z_Construct_UEnum_Reflex_EReflexMode, METADATA_PARAMS(nullptr, 0) }; // 4196491942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetReflexMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::ReflexBlueprintLibrary_eventGetReflexMode_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics
	{
		struct ReflexBlueprintLibrary_eventGetRenderLatencyInMs_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReflexBlueprintLibrary_eventGetRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "GetRenderLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::ReflexBlueprintLibrary_eventGetRenderLatencyInMs_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics
	{
		struct ReflexBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ReflexBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReflexBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms), &Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "SetFlashIndicatorEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::ReflexBlueprintLibrary_eventSetFlashIndicatorEnabled_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics
	{
		struct ReflexBlueprintLibrary_eventSetReflexMode_Parms
		{
			EReflexMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReflexBlueprintLibrary_eventSetReflexMode_Parms, Mode), Z_Construct_UEnum_Reflex_EReflexMode, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode_MetaData)) }; // 4196491942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflex" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReflexBlueprintLibrary, nullptr, "SetReflexMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::ReflexBlueprintLibrary_eventSetReflexMode_Parms), Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReflexBlueprintLibrary);
	UClass* Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister()
	{
		return UReflexBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReflexBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReflexBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Reflex,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReflexBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled, "GetFlashIndicatorEnabled" }, // 598005427
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs, "GetGameLatencyInMs" }, // 1598536091
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs, "GetGameToRenderLatencyInMs" }, // 864929128
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable, "GetReflexAvailable" }, // 3089612584
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode, "GetReflexMode" }, // 533342214
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs, "GetRenderLatencyInMs" }, // 3587647607
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled, "SetFlashIndicatorEnabled" }, // 3110346644
		{ &Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode, "SetReflexMode" }, // 935754241
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflexBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReflexBlueprint.h" },
		{ "ModuleRelativePath", "Public/ReflexBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReflexBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReflexBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReflexBlueprintLibrary_Statics::ClassParams = {
		&UReflexBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReflexBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReflexBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReflexBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UReflexBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton;
	}
	template<> REFLEX_API UClass* StaticClass<UReflexBlueprintLibrary>()
	{
		return UReflexBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReflexBlueprintLibrary);
	UReflexBlueprintLibrary::~UReflexBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::EnumInfo[] = {
		{ EReflexMode_StaticEnum, TEXT("EReflexMode"), &Z_Registration_Info_UEnum_EReflexMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4196491942U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReflexBlueprintLibrary, UReflexBlueprintLibrary::StaticClass, TEXT("UReflexBlueprintLibrary"), &Z_Registration_Info_UClass_UReflexBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReflexBlueprintLibrary), 1845450685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_3002991267(TEXT("/Script/Reflex"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
