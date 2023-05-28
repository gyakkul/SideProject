// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudioBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary();
	RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister();
	RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References
	DEFINE_FUNCTION(UResonanceAudioBlueprintFunctionLibrary::execGetGlobalReverbPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResonanceAudioReverbPluginPreset**)Z_Param__Result=UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioBlueprintFunctionLibrary::execSetGlobalReverbPreset)
	{
		P_GET_OBJECT(UResonanceAudioReverbPluginPreset,Z_Param_InPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset(Z_Param_InPreset);
		P_NATIVE_END;
	}
	void UResonanceAudioBlueprintFunctionLibrary::StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary()
	{
		UClass* Class = UResonanceAudioBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalReverbPreset", &UResonanceAudioBlueprintFunctionLibrary::execGetGlobalReverbPreset },
			{ "SetGlobalReverbPreset", &UResonanceAudioBlueprintFunctionLibrary::execSetGlobalReverbPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics
	{
		struct ResonanceAudioBlueprintFunctionLibrary_eventGetGlobalReverbPreset_Parms
		{
			UResonanceAudioReverbPluginPreset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioBlueprintFunctionLibrary_eventGetGlobalReverbPreset_Parms, ReturnValue), Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResonanceAudio|GlobalReverbPreset" },
		{ "Comment", "// This function retrieves the Global Reverb Preset for Resonance Audio\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioBlueprintFunctionLibrary.h" },
		{ "ToolTip", "This function retrieves the Global Reverb Preset for Resonance Audio" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary, nullptr, "GetGlobalReverbPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::ResonanceAudioBlueprintFunctionLibrary_eventGetGlobalReverbPreset_Parms), Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics
	{
		struct ResonanceAudioBlueprintFunctionLibrary_eventSetGlobalReverbPreset_Parms
		{
			UResonanceAudioReverbPluginPreset* InPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioBlueprintFunctionLibrary_eventSetGlobalReverbPreset_Parms, InPreset), Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::NewProp_InPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResonanceAudio|GlobalReverbPreset" },
		{ "Comment", "// This function overrides the Global Reverb Preset for Resonance Audio\n" },
		{ "ModuleRelativePath", "Public/ResonanceAudioBlueprintFunctionLibrary.h" },
		{ "ToolTip", "This function overrides the Global Reverb Preset for Resonance Audio" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary, nullptr, "SetGlobalReverbPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::ResonanceAudioBlueprintFunctionLibrary_eventSetGlobalReverbPreset_Parms), Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister()
	{
		return UResonanceAudioBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset, "GetGlobalReverbPreset" }, // 3254881380
		{ &Z_Construct_UFunction_UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset, "SetGlobalReverbPreset" }, // 2094977273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResonanceAudioBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ResonanceAudioBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::ClassParams = {
		&UResonanceAudioBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> RESONANCEAUDIO_API UClass* StaticClass<UResonanceAudioBlueprintFunctionLibrary>()
	{
		return UResonanceAudioBlueprintFunctionLibrary::StaticClass();
	}
	UResonanceAudioBlueprintFunctionLibrary::UResonanceAudioBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioBlueprintFunctionLibrary);
	UResonanceAudioBlueprintFunctionLibrary::~UResonanceAudioBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary, UResonanceAudioBlueprintFunctionLibrary::StaticClass, TEXT("UResonanceAudioBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioBlueprintFunctionLibrary), 682851829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_2048949975(TEXT("/Script/ResonanceAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
