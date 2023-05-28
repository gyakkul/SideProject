// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuoyancyComponent.h"
#include "BuoyancyTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent();
	WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature();
	WATER_API UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyData();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalPontoon();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics
	{
		struct _Script_Water_eventOnPontoonEnteredWater_Parms
		{
			FSphericalPontoon Pontoon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::NewProp_Pontoon = { "Pontoon", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Water_eventOnPontoonEnteredWater_Parms, Pontoon), Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData)) }; // 3492598596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::NewProp_Pontoon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Water, nullptr, "OnPontoonEnteredWater__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::_Script_Water_eventOnPontoonEnteredWater_Parms), Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPontoonEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonEnteredWater, FSphericalPontoon const& Pontoon)
{
	struct _Script_Water_eventOnPontoonEnteredWater_Parms
	{
		FSphericalPontoon Pontoon;
	};
	_Script_Water_eventOnPontoonEnteredWater_Parms Parms;
	Parms.Pontoon=Pontoon;
	OnPontoonEnteredWater.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics
	{
		struct _Script_Water_eventOnPontoonExitedWater_Parms
		{
			FSphericalPontoon Pontoon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::NewProp_Pontoon = { "Pontoon", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Water_eventOnPontoonExitedWater_Parms, Pontoon), Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::NewProp_Pontoon_MetaData)) }; // 3492598596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::NewProp_Pontoon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Water, nullptr, "OnPontoonExitedWater__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::_Script_Water_eventOnPontoonExitedWater_Parms), Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPontoonExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonExitedWater, FSphericalPontoon const& Pontoon)
{
	struct _Script_Water_eventOnPontoonExitedWater_Parms
	{
		FSphericalPontoon Pontoon;
	};
	_Script_Water_eventOnPontoonExitedWater_Parms Parms;
	Parms.Pontoon=Pontoon;
	OnPontoonExitedWater.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBuoyancyComponent::execGetLastWaterSurfaceInfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterPlaneLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterPlaneNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterSurfacePosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutWaterDepth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWaterBodyIdx);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWaterVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastWaterSurfaceInfo(Z_Param_Out_OutWaterPlaneLocation,Z_Param_Out_OutWaterPlaneNormal,Z_Param_Out_OutWaterSurfacePosition,Z_Param_Out_OutWaterDepth,Z_Param_Out_OutWaterBodyIdx,Z_Param_Out_OutWaterVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuoyancyComponent::execOnPontoonExitedWater)
	{
		P_GET_STRUCT_REF(FSphericalPontoon,Z_Param_Out_Pontoon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPontoonExitedWater(Z_Param_Out_Pontoon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuoyancyComponent::execOnPontoonEnteredWater)
	{
		P_GET_STRUCT_REF(FSphericalPontoon,Z_Param_Out_Pontoon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPontoonEnteredWater(Z_Param_Out_Pontoon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuoyancyComponent::execIsInWaterBody)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInWaterBody();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuoyancyComponent::execIsOverlappingWaterBody)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOverlappingWaterBody();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBuoyancyComponent::execGetCurrentWaterBodyComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWaterBodyComponent*>*)Z_Param__Result=P_THIS->GetCurrentWaterBodyComponents();
		P_NATIVE_END;
	}
	void UBuoyancyComponent::StaticRegisterNativesUBuoyancyComponent()
	{
		UClass* Class = UBuoyancyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWaterBodyComponents", &UBuoyancyComponent::execGetCurrentWaterBodyComponents },
			{ "GetLastWaterSurfaceInfo", &UBuoyancyComponent::execGetLastWaterSurfaceInfo },
			{ "IsInWaterBody", &UBuoyancyComponent::execIsInWaterBody },
			{ "IsOverlappingWaterBody", &UBuoyancyComponent::execIsOverlappingWaterBody },
			{ "OnPontoonEnteredWater", &UBuoyancyComponent::execOnPontoonEnteredWater },
			{ "OnPontoonExitedWater", &UBuoyancyComponent::execOnPontoonExitedWater },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics
	{
		struct BuoyancyComponent_eventGetCurrentWaterBodyComponents_Parms
		{
			TArray<UWaterBodyComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetCurrentWaterBodyComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "GetCurrentWaterBodyComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::BuoyancyComponent_eventGetCurrentWaterBodyComponents_Parms), Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics
	{
		struct BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms
		{
			FVector OutWaterPlaneLocation;
			FVector OutWaterPlaneNormal;
			FVector OutWaterSurfacePosition;
			float OutWaterDepth;
			int32 OutWaterBodyIdx;
			FVector OutWaterVelocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterPlaneLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterPlaneNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterSurfacePosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutWaterDepth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWaterBodyIdx;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaterVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterPlaneLocation = { "OutWaterPlaneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterPlaneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterPlaneNormal = { "OutWaterPlaneNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterSurfacePosition = { "OutWaterSurfacePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterSurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterDepth = { "OutWaterDepth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterBodyIdx = { "OutWaterBodyIdx", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterBodyIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterVelocity = { "OutWaterVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms, OutWaterVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterPlaneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterPlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterSurfacePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterBodyIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::NewProp_OutWaterVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "GetLastWaterSurfaceInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::BuoyancyComponent_eventGetLastWaterSurfaceInfo_Parms), Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics
	{
		struct BuoyancyComponent_eventIsInWaterBody_Parms
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
	void Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuoyancyComponent_eventIsInWaterBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuoyancyComponent_eventIsInWaterBody_Parms), &Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "IsInWaterBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::BuoyancyComponent_eventIsInWaterBody_Parms), Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics
	{
		struct BuoyancyComponent_eventIsOverlappingWaterBody_Parms
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
	void Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuoyancyComponent_eventIsOverlappingWaterBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuoyancyComponent_eventIsOverlappingWaterBody_Parms), &Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "IsOverlappingWaterBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::BuoyancyComponent_eventIsOverlappingWaterBody_Parms), Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics
	{
		struct BuoyancyComponent_eventOnPontoonEnteredWater_Parms
		{
			FSphericalPontoon Pontoon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::NewProp_Pontoon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::NewProp_Pontoon = { "Pontoon", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventOnPontoonEnteredWater_Parms, Pontoon), Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::NewProp_Pontoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::NewProp_Pontoon_MetaData)) }; // 3492598596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::NewProp_Pontoon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "OnPontoonEnteredWater", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::BuoyancyComponent_eventOnPontoonEnteredWater_Parms), Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics
	{
		struct BuoyancyComponent_eventOnPontoonExitedWater_Parms
		{
			FSphericalPontoon Pontoon;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::NewProp_Pontoon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::NewProp_Pontoon = { "Pontoon", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyComponent_eventOnPontoonExitedWater_Parms, Pontoon), Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::NewProp_Pontoon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::NewProp_Pontoon_MetaData)) }; // 3492598596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::NewProp_Pontoon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuoyancyComponent, nullptr, "OnPontoonExitedWater", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::BuoyancyComponent_eventOnPontoonExitedWater_Parms), Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuoyancyComponent);
	UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister()
	{
		return UBuoyancyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBuoyancyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pontoons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pontoons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pontoons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredWaterDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnteredWaterDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExitedWaterDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExitedWaterDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuoyancyData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentWaterBodyComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaterBodyComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentWaterBodyComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulatingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuoyancyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBuoyancyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuoyancyComponent_GetCurrentWaterBodyComponents, "GetCurrentWaterBodyComponents" }, // 2975786251
		{ &Z_Construct_UFunction_UBuoyancyComponent_GetLastWaterSurfaceInfo, "GetLastWaterSurfaceInfo" }, // 75258248
		{ &Z_Construct_UFunction_UBuoyancyComponent_IsInWaterBody, "IsInWaterBody" }, // 554057792
		{ &Z_Construct_UFunction_UBuoyancyComponent_IsOverlappingWaterBody, "IsOverlappingWaterBody" }, // 2043767219
		{ &Z_Construct_UFunction_UBuoyancyComponent_OnPontoonEnteredWater, "OnPontoonEnteredWater" }, // 225008668
		{ &Z_Construct_UFunction_UBuoyancyComponent_OnPontoonExitedWater, "OnPontoonExitedWater" }, // 3636740145
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "BuoyancyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons_Inner = { "Pontoons", nullptr, (EPropertyFlags)0x0000008020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalPontoon, METADATA_PARAMS(nullptr, 0) }; // 3492598596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use BuoyancyData.Pontoons instead." },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons = { "Pontoons", nullptr, (EPropertyFlags)0x0010008020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, Pontoons_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons_MetaData)) }; // 3492598596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnEnteredWaterDelegate_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnEnteredWaterDelegate = { "OnEnteredWaterDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, OnEnteredWaterDelegate), Z_Construct_UDelegateFunction_Water_OnPontoonEnteredWater__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnEnteredWaterDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnEnteredWaterDelegate_MetaData)) }; // 1147404189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnExitedWaterDelegate_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnExitedWaterDelegate = { "OnExitedWaterDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, OnExitedWaterDelegate), Z_Construct_UDelegateFunction_Water_OnPontoonExitedWater__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnExitedWaterDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnExitedWaterDelegate_MetaData)) }; // 3573860717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_BuoyancyData_MetaData[] = {
		{ "Category", "Buoyancy" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_BuoyancyData = { "BuoyancyData", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, BuoyancyData), Z_Construct_UScriptStruct_FBuoyancyData, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_BuoyancyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_BuoyancyData_MetaData)) }; // 797529163
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents_Inner = { "CurrentWaterBodyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents = { "CurrentWaterBodyComponents", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, CurrentWaterBodyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_SimulatingComponent_MetaData[] = {
		{ "Comment", "// Primitive component that will be used for physics simulation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyComponent.h" },
		{ "ToolTip", "Primitive component that will be used for physics simulation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_SimulatingComponent = { "SimulatingComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuoyancyComponent, SimulatingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_SimulatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_SimulatingComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_Pontoons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnEnteredWaterDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_OnExitedWaterDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_BuoyancyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_CurrentWaterBodyComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuoyancyComponent_Statics::NewProp_SimulatingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuoyancyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuoyancyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuoyancyComponent_Statics::ClassParams = {
		&UBuoyancyComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuoyancyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuoyancyComponent()
	{
		if (!Z_Registration_Info_UClass_UBuoyancyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuoyancyComponent.OuterSingleton, Z_Construct_UClass_UBuoyancyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuoyancyComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UBuoyancyComponent>()
	{
		return UBuoyancyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyComponent);
	UBuoyancyComponent::~UBuoyancyComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBuoyancyComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuoyancyComponent, UBuoyancyComponent::StaticClass, TEXT("UBuoyancyComponent"), &Z_Registration_Info_UClass_UBuoyancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuoyancyComponent), 3994958249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_291404723(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
