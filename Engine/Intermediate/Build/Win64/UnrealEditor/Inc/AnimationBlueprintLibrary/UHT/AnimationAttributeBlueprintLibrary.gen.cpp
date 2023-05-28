// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationAttributeBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationAttributeBlueprintLibrary() {}
// Cross Module References
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimationAttributeBlueprintLibrary();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintLibrary();
// End Cross Module References
	void UAnimationAttributeBlueprintLibrary::StaticRegisterNativesUAnimationAttributeBlueprintLibrary()
	{
		UClass* Class = UAnimationAttributeBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeKey", &UAnimationAttributeBlueprintLibrary::execGetAttributeKey },
			{ "GetAttributeKeys", &UAnimationAttributeBlueprintLibrary::execGetAttributeKeys },
			{ "SetAttributeKey", &UAnimationAttributeBlueprintLibrary::execSetAttributeKey },
			{ "SetAttributeKeys", &UAnimationAttributeBlueprintLibrary::execSetAttributeKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics
	{
		struct AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms
		{
			TScriptInterface<IAnimationDataModel> AnimationDataModel;
			FAnimationAttributeIdentifier AttributeIdentifier;
			float Time;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimationDataModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AnimationDataModel = { "AnimationDataModel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms, AnimationDataModel), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData)) }; // 197982779
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms), &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AnimationDataModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_AttributeIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animation|Attributes" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/AnimationAttributeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeBlueprintLibrary, nullptr, "GetAttributeKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::AnimationAttributeBlueprintLibrary_eventGetAttributeKey_Parms), Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics
	{
		struct AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms
		{
			TScriptInterface<IAnimationDataModel> AnimationDataModel;
			FAnimationAttributeIdentifier AttributeIdentifier;
			TArray<float> OutTimes;
			TArray<int32> Values;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimationDataModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTimes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTimes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AnimationDataModel = { "AnimationDataModel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms, AnimationDataModel), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData)) }; // 197982779
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_OutTimes_Inner = { "OutTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_OutTimes = { "OutTimes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms, OutTimes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms), &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AnimationDataModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_AttributeIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_OutTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_OutTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animation|Attributes" },
		{ "CustomStructureParam", "Values" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/AnimationAttributeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeBlueprintLibrary, nullptr, "GetAttributeKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::AnimationAttributeBlueprintLibrary_eventGetAttributeKeys_Parms), Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics
	{
		struct AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms
		{
			TScriptInterface<IAnimationDataController> AnimationDataController;
			FAnimationAttributeIdentifier AttributeIdentifier;
			float Time;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimationDataController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AnimationDataController = { "AnimationDataController", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms, AnimationDataController), Z_Construct_UClass_UAnimationDataController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AttributeIdentifier_MetaData)) }; // 197982779
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms), &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AnimationDataController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_AttributeIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animation|Attributes" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/AnimationAttributeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeBlueprintLibrary, nullptr, "SetAttributeKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::AnimationAttributeBlueprintLibrary_eventSetAttributeKey_Parms), Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics
	{
		struct AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms
		{
			TScriptInterface<IAnimationDataController> AnimationDataController;
			FAnimationAttributeIdentifier AttributeIdentifier;
			TArray<float> Times;
			TArray<int32> Values;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimationDataController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AnimationDataController = { "AnimationDataController", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms, AnimationDataController), Z_Construct_UClass_UAnimationDataController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AttributeIdentifier_MetaData)) }; // 197982779
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values_MetaData)) };
	void Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms), &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AnimationDataController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_AttributeIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animation|Attributes" },
		{ "CustomStructureParam", "Values" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/AnimationAttributeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAttributeBlueprintLibrary, nullptr, "SetAttributeKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::AnimationAttributeBlueprintLibrary_eventSetAttributeKeys_Parms), Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationAttributeBlueprintLibrary);
	UClass* Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_NoRegister()
	{
		return UAnimationAttributeBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKey, "GetAttributeKey" }, // 775075345
		{ &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_GetAttributeKeys, "GetAttributeKeys" }, // 2452689176
		{ &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKey, "SetAttributeKey" }, // 2595858458
		{ &Z_Construct_UFunction_UAnimationAttributeBlueprintLibrary_SetAttributeKeys, "SetAttributeKeys" }, // 1869918441
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationAttributeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimationAttributeBlueprintLibrary.h" },
		{ "ScriptName", "AnimationAttributeLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAttributeBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::ClassParams = {
		&UAnimationAttributeBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationAttributeBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimationAttributeBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationAttributeBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAnimationAttributeBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationAttributeBlueprintLibrary.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UAnimationAttributeBlueprintLibrary>()
	{
		return UAnimationAttributeBlueprintLibrary::StaticClass();
	}
	UAnimationAttributeBlueprintLibrary::UAnimationAttributeBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAttributeBlueprintLibrary);
	UAnimationAttributeBlueprintLibrary::~UAnimationAttributeBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationAttributeBlueprintLibrary, UAnimationAttributeBlueprintLibrary::StaticClass, TEXT("UAnimationAttributeBlueprintLibrary"), &Z_Registration_Info_UClass_UAnimationAttributeBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationAttributeBlueprintLibrary), 552412117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_373162499(TEXT("/Script/AnimationBlueprintLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationAttributeBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
