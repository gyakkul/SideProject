// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LinearTimecodeComponent.h"
#include "DropTimecode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearTimecodeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	LINEARTIMECODE_API UClass* Z_Construct_UClass_UDropTimecodeToStringConversion();
	LINEARTIMECODE_API UClass* Z_Construct_UClass_UDropTimecodeToStringConversion_NoRegister();
	LINEARTIMECODE_API UClass* Z_Construct_UClass_ULinearTimecodeComponent();
	LINEARTIMECODE_API UClass* Z_Construct_UClass_ULinearTimecodeComponent_NoRegister();
	LINEARTIMECODE_API UFunction* Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature();
	LINEARTIMECODE_API UScriptStruct* Z_Construct_UScriptStruct_FDropTimecode();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LinearTimecode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics
	{
		struct _Script_LinearTimecode_eventOnTimecodeChange_Parms
		{
			FDropTimecode Timecode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::NewProp_Timecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LinearTimecode_eventOnTimecodeChange_Parms, Timecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::NewProp_Timecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::NewProp_Timecode_MetaData)) }; // 3188645423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::NewProp_Timecode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LinearTimecode, nullptr, "OnTimecodeChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::_Script_LinearTimecode_eventOnTimecodeChange_Parms), Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTimecodeChange_DelegateWrapper(const FMulticastScriptDelegate& OnTimecodeChange, FDropTimecode const& Timecode)
{
	struct _Script_LinearTimecode_eventOnTimecodeChange_Parms
	{
		FDropTimecode Timecode;
	};
	_Script_LinearTimecode_eventOnTimecodeChange_Parms Parms;
	Parms.Timecode=Timecode;
	OnTimecodeChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULinearTimecodeComponent::execSetDropTimecodeFrameNumber)
	{
		P_GET_STRUCT_REF(FDropTimecode,Z_Param_Out_Timecode);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameNumber);
		P_GET_STRUCT_REF(FDropTimecode,Z_Param_Out_OutTimecode);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULinearTimecodeComponent::SetDropTimecodeFrameNumber(Z_Param_Out_Timecode,Z_Param_FrameNumber,Z_Param_Out_OutTimecode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinearTimecodeComponent::execGetDropTimeCodeFrameNumber)
	{
		P_GET_STRUCT_REF(FDropTimecode,Z_Param_Out_Timecode);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FrameNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(Z_Param_Out_Timecode,Z_Param_Out_FrameNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinearTimecodeComponent::execGetDropFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDropFrameNumber();
		P_NATIVE_END;
	}
	void ULinearTimecodeComponent::StaticRegisterNativesULinearTimecodeComponent()
	{
		UClass* Class = ULinearTimecodeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDropFrameNumber", &ULinearTimecodeComponent::execGetDropFrameNumber },
			{ "GetDropTimeCodeFrameNumber", &ULinearTimecodeComponent::execGetDropTimeCodeFrameNumber },
			{ "SetDropTimecodeFrameNumber", &ULinearTimecodeComponent::execSetDropTimecodeFrameNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics
	{
		struct LinearTimecodeComponent_eventGetDropFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventGetDropFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Get the Frame Number\n\x09 * @return Frame Number\n\x09 */" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Get the Frame Number\n@return Frame Number" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinearTimecodeComponent, nullptr, "GetDropFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::LinearTimecodeComponent_eventGetDropFrameNumber_Parms), Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics
	{
		struct LinearTimecodeComponent_eventGetDropTimeCodeFrameNumber_Parms
		{
			FDropTimecode Timecode;
			int32 FrameNumber;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_Timecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventGetDropTimeCodeFrameNumber_Parms, Timecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_Timecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_Timecode_MetaData)) }; // 3188645423
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventGetDropTimeCodeFrameNumber_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_Timecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::NewProp_FrameNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Convert a drop timecode into a frame number\n\x09 * @param Timecode - Used to access the framerate, and drop flag\n\x09 * @param FrameNumber - returned calculated frame number\n\x09 */" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Convert a drop timecode into a frame number\n@param Timecode - Used to access the framerate, and drop flag\n@param FrameNumber - returned calculated frame number" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinearTimecodeComponent, nullptr, "GetDropTimeCodeFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::LinearTimecodeComponent_eventGetDropTimeCodeFrameNumber_Parms), Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics
	{
		struct LinearTimecodeComponent_eventSetDropTimecodeFrameNumber_Parms
		{
			FDropTimecode Timecode;
			int32 FrameNumber;
			FDropTimecode OutTimecode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_Timecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventSetDropTimecodeFrameNumber_Parms, Timecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_Timecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_Timecode_MetaData)) }; // 3188645423
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventSetDropTimecodeFrameNumber_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_OutTimecode = { "OutTimecode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LinearTimecodeComponent_eventSetDropTimecodeFrameNumber_Parms, OutTimecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(nullptr, 0) }; // 3188645423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_Timecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_FrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::NewProp_OutTimecode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Convert frame number into a drop timecode\n\x09 * @param Timecode - used to access the framerate, and drop flag\n\x09 * @param FrameNumber - Frame number to set in the returned timecode\n\x09 * @param OutTimecode - Returned drop timecode\n\x09 */" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Convert frame number into a drop timecode\n@param Timecode - used to access the framerate, and drop flag\n@param FrameNumber - Frame number to set in the returned timecode\n@param OutTimecode - Returned drop timecode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinearTimecodeComponent, nullptr, "SetDropTimecodeFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::LinearTimecodeComponent_eventSetDropTimecodeFrameNumber_Parms), Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULinearTimecodeComponent);
	UClass* Z_Construct_UClass_ULinearTimecodeComponent_NoRegister()
	{
		return ULinearTimecodeComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULinearTimecodeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropTimecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTimecodeChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimecodeChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinearTimecodeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LinearTimecode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULinearTimecodeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULinearTimecodeComponent_GetDropFrameNumber, "GetDropFrameNumber" }, // 2498926018
		{ &Z_Construct_UFunction_ULinearTimecodeComponent_GetDropTimeCodeFrameNumber, "GetDropTimeCodeFrameNumber" }, // 639325577
		{ &Z_Construct_UFunction_ULinearTimecodeComponent_SetDropTimecodeFrameNumber, "SetDropTimecodeFrameNumber" }, // 3339921857
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearTimecodeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "Comment", "/**\n * Implements a Linear timecode decoder.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LinearTimecodeComponent.h" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Implements a Linear timecode decoder." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** The media player asset associated with this component. */" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "The media player asset associated with this component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearTimecodeComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_DropTimecode_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_DropTimecode = { "DropTimecode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearTimecodeComponent, DropTimecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_DropTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_DropTimecode_MetaData)) }; // 3188645423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_OnTimecodeChange_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Called when the timecode changes */" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Called when the timecode changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_OnTimecodeChange = { "OnTimecodeChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearTimecodeComponent, OnTimecodeChange), Z_Construct_UDelegateFunction_LinearTimecode_OnTimecodeChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_OnTimecodeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_OnTimecodeChange_MetaData)) }; // 2236075151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearTimecodeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_DropTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTimecodeComponent_Statics::NewProp_OnTimecodeChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinearTimecodeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearTimecodeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinearTimecodeComponent_Statics::ClassParams = {
		&ULinearTimecodeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULinearTimecodeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTimecodeComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULinearTimecodeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTimecodeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinearTimecodeComponent()
	{
		if (!Z_Registration_Info_UClass_ULinearTimecodeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinearTimecodeComponent.OuterSingleton, Z_Construct_UClass_ULinearTimecodeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULinearTimecodeComponent.OuterSingleton;
	}
	template<> LINEARTIMECODE_API UClass* StaticClass<ULinearTimecodeComponent>()
	{
		return ULinearTimecodeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearTimecodeComponent);
	ULinearTimecodeComponent::~ULinearTimecodeComponent() {}
	DEFINE_FUNCTION(UDropTimecodeToStringConversion::execConv_DropTimecodeToString)
	{
		P_GET_STRUCT_REF(FDropTimecode,Z_Param_Out_InTimecode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDropTimecodeToStringConversion::Conv_DropTimecodeToString(Z_Param_Out_InTimecode);
		P_NATIVE_END;
	}
	void UDropTimecodeToStringConversion::StaticRegisterNativesUDropTimecodeToStringConversion()
	{
		UClass* Class = UDropTimecodeToStringConversion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_DropTimecodeToString", &UDropTimecodeToStringConversion::execConv_DropTimecodeToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics
	{
		struct DropTimecodeToStringConversion_eventConv_DropTimecodeToString_Parms
		{
			FDropTimecode InTimecode;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimecode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_InTimecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_InTimecode = { "InTimecode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DropTimecodeToStringConversion_eventConv_DropTimecodeToString_Parms, InTimecode), Z_Construct_UScriptStruct_FDropTimecode, METADATA_PARAMS(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_InTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_InTimecode_MetaData)) }; // 3188645423
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DropTimecodeToStringConversion_eventConv_DropTimecodeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_InTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Convert a timecode structure into a string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (DropTimecode)" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Convert a timecode structure into a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropTimecodeToStringConversion, nullptr, "Conv_DropTimecodeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::DropTimecodeToStringConversion_eventConv_DropTimecodeToString_Parms), Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropTimecodeToStringConversion);
	UClass* Z_Construct_UClass_UDropTimecodeToStringConversion_NoRegister()
	{
		return UDropTimecodeToStringConversion::StaticClass();
	}
	struct Z_Construct_UClass_UDropTimecodeToStringConversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LinearTimecode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropTimecodeToStringConversion_Conv_DropTimecodeToString, "Conv_DropTimecodeToString" }, // 3971242490
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n * Extend type conversions to handle FDropTimecode structure\n */" },
		{ "IncludePath", "LinearTimecodeComponent.h" },
		{ "ModuleRelativePath", "Public/LinearTimecodeComponent.h" },
		{ "ToolTip", "Extend type conversions to handle FDropTimecode structure" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropTimecodeToStringConversion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::ClassParams = {
		&UDropTimecodeToStringConversion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropTimecodeToStringConversion()
	{
		if (!Z_Registration_Info_UClass_UDropTimecodeToStringConversion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropTimecodeToStringConversion.OuterSingleton, Z_Construct_UClass_UDropTimecodeToStringConversion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropTimecodeToStringConversion.OuterSingleton;
	}
	template<> LINEARTIMECODE_API UClass* StaticClass<UDropTimecodeToStringConversion>()
	{
		return UDropTimecodeToStringConversion::StaticClass();
	}
	UDropTimecodeToStringConversion::UDropTimecodeToStringConversion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropTimecodeToStringConversion);
	UDropTimecodeToStringConversion::~UDropTimecodeToStringConversion() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULinearTimecodeComponent, ULinearTimecodeComponent::StaticClass, TEXT("ULinearTimecodeComponent"), &Z_Registration_Info_UClass_ULinearTimecodeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinearTimecodeComponent), 1686228873U) },
		{ Z_Construct_UClass_UDropTimecodeToStringConversion, UDropTimecodeToStringConversion::StaticClass, TEXT("UDropTimecodeToStringConversion"), &Z_Registration_Info_UClass_UDropTimecodeToStringConversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropTimecodeToStringConversion), 2110957515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_3114806371(TEXT("/Script/LinearTimecode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
