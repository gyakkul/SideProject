// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPath() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics
	{
		struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms
		{
			UNavigationPath* AffectedPath;
			TEnumAsByte<ENavPathEvent::Type> PathEvent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PathEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath = { "AffectedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, AffectedPath), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent = { "PathEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, PathEvent), Z_Construct_UEnum_Engine_ENavPathEvent, METADATA_PARAMS(nullptr, 0) }; // 2492601347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem, nullptr, "OnNavigationPathUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNavigationPathUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnNavigationPathUpdated, UNavigationPath* AffectedPath, ENavPathEvent::Type PathEvent)
{
	struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms
	{
		UNavigationPath* AffectedPath;
		TEnumAsByte<ENavPathEvent::Type> PathEvent;
	};
	_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms Parms;
	Parms.AffectedPath=AffectedPath;
	Parms.PathEvent=PathEvent;
	OnNavigationPathUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNavigationPath::execIsStringPulled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStringPulled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execIsPartial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execGetPathCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetPathCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execGetPathLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetPathLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execEnableRecalculationOnInvalidation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_DoRecalculation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableRecalculationOnInvalidation(ENavigationOptionFlag::Type(Z_Param_DoRecalculation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execEnableDebugDrawing)
	{
		P_GET_UBOOL(Z_Param_bShouldDrawDebugData);
		P_GET_STRUCT(FLinearColor,Z_Param_PathColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableDebugDrawing(Z_Param_bShouldDrawDebugData,Z_Param_PathColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationPath::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	void UNavigationPath::StaticRegisterNativesUNavigationPath()
	{
		UClass* Class = UNavigationPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableDebugDrawing", &UNavigationPath::execEnableDebugDrawing },
			{ "EnableRecalculationOnInvalidation", &UNavigationPath::execEnableRecalculationOnInvalidation },
			{ "GetDebugString", &UNavigationPath::execGetDebugString },
			{ "GetPathCost", &UNavigationPath::execGetPathCost },
			{ "GetPathLength", &UNavigationPath::execGetPathLength },
			{ "IsPartial", &UNavigationPath::execIsPartial },
			{ "IsStringPulled", &UNavigationPath::execIsStringPulled },
			{ "IsValid", &UNavigationPath::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics
	{
		struct NavigationPath_eventEnableDebugDrawing_Parms
		{
			bool bShouldDrawDebugData;
			FLinearColor PathColor;
		};
		static void NewProp_bShouldDrawDebugData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawDebugData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit(void* Obj)
	{
		((NavigationPath_eventEnableDebugDrawing_Parms*)Obj)->bShouldDrawDebugData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData = { "bShouldDrawDebugData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationPath_eventEnableDebugDrawing_Parms), &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor = { "PathColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableDebugDrawing_Parms, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "CPP_Default_PathColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "EnableDebugDrawing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NavigationPath_eventEnableDebugDrawing_Parms), Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics
	{
		struct NavigationPath_eventEnableRecalculationOnInvalidation_Parms
		{
			TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DoRecalculation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation = { "DoRecalculation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableRecalculationOnInvalidation_Parms, DoRecalculation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(nullptr, 0) }; // 106111109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation */" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "EnableRecalculationOnInvalidation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NavigationPath_eventEnableRecalculationOnInvalidation_Parms), Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics
	{
		struct NavigationPath_eventGetDebugString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationPath_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "Comment", "// UObject end\n" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NavigationPath_eventGetDebugString_Parms), Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics
	{
		struct NavigationPath_eventGetPathCost_Parms
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
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetPathCost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NavigationPath_eventGetPathCost_Parms), Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics
	{
		struct NavigationPath_eventGetPathLength_Parms
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
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetPathLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NavigationPath_eventGetPathLength_Parms), Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsPartial_Statics
	{
		struct NavigationPath_eventIsPartial_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsPartial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationPath_eventIsPartial_Parms), &Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsPartial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NavigationPath_eventIsPartial_Parms), Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics
	{
		struct NavigationPath_eventIsStringPulled_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsStringPulled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationPath_eventIsStringPulled_Parms), &Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsStringPulled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NavigationPath_eventIsStringPulled_Parms), Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsValid_Statics
	{
		struct NavigationPath_eventIsValid_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationPath_eventIsValid_Parms), &Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NavigationPath_eventIsValid_Parms), Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationPath);
	UClass* Z_Construct_UClass_UNavigationPath_NoRegister()
	{
		return UNavigationPath::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathUpdatedNotifier_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PathUpdatedNotifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecalculateOnInvalidation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecalculateOnInvalidation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing, "EnableDebugDrawing" }, // 1775877617
		{ &Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation, "EnableRecalculationOnInvalidation" }, // 778337965
		{ &Z_Construct_UFunction_UNavigationPath_GetDebugString, "GetDebugString" }, // 3575325111
		{ &Z_Construct_UFunction_UNavigationPath_GetPathCost, "GetPathCost" }, // 174671674
		{ &Z_Construct_UFunction_UNavigationPath_GetPathLength, "GetPathLength" }, // 1847251909
		{ &Z_Construct_UFunction_UNavigationPath_IsPartial, "IsPartial" }, // 1470165082
		{ &Z_Construct_UFunction_UNavigationPath_IsStringPulled, "IsStringPulled" }, // 348202620
		{ &Z_Construct_UFunction_UNavigationPath_IsValid, "IsValid" }, // 4184215896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09UObject wrapper for FNavigationPath\n */" },
		{ "IncludePath", "NavigationPath.h" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject wrapper for FNavigationPath" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier = { "PathUpdatedNotifier", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationPath, PathUpdatedNotifier), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData)) }; // 3688979054
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationPath, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation = { "RecalculateOnInvalidation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationPath, RecalculateOnInvalidation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData)) }; // 106111109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPath_Statics::ClassParams = {
		&UNavigationPath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavigationPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationPath()
	{
		if (!Z_Registration_Info_UClass_UNavigationPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationPath.OuterSingleton, Z_Construct_UClass_UNavigationPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationPath.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationPath>()
	{
		return UNavigationPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPath);
	UNavigationPath::~UNavigationPath() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationPath, UNavigationPath::StaticClass, TEXT("UNavigationPath"), &Z_Registration_Info_UClass_UNavigationPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationPath), 2499326708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_3534645316(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
