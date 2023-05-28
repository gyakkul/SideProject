// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraAsyncCompile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraAsyncCompile() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompilationState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair;
class UScriptStruct* FEmitterCompiledScriptPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EmitterCompiledScriptPair"));
	}
	return Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FEmitterCompiledScriptPair>()
{
	return FEmitterCompiledScriptPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NiagaraAsyncCompile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterCompiledScriptPair>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"EmitterCompiledScriptPair",
		sizeof(FEmitterCompiledScriptPair),
		alignof(FEmitterCompiledScriptPair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmitterCompiledScriptPair()
	{
		if (!Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.InnerSingleton, Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCompilationState;
	static UEnum* ENiagaraCompilationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCompilationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraCompilationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompilationState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCompilationState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraCompilationState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCompilationState>()
	{
		return ENiagaraCompilationState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enumerators[] = {
		{ "ENiagaraCompilationState::CheckDDC", (int64)ENiagaraCompilationState::CheckDDC },
		{ "ENiagaraCompilationState::Precompile", (int64)ENiagaraCompilationState::Precompile },
		{ "ENiagaraCompilationState::StartCompileJob", (int64)ENiagaraCompilationState::StartCompileJob },
		{ "ENiagaraCompilationState::AwaitResult", (int64)ENiagaraCompilationState::AwaitResult },
		{ "ENiagaraCompilationState::OptimizeByteCode", (int64)ENiagaraCompilationState::OptimizeByteCode },
		{ "ENiagaraCompilationState::ProcessResult", (int64)ENiagaraCompilationState::ProcessResult },
		{ "ENiagaraCompilationState::PutToDDC", (int64)ENiagaraCompilationState::PutToDDC },
		{ "ENiagaraCompilationState::Finished", (int64)ENiagaraCompilationState::Finished },
		{ "ENiagaraCompilationState::Aborted", (int64)ENiagaraCompilationState::Aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Name", "ENiagaraCompilationState::Aborted" },
		{ "AwaitResult.Name", "ENiagaraCompilationState::AwaitResult" },
		{ "CheckDDC.Name", "ENiagaraCompilationState::CheckDDC" },
		{ "Finished.Name", "ENiagaraCompilationState::Finished" },
		{ "ModuleRelativePath", "Private/NiagaraAsyncCompile.h" },
		{ "OptimizeByteCode.Name", "ENiagaraCompilationState::OptimizeByteCode" },
		{ "Precompile.Name", "ENiagaraCompilationState::Precompile" },
		{ "ProcessResult.Name", "ENiagaraCompilationState::ProcessResult" },
		{ "PutToDDC.Name", "ENiagaraCompilationState::PutToDDC" },
		{ "StartCompileJob.Name", "ENiagaraCompilationState::StartCompileJob" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraCompilationState",
		"ENiagaraCompilationState",
		Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompilationState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCompilationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCompilationState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCompilationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraCompilationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::EnumInfo[] = {
		{ ENiagaraCompilationState_StaticEnum, TEXT("ENiagaraCompilationState"), &Z_Registration_Info_UEnum_ENiagaraCompilationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656743807U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::ScriptStructInfo[] = {
		{ FEmitterCompiledScriptPair::StaticStruct, Z_Construct_UScriptStruct_FEmitterCompiledScriptPair_Statics::NewStructOps, TEXT("EmitterCompiledScriptPair"), &Z_Registration_Info_UScriptStruct_EmitterCompiledScriptPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEmitterCompiledScriptPair), 2694361461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_2782161394(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraAsyncCompile_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
