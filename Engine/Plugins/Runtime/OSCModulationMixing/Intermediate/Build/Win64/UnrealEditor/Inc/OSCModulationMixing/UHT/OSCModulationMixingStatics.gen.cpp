// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCModulationMixingStatics.h"
#include "OSCAddress.h"
#include "OSCBundle.h"
#include "SoundControlBusMix.h"
#include "SoundModulationValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCModulationMixingStatics() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundControlBusMixStage();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationMixValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OSC_API UClass* Z_Construct_UClass_UOSCClient_NoRegister();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle();
	OSCMODULATIONMIXING_API UClass* Z_Construct_UClass_UOSCModulationMixingStatics();
	OSCMODULATIONMIXING_API UClass* Z_Construct_UClass_UOSCModulationMixingStatics_NoRegister();
	OSCMODULATIONMIXING_API UEnum* Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle();
	OSCMODULATIONMIXING_API UEnum* Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage();
	UPackage* Z_Construct_UPackage__Script_OSCModulationMixing();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOSCModulationBundle;
	static UEnum* EOSCModulationBundle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOSCModulationBundle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOSCModulationBundle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle, (UObject*)Z_Construct_UPackage__Script_OSCModulationMixing(), TEXT("EOSCModulationBundle"));
		}
		return Z_Registration_Info_UEnum_EOSCModulationBundle.OuterSingleton;
	}
	template<> OSCMODULATIONMIXING_API UEnum* StaticEnum<EOSCModulationBundle>()
	{
		return EOSCModulationBundle_StaticEnum();
	}
	struct Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enumerators[] = {
		{ "EOSCModulationBundle::Invalid", (int64)EOSCModulationBundle::Invalid },
		{ "EOSCModulationBundle::LoadMix", (int64)EOSCModulationBundle::LoadMix },
		{ "EOSCModulationBundle::Count", (int64)EOSCModulationBundle::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enum_MetaDataParams[] = {
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOSCModulationBundle::Count" },
		{ "Invalid.Name", "EOSCModulationBundle::Invalid" },
		{ "LoadMix.Name", "EOSCModulationBundle::LoadMix" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OSCModulationMixing,
		nullptr,
		"EOSCModulationBundle",
		"EOSCModulationBundle",
		Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle()
	{
		if (!Z_Registration_Info_UEnum_EOSCModulationBundle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOSCModulationBundle.InnerSingleton, Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOSCModulationBundle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOSCModulationMessage;
	static UEnum* EOSCModulationMessage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOSCModulationMessage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOSCModulationMessage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage, (UObject*)Z_Construct_UPackage__Script_OSCModulationMixing(), TEXT("EOSCModulationMessage"));
		}
		return Z_Registration_Info_UEnum_EOSCModulationMessage.OuterSingleton;
	}
	template<> OSCMODULATIONMIXING_API UEnum* StaticEnum<EOSCModulationMessage>()
	{
		return EOSCModulationMessage_StaticEnum();
	}
	struct Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enumerators[] = {
		{ "EOSCModulationMessage::Invalid", (int64)EOSCModulationMessage::Invalid },
		{ "EOSCModulationMessage::LoadProfile", (int64)EOSCModulationMessage::LoadProfile },
		{ "EOSCModulationMessage::SaveProfile", (int64)EOSCModulationMessage::SaveProfile },
		{ "EOSCModulationMessage::Count", (int64)EOSCModulationMessage::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enum_MetaDataParams[] = {
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOSCModulationMessage::Count" },
		{ "Invalid.Name", "EOSCModulationMessage::Invalid" },
		{ "LoadProfile.Name", "EOSCModulationMessage::LoadProfile" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "SaveProfile.Name", "EOSCModulationMessage::SaveProfile" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OSCModulationMixing,
		nullptr,
		"EOSCModulationMessage",
		"EOSCModulationMessage",
		Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage()
	{
		if (!Z_Registration_Info_UEnum_EOSCModulationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOSCModulationMessage.InnerSingleton, Z_Construct_UEnum_OSCModulationMixing_EOSCModulationMessage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOSCModulationMessage.InnerSingleton;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execOSCBundleToStageValues)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_MixPath);
		P_GET_TARRAY_REF(FOSCAddress,Z_Param_Out_BusPaths);
		P_GET_TARRAY_REF(FString,Z_Param_Out_BusClassNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoundModulationMixValue>*)Z_Param__Result=UOSCModulationMixingStatics::OSCBundleToStageValues(Z_Param_WorldContextObject,Z_Param_Out_Bundle,Z_Param_Out_MixPath,Z_Param_Out_BusPaths,Z_Param_Out_BusClassNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execRequestMix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UOSCClient,Z_Param_Client);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_MixPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCModulationMixingStatics::RequestMix(Z_Param_WorldContextObject,Z_Param_Client,Z_Param_Out_MixPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execGetOSCBundleType)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOSCModulationBundle*)Z_Param__Result=UOSCModulationMixingStatics::GetOSCBundleType(Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execCopyMixToOSCBundle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundControlBusMix,Z_Param_Mix);
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCModulationMixingStatics::CopyMixToOSCBundle(Z_Param_WorldContextObject,Z_Param_Mix,Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execCopyStagesToOSCBundle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_PathAddress);
		P_GET_TARRAY_REF(FSoundControlBusMixStage,Z_Param_Out_Stages);
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCModulationMixingStatics::CopyStagesToOSCBundle(Z_Param_WorldContextObject,Z_Param_Out_PathAddress,Z_Param_Out_Stages,Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execGetProfileSavePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCModulationMixingStatics::GetProfileSavePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execGetProfileLoadPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCModulationMixingStatics::GetProfileLoadPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCModulationMixingStatics::execGetMixLoadPattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCModulationMixingStatics::GetMixLoadPattern();
		P_NATIVE_END;
	}
	void UOSCModulationMixingStatics::StaticRegisterNativesUOSCModulationMixingStatics()
	{
		UClass* Class = UOSCModulationMixingStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyMixToOSCBundle", &UOSCModulationMixingStatics::execCopyMixToOSCBundle },
			{ "CopyStagesToOSCBundle", &UOSCModulationMixingStatics::execCopyStagesToOSCBundle },
			{ "GetMixLoadPattern", &UOSCModulationMixingStatics::execGetMixLoadPattern },
			{ "GetOSCBundleType", &UOSCModulationMixingStatics::execGetOSCBundleType },
			{ "GetProfileLoadPath", &UOSCModulationMixingStatics::execGetProfileLoadPath },
			{ "GetProfileSavePath", &UOSCModulationMixingStatics::execGetProfileSavePath },
			{ "OSCBundleToStageValues", &UOSCModulationMixingStatics::execOSCBundleToStageValues },
			{ "RequestMix", &UOSCModulationMixingStatics::execRequestMix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics
	{
		struct OSCModulationMixingStatics_eventCopyMixToOSCBundle_Parms
		{
			UObject* WorldContextObject;
			USoundControlBusMix* Mix;
			FOSCBundle Bundle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyMixToOSCBundle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyMixToOSCBundle_Parms, Mix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyMixToOSCBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::NewProp_Bundle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Converts Control Bus Mix to OSCBundle representation to send over network via OSC protocol */" },
		{ "DisplayName", "Copy Mix State to OSC Bundle" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Converts Control Bus Mix to OSCBundle representation to send over network via OSC protocol" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "CopyMixToOSCBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::OSCModulationMixingStatics_eventCopyMixToOSCBundle_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics
	{
		struct OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms
		{
			UObject* WorldContextObject;
			FOSCAddress PathAddress;
			TArray<FSoundControlBusMixStage> Stages;
			FOSCBundle Bundle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathAddress;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_PathAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_PathAddress = { "PathAddress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms, PathAddress), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_PathAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_PathAddress_MetaData)) }; // 1476147242
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundControlBusMixStage, METADATA_PARAMS(nullptr, 0) }; // 358731547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages_MetaData)) }; // 358731547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_PathAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::NewProp_Bundle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Converts stage array to OSCBundle representation to send over network via OSC protocol */" },
		{ "DisplayName", "Copy Mix Stages to OSC Bundle" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Converts stage array to OSCBundle representation to send over network via OSC protocol" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "CopyStagesToOSCBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::OSCModulationMixingStatics_eventCopyStagesToOSCBundle_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics
	{
		struct OSCModulationMixingStatics_eventGetMixLoadPattern_Parms
		{
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventGetMixLoadPattern_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Returns OSC Address pattern for loading a mix */" },
		{ "DisplayName", "Get Load Mix Pattern" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Returns OSC Address pattern for loading a mix" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "GetMixLoadPattern", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::OSCModulationMixingStatics_eventGetMixLoadPattern_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics
	{
		struct OSCModulationMixingStatics_eventGetOSCBundleType_Parms
		{
			FOSCBundle Bundle;
			EOSCModulationBundle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventGetOSCBundleType_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventGetOSCBundleType_Parms, ReturnValue), Z_Construct_UEnum_OSCModulationMixing_EOSCModulationBundle, METADATA_PARAMS(nullptr, 0) }; // 356845781
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Returns whether bundle contains recognized payload of OSC Modulation Data */" },
		{ "DisplayName", "Get OSC Modulation Bundle Type" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Returns whether bundle contains recognized payload of OSC Modulation Data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "GetOSCBundleType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::OSCModulationMixingStatics_eventGetOSCBundleType_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics
	{
		struct OSCModulationMixingStatics_eventGetProfileLoadPath_Parms
		{
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventGetProfileLoadPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Returns OSC Address path for loading a profile */" },
		{ "DisplayName", "Get Load Profile Path" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Returns OSC Address path for loading a profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "GetProfileLoadPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::OSCModulationMixingStatics_eventGetProfileLoadPath_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics
	{
		struct OSCModulationMixingStatics_eventGetProfileSavePath_Parms
		{
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventGetProfileSavePath_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Returns OSC Address path for saving a profile */" },
		{ "DisplayName", "Get Save Profile Path" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Returns OSC Address path for saving a profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "GetProfileSavePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::OSCModulationMixingStatics_eventGetProfileSavePath_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics
	{
		struct OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms
		{
			UObject* WorldContextObject;
			FOSCBundle Bundle;
			FOSCAddress MixPath;
			TArray<FOSCAddress> BusPaths;
			TArray<FString> BusClassNames;
			TArray<FSoundModulationMixValue> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusClassNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusClassNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_MixPath = { "MixPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, MixPath), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusPaths_Inner = { "BusPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusPaths = { "BusPaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, BusPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusClassNames_Inner = { "BusClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusClassNames = { "BusClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, BusClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundModulationMixValue, METADATA_PARAMS(nullptr, 0) }; // 2821498296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bus Values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue_MetaData)) }; // 2821498296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_MixPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusClassNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_BusClassNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Converts OSCBundle to Control Bus Values & Mix Path from which it came */" },
		{ "DisplayName", "OSCBundle To Stage Values" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Converts OSCBundle to Control Bus Values & Mix Path from which it came" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "OSCBundleToStageValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::OSCModulationMixingStatics_eventOSCBundleToStageValues_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics
	{
		struct OSCModulationMixingStatics_eventRequestMix_Parms
		{
			UObject* WorldContextObject;
			UOSCClient* Client;
			FOSCAddress MixPath;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MixPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MixPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventRequestMix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventRequestMix_Parms, Client), Z_Construct_UClass_UOSCClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_MixPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_MixPath = { "MixPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCModulationMixingStatics_eventRequestMix_Parms, MixPath), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_MixPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_MixPath_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_Client,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::NewProp_MixPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC|Modulation" },
		{ "Comment", "/** Request mix update from server with loaded content. */" },
		{ "DisplayName", "Request Mix State Update" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
		{ "ToolTip", "Request mix update from server with loaded content." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCModulationMixingStatics, nullptr, "RequestMix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::OSCModulationMixingStatics_eventRequestMix_Parms), Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOSCModulationMixingStatics);
	UClass* Z_Construct_UClass_UOSCModulationMixingStatics_NoRegister()
	{
		return UOSCModulationMixingStatics::StaticClass();
	}
	struct Z_Construct_UClass_UOSCModulationMixingStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOSCModulationMixingStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OSCModulationMixing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOSCModulationMixingStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_CopyMixToOSCBundle, "CopyMixToOSCBundle" }, // 52535676
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_CopyStagesToOSCBundle, "CopyStagesToOSCBundle" }, // 2822756063
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_GetMixLoadPattern, "GetMixLoadPattern" }, // 3691530694
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_GetOSCBundleType, "GetOSCBundleType" }, // 975520895
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileLoadPath, "GetProfileLoadPath" }, // 1695226052
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_GetProfileSavePath, "GetProfileSavePath" }, // 4158774590
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_OSCBundleToStageValues, "OSCBundleToStageValues" }, // 3325136389
		{ &Z_Construct_UFunction_UOSCModulationMixingStatics_RequestMix, "RequestMix" }, // 1047639472
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCModulationMixingStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OSCModulationMixingStatics.h" },
		{ "ModuleRelativePath", "Public/OSCModulationMixingStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOSCModulationMixingStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOSCModulationMixingStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOSCModulationMixingStatics_Statics::ClassParams = {
		&UOSCModulationMixingStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOSCModulationMixingStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCModulationMixingStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOSCModulationMixingStatics()
	{
		if (!Z_Registration_Info_UClass_UOSCModulationMixingStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOSCModulationMixingStatics.OuterSingleton, Z_Construct_UClass_UOSCModulationMixingStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOSCModulationMixingStatics.OuterSingleton;
	}
	template<> OSCMODULATIONMIXING_API UClass* StaticClass<UOSCModulationMixingStatics>()
	{
		return UOSCModulationMixingStatics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOSCModulationMixingStatics);
	UOSCModulationMixingStatics::~UOSCModulationMixingStatics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::EnumInfo[] = {
		{ EOSCModulationBundle_StaticEnum, TEXT("EOSCModulationBundle"), &Z_Registration_Info_UEnum_EOSCModulationBundle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356845781U) },
		{ EOSCModulationMessage_StaticEnum, TEXT("EOSCModulationMessage"), &Z_Registration_Info_UEnum_EOSCModulationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 45848801U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOSCModulationMixingStatics, UOSCModulationMixingStatics::StaticClass, TEXT("UOSCModulationMixingStatics"), &Z_Registration_Info_UClass_UOSCModulationMixingStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOSCModulationMixingStatics), 916752490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_1333429419(TEXT("/Script/OSCModulationMixing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
