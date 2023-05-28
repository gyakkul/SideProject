// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/PawnSensingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnSensingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics
	{
		struct PawnSensingComponent_eventSeePawnDelegate_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSeePawnDelegate_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SeePawnDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PawnSensingComponent_eventSeePawnDelegate_Parms), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPawnSensingComponent::FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn)
{
	struct PawnSensingComponent_eventSeePawnDelegate_Parms
	{
		APawn* Pawn;
	};
	PawnSensingComponent_eventSeePawnDelegate_Parms Parms;
	Parms.Pawn=Pawn;
	SeePawnDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics
	{
		struct PawnSensingComponent_eventHearNoiseDelegate_Parms
		{
			APawn* Instigator;
			FVector Location;
			float Volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "HearNoiseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PawnSensingComponent_eventHearNoiseDelegate_Parms), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPawnSensingComponent::FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume)
{
	struct PawnSensingComponent_eventHearNoiseDelegate_Parms
	{
		APawn* Instigator;
		FVector Location;
		float Volume;
	};
	PawnSensingComponent_eventHearNoiseDelegate_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.Location=Location;
	Parms.Volume=Volume;
	HearNoiseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPawnSensingComponent::execGetPeripheralVisionCosine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionCosine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnSensingComponent::execGetPeripheralVisionAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnSensingComponent::execSetPeripheralVisionAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPeripheralVisionAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPeripheralVisionAngle(Z_Param_NewPeripheralVisionAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnSensingComponent::execSetSensingUpdatesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensingUpdatesEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnSensingComponent::execSetSensingInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSensingInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensingInterval(Z_Param_NewSensingInterval);
		P_NATIVE_END;
	}
	void UPawnSensingComponent::StaticRegisterNativesUPawnSensingComponent()
	{
		UClass* Class = UPawnSensingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPeripheralVisionAngle", &UPawnSensingComponent::execGetPeripheralVisionAngle },
			{ "GetPeripheralVisionCosine", &UPawnSensingComponent::execGetPeripheralVisionCosine },
			{ "SetPeripheralVisionAngle", &UPawnSensingComponent::execSetPeripheralVisionAngle },
			{ "SetSensingInterval", &UPawnSensingComponent::execSetSensingInterval },
			{ "SetSensingUpdatesEnabled", &UPawnSensingComponent::execSetSensingUpdatesEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics
	{
		struct PawnSensingComponent_eventGetPeripheralVisionAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "GetPeripheralVisionAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PawnSensingComponent_eventGetPeripheralVisionAngle_Parms), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics
	{
		struct PawnSensingComponent_eventGetPeripheralVisionCosine_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionCosine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "GetPeripheralVisionCosine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PawnSensingComponent_eventGetPeripheralVisionCosine_Parms), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics
	{
		struct PawnSensingComponent_eventSetPeripheralVisionAngle_Parms
		{
			float NewPeripheralVisionAngle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPeripheralVisionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPeripheralVisionAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle = { "NewPeripheralVisionAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSetPeripheralVisionAngle_Parms, NewPeripheralVisionAngle), METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/** Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetPeripheralVisionAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PawnSensingComponent_eventSetPeripheralVisionAngle_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics
	{
		struct PawnSensingComponent_eventSetSensingInterval_Parms
		{
			float NewSensingInterval;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSensingInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSensingInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval = { "NewSensingInterval", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSetSensingInterval_Parms, NewSensingInterval), METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/**\n\x09 * Changes the SensingInterval.\n\x09 * If we are currently waiting for an interval, this can either extend or shorten that interval.\n\x09 * A value <= 0 prevents any updates.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Changes the SensingInterval.\nIf we are currently waiting for an interval, this can either extend or shorten that interval.\nA value <= 0 prevents any updates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetSensingInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PawnSensingComponent_eventSetSensingInterval_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics
	{
		struct PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/** Enables or disables sensing updates. The timer is reset in either case. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Enables or disables sensing updates. The timer is reset in either case." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetSensingUpdatesEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnSensingComponent);
	UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister()
	{
		return UPawnSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOSHearingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOSHearingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensingInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensingInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingMaxSoundAge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingMaxSoundAge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSensingUpdates_MetaData[];
#endif
		static void NewProp_bEnableSensingUpdates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSensingUpdates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySensePlayers_MetaData[];
#endif
		static void NewProp_bOnlySensePlayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySensePlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeePawns_MetaData[];
#endif
		static void NewProp_bSeePawns_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeePawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHearNoises_MetaData[];
#endif
		static void NewProp_bHearNoises_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHearNoises;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSeePawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeePawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHearNoise_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHearNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionCosine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionCosine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnSensingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle, "GetPeripheralVisionAngle" }, // 2690005908
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine, "GetPeripheralVisionCosine" }, // 3029061298
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, "HearNoiseDelegate__DelegateSignature" }, // 2712282997
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, "SeePawnDelegate__DelegateSignature" }, // 1319771908
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle, "SetPeripheralVisionAngle" }, // 4222953244
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval, "SetSensingInterval" }, // 2353295983
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled, "SetSensingUpdatesEnabled" }, // 2253040606
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * SensingComponent encapsulates sensory (ie sight and hearing) settings and functionality for an Actor,\n * allowing the actor to see/hear Pawns in the world. It does nothing on network clients.\n */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Perception/PawnSensingComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "SensingComponent encapsulates sensory (ie sight and hearing) settings and functionality for an Actor,\nallowing the actor to see/hear Pawns in the world. It does nothing on network clients." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold = { "HearingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, HearingThreshold), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold) */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold = { "LOSHearingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, LOSHearingThreshold), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Maximum sight distance. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Maximum sight distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval = { "SensingInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, SensingInterval), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!\n" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge = { "HearingMaxSoundAge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, HearingMaxSoundAge), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled(). */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled()." },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bEnableSensingUpdates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates = { "bEnableSensingUpdates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, will only sense player-controlled pawns in the world. Default: true */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, will only sense player-controlled pawns in the world. Default: true" },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bOnlySensePlayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers = { "bOnlySensePlayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true" },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bSeePawns = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns = { "bSeePawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true\n\x09 * IMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true\nIMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered." },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bHearNoises = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises = { "bHearNoises", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData[] = {
		{ "Comment", "/** Delegate to execute when we see a Pawn. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we see a Pawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn = { "OnSeePawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, OnSeePawn), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData)) }; // 1319771908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData[] = {
		{ "Comment", "/** Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise = { "OnHearNoise", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, OnHearNoise), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData)) }; // 2712282997
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle = { "PeripheralVisionAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionAngle), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData[] = {
		{ "Comment", "/** Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine = { "PeripheralVisionCosine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionCosine), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnSensingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams = {
		&UPawnSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnSensingComponent()
	{
		if (!Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton, Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UPawnSensingComponent>()
	{
		return UPawnSensingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnSensingComponent);
	UPawnSensingComponent::~UPawnSensingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnSensingComponent, UPawnSensingComponent::StaticClass, TEXT("UPawnSensingComponent"), &Z_Registration_Info_UClass_UPawnSensingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnSensingComponent), 1467807560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_2983476296(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
