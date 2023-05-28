// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPin() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(UARPin::execGetDebugName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDebugName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execDebugDraw)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PersistForSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugDraw(Z_Param_World,Z_Param_Out_Color,Z_Param_Scale,Z_Param_PersistForSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execGetPinnedComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetPinnedComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execGetTrackedGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTrackedGeometry**)Z_Param__Result=P_THIS->GetTrackedGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execGetTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execGetLocalToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPin::execGetLocalToTrackingTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform();
		P_NATIVE_END;
	}
	void UARPin::StaticRegisterNativesUARPin()
	{
		UClass* Class = UARPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugDraw", &UARPin::execDebugDraw },
			{ "GetDebugName", &UARPin::execGetDebugName },
			{ "GetLocalToTrackingTransform", &UARPin::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARPin::execGetLocalToWorldTransform },
			{ "GetPinnedComponent", &UARPin::execGetPinnedComponent },
			{ "GetTrackedGeometry", &UARPin::execGetTrackedGeometry },
			{ "GetTrackingState", &UARPin::execGetTrackingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPin_DebugDraw_Statics
	{
		struct ARPin_eventDebugDraw_Parms
		{
			UWorld* World;
			FLinearColor Color;
			float Scale;
			float PersistForSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_PersistForSeconds = { "PersistForSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventDebugDraw_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_DebugDraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_DebugDraw_Statics::NewProp_PersistForSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_DebugDraw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_DebugDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "DebugDraw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_DebugDraw_Statics::ARPin_eventDebugDraw_Parms), Z_Construct_UFunction_UARPin_DebugDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_DebugDraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_DebugDraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_DebugDraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_DebugDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_DebugDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetDebugName_Statics
	{
		struct ARPin_eventGetDebugName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARPin_GetDebugName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetDebugName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetDebugName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetDebugName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetDebugName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetDebugName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetDebugName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetDebugName_Statics::ARPin_eventGetDebugName_Parms), Z_Construct_UFunction_UARPin_GetDebugName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetDebugName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetDebugName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetDebugName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetDebugName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetDebugName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics
	{
		struct ARPin_eventGetLocalToTrackingTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * Maps from a Pin's Local Space to the Tracking Space.\n\x09 * Mapping the origin from the Pin's Local Space to Tracking Space\n\x09 * yield the Pin's position in Tracking Space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
		{ "ToolTip", "Maps from a Pin's Local Space to the Tracking Space.\nMapping the origin from the Pin's Local Space to Tracking Space\nyield the Pin's position in Tracking Space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetLocalToTrackingTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::ARPin_eventGetLocalToTrackingTransform_Parms), Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics
	{
		struct ARPin_eventGetLocalToWorldTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * Convenience function. Same as LocalToTrackingTransform, but\n\x09 * appends the TrackingToWorld Transform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
		{ "ToolTip", "Convenience function. Same as LocalToTrackingTransform, but\nappends the TrackingToWorld Transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetLocalToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::ARPin_eventGetLocalToWorldTransform_Parms), Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetLocalToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics
	{
		struct ARPin_eventGetPinnedComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetPinnedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/** @return the PinnedComponent that this UARPin is pinning to the TrackedGeometry */" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
		{ "ToolTip", "@return the PinnedComponent that this UARPin is pinning to the TrackedGeometry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetPinnedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::ARPin_eventGetPinnedComponent_Parms), Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetPinnedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics
	{
		struct ARPin_eventGetTrackedGeometry_Parms
		{
			UARTrackedGeometry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetTrackedGeometry_Parms, ReturnValue), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * The TrackedGeometry (if any) that this this pin is being \"stuck\" into.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
		{ "ToolTip", "The TrackedGeometry (if any) that this this pin is being \"stuck\" into." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetTrackedGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::ARPin_eventGetTrackedGeometry_Parms), Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetTrackedGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPin_GetTrackingState_Statics
	{
		struct ARPin_eventGetTrackingState_Parms
		{
			EARTrackingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPin_GetTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPin_GetTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPin_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) }; // 2124127308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPin_GetTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetTrackingState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPin_GetTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPin_GetTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "Comment", "/**\n\x09 * Return the current tracking state of this Pin.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
		{ "ToolTip", "Return the current tracking state of this Pin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPin_GetTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPin, nullptr, "GetTrackingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPin_GetTrackingState_Statics::ARPin_eventGetTrackingState_Parms), Z_Construct_UFunction_UARPin_GetTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPin_GetTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPin_GetTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPin_GetTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPin_GetTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPin);
	UClass* Z_Construct_UClass_UARPin_NoRegister()
	{
		return UARPin::StaticClass();
	}
	struct Z_Construct_UClass_UARPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinnedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PinnedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToAlignedTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToAlignedTrackingTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnARTrackingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARTrackingStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnARTransformUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARTransformUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPin_DebugDraw, "DebugDraw" }, // 1059364015
		{ &Z_Construct_UFunction_UARPin_GetDebugName, "GetDebugName" }, // 3351388711
		{ &Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 3770284885
		{ &Z_Construct_UFunction_UARPin_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 2431138356
		{ &Z_Construct_UFunction_UARPin_GetPinnedComponent, "GetPinnedComponent" }, // 3618202776
		{ &Z_Construct_UFunction_UARPin_GetTrackedGeometry, "GetTrackedGeometry" }, // 727860388
		{ &Z_Construct_UFunction_UARPin_GetTrackingState, "GetTrackingState" }, // 1976503934
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ARPin.h" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_TrackedGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_TrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_TrackedGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_PinnedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_PinnedComponent = { "PinnedComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, PinnedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_PinnedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_PinnedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_LocalToTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_LocalToTrackingTransform = { "LocalToTrackingTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_LocalToTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_LocalToTrackingTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_LocalToAlignedTrackingTransform = { "LocalToAlignedTrackingTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, LocalToAlignedTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, TrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState_MetaData)) }; // 2124127308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_OnARTrackingStateChanged_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_OnARTrackingStateChanged = { "OnARTrackingStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, OnARTrackingStateChanged), Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_OnARTrackingStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_OnARTrackingStateChanged_MetaData)) }; // 1130378207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPin_Statics::NewProp_OnARTransformUpdated_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pin" },
		{ "ModuleRelativePath", "Public/ARPin.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARPin_Statics::NewProp_OnARTransformUpdated = { "OnARTransformUpdated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPin, OnARTransformUpdated), Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::NewProp_OnARTransformUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::NewProp_OnARTransformUpdated_MetaData)) }; // 2018739353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_TrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_PinnedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_LocalToTrackingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_LocalToAlignedTrackingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_TrackingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_OnARTrackingStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPin_Statics::NewProp_OnARTransformUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPin_Statics::ClassParams = {
		&UARPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPin()
	{
		if (!Z_Registration_Info_UClass_UARPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPin.OuterSingleton, Z_Construct_UClass_UARPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARPin.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPin>()
	{
		return UARPin::StaticClass();
	}
	UARPin::UARPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPin);
	UARPin::~UARPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARPin, UARPin::StaticClass, TEXT("UARPin"), &Z_Registration_Info_UClass_UARPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPin), 4200633214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_3026229376(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
