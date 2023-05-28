// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraSimCacheCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCapture() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters;
class UScriptStruct* FNiagaraSimCacheCaptureParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheCaptureParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheCaptureParameters>()
{
	return FNiagaraSimCacheCaptureParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManuallyAdvanceSimulation_MetaData[];
#endif
		static void NewProp_bManuallyAdvanceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManuallyAdvanceSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvanceDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdvanceDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheCaptureParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09 The max number of frames to capture. The capture will stop when the simulation completes or we have rendered this many frames, whichever happens first.\n\x09 Set to 0 to capture until simulation completes.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "The max number of frames to capture. The capture will stop when the simulation completes or we have rendered this many frames, whichever happens first.\nSet to 0 to capture until simulation completes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09 Allows for reducing the frequency of captured frames in relation to the simulation's frames. The ratio is 1 / CaptureRate, so a CaptureRate of 2 would captures frames 0, 2, 4, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "Allows for reducing the frequency of captured frames in relation to the simulation's frames. The ratio is 1 / CaptureRate, so a CaptureRate of 2 would captures frames 0, 2, 4, etc." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, CaptureRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09 Controls manually advancing the simulation in a loop vs reading from it every frame. If bAdvanceSimulation is true, this capture will manually advance the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "Controls manually advancing the simulation in a loop vs reading from it every frame. If bAdvanceSimulation is true, this capture will manually advance the simulation" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation_SetBit(void* Obj)
	{
		((FNiagaraSimCacheCaptureParameters*)Obj)->bManuallyAdvanceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation = { "bManuallyAdvanceSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraSimCacheCaptureParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_AdvanceDeltaTime_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/*\n\x09 The delta time in seconds to use when manually advancing the simulation. Defaults to 1/60th of a second (0.01666).\n\x09 */" },
		{ "EditCondition", "bManuallyAdvanceSimulation" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "The delta time in seconds to use when manually advancing the simulation. Defaults to 1/60th of a second (0.01666)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_AdvanceDeltaTime = { "AdvanceDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, AdvanceDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_AdvanceDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_AdvanceDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bManuallyAdvanceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_AdvanceDeltaTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheCaptureParameters",
		sizeof(FNiagaraSimCacheCaptureParameters),
		alignof(FNiagaraSimCacheCaptureParameters),
		Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraSimCacheCaptureParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewStructOps, TEXT("NiagaraSimCacheCaptureParameters"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheCaptureParameters), 4157667469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_1352435390(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
