// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionControllerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	DEFINE_FUNCTION(UMotionControllerComponent::execGetHandJointPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_jointIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHandJointPosition(Z_Param_jointIndex,Z_Param_Out_bValueFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execGetParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL_REF(Z_Param_Out_bValueFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameterValue(Z_Param_InName,Z_Param_Out_bValueFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetAssociatedPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssociatedPlayerIndex(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingMotionSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingMotionSource(Z_Param_NewSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execGetTrackingSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackingSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetTrackingSource)
	{
		P_GET_ENUM(EControllerHand,Z_Param_NewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingSource(EControllerHand(Z_Param_NewSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetCustomDisplayMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewDisplayMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomDisplayMesh(Z_Param_NewDisplayMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetDisplayModelSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewDisplayModelSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayModelSource(Z_Param_NewDisplayModelSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionControllerComponent::execSetShowDeviceModel)
	{
		P_GET_UBOOL(Z_Param_bShowControllerModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowDeviceModel(Z_Param_bShowControllerModel);
		P_NATIVE_END;
	}
	static FName NAME_UMotionControllerComponent_OnMotionControllerUpdated = FName(TEXT("OnMotionControllerUpdated"));
	void UMotionControllerComponent::OnMotionControllerUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMotionControllerComponent_OnMotionControllerUpdated),NULL);
	}
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandJointPosition", &UMotionControllerComponent::execGetHandJointPosition },
			{ "GetParameterValue", &UMotionControllerComponent::execGetParameterValue },
			{ "GetTrackingSource", &UMotionControllerComponent::execGetTrackingSource },
			{ "IsTracked", &UMotionControllerComponent::execIsTracked },
			{ "SetAssociatedPlayerIndex", &UMotionControllerComponent::execSetAssociatedPlayerIndex },
			{ "SetCustomDisplayMesh", &UMotionControllerComponent::execSetCustomDisplayMesh },
			{ "SetDisplayModelSource", &UMotionControllerComponent::execSetDisplayModelSource },
			{ "SetShowDeviceModel", &UMotionControllerComponent::execSetShowDeviceModel },
			{ "SetTrackingMotionSource", &UMotionControllerComponent::execSetTrackingMotionSource },
			{ "SetTrackingSource", &UMotionControllerComponent::execSetTrackingSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics
	{
		struct MotionControllerComponent_eventGetHandJointPosition_Parms
		{
			int32 jointIndex;
			bool bValueFound;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_jointIndex;
		static void NewProp_bValueFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex = { "jointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, jointIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventGetHandJointPosition_Parms*)Obj)->bValueFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionControllerComponent_eventGetHandJointPosition_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetHandJointPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_jointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_bValueFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetHandJointPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::MotionControllerComponent_eventGetHandJointPosition_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics
	{
		struct MotionControllerComponent_eventGetParameterValue_Parms
		{
			FName InName;
			bool bValueFound;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_bValueFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventGetParameterValue_Parms*)Obj)->bValueFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound = { "bValueFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionControllerComponent_eventGetParameterValue_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "// Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated \n" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::MotionControllerComponent_eventGetParameterValue_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventGetTrackingSource_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetTrackingSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "GetTrackingSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::MotionControllerComponent_eventGetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics
	{
		struct MotionControllerComponent_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionControllerComponent_eventIsTracked_Parms), &Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** Whether or not this component had a valid tracked device this frame */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "IsTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::MotionControllerComponent_eventIsTracked_Parms), Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "Comment", "/** Blueprint Implementable function for responding to updated data from a motion controller (so we can use custom parameter values from it) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Blueprint Implementable function for responding to updated data from a motion controller (so we can use custom parameter values from it)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "OnMotionControllerUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics
	{
		struct MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms
		{
			int32 NewPlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms, NewPlayer), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetAssociatedPlayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics
	{
		struct MotionControllerComponent_eventSetCustomDisplayMesh_Parms
		{
			UStaticMesh* NewDisplayMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDisplayMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh = { "NewDisplayMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetCustomDisplayMesh_Parms, NewDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetCustomDisplayMesh is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetCustomDisplayMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::MotionControllerComponent_eventSetCustomDisplayMesh_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics
	{
		struct MotionControllerComponent_eventSetDisplayModelSource_Parms
		{
			FName NewDisplayModelSource;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDisplayModelSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewDisplayModelSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource = { "NewDisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetDisplayModelSource_Parms, NewDisplayModelSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetDisplayModelSource is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetDisplayModelSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::MotionControllerComponent_eventSetDisplayModelSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics
	{
		struct MotionControllerComponent_eventSetShowDeviceModel_Parms
		{
			bool bShowControllerModel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowControllerModel_MetaData[];
#endif
		static void NewProp_bShowControllerModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowControllerModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventSetShowDeviceModel_Parms*)Obj)->bShowControllerModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel = { "bShowControllerModel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetShowDeviceModel is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetShowDeviceModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::MotionControllerComponent_eventSetShowDeviceModel_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingMotionSource_Parms
		{
			FName NewSource;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingMotionSource_Parms, NewSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingMotionSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::MotionControllerComponent_eventSetTrackingMotionSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingSource_Parms
		{
			EControllerHand NewSource;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource = { "NewSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingSource_Parms, NewSource), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData)) }; // 2834220773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, nullptr, "SetTrackingSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::MotionControllerComponent_eventSetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionControllerComponent);
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MotionSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[];
#endif
		static void NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDeviceModel_MetaData[];
#endif
		static void NewProp_bDisplayDeviceModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDeviceModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModelSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayModelSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomDisplayMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayMeshMaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMeshMaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayMeshMaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition, "GetHandJointPosition" }, // 3369060009
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue, "GetParameterValue" }, // 1069038276
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource, "GetTrackingSource" }, // 1291249231
		{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 398695684
		{ &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated, "OnMotionControllerUpdated" }, // 3844765727
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex, "SetAssociatedPlayerIndex" }, // 2645346064
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh, "SetCustomDisplayMesh" }, // 3103676735
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource, "SetDisplayModelSource" }, // 1148494323
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel, "SetShowDeviceModel" }, // 2416114492
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource, "SetTrackingMotionSource" }, // 2373071981
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource, "SetTrackingSource" }, // 1840224700
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MotionControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "BlueprintSetter", "SetAssociatedPlayerIndex" },
		{ "Category", "MotionController" },
		{ "Comment", "/** Which player index this motion controller should automatically follow */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Which player index this motion controller should automatically follow" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData[] = {
		{ "BlueprintGetter", "GetTrackingSource" },
		{ "BlueprintSetter", "SetTrackingSource" },
		{ "Category", "MotionController" },
		{ "Comment", "/** DEPRECATED (use MotionSource instead) Which hand this component should automatically follow */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "DEPRECATED (use MotionSource instead) Which hand this component should automatically follow" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000020000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, Hand_DEPRECATED), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData)) }; // 2834220773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData[] = {
		{ "BlueprintSetter", "SetTrackingMotionSource" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, MotionSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering. */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate = { "bDisableLowLatencyUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData[] = {
		{ "Category", "MotionController" },
		{ "Comment", "/** The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking) */" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus = { "CurrentTrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData)) }; // 3952808582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData[] = {
		{ "BlueprintSetter", "SetShowDeviceModel" },
		{ "Category", "Visualization" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bDisplayDeviceModel is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisplayDeviceModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel = { "bDisplayDeviceModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData[] = {
		{ "BlueprintSetter", "SetDisplayModelSource" },
		{ "Category", "Visualization" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "DisplayModelSource is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource = { "DisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayModelSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData[] = {
		{ "BlueprintSetter", "SetCustomDisplayMesh" },
		{ "Category", "Visualization" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "CustomDisplayMesh is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh = { "CustomDisplayMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CustomDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "DisplayMeshMaterialOverrides is deprecated. Please use the XRDeviceVisualizationComponent for rendering instead." },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayMeshMaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visualization" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent = { "DisplayComponent", nullptr, (EPropertyFlags)0x001400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams = {
		&UMotionControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		if (!Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton, Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UMotionControllerComponent>()
	{
		return UMotionControllerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
	UMotionControllerComponent::~UMotionControllerComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionControllerComponent, UMotionControllerComponent::StaticClass, TEXT("UMotionControllerComponent"), &Z_Registration_Info_UClass_UMotionControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionControllerComponent), 1910272814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_3224382394(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
