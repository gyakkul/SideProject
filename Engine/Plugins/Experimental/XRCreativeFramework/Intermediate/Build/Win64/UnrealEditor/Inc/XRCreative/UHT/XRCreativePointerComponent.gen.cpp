// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativePointerComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativePointerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePointerComponent();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRCreativePointerComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativePointerComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativePointerComponent::execGetHitResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->GetHitResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativePointerComponent::execGetFilteredTraceEnd)
	{
		P_GET_UBOOL(Z_Param_bScaledByImpact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFilteredTraceEnd(Z_Param_bScaledByImpact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativePointerComponent::execGetRawTraceEnd)
	{
		P_GET_UBOOL(Z_Param_bScaledByImpact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRawTraceEnd(Z_Param_bScaledByImpact);
		P_NATIVE_END;
	}
	void UXRCreativePointerComponent::GetbEnabled_WrapperImpl(const void* Object, void* OutValue)
	{
		const UXRCreativePointerComponent* Obj = (const UXRCreativePointerComponent*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsEnabled();
	}
	void UXRCreativePointerComponent::SetbEnabled_WrapperImpl(void* Object, const void* InValue)
	{
		UXRCreativePointerComponent* Obj = (UXRCreativePointerComponent*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetEnabled(Value);
	}
	void UXRCreativePointerComponent::StaticRegisterNativesUXRCreativePointerComponent()
	{
		UClass* Class = UXRCreativePointerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFilteredTraceEnd", &UXRCreativePointerComponent::execGetFilteredTraceEnd },
			{ "GetHitResult", &UXRCreativePointerComponent::execGetHitResult },
			{ "GetRawTraceEnd", &UXRCreativePointerComponent::execGetRawTraceEnd },
			{ "IsEnabled", &UXRCreativePointerComponent::execIsEnabled },
			{ "SetEnabled", &UXRCreativePointerComponent::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics
	{
		struct XRCreativePointerComponent_eventGetFilteredTraceEnd_Parms
		{
			bool bScaledByImpact;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaledByImpact_MetaData[];
#endif
		static void NewProp_bScaledByImpact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaledByImpact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact_SetBit(void* Obj)
	{
		((XRCreativePointerComponent_eventGetFilteredTraceEnd_Parms*)Obj)->bScaledByImpact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact = { "bScaledByImpact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativePointerComponent_eventGetFilteredTraceEnd_Parms), &Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativePointerComponent_eventGetFilteredTraceEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_bScaledByImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/**\n\x09* If bScaledByImpact is false, this is the smoothed filter output, roughly `TraceMaxLength` units away, roughly in the +X direction.\n\x09* If bScaledByImpact is true, the magnitude is shortened to match the length of a blocking hit (if any).\n\x09*/" },
		{ "CPP_Default_bScaledByImpact", "true" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
		{ "ToolTip", "If bScaledByImpact is false, this is the smoothed filter output, roughly `TraceMaxLength` units away, roughly in the +X direction.\nIf bScaledByImpact is true, the magnitude is shortened to match the length of a blocking hit (if any)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativePointerComponent, nullptr, "GetFilteredTraceEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::XRCreativePointerComponent_eventGetFilteredTraceEnd_Parms), Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics
	{
		struct XRCreativePointerComponent_eventGetHitResult_Parms
		{
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativePointerComponent_eventGetHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::NewProp_ReturnValue_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativePointerComponent, nullptr, "GetHitResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::XRCreativePointerComponent_eventGetHitResult_Parms), Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics
	{
		struct XRCreativePointerComponent_eventGetRawTraceEnd_Parms
		{
			bool bScaledByImpact;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaledByImpact_MetaData[];
#endif
		static void NewProp_bScaledByImpact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaledByImpact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact_SetBit(void* Obj)
	{
		((XRCreativePointerComponent_eventGetRawTraceEnd_Parms*)Obj)->bScaledByImpact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact = { "bScaledByImpact", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativePointerComponent_eventGetRawTraceEnd_Parms), &Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativePointerComponent_eventGetRawTraceEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_bScaledByImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/**\n\x09* If bScaledByImpact is false, this returns the raw input to the smoothing filter, `TraceMaxLength` units away the +X direction.\n\x09* If bScaledByImpact is true, the magnitude is shortened to the length of the blocking hit (if any).\n\x09*/" },
		{ "CPP_Default_bScaledByImpact", "true" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
		{ "ToolTip", "If bScaledByImpact is false, this returns the raw input to the smoothing filter, `TraceMaxLength` units away the +X direction.\nIf bScaledByImpact is true, the magnitude is shortened to the length of the blocking hit (if any)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativePointerComponent, nullptr, "GetRawTraceEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::XRCreativePointerComponent_eventGetRawTraceEnd_Parms), Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics
	{
		struct XRCreativePointerComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRCreativePointerComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativePointerComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativePointerComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::XRCreativePointerComponent_eventIsEnabled_Parms), Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics
	{
		struct XRCreativePointerComponent_eventSetEnabled_Parms
		{
			bool bInEnabled;
		};
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((XRCreativePointerComponent_eventSetEnabled_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativePointerComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativePointerComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::XRCreativePointerComponent_eventSetEnabled_Parms), Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativePointerComponent);
	UClass* Z_Construct_UClass_UXRCreativePointerComponent_NoRegister()
	{
		return UXRCreativePointerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativePointerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceMaxLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceMaxLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingLag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMinCutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingMinCutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativePointerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativePointerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativePointerComponent_GetFilteredTraceEnd, "GetFilteredTraceEnd" }, // 465718241
		{ &Z_Construct_UFunction_UXRCreativePointerComponent_GetHitResult, "GetHitResult" }, // 877849221
		{ &Z_Construct_UFunction_UXRCreativePointerComponent_GetRawTraceEnd, "GetRawTraceEnd" }, // 315415061
		{ &Z_Construct_UFunction_UXRCreativePointerComponent_IsEnabled, "IsEnabled" }, // 2205497658
		{ &Z_Construct_UFunction_UXRCreativePointerComponent_SetEnabled, "SetEnabled" }, // 2720178199
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePointerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "XRCreativePointerComponent.h" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_TraceMaxLength_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_TraceMaxLength = { "TraceMaxLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePointerComponent, TraceMaxLength), METADATA_PARAMS(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_TraceMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_TraceMaxLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingLag_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingLag = { "SmoothingLag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePointerComponent, SmoothingLag), METADATA_PARAMS(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingMinCutoff_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingMinCutoff = { "SmoothingMinCutoff", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativePointerComponent, SmoothingMinCutoff), METADATA_PARAMS(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingMinCutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingMinCutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativePointerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UXRCreativePointerComponent*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UXRCreativePointerComponent::SetbEnabled_WrapperImpl, &UXRCreativePointerComponent::GetbEnabled_WrapperImpl, sizeof(bool), sizeof(UXRCreativePointerComponent), &Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativePointerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_TraceMaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_SmoothingMinCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativePointerComponent_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativePointerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativePointerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativePointerComponent_Statics::ClassParams = {
		&UXRCreativePointerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRCreativePointerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativePointerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativePointerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativePointerComponent()
	{
		if (!Z_Registration_Info_UClass_UXRCreativePointerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativePointerComponent.OuterSingleton, Z_Construct_UClass_UXRCreativePointerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativePointerComponent.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativePointerComponent>()
	{
		return UXRCreativePointerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativePointerComponent);
	UXRCreativePointerComponent::~UXRCreativePointerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativePointerComponent, UXRCreativePointerComponent::StaticClass, TEXT("UXRCreativePointerComponent"), &Z_Registration_Info_UClass_UXRCreativePointerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativePointerComponent), 3957246136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_3181027753(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
