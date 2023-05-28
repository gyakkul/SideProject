// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/DMXComponent.h"
#include "DMXTypes.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXComponent() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXComponent();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXComponent_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics
	{
		struct DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FDMXNormalizedAttributeValueMap ValuePerAttribute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuePerAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuePerAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_ValuePerAttribute = { "ValuePerAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms, ValuePerAttribute), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData)) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::NewProp_ValuePerAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "DMXComponentFixturePatchReceivedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms), Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDMXComponent::FDMXComponentFixturePatchReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXComponentFixturePatchReceivedSignature, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute)
{
	struct DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms
	{
		UDMXEntityFixturePatch* FixturePatch;
		FDMXNormalizedAttributeValueMap ValuePerAttribute;
	};
	DMXComponent_eventDMXComponentFixturePatchReceivedSignature_Parms Parms;
	Parms.FixturePatch=FixturePatch;
	Parms.ValuePerAttribute=ValuePerAttribute;
	DMXComponentFixturePatchReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics
	{
		struct DMXComponent_eventDMXOnDMXComponentTickSignature_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventDMXOnDMXComponentTickSignature_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "DMXOnDMXComponentTickSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::DMXComponent_eventDMXOnDMXComponentTickSignature_Parms), Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDMXComponent::FDMXOnDMXComponentTickSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXOnDMXComponentTickSignature, float DeltaTime)
{
	struct DMXComponent_eventDMXOnDMXComponentTickSignature_Parms
	{
		float DeltaTime;
	};
	DMXComponent_eventDMXOnDMXComponentTickSignature_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	DMXOnDMXComponentTickSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDMXComponent::execOnFixturePatchReceivedDMX)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_NormalizedValuePerAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFixturePatchReceivedDMX(Z_Param_FixturePatch,Z_Param_Out_NormalizedValuePerAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXComponent::execSetReceiveDMXFromPatch)
	{
		P_GET_UBOOL(Z_Param_bReceive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceiveDMXFromPatch(Z_Param_bReceive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXComponent::execSetFixturePatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFixturePatch(Z_Param_InFixturePatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXComponent::execGetFixturePatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixturePatch**)Z_Param__Result=P_THIS->GetFixturePatch();
		P_NATIVE_END;
	}
	void UDMXComponent::StaticRegisterNativesUDMXComponent()
	{
		UClass* Class = UDMXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFixturePatch", &UDMXComponent::execGetFixturePatch },
			{ "OnFixturePatchReceivedDMX", &UDMXComponent::execOnFixturePatchReceivedDMX },
			{ "SetFixturePatch", &UDMXComponent::execSetFixturePatch },
			{ "SetReceiveDMXFromPatch", &UDMXComponent::execSetReceiveDMXFromPatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics
	{
		struct DMXComponent_eventGetFixturePatch_Parms
		{
			UDMXEntityFixturePatch* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventGetFixturePatch_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the fixture patch used in the component */" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Gets the fixture patch used in the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "GetFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::DMXComponent_eventGetFixturePatch_Parms), Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXComponent_GetFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXComponent_GetFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics
	{
		struct DMXComponent_eventOnFixturePatchReceivedDMX_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FDMXNormalizedAttributeValueMap NormalizedValuePerAttribute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedValuePerAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedValuePerAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventOnFixturePatchReceivedDMX_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_NormalizedValuePerAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_NormalizedValuePerAttribute = { "NormalizedValuePerAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventOnFixturePatchReceivedDMX_Parms, NormalizedValuePerAttribute), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_NormalizedValuePerAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_NormalizedValuePerAttribute_MetaData)) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::NewProp_NormalizedValuePerAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the fixture patch received DMX */" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Called when the fixture patch received DMX" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "OnFixturePatchReceivedDMX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::DMXComponent_eventOnFixturePatchReceivedDMX_Parms), Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics
	{
		struct DMXComponent_eventSetFixturePatch_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXComponent_eventSetFixturePatch_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::NewProp_InFixturePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Sets the fixture patch used in the component */" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Sets the fixture patch used in the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "SetFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::DMXComponent_eventSetFixturePatch_Parms), Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXComponent_SetFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXComponent_SetFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics
	{
		struct DMXComponent_eventSetReceiveDMXFromPatch_Parms
		{
			bool bReceive;
		};
		static void NewProp_bReceive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::NewProp_bReceive_SetBit(void* Obj)
	{
		((DMXComponent_eventSetReceiveDMXFromPatch_Parms*)Obj)->bReceive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::NewProp_bReceive = { "bReceive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXComponent_eventSetReceiveDMXFromPatch_Parms), &Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::NewProp_bReceive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::NewProp_bReceive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Sets whether the component receives dmx from the patch. Note, this is saved with the component when called in editor. */" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Sets whether the component receives dmx from the patch. Note, this is saved with the component when called in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXComponent, nullptr, "SetReceiveDMXFromPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::DMXComponent_eventSetReceiveDMXFromPatch_Parms), Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXComponent);
	UClass* Z_Construct_UClass_UDMXComponent_NoRegister()
	{
		return UDMXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFixturePatchReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFixturePatchReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDMXComponentTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDMXComponentTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDMXFromPatch_MetaData[];
#endif
		static void NewProp_bReceiveDMXFromPatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDMXFromPatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature, "DMXComponentFixturePatchReceivedSignature__DelegateSignature" }, // 57524212
		{ &Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature, "DMXOnDMXComponentTickSignature__DelegateSignature" }, // 2453394033
		{ &Z_Construct_UFunction_UDMXComponent_GetFixturePatch, "GetFixturePatch" }, // 4206778571
		{ &Z_Construct_UFunction_UDMXComponent_OnFixturePatchReceivedDMX, "OnFixturePatchReceivedDMX" }, // 3158211352
		{ &Z_Construct_UFunction_UDMXComponent_SetFixturePatch, "SetFixturePatch" }, // 1048961578
		{ &Z_Construct_UFunction_UDMXComponent_SetReceiveDMXFromPatch, "SetReceiveDMXFromPatch" }, // 145969173
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DMX" },
		{ "Comment", "/** \n * Component that receives DMX input each Tick from a fixture patch.  \n */" },
		{ "HideCategories", "Variable Sockets Activation Cooking ComponentReplication Collision ComponentTick" },
		{ "IncludePath", "Game/DMXComponent.h" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Component that receives DMX input each Tick from a fixture patch." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnFixturePatchReceived_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Broadcast when the component's fixture patch received DMX */" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Broadcast when the component's fixture patch received DMX" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnFixturePatchReceived = { "OnFixturePatchReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXComponent, OnFixturePatchReceived), Z_Construct_UDelegateFunction_UDMXComponent_DMXComponentFixturePatchReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnFixturePatchReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnFixturePatchReceived_MetaData)) }; // 57524212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnDMXComponentTick_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Event raised each tick, when the component has a Fixture Patch set and either:\n\x09 * - The assigned fixture patch is set to 'receives DMX in editor'.\n\x09 * - Project Settings -> Plugins -> DMX -> 'Fixture Patches receive DMX in Editor' is set to true.\n\x09 */" },
		{ "DisplayName", "On DMX Component Tick" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "Event raised each tick, when the component has a Fixture Patch set and either:\n- The assigned fixture patch is set to 'receives DMX in editor'.\n- Project Settings -> Plugins -> DMX -> 'Fixture Patches receive DMX in Editor' is set to true." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnDMXComponentTick = { "OnDMXComponentTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXComponent, OnDMXComponentTick), Z_Construct_UDelegateFunction_UDMXComponent_DMXOnDMXComponentTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnDMXComponentTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnDMXComponentTick_MetaData)) }; // 2453394033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXComponent_Statics::NewProp_FixturePatchRef_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXComponent_Statics::NewProp_FixturePatchRef = { "FixturePatchRef", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXComponent, FixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UClass_UDMXComponent_Statics::NewProp_FixturePatchRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::NewProp_FixturePatchRef_MetaData)) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** If true, the component will receive DMX from the patch */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Game/DMXComponent.h" },
		{ "ToolTip", "If true, the component will receive DMX from the patch" },
	};
#endif
	void Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch_SetBit(void* Obj)
	{
		((UDMXComponent*)Obj)->bReceiveDMXFromPatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch = { "bReceiveDMXFromPatch", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXComponent), &Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnFixturePatchReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXComponent_Statics::NewProp_OnDMXComponentTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXComponent_Statics::NewProp_FixturePatchRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXComponent_Statics::NewProp_bReceiveDMXFromPatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXComponent_Statics::ClassParams = {
		&UDMXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXComponent.OuterSingleton, Z_Construct_UClass_UDMXComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXComponent.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXComponent>()
	{
		return UDMXComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXComponent);
	UDMXComponent::~UDMXComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXComponent, UDMXComponent::StaticClass, TEXT("UDMXComponent"), &Z_Registration_Info_UClass_UDMXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXComponent), 697064991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_2553547663(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
