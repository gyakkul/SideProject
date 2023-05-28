// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioModulationStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioModulationStyle() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationStyle();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationStyle_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	DEFINE_FUNCTION(UAudioModulationStyle::execGetParameterColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAudioModulationStyle::GetParameterColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStyle::execGetPatchColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAudioModulationStyle::GetPatchColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStyle::execGetControlBusMixColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAudioModulationStyle::GetControlBusMixColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStyle::execGetControlBusColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAudioModulationStyle::GetControlBusColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioModulationStyle::execGetModulationGeneratorColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UAudioModulationStyle::GetModulationGeneratorColor();
		P_NATIVE_END;
	}
	void UAudioModulationStyle::StaticRegisterNativesUAudioModulationStyle()
	{
		UClass* Class = UAudioModulationStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControlBusColor", &UAudioModulationStyle::execGetControlBusColor },
			{ "GetControlBusMixColor", &UAudioModulationStyle::execGetControlBusMixColor },
			{ "GetModulationGeneratorColor", &UAudioModulationStyle::execGetModulationGeneratorColor },
			{ "GetParameterColor", &UAudioModulationStyle::execGetParameterColor },
			{ "GetPatchColor", &UAudioModulationStyle::execGetPatchColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics
	{
		struct AudioModulationStyle_eventGetControlBusColor_Parms
		{
			FColor ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStyle_eventGetControlBusColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation|Style" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStyle, nullptr, "GetControlBusColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::AudioModulationStyle_eventGetControlBusColor_Parms), Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics
	{
		struct AudioModulationStyle_eventGetControlBusMixColor_Parms
		{
			FColor ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStyle_eventGetControlBusMixColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation|Style" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStyle, nullptr, "GetControlBusMixColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::AudioModulationStyle_eventGetControlBusMixColor_Parms), Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics
	{
		struct AudioModulationStyle_eventGetModulationGeneratorColor_Parms
		{
			FColor ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStyle_eventGetModulationGeneratorColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation|Style" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStyle, nullptr, "GetModulationGeneratorColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::AudioModulationStyle_eventGetModulationGeneratorColor_Parms), Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics
	{
		struct AudioModulationStyle_eventGetParameterColor_Parms
		{
			FColor ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStyle_eventGetParameterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation|Style" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStyle, nullptr, "GetParameterColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::AudioModulationStyle_eventGetParameterColor_Parms), Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics
	{
		struct AudioModulationStyle_eventGetPatchColor_Parms
		{
			FColor ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioModulationStyle_eventGetPatchColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Modulation|Style" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioModulationStyle, nullptr, "GetPatchColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::AudioModulationStyle_eventGetPatchColor_Parms), Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioModulationStyle);
	UClass* Z_Construct_UClass_UAudioModulationStyle_NoRegister()
	{
		return UAudioModulationStyle::StaticClass();
	}
	struct Z_Construct_UClass_UAudioModulationStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioModulationStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioModulationStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioModulationStyle_GetControlBusColor, "GetControlBusColor" }, // 3509454403
		{ &Z_Construct_UFunction_UAudioModulationStyle_GetControlBusMixColor, "GetControlBusMixColor" }, // 3867539124
		{ &Z_Construct_UFunction_UAudioModulationStyle_GetModulationGeneratorColor, "GetModulationGeneratorColor" }, // 2416535728
		{ &Z_Construct_UFunction_UAudioModulationStyle_GetParameterColor, "GetParameterColor" }, // 884592211
		{ &Z_Construct_UFunction_UAudioModulationStyle_GetPatchColor, "GetPatchColor" }, // 3817924585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioModulationStyle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioModulationStyle.h" },
		{ "ModuleRelativePath", "Public/AudioModulationStyle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioModulationStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioModulationStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioModulationStyle_Statics::ClassParams = {
		&UAudioModulationStyle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioModulationStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioModulationStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioModulationStyle()
	{
		if (!Z_Registration_Info_UClass_UAudioModulationStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioModulationStyle.OuterSingleton, Z_Construct_UClass_UAudioModulationStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioModulationStyle.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<UAudioModulationStyle>()
	{
		return UAudioModulationStyle::StaticClass();
	}
	UAudioModulationStyle::UAudioModulationStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioModulationStyle);
	UAudioModulationStyle::~UAudioModulationStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioModulationStyle, UAudioModulationStyle::StaticClass, TEXT("UAudioModulationStyle"), &Z_Registration_Info_UClass_UAudioModulationStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioModulationStyle), 292458286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_2663797107(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
