// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynthComponents/SynthComponentMoto.h"
#include "../Public/MotoSynthPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthComponentMoto() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthPreset_NoRegister();
	MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto();
	MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto_NoRegister();
	MOTOSYNTH_API UScriptStruct* Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings();
	UPackage* Z_Construct_UPackage__Script_MotoSynth();
// End Cross Module References
	DEFINE_FUNCTION(USynthComponentMoto::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execGetRPMRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMinRPM);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMaxRPM);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRPMRange(Z_Param_Out_OutMinRPM,Z_Param_Out_OutMaxRPM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execSetSettings)
	{
		P_GET_STRUCT_REF(FMotoSynthRuntimeSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthComponentMoto::execSetRPM)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRPM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRPM(Z_Param_InRPM,Z_Param_InTimeSec);
		P_NATIVE_END;
	}
	void USynthComponentMoto::StaticRegisterNativesUSynthComponentMoto()
	{
		UClass* Class = USynthComponentMoto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRPMRange", &USynthComponentMoto::execGetRPMRange },
			{ "IsEnabled", &USynthComponentMoto::execIsEnabled },
			{ "SetRPM", &USynthComponentMoto::execSetRPM },
			{ "SetSettings", &USynthComponentMoto::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics
	{
		struct SynthComponentMoto_eventGetRPMRange_Parms
		{
			float OutMinRPM;
			float OutMaxRPM;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMinRPM;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMaxRPM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMinRPM = { "OutMinRPM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentMoto_eventGetRPMRange_Parms, OutMinRPM), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMaxRPM = { "OutMaxRPM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentMoto_eventGetRPMRange_Parms, OutMaxRPM), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMinRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::NewProp_OutMaxRPM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Retrieves RPM range of the moto synth, taking into account the acceleration and deceleration sources. The min RPM is the largest of the min RPms of either and the max RPM is min of the max RPMs of either. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Retrieves RPM range of the moto synth, taking into account the acceleration and deceleration sources. The min RPM is the largest of the min RPms of either and the max RPM is min of the max RPMs of either." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "GetRPMRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::SynthComponentMoto_eventGetRPMRange_Parms), Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_GetRPMRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_GetRPMRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics
	{
		struct SynthComponentMoto_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SynthComponentMoto_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthComponentMoto_eventIsEnabled_Parms), &Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Returns if the moto synth is enabled. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Returns if the moto synth is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::SynthComponentMoto_eventIsEnabled_Parms), Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics
	{
		struct SynthComponentMoto_eventSetRPM_Parms
		{
			float InRPM;
			float InTimeSec;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRPM;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTimeSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InRPM = { "InRPM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentMoto_eventSetRPM_Parms, InRPM), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InTimeSec = { "InTimeSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentMoto_eventSetRPM_Parms, InTimeSec), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::NewProp_InTimeSec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Sets the RPM of the granular engine directly. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets the RPM of the granular engine directly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "SetRPM", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::SynthComponentMoto_eventSetRPM_Parms), Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_SetRPM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_SetRPM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics
	{
		struct SynthComponentMoto_eventSetSettings_Parms
		{
			FMotoSynthRuntimeSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthComponentMoto_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1101377837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/** Sets a moto synth settings dynamically. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets a moto synth settings dynamically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthComponentMoto, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::SynthComponentMoto_eventSetSettings_Parms), Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthComponentMoto_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthComponentMoto_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthComponentMoto);
	UClass* Z_Construct_UClass_USynthComponentMoto_NoRegister()
	{
		return USynthComponentMoto::StaticClass();
	}
	struct Z_Construct_UClass_USynthComponentMoto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotoSynthPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MotoSynthPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthComponentMoto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthComponentMoto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthComponentMoto_GetRPMRange, "GetRPMRange" }, // 694582159
		{ &Z_Construct_UFunction_USynthComponentMoto_IsEnabled, "IsEnabled" }, // 2887278540
		{ &Z_Construct_UFunction_USynthComponentMoto_SetRPM, "SetRPM" }, // 1178843294
		{ &Z_Construct_UFunction_USynthComponentMoto_SetSettings, "SetSettings" }, // 1911109051
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "SynthComponents/SynthComponentMoto.h" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData[] = {
		{ "Category", "MotoSynth" },
		{ "Comment", "/* The moto synth preset to use for the moto synth component. */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "The moto synth preset to use for the moto synth component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset = { "MotoSynthPreset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentMoto, MotoSynthPreset), Z_Construct_UClass_UMotoSynthPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData[] = {
		{ "Category", "MotoSynth" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "500.0" },
		{ "Comment", "/* Sets the starting RPM of the engine */" },
		{ "ModuleRelativePath", "Classes/SynthComponents/SynthComponentMoto.h" },
		{ "ToolTip", "Sets the starting RPM of the engine" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "500.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthComponentMoto, RPM), METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_MotoSynthPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthComponentMoto_Statics::NewProp_RPM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthComponentMoto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthComponentMoto>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthComponentMoto_Statics::ClassParams = {
		&USynthComponentMoto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthComponentMoto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthComponentMoto()
	{
		if (!Z_Registration_Info_UClass_USynthComponentMoto.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthComponentMoto.OuterSingleton, Z_Construct_UClass_USynthComponentMoto_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthComponentMoto.OuterSingleton;
	}
	template<> MOTOSYNTH_API UClass* StaticClass<USynthComponentMoto>()
	{
		return USynthComponentMoto::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthComponentMoto);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthComponentMoto, USynthComponentMoto::StaticClass, TEXT("USynthComponentMoto"), &Z_Registration_Info_UClass_USynthComponentMoto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthComponentMoto), 657066916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_1845571104(TEXT("/Script/MotoSynth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
