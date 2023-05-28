// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/DMXPixelMappingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingSubsystem() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMapping_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingSubsystem();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetMatrixComponent)
	{
		P_GET_OBJECT(UDMXPixelMapping,Z_Param_InDMXPixelMapping);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InComponentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingMatrixComponent**)Z_Param__Result=P_THIS->GetMatrixComponent(Z_Param_InDMXPixelMapping,Z_Param_Out_InComponentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetFixtureGroupComponent)
	{
		P_GET_OBJECT(UDMXPixelMapping,Z_Param_InDMXPixelMapping);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InComponentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingFixtureGroupComponent**)Z_Param__Result=P_THIS->GetFixtureGroupComponent(Z_Param_InDMXPixelMapping,Z_Param_Out_InComponentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetOutputDMXComponent)
	{
		P_GET_OBJECT(UDMXPixelMapping,Z_Param_InDMXPixelMapping);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InComponentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingOutputDMXComponent**)Z_Param__Result=P_THIS->GetOutputDMXComponent(Z_Param_InDMXPixelMapping,Z_Param_Out_InComponentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetRendererComponent)
	{
		P_GET_OBJECT(UDMXPixelMapping,Z_Param_InDMXPixelMapping);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InComponentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingRendererComponent**)Z_Param__Result=P_THIS->GetRendererComponent(Z_Param_InDMXPixelMapping,Z_Param_Out_InComponentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetDMXPixelMapping)
	{
		P_GET_OBJECT(UDMXPixelMapping,Z_Param_InPixelMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMapping**)Z_Param__Result=P_THIS->GetDMXPixelMapping(Z_Param_InPixelMapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetDMXPixelMappingSubsystem_Callable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingSubsystem**)Z_Param__Result=UDMXPixelMappingSubsystem::GetDMXPixelMappingSubsystem_Callable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXPixelMappingSubsystem::execGetDMXPixelMappingSubsystem_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingSubsystem**)Z_Param__Result=UDMXPixelMappingSubsystem::GetDMXPixelMappingSubsystem_Pure();
		P_NATIVE_END;
	}
	void UDMXPixelMappingSubsystem::StaticRegisterNativesUDMXPixelMappingSubsystem()
	{
		UClass* Class = UDMXPixelMappingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDMXPixelMapping", &UDMXPixelMappingSubsystem::execGetDMXPixelMapping },
			{ "GetDMXPixelMappingSubsystem_Callable", &UDMXPixelMappingSubsystem::execGetDMXPixelMappingSubsystem_Callable },
			{ "GetDMXPixelMappingSubsystem_Pure", &UDMXPixelMappingSubsystem::execGetDMXPixelMappingSubsystem_Pure },
			{ "GetFixtureGroupComponent", &UDMXPixelMappingSubsystem::execGetFixtureGroupComponent },
			{ "GetMatrixComponent", &UDMXPixelMappingSubsystem::execGetMatrixComponent },
			{ "GetOutputDMXComponent", &UDMXPixelMappingSubsystem::execGetOutputDMXComponent },
			{ "GetRendererComponent", &UDMXPixelMappingSubsystem::execGetRendererComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetDMXPixelMapping_Parms
		{
			UDMXPixelMapping* InPixelMapping;
			UDMXPixelMapping* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPixelMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::NewProp_InPixelMapping = { "InPixelMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetDMXPixelMapping_Parms, InPixelMapping), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetDMXPixelMapping_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::NewProp_InPixelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Load Pixel Mapping asset */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Load Pixel Mapping asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetDMXPixelMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::DMXPixelMappingSubsystem_eventGetDMXPixelMapping_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Callable_Parms
		{
			UDMXPixelMappingSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Callable_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX PixelMapping Subsystem" },
		{ "Comment", "/** Get a DMX PixelMapping Subsystem, callable version */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get a DMX PixelMapping Subsystem, callable version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetDMXPixelMappingSubsystem_Callable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Callable_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Pure_Parms
		{
			UDMXPixelMappingSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Pure_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX PixelMapping Subsystem" },
		{ "Comment", "/** Get a DMX PixelMapping Subsystem, pure version */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get a DMX PixelMapping Subsystem, pure version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetDMXPixelMappingSubsystem_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::DMXPixelMappingSubsystem_eventGetDMXPixelMappingSubsystem_Pure_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetFixtureGroupComponent_Parms
		{
			UDMXPixelMapping* InDMXPixelMapping;
			FName InComponentName;
			UDMXPixelMappingFixtureGroupComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDMXPixelMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InComponentName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InDMXPixelMapping = { "InDMXPixelMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetFixtureGroupComponent_Parms, InDMXPixelMapping), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InComponentName = { "InComponentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetFixtureGroupComponent_Parms, InComponentName), METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InComponentName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetFixtureGroupComponent_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InDMXPixelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_InComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InComponentName" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/**\n\x09 * Get FixtureGroup component. Only for K2 blueprint nodes\n\x09 *\n\x09 * @param\x09\x09\x09InDMXPixelMapping Pixel Mapping UObject Asset\n\x09 * @param\x09\x09\x09InComponentName Name of looking FixtureGroup component\n\x09 *\n\x09 * @return Pointer to the component or nullptr\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get FixtureGroup component. Only for K2 blueprint nodes\n\n@param                       InDMXPixelMapping Pixel Mapping UObject Asset\n@param                       InComponentName Name of looking FixtureGroup component\n\n@return Pointer to the component or nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetFixtureGroupComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::DMXPixelMappingSubsystem_eventGetFixtureGroupComponent_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetMatrixComponent_Parms
		{
			UDMXPixelMapping* InDMXPixelMapping;
			FName InComponentName;
			UDMXPixelMappingMatrixComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDMXPixelMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InComponentName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InDMXPixelMapping = { "InDMXPixelMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetMatrixComponent_Parms, InDMXPixelMapping), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InComponentName = { "InComponentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetMatrixComponent_Parms, InComponentName), METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InComponentName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetMatrixComponent_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InDMXPixelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_InComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InComponentName" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/**\n\x09 * Get Matrix component. Only for K2 blueprint nodes\n\x09 *\n\x09 * @param\x09\x09\x09InDMXPixelMapping Pixel Mapping UObject Asset\n\x09 * @param\x09\x09\x09InComponentName Name of looking Matrix component\n\x09 *\n\x09 * @return Pointer to the component or nullptr\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get Matrix component. Only for K2 blueprint nodes\n\n@param                       InDMXPixelMapping Pixel Mapping UObject Asset\n@param                       InComponentName Name of looking Matrix component\n\n@return Pointer to the component or nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetMatrixComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::DMXPixelMappingSubsystem_eventGetMatrixComponent_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetOutputDMXComponent_Parms
		{
			UDMXPixelMapping* InDMXPixelMapping;
			FName InComponentName;
			UDMXPixelMappingOutputDMXComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDMXPixelMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InComponentName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InDMXPixelMapping = { "InDMXPixelMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetOutputDMXComponent_Parms, InDMXPixelMapping), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InComponentName = { "InComponentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetOutputDMXComponent_Parms, InComponentName), METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InComponentName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetOutputDMXComponent_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InDMXPixelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_InComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InComponentName" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/**\n\x09 * Get OutputDMX component. Only for K2 blueprint nodes\n\x09 *\n\x09 * @param\x09\x09\x09InDMXPixelMapping Pixel Mapping UObject Asset\n\x09 * @param\x09\x09\x09InComponentName Name of looking OutputDMX component\n\x09 *\n\x09 * @return Pointer to the component or nullptr\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get OutputDMX component. Only for K2 blueprint nodes\n\n@param                       InDMXPixelMapping Pixel Mapping UObject Asset\n@param                       InComponentName Name of looking OutputDMX component\n\n@return Pointer to the component or nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetOutputDMXComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::DMXPixelMappingSubsystem_eventGetOutputDMXComponent_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics
	{
		struct DMXPixelMappingSubsystem_eventGetRendererComponent_Parms
		{
			UDMXPixelMapping* InDMXPixelMapping;
			FName InComponentName;
			UDMXPixelMappingRendererComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDMXPixelMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InComponentName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InDMXPixelMapping = { "InDMXPixelMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetRendererComponent_Parms, InDMXPixelMapping), Z_Construct_UClass_UDMXPixelMapping_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InComponentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InComponentName = { "InComponentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetRendererComponent_Parms, InComponentName), METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InComponentName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMappingSubsystem_eventGetRendererComponent_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InDMXPixelMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_InComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InComponentName" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** \n\x09 * Get Renderer component. Only for K2 blueprint nodes \n\x09 *\n\x09 * @param\x09\x09\x09InDMXPixelMapping Pixel Mapping UObject Asset\n\x09 * @param\x09\x09\x09InComponentName Name of looking renderer component\n\x09 *\n\x09 * @return Pointer to the component or nullptr\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ToolTip", "Get Renderer component. Only for K2 blueprint nodes\n\n@param                       InDMXPixelMapping Pixel Mapping UObject Asset\n@param                       InComponentName Name of looking renderer component\n\n@return Pointer to the component or nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingSubsystem, nullptr, "GetRendererComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::DMXPixelMappingSubsystem_eventGetRendererComponent_Parms), Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingSubsystem);
	UClass* Z_Construct_UClass_UDMXPixelMappingSubsystem_NoRegister()
	{
		return UDMXPixelMappingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMapping, "GetDMXPixelMapping" }, // 2989616894
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Callable, "GetDMXPixelMappingSubsystem_Callable" }, // 3659980396
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetDMXPixelMappingSubsystem_Pure, "GetDMXPixelMappingSubsystem_Pure" }, // 1106400949
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetFixtureGroupComponent, "GetFixtureGroupComponent" }, // 1005504212
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetMatrixComponent, "GetMatrixComponent" }, // 1419883435
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetOutputDMXComponent, "GetOutputDMXComponent" }, // 2500273878
		{ &Z_Construct_UFunction_UDMXPixelMappingSubsystem_GetRendererComponent, "GetRendererComponent" }, // 1479525227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/DMXPixelMappingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Blueprint/DMXPixelMappingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::ClassParams = {
		&UDMXPixelMappingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingSubsystem.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingSubsystem.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingSubsystem>()
	{
		return UDMXPixelMappingSubsystem::StaticClass();
	}
	UDMXPixelMappingSubsystem::UDMXPixelMappingSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingSubsystem);
	UDMXPixelMappingSubsystem::~UDMXPixelMappingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingSubsystem, UDMXPixelMappingSubsystem::StaticClass, TEXT("UDMXPixelMappingSubsystem"), &Z_Registration_Info_UClass_UDMXPixelMappingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingSubsystem), 2897594384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_400208033(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
