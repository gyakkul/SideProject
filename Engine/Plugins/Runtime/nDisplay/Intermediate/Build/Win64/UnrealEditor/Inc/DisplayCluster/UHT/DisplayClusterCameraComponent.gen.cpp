// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterCameraComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterCameraComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterComponent_NoRegister();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset;
	static UEnum* EDisplayClusterEyeStereoOffset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterEyeStereoOffset"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterEyeStereoOffset>()
	{
		return EDisplayClusterEyeStereoOffset_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enumerators[] = {
		{ "EDisplayClusterEyeStereoOffset::None", (int64)EDisplayClusterEyeStereoOffset::None },
		{ "EDisplayClusterEyeStereoOffset::Left", (int64)EDisplayClusterEyeStereoOffset::Left },
		{ "EDisplayClusterEyeStereoOffset::Right", (int64)EDisplayClusterEyeStereoOffset::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enum_MetaDataParams[] = {
		{ "Left.DisplayName", "Left Eye" },
		{ "Left.Name", "EDisplayClusterEyeStereoOffset::Left" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "None.DisplayName", "Default" },
		{ "None.Name", "EDisplayClusterEyeStereoOffset::None" },
		{ "Right.DisplayName", "Right Eye" },
		{ "Right.Name", "EDisplayClusterEyeStereoOffset::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterEyeStereoOffset",
		"EDisplayClusterEyeStereoOffset",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset.InnerSingleton;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execSetStereoOffset)
	{
		P_GET_ENUM(EDisplayClusterEyeStereoOffset,Z_Param_InStereoOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStereoOffset(EDisplayClusterEyeStereoOffset(Z_Param_InStereoOffset));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execGetStereoOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayClusterEyeStereoOffset*)Z_Param__Result=P_THIS->GetStereoOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execToggleSwapEyes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleSwapEyes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execSetSwapEyes)
	{
		P_GET_UBOOL(Z_Param_SwapEyes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwapEyes(Z_Param_SwapEyes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execGetSwapEyes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSwapEyes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execSetInterpupillaryDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpupillaryDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterCameraComponent::execGetInterpupillaryDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInterpupillaryDistance();
		P_NATIVE_END;
	}
	void UDisplayClusterCameraComponent::StaticRegisterNativesUDisplayClusterCameraComponent()
	{
		UClass* Class = UDisplayClusterCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInterpupillaryDistance", &UDisplayClusterCameraComponent::execGetInterpupillaryDistance },
			{ "GetStereoOffset", &UDisplayClusterCameraComponent::execGetStereoOffset },
			{ "GetSwapEyes", &UDisplayClusterCameraComponent::execGetSwapEyes },
			{ "SetInterpupillaryDistance", &UDisplayClusterCameraComponent::execSetInterpupillaryDistance },
			{ "SetStereoOffset", &UDisplayClusterCameraComponent::execSetStereoOffset },
			{ "SetSwapEyes", &UDisplayClusterCameraComponent::execSetSwapEyes },
			{ "ToggleSwapEyes", &UDisplayClusterCameraComponent::execToggleSwapEyes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics
	{
		struct DisplayClusterCameraComponent_eventGetInterpupillaryDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterCameraComponent_eventGetInterpupillaryDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Get interpupillary distance\n\x09*\n\x09* @return - Interpupillary distance\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Get interpupillary distance\n\n@return - Interpupillary distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "GetInterpupillaryDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::DisplayClusterCameraComponent_eventGetInterpupillaryDistance_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics
	{
		struct DisplayClusterCameraComponent_eventGetStereoOffset_Parms
		{
			EDisplayClusterEyeStereoOffset ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterCameraComponent_eventGetStereoOffset_Parms, ReturnValue), Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset, METADATA_PARAMS(nullptr, 0) }; // 858043798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Get stereo offset type\n\x09*\n\x09* @return - Current forced stereo offset type\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Get stereo offset type\n\n@return - Current forced stereo offset type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "GetStereoOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::DisplayClusterCameraComponent_eventGetStereoOffset_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics
	{
		struct DisplayClusterCameraComponent_eventGetSwapEyes_Parms
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
	void Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterCameraComponent_eventGetSwapEyes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterCameraComponent_eventGetSwapEyes_Parms), &Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Get swap eyes state\n\x09*\n\x09* @return - Eyes swap state. False - normal eyes left|right, true - swapped eyes right|left\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Get swap eyes state\n\n@return - Eyes swap state. False - normal eyes left|right, true - swapped eyes right|left" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "GetSwapEyes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::DisplayClusterCameraComponent_eventGetSwapEyes_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics
	{
		struct DisplayClusterCameraComponent_eventSetInterpupillaryDistance_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterCameraComponent_eventSetInterpupillaryDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Set interpupillary distance\n\x09*\n\x09* @param Distance - New interpupillary distance\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Set interpupillary distance\n\n@param Distance - New interpupillary distance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "SetInterpupillaryDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::DisplayClusterCameraComponent_eventSetInterpupillaryDistance_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics
	{
		struct DisplayClusterCameraComponent_eventSetStereoOffset_Parms
		{
			EDisplayClusterEyeStereoOffset InStereoOffset;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InStereoOffset_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InStereoOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::NewProp_InStereoOffset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::NewProp_InStereoOffset = { "InStereoOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterCameraComponent_eventSetStereoOffset_Parms, InStereoOffset), Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset, METADATA_PARAMS(nullptr, 0) }; // 858043798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::NewProp_InStereoOffset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::NewProp_InStereoOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Set stereo offset type\n\x09*\n\x09* @param StereoOffset - New forced stereo offset type\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Set stereo offset type\n\n@param StereoOffset - New forced stereo offset type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "SetStereoOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::DisplayClusterCameraComponent_eventSetStereoOffset_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics
	{
		struct DisplayClusterCameraComponent_eventSetSwapEyes_Parms
		{
			bool SwapEyes;
		};
		static void NewProp_SwapEyes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SwapEyes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::NewProp_SwapEyes_SetBit(void* Obj)
	{
		((DisplayClusterCameraComponent_eventSetSwapEyes_Parms*)Obj)->SwapEyes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::NewProp_SwapEyes = { "SwapEyes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterCameraComponent_eventSetSwapEyes_Parms), &Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::NewProp_SwapEyes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::NewProp_SwapEyes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Set swap eyes state\n\x09*\n\x09* @param SwapEyes - New eyes swap state. False - normal eyes left|right, true - swapped eyes right|left\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Set swap eyes state\n\n@param SwapEyes - New eyes swap state. False - normal eyes left|right, true - swapped eyes right|left" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "SetSwapEyes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::DisplayClusterCameraComponent_eventSetSwapEyes_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics
	{
		struct DisplayClusterCameraComponent_eventToggleSwapEyes_Parms
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
	void Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterCameraComponent_eventToggleSwapEyes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterCameraComponent_eventToggleSwapEyes_Parms), &Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stereo" },
		{ "Comment", "/**\n\x09* Toggles eyes swap state\n\x09*\n\x09* @return - New eyes swap state. False - normal eyes left|right, true - swapped eyes right|left\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Toggles eyes swap state\n\n@return - New eyes swap state. False - normal eyes left|right, true - swapped eyes right|left" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterCameraComponent, nullptr, "ToggleSwapEyes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::DisplayClusterCameraComponent_eventToggleSwapEyes_Parms), Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterCameraComponent);
	UClass* Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister()
	{
		return UDisplayClusterCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGizmo_MetaData[];
#endif
		static void NewProp_bEnableGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGizmoScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseGizmoScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScaleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScaleMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpupillaryDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpupillaryDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwapEyes_MetaData[];
#endif
		static void NewProp_bSwapEyes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapEyes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StereoOffset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoOffset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StereoOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_GetInterpupillaryDistance, "GetInterpupillaryDistance" }, // 3606069324
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_GetStereoOffset, "GetStereoOffset" }, // 884331494
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_GetSwapEyes, "GetSwapEyes" }, // 981850156
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_SetInterpupillaryDistance, "SetInterpupillaryDistance" }, // 2910253064
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_SetStereoOffset, "SetStereoOffset" }, // 3037476084
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_SetSwapEyes, "SetSwapEyes" }, // 1012239329
		{ &Z_Construct_UFunction_UDisplayClusterCameraComponent_ToggleSwapEyes, "ToggleSwapEyes" }, // 3766933207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * 3D point in space used to render nDisplay viewports from\n */" },
		{ "DisplayName", "NDisplay View Origin" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterCameraComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "3D point in space used to render nDisplay viewports from" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Gizmo visibility */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Gizmo visibility" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo_SetBit(void* Obj)
	{
		((UDisplayClusterCameraComponent*)Obj)->bEnableGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo = { "bEnableGizmo", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDisplayClusterCameraComponent), &Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_BaseGizmoScale_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Base gizmo scale */" },
		{ "EditCondition", "bEnableGizmo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Base gizmo scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_BaseGizmoScale = { "BaseGizmoScale", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, BaseGizmoScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_BaseGizmoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_BaseGizmoScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Gizmo scale multiplier */" },
		{ "EditCondition", "bEnableGizmo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
		{ "ToolTip", "Gizmo scale multiplier" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_GizmoScaleMultiplier = { "GizmoScaleMultiplier", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, GizmoScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_GizmoScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteTexture = { "SpriteTexture", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, SpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_InterpupillaryDistance_MetaData[] = {
		{ "Category", "Stereo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_InterpupillaryDistance = { "InterpupillaryDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, InterpupillaryDistance), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_InterpupillaryDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_InterpupillaryDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes_MetaData[] = {
		{ "Category", "Stereo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes_SetBit(void* Obj)
	{
		((UDisplayClusterCameraComponent*)Obj)->bSwapEyes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes = { "bSwapEyes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterCameraComponent), &Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset_MetaData[] = {
		{ "Category", "Stereo" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset = { "StereoOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterCameraComponent, StereoOffset), Z_Construct_UEnum_DisplayCluster_EDisplayClusterEyeStereoOffset, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset_MetaData)) }; // 858043798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bEnableGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_BaseGizmoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_GizmoScaleMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_SpriteTexture,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_InterpupillaryDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_bSwapEyes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::NewProp_StereoOffset,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayClusterComponent_NoRegister, (int32)VTABLE_OFFSET(UDisplayClusterCameraComponent, IDisplayClusterComponent), false },  // 2444164134
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::ClassParams = {
		&UDisplayClusterCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterCameraComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterCameraComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterCameraComponent>()
	{
		return UDisplayClusterCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterCameraComponent);
	UDisplayClusterCameraComponent::~UDisplayClusterCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::EnumInfo[] = {
		{ EDisplayClusterEyeStereoOffset_StaticEnum, TEXT("EDisplayClusterEyeStereoOffset"), &Z_Registration_Info_UEnum_EDisplayClusterEyeStereoOffset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 858043798U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterCameraComponent, UDisplayClusterCameraComponent::StaticClass, TEXT("UDisplayClusterCameraComponent"), &Z_Registration_Info_UClass_UDisplayClusterCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterCameraComponent), 663132082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_986567876(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
